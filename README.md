# R2I
This repository contains the artifact for the R2I metric introduced in the paper “R2I: A Relative Readability Metric for Decompiled Code.”

## Structure
1. dataset/test : Test dataset for each decompiler
    * $DECOMPILER/c : Original decompiled code
    * $DECOMPILER/json : JSON file containing information about functions in decompiled code, including their starting and ending addresses
    * $DECOMPILER/syntax_correction : Syntax corrected decompiled code for AST generation
2. eval/test : R2I metric results for dataset
3. pycparser : Open-source parser for AST generation
    * utils/fake_libc_include : Including a fake header defined for error correction (decompile_*.h)
4. src : Source files of R2I metric

## Getting Started
### Prerequisites
* Python version 3.8.10
* Pandas version 2.1.0

### Executing R2I Metric
R2I can be executed by running `run.sh` file.
```
$ git clone $R2I_REPO
$ cd $R2I_REPO
$ ./run.sh
```
Run the run.sh script to generate R2I results for dataset. By running `./run.sh` commands, AST is generated from syntax corrected decompiled code for each decompiler.  
R2I counts 31 features in AST and generates a relative readability score for the six decompilers.  
The weight is defined in `src/weight.csv`.

The generated R2I results are placed in the eval/test folder.

### Result
`mean.csv` is the average of R2I scores for all functions of the binary, and `r2i.csv` shows the R2I score and number of features for each function.
```
 decompiler   address  ams  assignment  bitwise               token        R2I
                  ...                                 ...
       angr  0x402f30    0           5        2       ...        70     0.4744
         bn  0x402f30    0           8        1       ...        69     0.6433
     ghidra  0x402f30    0           5        3       ...        75     0.5263 
        ida  0x402f30    0           4        1       ...        62     0.8693
    radare2  0x402f30    0          11        1       ...        84     0.4980
     retdec  0x402f30    0           9        6       ...        98     0.4551
                  ...                                 ...
```
### Adjusting Feature Weight

To adjust the weight, edit `src/weight.csv` to the desired weight and run run.sh script.