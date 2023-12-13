#!/bin/bash

experiment="test"
decompilers=(angr bn ghidra ida radare2 retdec)
weight_version="paper"
if [ $# -ge 1 ]; then
    decompilers=($@)
fi
BASE=$(cd $(dirname $0) && pwd)

for d in ${decompilers[*]}; do
    cd "$BASE/dataset/$experiment/$d" && mkdir -p pp
    python3 serializer.py
    mkdir -p "$BASE/extract/$experiment/$d"
    logger="$BASE/extract/$experiment/$d.log" && rm -f $logger
    
    COUNT="$(find ./c -maxdepth 1 -type f -printf x | wc -c)"; i=0
    for file in "c"/*; do
        if [[ ! $file =~ ".c" ]]; then
            continue
        fi

        ((i=i+1))
        echo -e "\n==$d== $i/$COUNT... Detected $file"
        if [ "$file" ]; then
            file=${file:2} # slice leading "c/"

            python3 $BASE/src/extractor.py -s -p "$experiment/$d" $file 2>&1 | tee -a $logger
            wait && echo "[+] Feature scores extracted in csv"
        fi
    done

    if [ -s $logger ]; then
        echo -e "\n[-] Error occured while processing $d; check log file"
    else
        echo -e "\n[+] No error occurred while processing $d"
    fi
    rm -f yacctab.py lextab.py
done

mkdir -p "$BASE/eval/$experiment"
cd "$BASE/extract"
if [ $# -eq 0 ]; then
    python3 $BASE/src/aggregator.py $experiment -s -t ${decompilers[*]}
    cd "../eval/$experiment" && mkdir -p "bin"
    
    python3 $BASE/src/evaluator.py -t ${decompilers[*]} -w $weight_version
    python3 $BASE/src/ranker.py -t ${decompilers[*]}
    python3 $BASE/src/mean.py $experiment -t ${decompilers[*]}
fi