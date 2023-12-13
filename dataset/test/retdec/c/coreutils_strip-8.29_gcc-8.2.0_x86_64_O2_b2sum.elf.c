// Address range: 0x401b00 - 0x401b05
int64_t function_401b00(void) {
    // 0x401b00
    abort();
    // UNREACHABLE
}
// Address range: 0x401b05 - 0x401b0a
int64_t function_401b05(void) {
    // 0x401b05
    abort();
    // UNREACHABLE
}
// Address range: 0x401b0a - 0x401b0f
int64_t function_401b0a(void) {
    // 0x401b0a
    abort();
    // UNREACHABLE
}
// Address range: 0x401b0f - 0x401b14
int64_t function_401b0f(void) {
    // 0x401b0f
    abort();
    // UNREACHABLE
}
// Address range: 0x401b14 - 0x401b19
int64_t function_401b14(void) {
    // 0x401b14
    abort();
    // UNREACHABLE
}
// Address range: 0x401b19 - 0x401b1e
int64_t function_401b19(void) {
    // 0x401b19
    abort();
    // UNREACHABLE
}
// Address range: 0x401b20 - 0x402e50
int64_t function_401b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401b20
    int64_t v1; // bp-344, 0x401b20
    int64_t v2 = &v1; // 0x401b3e
    function_4057f0(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_409d30(0x405670, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    setvbuf(g30, (char *)((int32_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale" ^ (int32_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"), 1, 0);
    char v3 = 0; // 0x401b99
    int64_t v4 = 0xffffffff; // 0x401b99
    int64_t v5 = (int64_t)&g11; // 0x401b99
    int64_t v6 = 0; // 0x401b99
    int64_t v7; // 0x401b20
    int64_t v8; // 0x401b20
    int64_t v9; // 0x401b20
    int64_t v10; // 0x401b20
    int64_t v11; // 0x401b20
    int64_t v12; // 0x401b20
    int64_t v13; // 0x401b20
    while (true) {
      lab_0x401ba0_2:
        // 0x401ba0
        v8 = v6;
        v7 = v5;
        v11 = v10;
        v13 = v4;
        int64_t v14 = function_409590(a1 & 0xffffffff, a2, "l:bctw", &g2, 0, v11); // 0x401bb3
        int32_t v15 = v14; // 0x401bb8
        v4 = 0;
        v9 = v11;
        v5 = v7;
        v6 = v8;
        switch (v15) {
            case -1: {
                goto lab_0x401daa;
            }
            case 116: {
                goto lab_0x401ba0;
            }
            default: {
                if (v15 > 116) {
                    if (v15 == 129) {
                        // 0x401d90
                        g42 = 1;
                        g41 = 0;
                        g39 = 0;
                        v4 = v13;
                        v9 = v11;
                        v5 = v7;
                        v6 = v8;
                    } else {
                        if (v15 > 129) {
                            if (v15 == 131) {
                                // 0x401d70
                                *(char *)&g38 = 1;
                                v4 = v13;
                                v9 = v11;
                                v5 = v7;
                                v6 = v8;
                            } else {
                                if (v15 < 131) {
                                    // 0x401bea
                                    g42 = 0;
                                    g41 = 0;
                                    g39 = 1;
                                    v4 = v13;
                                    v9 = v11;
                                    v5 = v7;
                                    v6 = v8;
                                } else {
                                    // 0x401c20
                                    v4 = 1;
                                    v9 = v11;
                                    v5 = v7;
                                    v6 = v8;
                                    if (v15 != 132) {
                                      lab_0x401e6f:
                                        // 0x401e6f
                                        function_403280(1);
                                        // UNREACHABLE
                                    }
                                }
                            }
                        } else {
                            if (v15 != 119) {
                                if (v15 != 128) {
                                    // 0x401e6f
                                    function_403280(1);
                                    // UNREACHABLE
                                }
                                // 0x401d63
                                *(char *)&g40 = 1;
                                v4 = v13;
                                v9 = v11;
                                v5 = v7;
                                v6 = v8;
                            } else {
                                // 0x401d25
                                g42 = 0;
                                g41 = 1;
                                g39 = 0;
                                v4 = v13;
                                v9 = v11;
                                v5 = v7;
                                v6 = v8;
                            }
                        }
                    }
                } else {
                    // 0x401c08
                    v4 = 1;
                    v9 = v11;
                    v5 = v7;
                    v6 = v8;
                    if (v15 != 98) {
                        // 0x401c0d
                        v12 = v14;
                        if (v15 <= 98) {
                            goto lab_0x401ce0;
                        }
                        // 0x401c13
                        v4 = v13;
                        v9 = v11;
                        v5 = v7;
                        v6 = 1;
                        if (v15 != 99) {
                            if (v15 != 108) {
                                // 0x401e6f
                                function_403280(1);
                                // UNREACHABLE
                            }
                            char * v16 = dcgettext(NULL, "invalid length", 5); // 0x401c55
                            uint64_t v17 = function_407d40((int64_t)g59, (int32_t)"invalid length" ^ (int32_t)"invalid length", -1, (int64_t *)&g11, (int64_t)v16, 0); // 0x401c75
                            int64_t v18 = g59; // 0x401c7a
                            g36 = v17;
                            v4 = v13;
                            v9 = 0;
                            v5 = v18;
                            v6 = v8;
                            if (v17 % 8 != 0) {
                                // 0x401c90
                                function_407410(v18);
                                error(0, (int32_t)"invalid length: %s" ^ (int32_t)"invalid length: %s", dcgettext(NULL, "invalid length: %s", 5));
                                error(1, (int32_t)"length is not a multiple of 8" ^ (int32_t)"length is not a multiple of 8", dcgettext(NULL, "length is not a multiple of 8", 5));
                                v12 = &g65;
                                goto lab_0x401ce0;
                            }
                        }
                    }
                }
                goto lab_0x401ba0;
            }
        }
    }
  lab_0x401daa:;
    int32_t v19 = g36; // 0x401daa
    g44 = 3;
    if (v19 >= 513) {
        // 0x402dd6
        function_407410(v7);
        error(0, (int32_t)"invalid length: %s" ^ (int32_t)"invalid length: %s", dcgettext(NULL, "invalid length: %s", 5));
        int64_t v20 = *(int64_t *)(8 * (int64_t)g37 + (int64_t)&g4); // 0x402e09
        function_407410(v20);
        error(1, (int32_t)"maximum digest length for %s is %lu bits" ^ (int32_t)"maximum digest length for %s is %lu bits", dcgettext(NULL, "maximum digest length for %s is %lu bits", 5));
        return &g65;
    }
    char v21 = v3 & (char)(v13 == 0); // 0x401dcd
    int64_t v22; // 0x401b20
    int64_t v23; // 0x401b20
    if (v8 == 0 == v19 == 0) {
        // 0x401e79
        g36 = 512;
        g43 = 128;
        if (v21 != 0) {
            // 0x401e5a
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"--tag does not support --text mode", 5));
            // 0x401e6f
            function_403280(1);
            // UNREACHABLE
        }
        // 0x401e97
        if (*(char *)&g40 != 0) {
            // 0x401e5a
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --ignore-missing option is meaningful only when verifying checksums", 5));
            // 0x401e6f
            function_403280(1);
            // UNREACHABLE
        }
        // 0x401ea4
        v23 = a2;
        if (g42 != 0) {
            // 0x401e5a
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --status option is meaningful only when verifying checksums", 5));
            // 0x401e6f
            function_403280(1);
            // UNREACHABLE
        }
        goto lab_0x401eb1;
    } else {
        // 0x401ddf
        g43 = (int64_t)v19 / 4;
        if (v21 != 0) {
            // 0x401e5a
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"--tag does not support --text mode", 5));
            // 0x401e6f
            function_403280(1);
            // UNREACHABLE
        }
        int64_t v24 = a2; // 0x401df5
        if (v8 != 0) {
            // 0x401df7
            v24 = (int64_t)"the --tag option is meaningless when verifying checksums";
            if (v3 != 0) {
                // 0x401e5a
                error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --tag option is meaningless when verifying checksums", 5));
                // 0x401e6f
                function_403280(1);
                // UNREACHABLE
            }
        }
        // 0x401e08
        v22 = v24;
        if ((int32_t)v13 >= 0) {
            // 0x401e0c
            v22 = (int64_t)"the --binary and --text options are meaningless when verifying checksums";
            if (v8 != 0) {
                // 0x401e5a
                error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --binary and --text options are meaningless when verifying checksums", 5));
                // 0x401e6f
                function_403280(1);
                // UNREACHABLE
            }
        }
        // 0x401e1b
        if (*(char *)&g40 == 0) {
            // 0x402a8b
            v23 = v22;
            if (g42 == 0) {
                goto lab_0x401eb1;
            } else {
                // 0x402a98
                if (v8 == 0) {
                    // 0x401e5a
                    error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --status option is meaningful only when verifying checksums", 5));
                    // 0x401e6f
                    function_403280(1);
                    // UNREACHABLE
                }
                goto lab_0x401e31;
            }
        } else {
            // 0x401e28
            if (v8 == 0) {
                // 0x401e5a
                error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --ignore-missing option is meaningful only when verifying checksums", 5));
                // 0x401e6f
                function_403280(1);
                // UNREACHABLE
            }
            goto lab_0x401e31;
        }
    }
  lab_0x401ce0:;
    int32_t v25 = v12; // 0x401ce0
    if (v25 == -131) {
        // 0x401ce7
        function_4078a0((int64_t)g30, "b2sum", "GNU coreutils", (int64_t)g19, "Padraig Brady", "Samuel Neves");
        exit(0);
        // UNREACHABLE
    }
    if (v25 == -130) {
        // 0x401d4a
        function_403280(0);
        // UNREACHABLE
    }
    goto lab_0x401e6f;
  lab_0x4028ca:;
    // 0x4028ca
    int64_t v26; // 0x401b20
    int64_t v27 = v26;
    int64_t v28; // 0x401b20
    int64_t v29 = v28;
    char v30 = g42; // 0x4028d7
    int32_t v31; // 0x401b20
    int32_t v32 = v31; // 0x4028d7
    int32_t v33; // 0x401b20
    int32_t v34 = v33; // 0x4028d7
    char v35; // 0x4024bb
    char v36 = v35; // 0x4028d7
    int64_t v37 = v29; // 0x4028d7
    int64_t v38 = v27; // 0x4028d7
    int64_t v39; // 0x4024c0
    int64_t v40 = v39; // 0x4028d7
    int64_t v41; // 0x401b20
    int64_t v42; // 0x401b20
    int64_t v43; // 0x401b20
    int64_t v44; // 0x401b20
    int64_t v45; // 0x401b20
    int64_t str; // 0x401b20
    int64_t v46; // 0x401b20
    char v47; // 0x401b20
    char v48; // 0x401b20
    int32_t v49; // 0x401b20
    int32_t v50; // 0x401b20
    char v51; // 0x401b20
    if (g42 != 0) {
        goto lab_0x40239b;
    } else {
        // 0x4028dd
        v30 = g39;
        v32 = v31;
        v34 = v33;
        v36 = v35;
        v37 = v29;
        v38 = v27;
        v40 = v39;
        if (g39 != 0) {
            goto lab_0x40239b;
        } else {
            char v52 = v46;
            v48 = v52;
            v50 = v31;
            v43 = v27;
            v42 = v39;
            if (v45 == 0) {
                // 0x402a1d
                function_403020(str, 0);
                v47 = v52;
                v49 = v31;
                v51 = v52;
                v44 = v27;
                v41 = v39;
                goto lab_0x402a34;
            } else {
                goto lab_0x40254d;
            }
        }
    }
  lab_0x402983:;
    // 0x402983
    int64_t v53; // 0x401b20
    int64_t v54 = v53;
    int64_t v55; // 0x401b20
    int64_t v56 = v55;
    int64_t v57; // 0x401b20
    int64_t v58 = v57; // 0x402988
    int64_t v59; // 0x401b20
    int64_t v60; // 0x401b20
    int64_t v61; // 0x401b20
    int64_t v62; // 0x401b20
    int64_t v63; // 0x401b20
    int64_t v64; // 0x401b20
    int64_t v65; // 0x401b20
    int64_t v66; // 0x401b20
    int64_t v67; // 0x401b20
    int64_t v68; // 0x401b20
    int64_t v69; // 0x401b20
    char v70; // 0x401b20
    char v71; // 0x401b20
    char v72; // 0x401b20
    char v73; // 0x401b20
    char v74; // 0x401b20
    int32_t v75; // 0x401b20
    int32_t v76; // 0x401b20
    int32_t v77; // 0x401b20
    int32_t v78; // 0x401b20
    int32_t v79; // 0x401b20
    int32_t v80; // 0x401b20
    char v81; // 0x401b20
    int64_t v82; // 0x40270d
    if (v70 != 0) {
        int64_t v83 = function_402f90(v82, v54, (char)v68); // 0x402cf2
        v72 = v71;
        v74 = v73;
        v76 = v75;
        v78 = v77;
        v80 = v79;
        v81 = v70;
        v69 = v54;
        v65 = v64;
        v67 = v66;
        v59 = v56;
        v61 = v60;
        v63 = v62;
        v58 = v54;
        if (v83 != 0) {
            goto lab_0x40298e;
        } else {
            goto lab_0x402133;
        }
    } else {
        goto lab_0x40298e;
    }
  lab_0x4020c6:;
    // 0x4020c6
    char * v84; // 0x401b20
    *v84 = 0;
    int64_t v85; // 0x402046
    int64_t v86 = function_4052d0(v85, &g3, 0, 0); // 0x4020db
    v72 = v71;
    v74 = v73;
    v76 = v75;
    v78 = v77;
    v80 = v79;
    v81 = v70;
    v69 = (int64_t)&g3;
    v65 = v85;
    v67 = v66;
    int64_t v87; // 0x401b20
    v59 = v87;
    v61 = v60;
    v63 = v62;
    int64_t v88; // 0x401b20
    int64_t v89; // 0x401b20
    int64_t v90; // 0x401b20
    int64_t v91; // 0x401b20
    if (v86 < 0) {
        goto lab_0x402133;
    } else {
        // 0x4020ea
        g37 = v86;
        v89 = v88;
        v91 = v90;
        goto lab_0x4020f4;
    }
  lab_0x402599:;
    // 0x402599
    char * v92; // 0x401b20
    char * v93 = v92;
    *v93 = 0;
    int64_t v94 = function_4052d0(v85, &g3, 0, 0); // 0x4025b3
    v72 = v71;
    v74 = v73;
    v76 = v75;
    v78 = v77;
    v80 = v79;
    v81 = v70;
    v69 = (int64_t)&g3;
    v65 = v85;
    v67 = v66;
    v59 = v87;
    v61 = v60;
    v63 = v62;
    char * v95; // 0x401b20
    int64_t v96; // 0x401b20
    int64_t v97; // 0x401b20
    int64_t v98; // 0x401b20
    int64_t v99; // 0x401b20
    int64_t v100; // 0x401b20
    if (v94 < 0) {
        goto lab_0x402133;
    } else {
        // 0x4025c1
        g37 = v94;
        v89 = v98;
        v91 = v99;
        v95 = v93;
        v100 = v99;
        v97 = v96;
        if (v98 == 40) {
            goto lab_0x402618;
        } else {
            goto lab_0x4020f4;
        }
    }
  lab_0x402146:;
    // 0x402146
    char v101; // 0x401b20
    char v102 = v101; // 0x40214b
    char v103; // 0x401b20
    char v104 = v103; // 0x40214b
    int32_t v105; // 0x401b20
    int32_t v106 = v105; // 0x40214b
    int32_t v107; // 0x401b20
    int32_t v108 = v107; // 0x40214b
    int32_t v109; // 0x401b20
    int32_t v110 = v109; // 0x40214b
    char v111; // 0x401b20
    char v112 = v111; // 0x40214b
    int64_t v113; // 0x401b20
    int64_t v114 = v113; // 0x40214b
    int64_t v115; // 0x401b20
    int64_t v116 = v115; // 0x40214b
    int64_t v117; // 0x401b20
    int64_t v118 = v117; // 0x40214b
    int64_t v119; // 0x401b20
    int64_t v120 = v119; // 0x40214b
    int64_t v121; // 0x401b20
    int64_t v122 = v121; // 0x40214b
    char v123 = v101; // 0x40214b
    char v124 = v103; // 0x40214b
    int32_t v125 = v105; // 0x40214b
    int32_t v126 = v107; // 0x40214b
    int32_t v127 = v109; // 0x40214b
    char v128 = v111; // 0x40214b
    int64_t v129; // 0x401b20
    int64_t v130 = v129; // 0x40214b
    int64_t v131 = v113; // 0x40214b
    int64_t v132 = v115; // 0x40214b
    int64_t v133 = v117; // 0x40214b
    char * v134; // 0x401b20
    if ((*v134 & 48) != 0) {
        // break -> 0x4023ab
        goto lab_0x4023ab_3;
    }
    goto lab_0x402151;
  lab_0x402151:;
    int64_t v135 = v118;
    int64_t v136 = v116;
    int64_t v137 = v114;
    char v138 = v112;
    int32_t v139 = v110;
    int32_t v140 = v108;
    int32_t v141 = v106;
    char v142 = v104;
    char v143 = v102;
    int64_t v144 = v120 + 1; // 0x402151
    int32_t v145; // 0x401b20
    int64_t v146; // 0x401b20
    int64_t v147; // 0x401b20
    int64_t v148; // 0x401b20
    int64_t v149; // 0x401b20
    int64_t v150; // 0x401b20
    int64_t v151; // 0x401b20
    int64_t v152; // 0x401b20
    int64_t v153; // 0x401b20
    int64_t v154; // 0x401b20
    int64_t v155; // 0x401b20
    int64_t v156; // 0x401b20
    int64_t v157; // bp-232, 0x401b20
    int64_t v158; // bp-240, 0x401b20
    char v159; // 0x401b20
    char v160; // 0x401b20
    char v161; // 0x401b20
    char v162; // 0x401b20
    int32_t v163; // 0x401b20
    int32_t v164; // 0x401b20
    int32_t v165; // 0x401b20
    int32_t v166; // 0x401b20
    int32_t v167; // 0x401b20
    int32_t v168; // 0x401b20
    char v169; // 0x401b20
    char v170; // 0x401b20
    int64_t v171; // 0x401fc8
    int64_t v172; // 0x401b20
    if (v144 != 0) {
        // 0x401fc0
        struct _IO_FILE * v173; // 0x401fd2
        int32_t v174 = __getdelim((char **)&v158, (int32_t *)&v157, 10, v173); // 0x401fd2
        v145 = v174;
        v148 = v144;
        v146 = v135;
        v153 = v136;
        v151 = v137;
        v169 = v138;
        v167 = v139;
        v165 = v140;
        v163 = v141;
        v161 = v142;
        v159 = v143;
        v123 = v143;
        v124 = v142;
        v125 = v141;
        v126 = v140;
        v127 = v139;
        v128 = v138;
        v130 = v171;
        v131 = v137;
        v132 = v136;
        v133 = v135;
        if (v174 < 1) {
            // break -> 0x4023ab
            goto lab_0x4023ab_3;
        }
        goto lab_0x401fe0;
    } else {
        int64_t v175 = function_407290(0, 3, v172); // 0x402167
        error(1, (int32_t)"%s: too many checksum lines" ^ (int32_t)"%s: too many checksum lines", dcgettext(NULL, "%s: too many checksum lines", 5));
        v160 = v143;
        v162 = v142;
        v164 = v141;
        v166 = v140;
        v168 = v139;
        v170 = v138;
        v155 = v175;
        v156 = (int32_t)"%s: too many checksum lines" ^ (int32_t)"%s: too many checksum lines";
        v152 = v137;
        v154 = v136;
        v147 = v135;
        v149 = v144;
        v150 = v122;
        goto lab_0x402198;
    }
  lab_0x402198:;
    int64_t v176 = v150;
    int64_t v177 = v149;
    int64_t v178 = v147;
    int64_t v179 = v154;
    int64_t v180 = v152;
    int64_t v181 = v155;
    char v182 = v170;
    int32_t v183 = v168;
    int32_t v184 = v166;
    int32_t v185 = v164;
    char v186 = v162;
    char v187 = v160;
    char v188 = *(char *)v180; // 0x4021a3
    v72 = v187;
    v74 = v186;
    v76 = v185;
    v78 = v184;
    v80 = v183;
    v81 = v182;
    v69 = v156;
    v65 = v180;
    v67 = v179;
    v59 = v178;
    v61 = v177;
    v63 = v176;
    char v189; // 0x401b20
    int64_t v190; // 0x401b20
    int64_t v191; // 0x40226d
    int32_t v192; // 0x402271
    int64_t v193; // 0x401b20
    char v194; // 0x402288
    if (v178 - v181 < g44 + (int64_t)(v188 == 92)) {
        goto lab_0x402133;
    } else {
        // 0x4021c2
        g43 = 0;
        int16_t * v195 = *__ctype_b_loc(); // 0x4021de
        int64_t v196 = 0; // 0x4021e3
        int64_t v197 = 0; // 0x4021e3
        v190 = v197;
        int64_t v198 = v196;
        unsigned char v199 = *(char *)(v198 + v180); // 0x4021ee
        char v200 = *(char *)((int64_t)v195 + 1 + 2 * (int64_t)v199); // 0x4021f7
        v196 = v198 + 1;
        v197 = v8;
        while ((v200 & 16) != 0) {
            // 0x4021ee
            v190 = v197;
            v198 = v196;
            v199 = *(char *)(v198 + v180);
            v200 = *(char *)((int64_t)v195 + 1 + 2 * (int64_t)v199);
            v196 = v198 + 1;
            v197 = v8;
        }
        // 0x4021fe
        v72 = v187;
        v74 = v186;
        v76 = v185;
        v78 = v184;
        v80 = v183;
        v81 = v182;
        v69 = v190;
        v65 = v180;
        v67 = v179;
        v59 = v178;
        v61 = v177;
        v63 = v176;
        if ((char)v190 == 0) {
            goto lab_0x402133;
        } else {
            // 0x402207
            g43 = v198;
            v72 = v187;
            v74 = v186;
            v76 = v185;
            v78 = v184;
            v80 = v183;
            v81 = v182;
            v69 = v190;
            v65 = v180;
            v67 = v179;
            v59 = v178;
            v61 = v177;
            v63 = v176;
            if (v198 < 129) {
                // 0x40221c
                v72 = v187;
                v74 = v186;
                v76 = v185;
                v78 = v184;
                v80 = v183;
                v81 = v182;
                v69 = v190;
                v65 = v180;
                v67 = v179;
                v59 = v178;
                v61 = v177;
                v63 = v176;
                if (v198 % 2 != 0) {
                    goto lab_0x402133;
                } else {
                    int64_t v201 = v198 + v181; // 0x402224
                    int64_t v202 = v201 + v176;
                    g36 = 4 * (int32_t)v198;
                    char * v203 = (char *)v202; // 0x40223a
                    char v204 = *v203; // 0x40223a
                    v72 = v187;
                    v74 = v186;
                    v76 = v185;
                    v78 = v184;
                    v80 = v183;
                    v81 = v182;
                    v69 = v190;
                    v65 = v180;
                    v67 = v179;
                    v59 = v178;
                    v61 = v177;
                    v63 = v176;
                    if (v204 != 32 == (v204 != 9)) {
                        goto lab_0x402133;
                    } else {
                        // 0x40224b
                        *v203 = 0;
                        int64_t v205 = function_402f30(v180); // 0x40225b
                        v72 = v187;
                        v74 = v186;
                        v76 = v185;
                        v78 = v184;
                        v80 = v183;
                        v81 = v182;
                        v69 = v190;
                        v65 = v180;
                        v67 = v179;
                        v59 = v178;
                        v61 = v177;
                        v63 = v176;
                        if ((char)v205 == 0) {
                            goto lab_0x402133;
                        } else {
                            // 0x402268
                            v191 = v201 + 1;
                            v192 = g18;
                            v193 = v201 + 2;
                            v189 = 0;
                            if (v178 == v193) {
                                goto lab_0x4022a0;
                            } else {
                                // 0x402288
                                v194 = *(char *)(v202 + 1);
                                v189 = v194;
                                switch (v194) {
                                    case 32: {
                                        goto lab_0x402a01;
                                    }
                                    case 42: {
                                        goto lab_0x402a01;
                                    }
                                    default: {
                                        goto lab_0x4022a0;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x402133;
            }
        }
    }
  lab_0x402133:;
    int64_t v206 = v63;
    int64_t v207 = v61;
    int64_t v208 = v59;
    char v209 = v81;
    int32_t v210 = v78;
    int32_t v211 = v76;
    char v212 = v74;
    char v213 = v72;
    int32_t v214 = v80 + 1; // 0x402133
    v101 = v213;
    v103 = v212;
    v105 = v211;
    v107 = v210;
    v109 = v214;
    v111 = v209;
    v129 = v69;
    v113 = v65;
    v115 = v67;
    v117 = v208;
    v119 = v207;
    v121 = v206;
    if (g41 != 0) {
        // 0x402458
        function_407290(0, 3, v172);
        error(0, (int32_t)"%s: %lu: improperly formatted %s checksum line" ^ (int32_t)"%s: %lu: improperly formatted %s checksum line", dcgettext(NULL, "%s: %lu: improperly formatted %s checksum line", 5));
        v101 = v213;
        v103 = v212;
        v105 = v211;
        v107 = v210;
        v109 = v214;
        v111 = v209;
        v129 = (int32_t)"%s: %lu: improperly formatted %s checksum line" ^ (int32_t)"%s: %lu: improperly formatted %s checksum line";
        v113 = v207;
        v115 = (int64_t)"BLAKE2";
        v117 = v208;
        v119 = v207;
        v121 = v206;
    }
    goto lab_0x402146;
  lab_0x4020f4:;
    int64_t v215 = v91 + 1;
    int64_t v216 = v215 + v62;
    int64_t v217 = v215; // 0x4020fc
    int64_t v218 = v216; // 0x4020fc
    int64_t v219; // 0x401b20
    int64_t v220; // 0x401b20
    int64_t v221; // 0x401b20
    int64_t v222; // 0x401b20
    int64_t v223; // 0x401b20
    char v224; // bp-224, 0x401b20
    int64_t v225; // 0x401b20
    if ((char)v89 == 45) {
        int64_t v226 = function_407d70(v216, 0, 0, (int64_t *)&v224, 0, v66); // 0x4026a1
        v72 = v71;
        v74 = v73;
        v76 = v75;
        v78 = v77;
        v80 = v79;
        v81 = v70;
        v69 = 0;
        v65 = 0;
        v67 = v66;
        v59 = v87;
        v61 = v60;
        v63 = v62;
        if ((int32_t)v226 != 0) {
            goto lab_0x402133;
        } else {
            uint64_t v227 = (int64_t)v224; // 0x4026ae
            v72 = v71;
            v74 = v73;
            v76 = v75;
            v78 = v77;
            v80 = v79;
            v81 = v70;
            v69 = 0;
            v65 = 0;
            v67 = v66;
            v59 = v87;
            v61 = v60;
            v63 = v62;
            if (v227 < 512) {
                // 0x4026c4
                v72 = v71;
                v74 = v73;
                v76 = v75;
                v78 = v77;
                v80 = v79;
                v81 = v70;
                v69 = 0;
                v65 = 0;
                v67 = v66;
                v59 = v87;
                v61 = v60;
                v63 = v62;
                if (v227 % 8 != 0) {
                    goto lab_0x402133;
                } else {
                    // 0x4026cc
                    g36 = v224;
                    int64_t v228 = (int64_t)*(char *)v216 + 0xffffffd0; // 0x4026ec
                    int64_t v229 = v215; // 0x4026f2
                    int64_t v230 = v215; // 0x4026f2
                    int64_t v231 = v216; // 0x4026f2
                    int64_t v232 = v228; // 0x4026f2
                    if ((int32_t)v228 < 10) {
                        int64_t v233 = v229 + 1; // 0x4026df
                        int64_t v234 = v233 + v62;
                        int64_t v235 = (int64_t)*(char *)v234 + 0xffffffd0; // 0x4026ec
                        v229 = v233;
                        v230 = v233;
                        v231 = v234;
                        v232 = v235;
                        while ((int32_t)v235 < 10) {
                            // 0x4026df
                            v233 = v229 + 1;
                            v234 = v233 + v62;
                            v235 = (int64_t)*(char *)v234 + 0xffffffd0;
                            v229 = v233;
                            v230 = v233;
                            v231 = v234;
                            v232 = v235;
                        }
                    }
                    // 0x4026f4
                    v222 = v232 & 0xffffffff;
                    v221 = v230;
                    v223 = 0;
                    v220 = 0;
                    v219 = v231;
                    v225 = v227 / 4;
                    goto lab_0x402112;
                }
            } else {
                goto lab_0x402133;
            }
        }
    } else {
        goto lab_0x402102;
    }
  lab_0x402618:
    // 0x402618
    *v95 = 40;
    v217 = v100;
    v218 = v97;
    goto lab_0x402102;
  lab_0x402102:
    // 0x402102
    g36 = 512;
    v222 = 0;
    v221 = v217;
    v223 = (int64_t)&g3;
    v220 = v85;
    v219 = v218;
    v225 = 128;
    goto lab_0x402112;
  lab_0x402112:
    // 0x402112
    v64 = v220;
    v57 = v223;
    int64_t v236 = v221;
    v68 = v222;
    g43 = v225;
    char v237 = *(char *)v219; // 0x402119
    char v238 = v237; // 0x40211f
    int64_t v239 = v236; // 0x40211f
    if (v237 == 32) {
        int64_t v240 = v236 + 1;
        v238 = *(char *)(v240 + v62);
        v239 = v240;
    }
    // 0x40212b
    v72 = v71;
    v74 = v73;
    v76 = v75;
    v78 = v77;
    v80 = v79;
    v81 = v70;
    v69 = v57;
    v65 = v64;
    v67 = v66;
    v59 = v87;
    v61 = v60;
    v63 = v62;
    int64_t v241; // 0x402701
    if (v238 == 40) {
        int64_t v242 = v239;
        int64_t v243 = v242 + 1; // 0x4026fd
        v241 = v87 - v243;
        v72 = v71;
        v74 = v73;
        v76 = v75;
        v78 = v77;
        v80 = v79;
        v81 = v70;
        v69 = v57;
        v65 = v64;
        v67 = v66;
        v59 = 0;
        v61 = v60;
        v63 = v62;
        if (v241 == 0) {
            goto lab_0x402133;
        } else {
            // 0x40270a
            v82 = v243 + v62;
            int64_t v244 = v241 - 1; // 0x402710
            if (v244 == 0) {
                goto lab_0x402739;
            } else {
                int64_t v245 = v244; // 0x40271c
                if (*(char *)(v242 + v62 + v241) != 41) {
                    int64_t v246 = v245 - 1; // 0x402733
                    while (v246 != 0) {
                        int64_t v247 = v246 + v82;
                        v245 = v246;
                        v55 = v247;
                        v53 = v246;
                        if (*(char *)v247 == 41) {
                            goto lab_0x402983;
                        }
                        v246 = v245 - 1;
                    }
                    goto lab_0x402739;
                } else {
                    // 0x402716
                    v55 = v244 + v82;
                    v53 = v244;
                    goto lab_0x402983;
                }
            }
        }
    } else {
        goto lab_0x402133;
    }
  lab_0x4022a0:
    // 0x4022a0
    v72 = v187;
    v74 = v186;
    v76 = v185;
    v78 = v184;
    v80 = v183;
    v81 = v182;
    v69 = v190;
    v65 = v180;
    v67 = v179;
    v59 = v178;
    v61 = v177;
    v63 = v176;
    int64_t v248; // 0x401b20
    char v249; // 0x401b20
    if (v192 == 0) {
        goto lab_0x402133;
    } else {
        // 0x4022a8
        g18 = 1;
        v248 = v191;
        v249 = v189;
        goto lab_0x4022b2;
    }
  lab_0x402a01:
    // 0x402a01
    v248 = v191;
    v249 = v194;
    if (v192 != 1) {
        // 0x402a0a
        g18 = 0;
        v248 = v193;
        v249 = v194;
    }
    goto lab_0x4022b2;
  lab_0x402739:
    // 0x402739
    v72 = v71;
    v74 = v73;
    v76 = v75;
    v78 = v77;
    v80 = v79;
    v81 = v70;
    v69 = v57;
    v65 = v64;
    v67 = v66;
    v59 = v241;
    v61 = v60;
    v63 = v62;
    v55 = v82;
    v53 = 0;
    if (*(char *)v82 != 41) {
        goto lab_0x402133;
    } else {
        goto lab_0x402983;
    }
  lab_0x4022b2:;
    int64_t v250 = v248;
    int64_t v251 = v250 + v176; // 0x4022b7
    char v252 = v187; // 0x4022bb
    char v253 = v186; // 0x4022bb
    int32_t v254 = v185; // 0x4022bb
    int32_t v255 = v184; // 0x4022bb
    int32_t v256 = v183; // 0x4022bb
    char v257 = v182; // 0x4022bb
    int64_t v258 = v251; // 0x4022bb
    int64_t v259 = v180; // 0x4022bb
    int64_t v260 = v179; // 0x4022bb
    int64_t v261 = v178; // 0x4022bb
    int64_t v262 = v177; // 0x4022bb
    int64_t v263 = v176; // 0x4022bb
    int64_t v264; // 0x401b20
    int64_t v265; // 0x401b20
    int64_t v266; // 0x401b20
    int64_t v267; // 0x401b20
    int64_t v268; // 0x401b20
    int64_t v269; // 0x401b20
    int64_t v270; // 0x401b20
    char v271; // 0x401b20
    char v272; // 0x401b20
    int32_t v273; // 0x401b20
    int32_t v274; // 0x401b20
    int32_t v275; // 0x401b20
    int64_t v276; // 0x401b20
    if (v182 != 0) {
        int64_t v277 = v178 - v250; // 0x402cd4
        v271 = v187;
        v272 = v186;
        v273 = v185;
        v274 = v184;
        v275 = v183;
        v276 = v180;
        v268 = function_402f90(v251, v277, v249) != 0;
        v269 = v251;
        v270 = v277;
        v267 = v179;
        v264 = v178;
        v265 = v177;
        v266 = v176;
        goto lab_0x4029f4;
    } else {
        goto lab_0x4022c1;
    }
  lab_0x4022c1:;
    int64_t v278 = v263;
    int64_t v279 = v262;
    int64_t v280 = v261;
    int64_t v281 = v260;
    int64_t v282 = v259;
    str = v258;
    char v283 = v257;
    int32_t v284 = v256;
    v33 = v255;
    v31 = v254;
    char v285 = v253;
    char v286 = v252;
    int64_t v287 = (int64_t)"-"; // 0x4022c7
    int64_t v288 = str; // 0x4022c7
    int64_t v289 = 2; // 0x4022c7
    int32_t strcmp_rc; // 0x401f4b
    int64_t v290; // 0x401b20
    if (strcmp_rc != 0) {
        goto lab_0x4022e5;
    } else {
        int64_t v291 = v287;
        unsigned char v292 = *(char *)v288; // 0x4022d6
        char v293 = *(char *)v291; // 0x4022d6
        int64_t v294 = v288 + v290; // 0x4022d6
        char v295 = v293; // 0x4022d6
        bool v296 = false; // 0x4022d6
        while (v292 == v293) {
            int64_t v297 = v289 - 1; // 0x4022d6
            v287 = v291 + v290;
            v288 = v294;
            v289 = v297;
            v295 = v292;
            v296 = true;
            if (v297 == 0) {
                // break -> 
                break;
            }
            v291 = v287;
            v292 = *(char *)v288;
            v293 = *(char *)v291;
            v294 = v288 + v290;
            v295 = v293;
            v296 = false;
        }
        unsigned char v298 = v295;
        v72 = v286;
        v74 = v285;
        v76 = v31;
        v78 = v33;
        v80 = v284;
        v81 = v283;
        v69 = v294;
        v65 = v282;
        v67 = v281;
        v59 = v280;
        v61 = v279;
        v63 = v278;
        if ((v292 >= v298 && !v296) == v292 < v298) {
            goto lab_0x402133;
        } else {
            goto lab_0x4022e5;
        }
    }
  lab_0x40298e:;
    int64_t v299 = v58;
    *(char *)v56 = 0;
    int64_t v300 = v82 + 1; // 0x402992
    char v301 = *(char *)(v54 + v300); // 0x402992
    int64_t v302 = v54 + 1; // 0x40299f
    if (v301 != 9 != v301 != 32) {
        while (true) {
          lab_0x4029b0_2:;
            // 0x4029b0
            int64_t v303; // 0x401b20
            int64_t v304 = v303;
            int64_t v305 = v304 + 1; // 0x4029b0
            char v306 = *(char *)(v305 + v82); // 0x4029b4
            v302 = v305;
            switch (v306) {
                case 32: {
                    // 0x4029b0
                    v303 = v305;
                    goto lab_0x4029b0_2;
                }
                case 9: {
                    // 0x4029b0
                    v303 = v305;
                    goto lab_0x4029b0_2;
                }
                default: {
                    goto lab_0x4029c2;
                }
            }
        }
    }
  lab_0x4029c2:
    // 0x4029c2
    v72 = v71;
    v74 = v73;
    v76 = v75;
    v78 = v77;
    v80 = v79;
    v81 = v70;
    v69 = v299;
    v65 = v64;
    v67 = v66;
    v59 = v56;
    v61 = v60;
    v63 = v62;
    if (v301 != 61) {
        goto lab_0x402133;
    } else {
        int64_t v307 = v302 + v300; // 0x4029cb
        int64_t v308; // 0x401b20
        while (true) {
          lab_0x4029d0_2:
            // 0x4029d0
            v308 = v307;
            switch (*(char *)v308) {
                case 32: {
                    // 0x4029d0
                    v307 = v308 + 1;
                    goto lab_0x4029d0_2;
                }
                case 9: {
                    // 0x4029d0
                    v307 = v308 + 1;
                    goto lab_0x4029d0_2;
                }
                default: {
                    goto lab_0x4029e2;
                }
            }
        }
      lab_0x4029e2:;
        int64_t v309 = function_402f30(v308); // 0x4029ea
        v271 = v71;
        v272 = v73;
        v273 = v75;
        v274 = v77;
        v275 = v79;
        v276 = v308;
        v268 = v309;
        v269 = v82;
        v270 = v299;
        v267 = v66;
        v264 = v56;
        v265 = v60;
        v266 = v62;
        goto lab_0x4029f4;
    }
  lab_0x4029f4:;
    int64_t v310 = 0x100000000000000 * v276 >> 56;
    char v311 = v276;
    v72 = v271;
    v74 = v272;
    v76 = v273;
    v78 = v274;
    v80 = v275;
    v81 = v311;
    v69 = v270;
    v65 = v310;
    v67 = v267;
    v59 = v264;
    v61 = v265;
    v63 = v266;
    v252 = v271;
    v253 = v272;
    v254 = v273;
    v255 = v274;
    v256 = v275;
    v257 = v311;
    v258 = v269;
    v259 = v310;
    v260 = v267;
    v261 = v264;
    v262 = v265;
    v263 = v266;
    if ((char)v268 != 0) {
        goto lab_0x4022c1;
    } else {
        goto lab_0x402133;
    }
  lab_0x4022e5:;
    int64_t v312 = 0; // 0x4022ee
    int64_t v313 = v282; // 0x4022ee
    if (g42 == 0) {
        // 0x4022f0
        v312 = strchr((char *)str, 10) != NULL;
        v313 = 0x100000000000000 * v282 >> 56;
    }
    // 0x402310
    v45 = v312;
    char v314 = v313; // 0x402320
    int64_t v315; // bp-136, 0x401b20
    uint64_t v316 = function_4030d0(str, &v315, (int64_t *)&v224); // 0x402325
    int64_t v317 = 0x100000000000000 * v313 >> 56; // 0x40232a
    int64_t v318; // 0x401b20
    int64_t v319; // 0x401b20
    int64_t v320; // 0x401b20
    char v321; // 0x401b20
    int32_t v322; // 0x401b20
    int32_t v323; // 0x401b20
    char v324; // 0x401b20
    int64_t v325; // 0x401b20
    if ((char)v316 != 0) {
        // 0x4024a0
        if (*(char *)&g40 == 0) {
            goto lab_0x4024b4;
        } else {
            // 0x4024a9
            v30 = v286;
            v32 = v31;
            v34 = v33;
            v36 = v314;
            v37 = v325;
            v38 = v281;
            v40 = v278;
            if (v224 != 0) {
                goto lab_0x40239b;
            } else {
                goto lab_0x4024b4;
            }
        }
    } else {
        int32_t v326 = v33 + 1; // 0x402339
        v30 = v286;
        v32 = v31;
        v34 = v326;
        v36 = v314;
        v37 = v325;
        v38 = v281;
        v40 = v278;
        if (g42 != 0) {
            goto lab_0x40239b;
        } else {
            if (v45 != 0) {
                int64_t v327 = (int64_t)g30; // 0x40234c
                int64_t * v328 = (int64_t *)(v327 + 40); // 0x402353
                uint64_t v329 = *v328; // 0x402353
                if (v329 >= *(int64_t *)(v327 + 48)) {
                    // 0x402d2a
                    __overflow(g30, 92);
                } else {
                    // 0x402361
                    *v328 = v329 + 1;
                    *(char *)v329 = 92;
                }
            }
            // 0x40236c
            function_403020(str, v45);
            v321 = v286;
            v322 = v31;
            v323 = v326;
            v324 = v314;
            v320 = (int64_t)"FAILED open or read";
            v319 = v281;
            v318 = v278;
            goto lab_0x402380;
        }
    }
  lab_0x4024b4:
    // 0x4024b4
    v35 = v317;
    v39 = g43 / 2;
    v46 = v316 & 0xffffffff;
    v28 = v325;
    v26 = v281;
    int64_t v330; // 0x401b20
    int64_t v331; // 0x401b20
    int64_t v332; // 0x401b20
    char v333; // 0x401b20
    int32_t v334; // 0x401b20
    if (g43 < 2) {
        goto lab_0x4028ca;
    } else {
        int32_t ** v335 = __ctype_tolower_loc(); // 0x4024d5
        int64_t v336 = v316 % 256; // 0x4024df
        int64_t v337 = (int64_t)*v335; // 0x4024e4
        int64_t v338 = 0; // 0x4024ec
        int64_t v339 = v338;
        unsigned char v340 = *(char *)(v2 + 208 + v339); // 0x402512
        int64_t v341 = 2 * v339 + v317;
        int64_t v342 = (int64_t)*(char *)v341; // 0x40251b
        char v343 = *(char *)((int64_t)(v340 / 16) | (int64_t)"0123456789abcdef"); // 0x402529
        int64_t v344; // 0x401b20
        while (*(int32_t *)(4 * v342 + v337) == (int32_t)v343) {
            int64_t v345 = (int64_t)*(char *)(v341 + 1); // 0x4024f0
            char v346 = *(char *)((int64_t)(v340 % 16) | (int64_t)"0123456789abcdef"); // 0x4024f9
            v344 = v345;
            if (*(int32_t *)(4 * v345 + v337) != (int32_t)v346) {
                goto lab_0x402536;
            }
            // 0x402505
            v338 = v339 + 1;
            v46 = v336;
            v28 = v345;
            v26 = v342;
            if (v39 == v338) {
                goto lab_0x4028ca;
            }
            v339 = v338;
            v340 = *(char *)(v2 + 208 + v339);
            v341 = 2 * v339 + v317;
            v342 = (int64_t)*(char *)v341;
            v343 = *(char *)((int64_t)(v340 / 16) | (int64_t)"0123456789abcdef");
        }
        // 0x402536
        v344 = v343;
      lab_0x402536:;
        int32_t v347 = v31 + 1; // 0x402536
        v30 = v286;
        v32 = v347;
        v34 = v33;
        v36 = v35;
        v37 = v344;
        v38 = v342;
        v40 = v339;
        if (g42 != 0) {
            goto lab_0x40239b;
        } else {
            // 0x402549
            v48 = v286;
            v50 = v347;
            v43 = v342;
            v42 = v339;
            v333 = v286;
            v334 = v347;
            v332 = v39;
            v331 = v342;
            v330 = v339;
            if (v45 == 0) {
                goto lab_0x40256d;
            } else {
                goto lab_0x40254d;
            }
        }
    }
  lab_0x40239b:
    // 0x40239b
    v102 = v30;
    char v348; // 0x401b20
    v104 = v348;
    v106 = v32;
    v108 = v34;
    v110 = v284;
    v112 = v36;
    v114 = v317;
    v116 = v38;
    v118 = v280;
    v120 = v279;
    v122 = v40;
    v123 = v30;
    v124 = v348;
    v125 = v32;
    v126 = v34;
    v127 = v284;
    v128 = v36;
    v130 = v37;
    v131 = v317;
    v132 = v38;
    v133 = v280;
    if ((*v134 & 48) != 0) {
        // break -> 0x4023ab
        goto lab_0x4023ab_3;
    }
    goto lab_0x402151;
  lab_0x402380:
    // 0x402380
    __printf_chk(1, ": %s\n", dcgettext(NULL, (char *)v320, 5));
    v30 = v321;
    v32 = v322;
    v34 = v323;
    v36 = v324;
    v37 = (int64_t)": %s\n";
    v38 = v319;
    v40 = v318;
    goto lab_0x40239b;
  lab_0x40256d:;
    char v349 = v332; // 0x402572
    function_403020(str, v45);
    v321 = v333;
    v322 = v334;
    v323 = v33;
    v324 = v349;
    v320 = (int64_t)"FAILED";
    v319 = v331;
    v318 = v330;
    v47 = v333;
    v49 = v334;
    v51 = v349;
    v44 = v331;
    v41 = v330;
    if (0x100000000000000 * v332 >> 56 == v330) {
        goto lab_0x402a34;
    } else {
        goto lab_0x402380;
    }
  lab_0x40254d:;
    int64_t v350 = v42;
    int64_t v351 = v43;
    int32_t v352 = v50;
    char v353 = v48;
    int64_t v354 = (int64_t)g30; // 0x40254d
    int64_t * v355 = (int64_t *)(v354 + 40); // 0x402554
    uint64_t v356 = *v355; // 0x402554
    if (v356 >= *(int64_t *)(v354 + 48)) {
        // 0x402d5a
        __overflow(g30, 92);
        v333 = v353;
        v334 = v352;
        v332 = 0x100000000000000 * v39 >> 56;
        v331 = v351;
        v330 = v350;
    } else {
        // 0x402562
        *v355 = v356 + 1;
        *(char *)v356 = 92;
        v333 = v353;
        v334 = v352;
        v332 = v39;
        v331 = v351;
        v330 = v350;
    }
    goto lab_0x40256d;
  lab_0x402a34:
    // 0x402a34
    v321 = v47;
    v322 = v49;
    v323 = v33;
    v324 = v51;
    v320 = (int64_t)"OK";
    v319 = v44;
    v318 = v41;
    v30 = v47;
    v32 = v49;
    v34 = v33;
    v36 = v51;
    v37 = v45;
    v38 = v44;
    v40 = v41;
    if (g39 != 0) {
        goto lab_0x40239b;
    } else {
        goto lab_0x402380;
    }
  lab_0x401ba0:
    // 0x401ba0
    v10 = v9;
    goto lab_0x401ba0_2;
  lab_0x401eb1:;
    // 0x401eb1
    int64_t v357; // 0x401b20
    int64_t v358; // 0x401b20
    if (g41 == 0) {
        // 0x402d05
        v357 = v23;
        if (g39 == 1) {
            // 0x402d12
            v357 = (int64_t)"the --quiet option is meaningful only when verifying checksums";
            if (v8 == 0) {
                // 0x401e5a
                error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --quiet option is meaningful only when verifying checksums", 5));
                // 0x401e6f
                function_403280(1);
                // UNREACHABLE
            }
        }
        goto lab_0x401e3e;
    } else {
        // 0x401ebe
        v358 = (int64_t)"the --warn option is meaningful only when verifying checksums";
        if (v8 == 0) {
            // 0x401e5a
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --warn option is meaningful only when verifying checksums", 5));
            // 0x401e6f
            function_403280(1);
            // UNREACHABLE
        }
        goto lab_0x401ecd;
    }
  lab_0x401e31:
    // 0x401e31
    v357 = v22;
    v358 = v22;
    if (g41 != 0) {
        goto lab_0x401ecd;
    } else {
        goto lab_0x401e3e;
    }
  lab_0x401e3e:
    // 0x401e3e
    v358 = v357;
    if (*(char *)&g38 != 0) {
        // 0x401e4b
        v358 = (int64_t)"the --strict option is meaningful only when verifying checksums";
        if (v8 == 0) {
            // 0x401e5a
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --strict option is meaningful only when verifying checksums", 5));
            // 0x401e6f
            function_403280(1);
            // UNREACHABLE
        }
    }
    goto lab_0x401ecd;
  lab_0x401ecd:;
    int64_t v359 = (0x100000000 * a1 >> 29) + a2; // 0x401ed7
    int32_t v360 = *(int32_t *)0x60e2bc; // 0x401ee1
    int64_t v361 = v359; // 0x401eeb
    if (v360 == (int32_t)a1) {
        // 0x401eed
        *(int64_t *)v359 = (int64_t)"-";
        v361 = v359 + 8;
    }
    int64_t v362 = 8 * (int64_t)v360 + a2; // 0x401f02
    int64_t v363 = v362; // 0x401f11
    int32_t v364 = 1; // 0x401f11
    int64_t v365 = v358; // 0x401f11
    int64_t v366 = 0; // 0x401f11
    int64_t v367 = v11; // 0x401f11
    int64_t v368; // 0x401b20
    int64_t v369; // 0x401b20
    int32_t v370; // 0x401b20
    char v371; // 0x401b20
    int32_t v372; // 0x401b20
    int64_t v373; // 0x401b20
    if (v361 > v362) {
        int64_t v374 = v13 == 0 | v13 == 0xffffffff ? 32 : 42; // 0x401f24
        v373 = v362;
        v372 = 1;
        v370 = v374;
        v371 = v374;
        v368 = 0;
        v369 = v11;
        goto lab_0x401f30;
    } else {
        goto lab_0x40265e;
    }
  lab_0x40265e:;
    uint32_t v375 = v364;
    if (g45 == 0 || (int32_t)function_4085e0((int64_t)g31, v365) != -1) {
        // 0x40266b
        return v375 % 256 ^ 1;
    }
    // 0x402ac5
    error(1, *__errno_location(), dcgettext(NULL, "standard input", 5));
    int64_t v376 = v363; // 0x402aea
    int32_t v377 = v375; // 0x402aea
    int32_t v378; // 0x401b20
    int32_t v379 = v378; // 0x402aea
    char v380; // 0x401b20
    char v381 = v380; // 0x402aea
    char * v382; // 0x401b20
    char * v383 = v382; // 0x402aea
    char v384; // 0x401b20
    char v385 = v384; // 0x402aea
    int64_t v386 = v366; // 0x402aea
    int64_t v387 = v367; // 0x402aea
    int64_t v388; // 0x401b20
    int64_t v389 = v388; // 0x402aea
    goto lab_0x402aef;
  lab_0x401f30:;
    // 0x401f30
    int64_t v459; // 0x401b20
    int64_t v512 = v459;
    int64_t v514 = v369;
    int64_t v516 = v368;
    char v455; // 0x401b20
    char v518 = v455;
    char v541 = v371;
    int32_t v540 = v370;
    int32_t v539 = v372;
    int64_t v538 = v373;
    int64_t v640 = *(int64_t *)v538; // 0x401f35
    char * str3 = (char *)v640; // 0x401f38
    int64_t v460; // 0x401b20
    int64_t v536; // 0x401b20
    int64_t v406; // 0x401b20
    int64_t v464; // 0x401b20
    int64_t v457; // 0x401b20
    int64_t v534; // 0x401b20
    int64_t v404; // 0x401b20
    int64_t v458; // 0x401b20
    int64_t v535; // 0x401b20
    int64_t v405; // 0x401b20
    int64_t v462; // 0x401b20
    int32_t v453; // 0x401b20
    int32_t v400; // 0x401b20
    char v454; // 0x401b20
    char v401; // 0x401b20
    int32_t v452; // 0x401b20
    int32_t v399; // 0x401b20
    char * v466; // 0x401b20
    char * v461; // 0x401b20
    char * v532; // 0x401b20
    char * v402; // 0x401b20
    int64_t v451; // 0x401b20
    int64_t v398; // 0x401b20
    char v456; // 0x401b20
    char v533; // 0x401b20
    char v403; // 0x401b20
    if (v8 == 0) {
        // 0x402621
        int64_t v641; // bp-216, 0x401b20
        if ((char)function_4030d0(v640, &v641, &v315) != 0) {
            char * found_char_pos2 = strchr(str3, 92); // 0x4027b5
            v398 = v538;
            v399 = v539;
            v400 = v540;
            v401 = v541;
            v402 = str3;
            v403 = v518;
            v404 = v516;
            v405 = v514;
            v406 = v512;
            v376 = v538;
            v377 = v539;
            v379 = v540;
            v381 = v541;
            v383 = str3;
            v385 = v518;
            v386 = v516;
            v387 = v514;
            v389 = v512;
            if (found_char_pos2 == NULL) {
                goto lab_0x402aef;
            } else {
                goto lab_0x4027c3;
            }
        } else {
            // 0x402643
            v451 = v538;
            v452 = 0;
            v453 = v540;
            v454 = v541;
            v461 = str3;
            v456 = v518;
            v462 = &v641;
            v457 = v516;
            v458 = v514;
            v460 = v512;
            goto lab_0x402648;
        }
    } else {
        // 0x401f46
        strcmp_rc = strcmp(str3, "-");
        if (strcmp_rc != 0) {
            int64_t v642 = function_405750(v640, (int64_t *)"r"); // 0x402757
            v466 = str3;
            v464 = v642;
            v532 = str3;
            v533 = v518;
            v534 = v516;
            v535 = v514;
            v536 = v512;
            if (v642 != 0) {
                goto lab_0x401f80;
            } else {
                goto lab_0x402768;
            }
        } else {
            // 0x401f5c
            g45 = 1;
            v466 = dcgettext(NULL, "standard input", 5);
            v464 = (int64_t)g31;
            goto lab_0x401f80;
        }
    }
  lab_0x402aef:;
    int64_t v390 = v389;
    int64_t v391 = v387;
    int64_t v392 = v386;
    char v393 = v385;
    char * str2 = v383;
    char v394 = v381;
    int32_t v395 = v379;
    int32_t v396 = v377;
    int64_t v397 = v376;
    char * found_char_pos = strchr(str2, 10); // 0x402af9
    v398 = v397;
    v399 = v396;
    v400 = v395;
    v401 = v394;
    v402 = str2;
    v403 = v393;
    v404 = v392;
    v405 = v391;
    v406 = v390;
    int64_t v407; // 0x401b20
    int64_t v408; // 0x401b20
    int64_t v409; // 0x401b20
    int64_t v410; // 0x401b20
    int64_t v411; // 0x401b20
    int64_t v412; // 0x401b20
    char v413; // 0x401b20
    int64_t v414; // 0x401b20
    int64_t v415; // 0x401b20
    int32_t v416; // 0x401b20
    int32_t v417; // 0x401b20
    char v418; // 0x401b20
    char v419; // 0x401b20
    int32_t v420; // 0x401b20
    int32_t v421; // 0x401b20
    char * v422; // 0x401b20
    char * v423; // 0x401b20
    int64_t v424; // 0x401b20
    int64_t v425; // 0x401b20
    char v426; // 0x401b20
    char v427; // 0x401b20
    if (found_char_pos != NULL) {
        goto lab_0x4027c3;
    } else {
        // 0x402b07
        v425 = v397;
        v421 = v396;
        v417 = v395;
        v419 = v394;
        v423 = str2;
        v426 = v393;
        v414 = 0;
        v409 = v392;
        v411 = v391;
        v407 = v390;
        v424 = v397;
        v420 = v396;
        v416 = v395;
        v418 = v394;
        v422 = str2;
        v427 = v393;
        v415 = 0;
        v413 = 0;
        v410 = v392;
        v412 = v391;
        v408 = v390;
        if (v3 == 0) {
            goto lab_0x4027f3;
        } else {
            goto lab_0x402b16;
        }
    }
  lab_0x4027c3:;
    int64_t v428 = v406;
    int64_t v429 = v405;
    int64_t v430 = v404;
    char v431 = v403;
    char * v432 = v402;
    char v433 = v401;
    int32_t v434 = v400;
    int32_t v435 = v399;
    int64_t v436 = v398;
    int64_t v437 = v436; // 0x4027c8
    int32_t v438 = v435; // 0x4027c8
    int32_t v439 = v434; // 0x4027c8
    char v440 = v433; // 0x4027c8
    char * v441 = v432; // 0x4027c8
    char v442 = v431; // 0x4027c8
    int64_t v443 = 1; // 0x4027c8
    int64_t v444 = v430; // 0x4027c8
    int64_t v445 = v429; // 0x4027c8
    int64_t v446 = v428; // 0x4027c8
    if (v3 != 0) {
        int64_t v447 = (int64_t)g30; // 0x402c9a
        int64_t * v448 = (int64_t *)(v447 + 40); // 0x402ca1
        uint64_t v449 = *v448; // 0x402ca1
        if (*(int64_t *)(v447 + 48) > v449) {
            // 0x402caf
            *v448 = v449 + 1;
            *(char *)v449 = 92;
            v424 = v436;
            v420 = v435;
            v416 = v434;
            v418 = v433;
            v422 = v432;
            v427 = v431;
            v415 = 1;
            v413 = v3;
            v410 = v430;
            v412 = v429;
            v408 = v428;
        } else {
            // 0x402d9f
            __overflow(g30, 92);
            v424 = v436;
            v420 = v435;
            v416 = v434;
            v418 = v433;
            v422 = v432;
            v427 = v431;
            v415 = 1;
            v413 = v3;
            v410 = v430;
            v412 = v429;
            v408 = v428;
        }
        goto lab_0x402b16;
    } else {
        goto lab_0x4027d3;
    }
  lab_0x402648:;
    int64_t v450 = v451 + 8; // 0x402648
    v373 = v450;
    v372 = v452;
    v370 = v453;
    v371 = v454;
    v455 = v456;
    v368 = v457;
    v369 = v458;
    v459 = v460;
    v363 = v450;
    v364 = v452;
    v378 = v453;
    v380 = v454;
    v382 = v461;
    v384 = v456;
    v365 = v462;
    v366 = v457;
    v367 = v458;
    v388 = v460;
    if (v361 > v450) {
        goto lab_0x401f30;
    } else {
        goto lab_0x40265e;
    }
  lab_0x401f80:;
    int64_t v463 = v464;
    char * v465 = v466;
    v158 = 0;
    v157 = 0;
    int32_t v467 = __getdelim((char **)&v158, (int32_t *)&v157, 10, (struct _IO_FILE *)v463); // 0x401fd2
    v130 = &v157;
    if (v467 >= 1) {
        // 0x401fe0
        while (true) {
          lab_0x401fe0:
            // 0x401fe0
            v71 = v159;
            v73 = v161;
            v75 = v163;
            v77 = v165;
            v79 = v167;
            v66 = v153;
            v60 = v148;
            int64_t v468 = v158; // 0x401fe0
            char v469 = *(char *)v468; // 0x401fe5
            v101 = v71;
            v103 = v73;
            v105 = v75;
            v107 = v77;
            v109 = v79;
            v111 = v169;
            v129 = v171;
            v113 = v151;
            v115 = v66;
            v117 = v146;
            v119 = v60;
            v121 = v468;
            if (v469 == 35) {
                goto lab_0x402146;
            } else {
                int64_t v470 = v145;
                int64_t v471 = v470 - 1;
                char * v472 = (char *)(v468 + v471);
                char v473 = v469; // 0x401ffb
                int64_t v474 = v470; // 0x401ffb
                int64_t v475 = v468; // 0x401ffb
                if (*v472 == 10) {
                    // 0x401ffd
                    *v472 = 0;
                    v475 = v158;
                    v473 = *(char *)v475;
                    v474 = v471;
                }
                // 0x40200f
                v62 = v475;
                v87 = v474;
                char v476 = v473;
                int64_t v477 = 0; // 0x402014
                char v478 = v476; // 0x402014
                int64_t v479 = 0; // 0x402014
                if (v476 != 9 != v476 != 32) {
                    while (true) {
                      lab_0x402020_2:;
                        int64_t v480 = v477 + 1; // 0x402020
                        char v481 = *(char *)(v480 + v62); // 0x402024
                        v478 = v481;
                        v479 = v480;
                        switch (v481) {
                            case 32: {
                                // 0x402020
                                v477 = v480;
                                goto lab_0x402020_2;
                            }
                            case 9: {
                                // 0x402020
                                v477 = v480;
                                goto lab_0x402020_2;
                            }
                            default: {
                                goto lab_0x402033;
                            }
                        }
                    }
                }
              lab_0x402033:
                // 0x402033
                v70 = v478 != 92 ? 0 : v348;
                int64_t v482 = v479 + (int64_t)(v478 == 92);
                v85 = v482 + v62;
                int64_t v483 = (int64_t)"BLAKE2"; // 0x401b20
                int64_t v484 = v85; // 0x401b20
                int64_t v485 = 6; // 0x402057
                int64_t v486 = v483;
                unsigned char v487 = *(char *)v484; // 0x402057
                char v488 = *(char *)v486; // 0x402057
                int64_t v489 = v484 + v290; // 0x402057
                char v490 = v488; // 0x402057
                bool v491 = false; // 0x402057
                while (v487 == v488) {
                    v485--;
                    v483 = v486 + v290;
                    v484 = v489;
                    v490 = v487;
                    v491 = true;
                    if (v485 == 0) {
                        // break -> 
                        break;
                    }
                    v486 = v483;
                    v487 = *(char *)v484;
                    v488 = *(char *)v486;
                    v489 = v484 + v290;
                    v490 = v488;
                    v491 = false;
                }
                unsigned char v492 = v490;
                v160 = v71;
                v162 = v73;
                v164 = v75;
                v166 = v77;
                v168 = v79;
                v170 = v70;
                v155 = v482;
                v156 = v489;
                v152 = v85;
                v154 = v66;
                v147 = v87;
                v149 = v60;
                v150 = v62;
                if ((v487 >= v492 && !v491) != v487 < v492) {
                    goto lab_0x402198;
                } else {
                    int64_t v493 = v482 + 6; // 0x402066
                    int64_t v494 = v493 + v62; // 0x40206a
                    char * v495 = (char *)v494;
                    unsigned char v496 = *v495; // 0x40206e
                    v84 = v495;
                    v90 = v493;
                    v88 = 0;
                    v92 = v495;
                    v99 = v493;
                    v98 = 9;
                    v96 = v494;
                    switch (v496) {
                        case 0: {
                            goto lab_0x4020c6;
                        }
                        case 9: {
                            goto lab_0x402599;
                        }
                        default: {
                            int64_t v497 = v496; // 0x40206e
                            int64_t v498 = v493; // 0x402085
                            int64_t v499 = v497; // 0x402085
                            int64_t v500 = v494; // 0x402085
                            v92 = v495;
                            v99 = v493;
                            v98 = v497;
                            v96 = v494;
                            if (v496 != 32) {
                                int64_t v501; // 0x401b20
                                int64_t v502; // 0x401b20
                                int64_t v503; // 0x401b20
                                while (true) {
                                  lab_0x4020c0:
                                    // 0x4020c0
                                    v501 = v500;
                                    v502 = v499;
                                    v503 = v498;
                                    if (v502 == 45) {
                                        // break -> 0x4020c0
                                        break;
                                    }
                                    if (v502 == 40) {
                                        char * v504 = (char *)v501;
                                        *v504 = 0;
                                        int64_t v505 = function_4052d0(v85, &g3, 0, 0); // 0x4025fa
                                        v72 = v71;
                                        v74 = v73;
                                        v76 = v75;
                                        v78 = v77;
                                        v80 = v79;
                                        v81 = v70;
                                        v69 = (int64_t)&g3;
                                        v65 = v85;
                                        v67 = v66;
                                        v59 = v87;
                                        v61 = v60;
                                        v63 = v62;
                                        if (v505 < 0) {
                                            goto lab_0x402133;
                                        } else {
                                            // 0x402612
                                            g37 = v505;
                                            v95 = v504;
                                            v100 = v503;
                                            v97 = v501;
                                            goto lab_0x402618;
                                        }
                                    }
                                    int64_t v506 = v503 + 1; // 0x40209a
                                    int64_t v507 = v506 + v62; // 0x40209e
                                    char * v508 = (char *)v507;
                                    unsigned char v509 = *v508; // 0x40209e
                                    int64_t v510 = v509; // 0x40209e
                                    v498 = v506;
                                    v499 = v510;
                                    v500 = v507;
                                    v84 = v508;
                                    v90 = v506;
                                    v88 = 0;
                                    v92 = v508;
                                    v99 = v506;
                                    v98 = v510;
                                    v96 = v507;
                                    switch (v509) {
                                        case 0: {
                                            goto lab_0x4020c6;
                                        }
                                        case 32: {
                                            goto lab_0x402599;
                                        }
                                        case 9: {
                                            goto lab_0x402599;
                                        }
                                        default: {
                                            goto lab_0x4020c0;
                                        }
                                    }
                                }
                                // 0x4020c0
                                v84 = (char *)v501;
                                v90 = v503;
                                v88 = v502;
                                goto lab_0x4020c6;
                            } else {
                                goto lab_0x402599;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4023ab_3:;
    int64_t v511 = v512;
    int64_t v513 = v514;
    int64_t v515 = v516;
    char v517 = v518;
    free((int64_t *)v158);
    int32_t v519 = *(int32_t *)v463 & 32; // 0x4023b9
    int64_t v520; // 0x401b20
    int64_t v521; // 0x401b20
    int64_t v522; // 0x401b20
    int32_t v523; // 0x401b20
    int64_t v524; // 0x401b20
    int64_t v525; // 0x401b20
    char v526; // 0x401b20
    int32_t v527; // 0x401b20
    int32_t v528; // 0x401b20
    int32_t v529; // 0x401b20
    char * v530; // 0x401b20
    char v531; // 0x401b20
    if (v519 != 0) {
        // 0x402942
        function_407290(0, 3, (int64_t)v465);
        error(0, (int32_t)"%s: read error" ^ (int32_t)"%s: read error", dcgettext(NULL, "%s: read error", 5));
        v530 = v465;
        v531 = v517;
        v523 = (int32_t)&g65 ^ (int32_t)&g65;
        v525 = (int32_t)"%s: read error" ^ (int32_t)"%s: read error";
        v521 = v515;
        v522 = v513;
        v520 = v511;
        goto lab_0x40244a;
    } else {
        // 0x4023c2
        v524 = v130;
        v529 = 0;
        v528 = 0;
        v527 = 0;
        v526 = 0;
        if (strcmp_rc != 0) {
            // 0x4028b2
            v532 = v465;
            v533 = v517;
            v534 = v515;
            v535 = v513;
            v536 = v511;
            if ((int32_t)function_4085e0(v463, v524) == 0) {
                goto lab_0x4023cd;
            } else {
                goto lab_0x402768;
            }
        } else {
            goto lab_0x4023cd;
        }
    }
  lab_0x402768:;
    int64_t v537 = function_407290(0, 3, (int64_t)v532); // 0x402774
    uint32_t err_num = *__errno_location(); // 0x40278b
    error(0, err_num, "%s", (char *)v537);
    v530 = v532;
    v531 = v533;
    v523 = (int32_t)&g65 ^ (int32_t)&g65;
    v525 = err_num;
    v521 = v534;
    v522 = v535;
    v520 = v536;
    goto lab_0x40244a;
  lab_0x4027d3:;
    int64_t v627 = v446;
    int64_t v628 = v445;
    int64_t v629 = v444;
    int64_t v630 = v443;
    char v631 = v442;
    char * v632 = v441;
    char v633 = v440;
    int32_t v634 = v439;
    int32_t v635 = v438;
    int64_t v636 = v437;
    int64_t v637 = (int64_t)g30; // 0x4027d3
    int64_t * v638 = (int64_t *)(v637 + 40); // 0x4027da
    uint64_t v639 = *v638; // 0x4027da
    if (v639 >= *(int64_t *)(v637 + 48)) {
        // 0x402d73
        __overflow(g30, 92);
        v425 = v636;
        v421 = v635;
        v417 = v634;
        v419 = v633;
        v423 = v632;
        v426 = v631;
        v414 = v630;
        v409 = v629;
        v411 = v628;
        v407 = v627;
    } else {
        // 0x4027e8
        *v638 = v639 + 1;
        *(char *)v639 = 92;
        v425 = v636;
        v421 = v635;
        v417 = v634;
        v419 = v633;
        v423 = v632;
        v426 = v631;
        v414 = v630;
        v409 = v629;
        v411 = v628;
        v407 = v627;
    }
    goto lab_0x4027f3;
  lab_0x40244a:
    // 0x40244a
    v451 = v538;
    v452 = 0x1000000 * (v523 & v539) >> 24;
    v453 = v540;
    v454 = v541;
    v461 = v530;
    v456 = v531;
    v462 = v525;
    v457 = v521;
    v458 = v522;
    v460 = v520;
    goto lab_0x402648;
  lab_0x4027f3:;
    int64_t v542 = v425; // 0x4027fd
    int32_t v543 = v421; // 0x4027fd
    int32_t v544 = v417; // 0x4027fd
    char v545 = v419; // 0x4027fd
    char * v546 = v423; // 0x4027fd
    char v547 = v426; // 0x4027fd
    int64_t v548 = v414; // 0x4027fd
    int64_t v549 = v409; // 0x4027fd
    int64_t v550 = v411; // 0x4027fd
    int64_t v551 = v407; // 0x4027fd
    int64_t v552 = v425; // 0x4027fd
    int32_t v553 = v421; // 0x4027fd
    int32_t v554 = v417; // 0x4027fd
    char v555 = v419; // 0x4027fd
    char * v556 = v423; // 0x4027fd
    char v557 = v426; // 0x4027fd
    int64_t v558 = v414; // 0x4027fd
    int64_t v559 = v409; // 0x4027fd
    int64_t v560 = v411; // 0x4027fd
    int64_t v561 = v407; // 0x4027fd
    if (g43 < 2) {
        goto lab_0x402860;
    } else {
        goto lab_0x4027ff;
    }
  lab_0x402b16:;
    int64_t v562 = v408;
    int64_t v563 = v412;
    int64_t v564 = v410;
    int64_t v565 = v415;
    char v566 = v427;
    char * v567 = v422;
    char v568 = v418;
    int32_t v569 = v416;
    int32_t v570 = v420;
    int64_t v571 = v424;
    int64_t v572 = *(int64_t *)(8 * (int64_t)g37 + (int64_t)&g3); // 0x402b23
    fputs_unlocked((char *)v572, g30);
    if (g36 < 512) {
        // 0x402b97
        __printf_chk(1, "-%lu", g36);
        fwrite_unlocked((int64_t *)" (", 1, 2, g30);
        function_403020((int64_t)v567, v565);
        fwrite_unlocked((int64_t *)") = ", 1, 4, g30);
        v437 = v571;
        v438 = v570;
        v439 = v569;
        v440 = v568;
        v441 = v567;
        v442 = v566;
        v443 = v565;
        v444 = v564;
        v445 = v563;
        v446 = v562;
        if (v3 != 0 || v413 == 0) {
            goto lab_0x402b82;
        } else {
            goto lab_0x4027d3;
        }
    } else {
        // 0x402b40
        fwrite_unlocked((int64_t *)" (", 1, 2, g30);
        function_403020((int64_t)v567, v565);
        fwrite_unlocked((int64_t *)") = ", 1, 4, g30);
        goto lab_0x402b82;
    }
  lab_0x4023cd:;
    int64_t v573; // 0x401b20
    int64_t v574; // 0x401b20
    int64_t v575; // 0x401b20
    int32_t v576; // 0x401b20
    int64_t v577; // 0x401b20
    int64_t v578; // 0x401b20
    int64_t v579; // 0x401b20
    // 0x402901
    function_407290(0, 3, (int64_t)v465);
    error(0, (int32_t)"%s: no properly formatted %s checksum lines found" ^ (int32_t)"%s: no properly formatted %s checksum lines found", dcgettext(NULL, "%s: no properly formatted %s checksum lines found", 5));
    v576 = v519;
    v578 = (int32_t)"%s: no properly formatted %s checksum lines found" ^ (int32_t)"%s: no properly formatted %s checksum lines found";
    v574 = (int64_t)"BLAKE2";
    goto lab_0x402445;
  lab_0x402860:;
    char v583 = v555;
    int32_t v584 = v554;
    int64_t v585 = (int64_t)g30; // 0x402860
    int64_t * v586 = (int64_t *)(v585 + 40); // 0x402867
    uint64_t v587 = *v586; // 0x402867
    if (v587 >= *(int64_t *)(v585 + 48)) {
        // 0x402d82
        __overflow(g30, 32);
    } else {
        // 0x402875
        *v586 = v587 + 1;
        *(char *)v587 = 32;
    }
    int64_t v588 = (int64_t)g30; // 0x402880
    int64_t * v589 = (int64_t *)(v588 + 40); // 0x402887
    uint64_t v590 = *v589; // 0x402887
    if (v590 >= *(int64_t *)(v588 + 48)) {
        // 0x402d91
        __overflow(g30, v584);
    } else {
        // 0x402895
        *v589 = v590 + 1;
        *(char *)v590 = v583;
    }
    int64_t v591 = v558 & 0xffffffff; // 0x4028a9
    function_403020((int64_t)v556, v591);
    int64_t v592 = v552; // 0x4028b0
    int32_t v593 = v553; // 0x4028b0
    int32_t v594 = v584; // 0x4028b0
    char v595 = v583; // 0x4028b0
    char * v596 = v556; // 0x4028b0
    char v597 = v557; // 0x4028b0
    int64_t v598 = v591; // 0x4028b0
    int64_t v599 = v559; // 0x4028b0
    int64_t v600 = v560; // 0x4028b0
    int64_t v601 = v561; // 0x4028b0
    goto lab_0x40283b;
  lab_0x4027ff:;
    int64_t v625 = 0; // 0x402801
    int64_t v626 = v625 + 1; // 0x40281c
    __printf_chk(1, "%02x", (int32_t)*(char *)(v2 + 128 + v625));
    v625 = v626;
    int64_t v614 = v542; // 0x402832
    int32_t v615 = v543; // 0x402832
    int32_t v616 = v544; // 0x402832
    char v617 = v545; // 0x402832
    char * v618 = v546; // 0x402832
    char v619 = v547; // 0x402832
    int64_t v624 = v548; // 0x402832
    int64_t v620 = (int64_t)"%02x"; // 0x402832
    int64_t v621 = v549; // 0x402832
    int64_t v622 = v550; // 0x402832
    int64_t v623 = v551; // 0x402832
    while (g43 / 2 > v626) {
        // 0x402808
        v626 = v625 + 1;
        __printf_chk(1, "%02x", (int32_t)*(char *)(v2 + 128 + v625));
        v625 = v626;
        v614 = v542;
        v615 = v543;
        v616 = v544;
        v617 = v545;
        v618 = v546;
        v619 = v547;
        v624 = v548;
        v620 = (int64_t)"%02x";
        v621 = v549;
        v622 = v550;
        v623 = v551;
    }
    goto lab_0x402834;
  lab_0x40283b:;
    int64_t v602 = v601;
    int64_t v603 = v600;
    int64_t v604 = v599;
    char v605 = v597;
    char * v606 = v596;
    char v607 = v595;
    int32_t v608 = v594;
    int32_t v609 = v593;
    int64_t v610 = v592;
    int64_t v611 = (int64_t)g30; // 0x40283b
    int64_t * v612 = (int64_t *)(v611 + 40); // 0x402842
    uint64_t v613 = *v612; // 0x402842
    if (v613 >= *(int64_t *)(v611 + 48)) {
        // 0x402d43
        __overflow(g30, 10);
        v451 = v610;
        v452 = v609;
        v453 = v608;
        v454 = v607;
        v461 = v606;
        v456 = v605;
        v462 = 10;
        v457 = v604;
        v458 = v603;
        v460 = v602;
    } else {
        // 0x402850
        *v612 = v613 + 1;
        *(char *)v613 = 10;
        v451 = v610;
        v452 = v609;
        v453 = v608;
        v454 = v607;
        v461 = v606;
        v456 = v605;
        v462 = v598;
        v457 = v604;
        v458 = v603;
        v460 = v602;
    }
    goto lab_0x402648;
  lab_0x402834:
    // 0x402834
    v592 = v614;
    v593 = v615;
    v594 = v616;
    v595 = v617;
    v596 = v618;
    v597 = v619;
    v598 = v620;
    v599 = v621;
    v600 = v622;
    v601 = v623;
    v552 = v614;
    v553 = v615;
    v554 = v616;
    v555 = v617;
    v556 = v618;
    v557 = v619;
    v558 = v624;
    v559 = v621;
    v560 = v622;
    v561 = v623;
    if (v3 == 0) {
        goto lab_0x402860;
    } else {
        goto lab_0x40283b;
    }
  lab_0x402b82:
    // 0x402b82
    v614 = v571;
    v615 = v570;
    v616 = v569;
    v617 = v568;
    v618 = v567;
    v619 = v566;
    v624 = v565;
    v620 = 1;
    v621 = v564;
    v622 = v563;
    v623 = v562;
    if (g43 >= 2) {
        goto lab_0x4027ff;
    } else {
        goto lab_0x402834;
    }
  lab_0x402445:
    // 0x402445
    v530 = v465;
    v531 = v517;
    v523 = v576 % 2;
    v525 = v578;
    v521 = v574;
    v522 = v513;
    v520 = v511;
    goto lab_0x40244a;
  lab_0x40279b:
    // 0x40279b
    v577 = v579;
    v573 = v575;
    v576 = v519;
    v578 = v579;
    v574 = v575;
    if (v526 != 0) {
        goto lab_0x402421;
    } else {
        goto lab_0x402445;
    }
  lab_0x402421:;
    int64_t v580 = v573;
    int64_t v581 = v577;
    v576 = v519;
    v578 = v581;
    v574 = v580;
    if ((v528 || v527) == 0) {
        char v582 = *(char *)&g38; // 0x40242d
        v576 = v582 ^ 1 | (char)(v529 == 0);
        v578 = v581;
        v574 = v580;
    }
    goto lab_0x402445;
}
// Address range: 0x402e50 - 0x402e7b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402e50
    int64_t v1; // 0x402e50
    __libc_start_main(0x401b20, (int32_t)a4, (char **)&v1, (void (*)())0x409cc0, (void (*)())0x409d20, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x402e7b - 0x402e9a
int64_t function_402e7b(void) {
    // 0x402e7b
    return &g29;
}
// Address range: 0x402e9a - 0x402ed1
int64_t function_402e9a(void) {
    // 0x402e9a
    return 0;
}
// Address range: 0x402ed1 - 0x402f28
int64_t function_402ed1(void) {
    // 0x402ed1
    if (g34 != 0) {
        // 0x402f27
        int64_t result; // 0x402ed1
        return result;
    }
    int64_t v1 = g35; // 0x402f04
    int64_t result2; // 0x402f16
    if (g35 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402f16
        result2 = function_402e7b();
        g34 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402f06
        v1++;
    }
    // 0x402efa
    g35 = v1;
    // 0x402f16
    result2 = function_402e7b();
    g34 = 1;
    return result2;
}
// Address range: 0x402f28 - 0x402f2d
int64_t function_402f28(void) {
    // 0x402f28
    return function_402e9a();
}
// Address range: 0x402f30 - 0x402f8d
int64_t function_402f30(int64_t a1) {
    uint64_t v1 = g43; // 0x402f39
    int64_t v2; // 0x402f30
    if (v1 == 0) {
        // 0x402f80
        return v2 & -256 | (int64_t)(*(char *)a1 == 0);
    }
    int16_t * v3 = *__ctype_b_loc(); // 0x402f4a
    int64_t v4 = 0; // 0x402f4f
    int64_t v5 = a1; // 0x402f4f
    unsigned char v6 = *(char *)v5; // 0x402f67
    while ((*(char *)((int64_t)v3 + 1 + 2 * (int64_t)v6) & 16) != 0) {
        // 0x402f58
        v4 = v4 + 1 & 0xffffffff;
        v5++;
        v2 = v4;
        int64_t v7 = v5; // 0x402f65
        if (v4 >= v1) {
            // 0x402f80
            return v2 & -256 | (int64_t)(*(char *)v7 == 0);
        }
        v6 = *(char *)v5;
    }
    // 0x402f71
    return 0;
}
// Address range: 0x402f90 - 0x403011
int64_t function_402f90(int64_t result, uint64_t a2, char a3) {
    int64_t v1 = result; // 0x402f9d
    if (a2 == 0) {
        // 0x402fc3
        return result;
    }
    int64_t v2 = 0; // 0x402f9d
    int64_t result2; // 0x402f90
    int64_t v3; // 0x402f90
    int64_t v4; // 0x402f90
    while (true) {
      lab_0x402f9f:;
        int64_t v5 = v2;
        char v6 = *(char *)(v5 + result); // 0x402f9f
        result2 = 0;
        if (v6 == 0) {
            // break -> 0x402fc3
            break;
        }
        // 0x402fa7
        v3 = v1;
        if (v6 != 92) {
            // 0x402fd0
            *(char *)v3 = v6;
            v4 = v5;
            goto lab_0x402fd6;
        } else {
            // 0x402fac
            result2 = 0;
            if ((int64_t)(a2 - 1) == v5) {
                // break -> 0x402fc3
                break;
            }
            int64_t v7 = v5 + 1; // 0x402fb1
            result2 = 0;
            switch (*(char *)(v7 + result)) {
                case 92: {
                    // 0x403008
                    *(char *)v3 = 92;
                    v4 = v7;
                    goto lab_0x402fd6;
                }
                case 110: {
                    // 0x402ff8
                    *(char *)v3 = 10;
                    v4 = v7;
                    goto lab_0x402fd6;
                }
                default: {
                    return result2;
                }
            }
        }
    }
    // 0x402fc3
    return result2;
  lab_0x402fd6:
    // 0x402fd6
    v1 = v3 + 1;
    v2 = v4 + 1;
    if (v2 >= a2) {
        // 0x402fe3
        result2 = result;
        if (v1 >= a2 + result) {
            return result2;
        } else {
            // 0x402feb
            *(char *)v1 = 0;
            result2 = result;
            return result2;
        }
    }
    goto lab_0x402f9f;
}
// Address range: 0x403020 - 0x4030c5
int64_t function_403020(int64_t a1, int64_t a2) {
    if ((char)a2 == 0) {
        // 0x4030b8
        return fputs_unlocked((char *)a1, g30);
    }
    char v1 = *(char *)a1; // 0x403049
    if (v1 == 0) {
        // 0x4030a0
        int64_t result; // 0x403020
        return result;
    }
    int64_t v2 = a1; // 0x40304f
    int64_t result2; // 0x403020
    uint64_t v3; // 0x403030
    int64_t v4; // 0x403051
    int64_t * v5; // 0x403030
    if (v1 == 10) {
        // 0x403080
        result2 = fwrite_unlocked((int64_t *)"\\n", 1, 2, g30);
    } else {
        if (v1 != 92) {
            // 0x403030
            v4 = (int64_t)g30;
            v5 = (int64_t *)(v4 + 40);
            v3 = *v5;
            if (v3 >= *(int64_t *)(v4 + 48)) {
                // 0x4030a8
                result2 = __overflow(g30, (int32_t)v1);
            } else {
                // 0x40303a
                *v5 = v3 + 1;
                *(char *)v3 = v1;
                result2 = v3;
            }
        } else {
            // 0x403064
            result2 = fwrite_unlocked((int64_t *)"\\\\", 1, 2, g30);
        }
    }
    // 0x403045
    v2++;
    char v6 = *(char *)v2; // 0x403049
    while (v6 != 0) {
        unsigned char v7 = v6;
        if (v7 == 10) {
            // 0x403080
            result2 = fwrite_unlocked((int64_t *)"\\n", 1, 2, g30);
        } else {
            if (v7 != 92) {
                // 0x403030
                v4 = (int64_t)g30;
                v5 = (int64_t *)(v4 + 40);
                v3 = *v5;
                if (v3 >= *(int64_t *)(v4 + 48)) {
                    // 0x4030a8
                    result2 = __overflow(g30, (int32_t)v7);
                } else {
                    // 0x40303a
                    *v5 = v3 + 1;
                    *(char *)v3 = v7;
                    result2 = v3;
                }
            } else {
                // 0x403064
                result2 = fwrite_unlocked((int64_t *)"\\\\", 1, 2, g30);
            }
        }
        // 0x403045
        v2++;
        v6 = *(char *)v2;
    }
    // 0x4030a0
    return result2;
}
// Address range: 0x4030d0 - 0x403272
int64_t function_4030d0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    bool v3; // 0x4030d0
    int64_t v4 = v3 ? -1 : 1; // 0x4030ed
    int64_t v5 = (int64_t)"-"; // 0x4030d0
    int64_t v6 = a1; // 0x4030d0
    int64_t v7 = 2; // 0x4030ed
    unsigned char v8 = *(char *)v6; // 0x4030ed
    char v9 = *(char *)v5; // 0x4030ed
    char v10 = v9; // 0x4030ed
    bool v11 = false; // 0x4030ed
    while (v8 == v9) {
        v7--;
        v5 += v4;
        v6 += v4;
        v10 = v8;
        v11 = true;
        if (v7 == 0) {
            // break -> 
            break;
        }
        v8 = *(char *)v6;
        v9 = *(char *)v5;
        v10 = v9;
        v11 = false;
    }
    unsigned char v12 = v10;
    *(char *)a3 = 0;
    int64_t v13; // 0x4030d0
    if ((v8 >= v12 && !v11) != v8 < v12) {
        int64_t v14 = function_405750(a1, (int64_t *)"r"); // 0x40315b
        if (v14 == 0) {
            int32_t * err_num = __errno_location(); // 0x403220
            unsigned char result = *(char *)&g40; // 0x403225
            if (result != 0) {
                // 0x403235
                if (*err_num == 2) {
                    // 0x403268
                    *(char *)a3 = 1;
                    // 0x40313a
                    return result;
                }
            }
            // 0x40323a
            error(0, *err_num, "%s", (char *)function_407290(0, 3, a1));
            // 0x40313a
            return 0;
        }
        // 0x40316c
        function_405720(v14, 2, v1);
        int64_t v15 = function_4051d0(v14, v2, (int64_t)g36 / 8); // 0x40318a
        v13 = v14;
        if ((int32_t)v15 == 0) {
            int64_t result2 = 1; // 0x40319d
            if ((int32_t)function_4085e0(v14, v2) != 0) {
                // 0x40319f
                error(0, *__errno_location(), "%s", (char *)function_407290(0, 3, a1));
                result2 = 0;
            }
            // 0x40313a
            return result2;
        }
    } else {
        int64_t v16 = (int64_t)g31; // 0x4030fb
        g45 = 1;
        function_405720(v16, 2, v1);
        int64_t v17 = function_4051d0(v16, v2, (int64_t)g36 / 8); // 0x403127
        v13 = v16;
        if ((int32_t)v17 == 0) {
            // 0x40313a
            return 1;
        }
    }
    int64_t v18 = function_407290(0, 3, a1); // 0x4031e5
    uint32_t err_num2 = *__errno_location(); // 0x4031fc
    error(0, err_num2, "%s", (char *)v18);
    if (v13 != (int64_t)g31) {
        // 0x403212
        function_4085e0(v13, (int64_t)err_num2);
    }
    // 0x40313a
    return 0;
}
// Address range: 0x403280 - 0x403675
int64_t function_403280(int32_t status) {
    // 0x403280
    if (status != 0) {
        // 0x40329a
        __fprintf_chk(g33, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4032bf
        exit(status);
        // UNREACHABLE
    }
    // 0x4032c6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\nPrint or check %s (%d-bit) checksums.\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "\n  -b, --binary         read in binary mode\n", 5), g30);
    __printf_chk(1, dcgettext(NULL, "  -c, --check          read %s sums from the FILEs and check them\n", 5));
    fputs_unlocked(dcgettext(NULL, "  -l, --length         digest length in bits; must not exceed the maximum for\n                       the blake2 algorithm and must be a multiple of 8\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --tag            create a BSD-style checksum\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -t, --text           read in text mode (default)\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "\nThe following five options are useful only when verifying checksums:\n      --ignore-missing  don't fail or report status for missing files\n      --quiet          don't print OK for each successfully verified file\n      --status         don't output anything, status code shows success\n      --strict         exit non-zero for improperly formatted checksum lines\n  -w, --warn           warn about improperly formatted checksum lines\n\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    __printf_chk(1, dcgettext(NULL, "\nThe sums are computed as described in %s.  When checking, the input\nshould be a former output of this program.  The default mode is to print a\nline with checksum, a space, a character indicating input mode ('*' for binary,\n' ' for text or where binary is insignificant), and name for each FILE.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x403451
    bool v2; // 0x403280
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4034d8
    int64_t v6 = *(int64_t *)v5; // 0x4034dc
    int64_t v7 = 6; // 0x4034e2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"b2sum";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4034ee
        char v11 = *(char *)v9; // 0x4034ee
        char v12 = v11; // 0x4034ee
        bool v13 = false; // 0x4034ee
        while (v10 == v11) {
            // 0x4034e4
            v7--;
            int64_t v14 = v9 + v3; // 0x4034ee
            int64_t v15 = v8 + v3; // 0x4034ee
            v12 = v10;
            v13 = true;
            if (v7 == 0) {
                // break -> 
                break;
            }
            v8 = v15;
            v9 = v14;
            v10 = *(char *)v8;
            v11 = *(char *)v9;
            v12 = v11;
            v13 = false;
        }
        unsigned char v16 = v12;
        if ((v10 >= v16 && !v13) == v10 < v16) {
            // break -> 0x4034fa
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x4034fa
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x40360c;
        } else {
            // 0x4035f6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40364b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40355c;
            } else {
                goto lab_0x40360c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40355c;
        } else {
            // 0x403542
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40364b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40355c;
            } else {
                goto lab_0x40355c;
            }
        }
    }
  lab_0x40360c:
    // 0x40360c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40359c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4032bf
    exit(status);
    // UNREACHABLE
  lab_0x40355c:
    // 0x40355c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40359c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4032bf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x403680 - 0x404c1d
int64_t function_403680(int64_t a1, int64_t a2) {
    // 0x403680
    int64_t v1; // bp-224, 0x403680
    int64_t v2 = &v1; // 0x40368c
    for (int64_t i = 0; i < 16; i++) {
        int64_t v3 = 8 * i; // 0x403698
        *(int64_t *)(v2 - 88 + v3) = *(int64_t *)(v3 + a2);
    }
    int64_t v4 = v2 + 40; // 0x4036b4
    for (int64_t i = 0; i < 8; i++) {
        int64_t v5 = 8 * i; // 0x4036b0
        *(int64_t *)(v5 + v4) = *(int64_t *)(v5 + a1);
    }
    // 0x4036c3
    int64_t v6; // 0x403680
    int64_t v7 = 2 * v6 + v6; // 0x40370a
    int64_t v8 = 2 * v6 + v6; // 0x40371a
    uint64_t v9 = v7 ^ 0x510e527fade682d1 ^ *(int64_t *)(a1 + 64); // 0x403724
    int64_t v10 = v9 / 0x100000000 | 0x100000000 * v9; // 0x403734
    uint64_t v11 = v8 ^ -0x64fa9773d4c193e1 ^ *(int64_t *)(a1 + 72); // 0x40374b
    int64_t v12 = v10 + 0x6a09e667f3bcc908; // 0x40374e
    int64_t v13 = 2 * v6 + v6; // 0x403754
    int64_t v14 = v11 / 0x100000000 | 0x100000000 * v11; // 0x403759
    uint64_t v15 = v12 ^ v6; // 0x40375d
    int64_t v16 = v14 - 0x4498517a7b3558c5; // 0x403763
    int64_t v17 = v15 / 0x1000000 | 0x10000000000 * v15; // 0x403766
    uint64_t v18 = v16 ^ v6; // 0x40376a
    int64_t v19 = v7 + v6 + v17; // 0x40376d
    int64_t v20 = v18 / 0x1000000 | 0x10000000000 * v18; // 0x403770
    uint64_t v21 = v19 ^ v10; // 0x403774
    int64_t v22 = v8 + v6 + v20; // 0x403777
    int64_t v23 = v21 / 0x10000 | 0x1000000000000 * v21; // 0x40377a
    uint64_t v24 = v22 ^ v14; // 0x40377e
    int64_t v25 = v23 + v12; // 0x403781
    int64_t v26 = v24 / 0x10000 | 0x1000000000000 * v24; // 0x403784
    uint64_t v27 = v25 ^ v17; // 0x403788
    int64_t v28 = v26 + v16; // 0x40378b
    int64_t v29 = v27 / 0x8000000000000000 | 2 * v27; // 0x40378f
    uint64_t v30 = v28 ^ v20; // 0x403796
    int64_t v31 = v30 / 0x8000000000000000 | 2 * v30; // 0x4037a8
    uint64_t v32 = v13 ^ 0x1f83d9abfb41bd6b ^ *(int64_t *)(a1 + 80); // 0x4037ab
    int64_t v33 = v32 / 0x100000000 | 0x100000000 * v32; // 0x4037b8
    int64_t v34 = 2 * v6 + v6; // 0x4037c9
    int64_t v35 = v33 + 0x3c6ef372fe94f82b; // 0x4037ce
    int64_t v36 = v19 + v6 + v31; // 0x4037d1
    uint64_t v37 = v35 ^ v6; // 0x4037d7
    int64_t v38 = v37 / 0x1000000 | 0x10000000000 * v37; // 0x4037e2
    uint64_t v39 = v34 ^ 0x5be0cd19137e2179 ^ *(int64_t *)(a1 + 88); // 0x4037f0
    int64_t v40 = v13 + v6 + v38; // 0x4037f3
    int64_t v41 = v39 / 0x100000000 | 0x100000000 * v39; // 0x403800
    uint64_t v42 = v40 ^ v33; // 0x403804
    int64_t v43 = v41 - 0x5ab00ac5a0e2c90f; // 0x403807
    int64_t v44 = v42 / 0x10000 | 0x1000000000000 * v42; // 0x40380a
    uint64_t v45 = v43 ^ v6; // 0x40380e
    int64_t v46 = v44 + v35; // 0x403811
    int64_t v47 = v45 / 0x1000000 | 0x10000000000 * v45; // 0x403814
    uint64_t v48 = v46 ^ v38; // 0x403818
    int64_t v49 = v34 + v6 + v47; // 0x40381b
    int64_t v50 = v48 / 0x8000000000000000 | 2 * v48; // 0x40381e
    uint64_t v51 = v49 ^ v41; // 0x403821
    int64_t v52 = v51 / 0x10000 | 0x1000000000000 * v51; // 0x403824
    int64_t v53 = v52 + v43; // 0x403828
    uint64_t v54 = v36 ^ v52; // 0x40382b
    int64_t v55 = v54 / 0x100000000 | 0x100000000 * v54; // 0x40382e
    uint64_t v56 = v53 ^ v47; // 0x403832
    int64_t v57 = v55 + v46; // 0x403835
    int64_t v58 = v56 / 0x8000000000000000 | 2 * v56; // 0x403838
    uint64_t v59 = v57 ^ v31; // 0x40383b
    int64_t v60 = v59 / 0x1000000 | 0x10000000000 * v59; // 0x403848
    int64_t v61 = v22 + v6 + v50; // 0x40384c
    int64_t v62 = v36 + v6 + v60; // 0x403854
    uint64_t v63 = v61 ^ v23; // 0x403857
    int64_t v64 = v40 + v6 + v58; // 0x40385a
    uint64_t v65 = v62 ^ v55; // 0x403861
    int64_t v66 = v63 / 0x100000000 | 0x100000000 * v63; // 0x403864
    uint64_t v67 = v64 ^ v26; // 0x403868
    int64_t v68 = v65 / 0x10000 | 0x1000000000000 * v65; // 0x403870
    int64_t v69 = v67 / 0x100000000 | 0x100000000 * v67; // 0x403874
    int64_t v70 = v68 + v57; // 0x403878
    int64_t v71 = v66 + v53; // 0x403880
    int64_t v72 = v69 + v25; // 0x403884
    uint64_t v73 = v71 ^ v50; // 0x403887
    uint64_t v74 = v72 ^ v58; // 0x40388a
    uint64_t v75 = v70 ^ v60; // 0x40388d
    int64_t v76 = v73 / 0x1000000 | 0x10000000000 * v73; // 0x403890
    int64_t v77 = v74 / 0x1000000 | 0x10000000000 * v74; // 0x403894
    int64_t v78 = v61 + v1 + v76; // 0x403898
    int64_t v79 = v64 + v6 + v77; // 0x40389b
    int64_t v80 = v75 / 0x8000000000000000 | 2 * v75; // 0x40389e
    uint64_t v81 = v78 ^ v66; // 0x4038a1
    uint64_t v82 = v79 ^ v69; // 0x4038a4
    int64_t v83 = v81 / 0x10000 | 0x1000000000000 * v81; // 0x4038a7
    int64_t v84 = v82 / 0x10000 | 0x1000000000000 * v82; // 0x4038ab
    int64_t v85 = v83 + v71; // 0x4038af
    uint64_t v86 = v85 ^ v76; // 0x4038b9
    int64_t v87 = v86 / 0x8000000000000000 | 2 * v86; // 0x4038c1
    int64_t v88 = v84 + v72; // 0x4038c4
    int64_t v89 = v49 + v6 + v29; // 0x4038d1
    uint64_t v90 = v88 ^ v77; // 0x4038d9
    uint64_t v91 = v89 ^ v44; // 0x4038e1
    int64_t v92 = v90 / 0x8000000000000000 | 2 * v90; // 0x4038e9
    int64_t v93 = v91 / 0x100000000 | 0x100000000 * v91; // 0x4038ec
    int64_t v94 = v93 + v28; // 0x4038f0
    uint64_t v95 = v94 ^ v29; // 0x4038f3
    int64_t v96 = v95 / 0x1000000 | 0x10000000000 * v95; // 0x4038f6
    int64_t v97 = v89 + v6 + v96; // 0x4038fa
    uint64_t v98 = v97 ^ v93; // 0x4038fd
    int64_t v99 = v98 / 0x10000 | 0x1000000000000 * v98; // 0x403900
    int64_t v100 = v99 + v94; // 0x403904
    uint64_t v101 = v100 ^ v96; // 0x403907
    int64_t v102 = v101 / 0x8000000000000000 | 2 * v101; // 0x40390a
    int64_t v103 = v62 + v6 + v102; // 0x40390d
    uint64_t v104 = v103 ^ v83; // 0x403910
    int64_t v105 = v104 / 0x100000000 | 0x100000000 * v104; // 0x403918
    int64_t v106 = v105 + v88; // 0x40391c
    uint64_t v107 = v106 ^ v102; // 0x40391f
    int64_t v108 = v107 / 0x1000000 | 0x10000000000 * v107; // 0x403922
    int64_t v109 = v103 + v6 + v108; // 0x403926
    uint64_t v110 = v109 ^ v105; // 0x403929
    int64_t v111 = v110 / 0x10000 | 0x1000000000000 * v110; // 0x40392c
    int64_t v112 = v111 + v106; // 0x403930
    uint64_t v113 = v112 ^ v108; // 0x403933
    int64_t v114 = v113 / 0x8000000000000000 | 2 * v113; // 0x403936
    int64_t v115 = v78 + v6 + v80; // 0x403939
    uint64_t v116 = v115 ^ v84; // 0x403946
    int64_t v117 = v79 + v6 + v87; // 0x403949
    int64_t v118 = v116 / 0x100000000 | 0x100000000 * v116; // 0x403956
    uint64_t v119 = v117 ^ v99; // 0x40395a
    int64_t v120 = v97 + v6 + v92; // 0x403962
    int64_t v121 = v118 + v100; // 0x403965
    int64_t v122 = v119 / 0x100000000 | 0x100000000 * v119; // 0x403968
    uint64_t v123 = v121 ^ v80; // 0x403971
    int64_t v124 = v122 + v70; // 0x403974
    int64_t v125 = v123 / 0x1000000 | 0x10000000000 * v123; // 0x403977
    uint64_t v126 = v124 ^ v87; // 0x40397b
    uint64_t v127 = v120 ^ v68; // 0x40397e
    int64_t v128 = v126 / 0x1000000 | 0x10000000000 * v126; // 0x403981
    int64_t v129 = v115 + v6 + v125; // 0x403985
    int64_t v130 = v127 / 0x100000000 | 0x100000000 * v127; // 0x403988
    uint64_t v131 = v129 ^ v118; // 0x40398c
    int64_t v132 = v117 + v6 + v128; // 0x40398f
    int64_t v133 = v131 / 0x10000 | 0x1000000000000 * v131; // 0x403992
    uint64_t v134 = v132 ^ v122; // 0x403996
    int64_t v135 = v133 + v121; // 0x403999
    int64_t v136 = v134 / 0x10000 | 0x1000000000000 * v134; // 0x40399c
    uint64_t v137 = v135 ^ v125; // 0x4039a5
    int64_t v138 = v136 + v124; // 0x4039ad
    uint64_t v139 = v138 ^ v128; // 0x4039b0
    int64_t v140 = v137 / 0x8000000000000000 | 2 * v137; // 0x4039b3
    int64_t v141 = v130 + v85; // 0x4039b6
    int64_t v142 = v139 / 0x8000000000000000 | 2 * v139; // 0x4039b9
    uint64_t v143 = v141 ^ v92; // 0x4039bc
    int64_t v144 = v143 / 0x1000000 | 0x10000000000 * v143; // 0x4039c9
    int64_t v145 = v109 + v6 + v140; // 0x4039cd
    int64_t v146 = v120 + v6 + v144; // 0x4039d5
    int64_t v147 = v129 + v6 + v142; // 0x4039d8
    uint64_t v148 = v146 ^ v130; // 0x4039db
    uint64_t v149 = v147 ^ v111; // 0x4039de
    int64_t v150 = v148 / 0x10000 | 0x1000000000000 * v148; // 0x4039e6
    int64_t v151 = v149 / 0x100000000 | 0x100000000 * v149; // 0x4039ea
    int64_t v152 = v150 + v141; // 0x4039ee
    uint64_t v153 = v145 ^ v150; // 0x4039f1
    int64_t v154 = v153 / 0x100000000 | 0x100000000 * v153; // 0x4039f9
    uint64_t v155 = v152 ^ v144; // 0x4039fd
    int64_t v156 = v151 + v152; // 0x403a00
    int64_t v157 = v154 + v138; // 0x403a03
    uint64_t v158 = v156 ^ v142; // 0x403a06
    int64_t v159 = v155 / 0x8000000000000000 | 2 * v155; // 0x403a09
    uint64_t v160 = v157 ^ v140; // 0x403a0c
    int64_t v161 = v158 / 0x1000000 | 0x10000000000 * v158; // 0x403a0f
    int64_t v162 = v160 / 0x1000000 | 0x10000000000 * v160; // 0x403a13
    int64_t v163 = v147 + v6 + v161; // 0x403a17
    int64_t v164 = v145 + v6 + v162; // 0x403a1a
    uint64_t v165 = v164 ^ v154; // 0x403a1d
    int64_t v166 = v165 / 0x10000 | 0x1000000000000 * v165; // 0x403a20
    int64_t v167 = v166 + v157; // 0x403a24
    uint64_t v168 = v167 ^ v162; // 0x403a31
    int64_t v169 = v168 / 0x8000000000000000 | 2 * v168; // 0x403a34
    uint64_t v170 = v163 ^ v151; // 0x403a37
    int64_t v171 = v170 / 0x10000 | 0x1000000000000 * v170; // 0x403a43
    int64_t v172 = v132 + v1 + v159; // 0x403a47
    int64_t v173 = v146 + v6 + v114; // 0x403a4a
    int64_t v174 = v171 + v156; // 0x403a4d
    uint64_t v175 = v172 ^ v133; // 0x403a50
    uint64_t v176 = v173 ^ v136; // 0x403a53
    int64_t v177 = v175 / 0x100000000 | 0x100000000 * v175; // 0x403a60
    uint64_t v178 = v174 ^ v161; // 0x403a64
    int64_t v179 = v176 / 0x100000000 | 0x100000000 * v176; // 0x403a67
    int64_t v180 = v177 + v112; // 0x403a70
    int64_t v181 = v178 / 0x8000000000000000 | 2 * v178; // 0x403a78
    uint64_t v182 = v180 ^ v159; // 0x403a7b
    int64_t v183 = v179 + v135; // 0x403a7e
    int64_t v184 = v182 / 0x1000000 | 0x10000000000 * v182; // 0x403a81
    uint64_t v185 = v183 ^ v114; // 0x403a85
    int64_t v186 = v172 + v6 + v184; // 0x403a88
    int64_t v187 = v185 / 0x1000000 | 0x10000000000 * v185; // 0x403a8b
    uint64_t v188 = v186 ^ v177; // 0x403a8f
    int64_t v189 = v173 + v6 + v187; // 0x403a92
    int64_t v190 = v188 / 0x10000 | 0x1000000000000 * v188; // 0x403a95
    uint64_t v191 = v189 ^ v179; // 0x403a99
    int64_t v192 = v190 + v180; // 0x403a9c
    int64_t v193 = v191 / 0x10000 | 0x1000000000000 * v191; // 0x403a9f
    uint64_t v194 = v192 ^ v184; // 0x403aa3
    int64_t v195 = v193 + v183; // 0x403aa6
    int64_t v196 = v194 / 0x8000000000000000 | 2 * v194; // 0x403aa9
    uint64_t v197 = v195 ^ v187; // 0x403aac
    int64_t v198 = v197 / 0x8000000000000000 | 2 * v197; // 0x403aaf
    int64_t v199 = v164 + v1 + v198; // 0x403abb
    int64_t v200 = v163 + v6 + v169; // 0x403abe
    uint64_t v201 = v199 ^ v171; // 0x403ac1
    uint64_t v202 = v200 ^ v190; // 0x403ac4
    int64_t v203 = v201 / 0x100000000 | 0x100000000 * v201; // 0x403ad1
    int64_t v204 = v202 / 0x100000000 | 0x100000000 * v202; // 0x403ad5
    int64_t v205 = v203 + v192; // 0x403ad9
    int64_t v206 = v204 + v195; // 0x403adc
    uint64_t v207 = v205 ^ v198; // 0x403adf
    uint64_t v208 = v206 ^ v169; // 0x403ae2
    int64_t v209 = v207 / 0x1000000 | 0x10000000000 * v207; // 0x403ae5
    int64_t v210 = v208 / 0x1000000 | 0x10000000000 * v208; // 0x403ae9
    int64_t v211 = v199 + v6 + v209; // 0x403aed
    int64_t v212 = v200 + v6 + v210; // 0x403af0
    uint64_t v213 = v211 ^ v203; // 0x403af3
    uint64_t v214 = v212 ^ v204; // 0x403af6
    int64_t v215 = v213 / 0x10000 | 0x1000000000000 * v213; // 0x403af9
    int64_t v216 = v214 / 0x10000 | 0x1000000000000 * v214; // 0x403afd
    int64_t v217 = v215 + v205; // 0x403b01
    int64_t v218 = v216 + v206; // 0x403b04
    uint64_t v219 = v217 ^ v209; // 0x403b07
    uint64_t v220 = v218 ^ v210; // 0x403b0f
    int64_t v221 = v219 / 0x8000000000000000 | 2 * v219; // 0x403b12
    int64_t v222 = v220 / 0x8000000000000000 | 2 * v220; // 0x403b15
    int64_t v223 = v186 + v6 + v181; // 0x403b22
    uint64_t v224 = v223 ^ v193; // 0x403b2f
    int64_t v225 = v224 / 0x100000000 | 0x100000000 * v224; // 0x403b32
    int64_t v226 = v189 + v6 + v196; // 0x403b40
    int64_t v227 = v225 + v167; // 0x403b43
    uint64_t v228 = v226 ^ v166; // 0x403b4b
    uint64_t v229 = v227 ^ v181; // 0x403b4e
    int64_t v230 = v211 + v6 + v222; // 0x403b56
    int64_t v231 = v228 / 0x100000000 | 0x100000000 * v228; // 0x403b59
    int64_t v232 = v229 / 0x1000000 | 0x10000000000 * v229; // 0x403b5d
    int64_t v233 = v231 + v174; // 0x403b61
    int64_t v234 = v223 + v6 + v232; // 0x403b64
    uint64_t v235 = v233 ^ v196; // 0x403b67
    uint64_t v236 = v234 ^ v225; // 0x403b6a
    int64_t v237 = v235 / 0x1000000 | 0x10000000000 * v235; // 0x403b6d
    int64_t v238 = v236 / 0x10000 | 0x1000000000000 * v236; // 0x403b71
    int64_t v239 = v226 + v6 + v237; // 0x403b75
    int64_t v240 = v238 + v227; // 0x403b78
    uint64_t v241 = v239 ^ v231; // 0x403b7b
    uint64_t v242 = v240 ^ v232; // 0x403b7e
    int64_t v243 = v241 / 0x10000 | 0x1000000000000 * v241; // 0x403b81
    int64_t v244 = v242 / 0x8000000000000000 | 2 * v242; // 0x403b85
    int64_t v245 = v243 + v233; // 0x403b88
    uint64_t v246 = v230 ^ v243; // 0x403b8b
    int64_t v247 = v246 / 0x100000000 | 0x100000000 * v246; // 0x403b8e
    uint64_t v248 = v245 ^ v237; // 0x403b92
    int64_t v249 = v247 + v240; // 0x403b95
    int64_t v250 = v248 / 0x8000000000000000 | 2 * v248; // 0x403b98
    uint64_t v251 = v249 ^ v222; // 0x403b9b
    int64_t v252 = v251 / 0x1000000 | 0x10000000000 * v251; // 0x403b9e
    int64_t v253 = v212 + v6 + v244; // 0x403bac
    int64_t v254 = v230 + v6 + v252; // 0x403bb4
    uint64_t v255 = v253 ^ v215; // 0x403bb7
    int64_t v256 = v234 + v6 + v250; // 0x403bba
    uint64_t v257 = v254 ^ v247; // 0x403bc2
    int64_t v258 = v255 / 0x100000000 | 0x100000000 * v255; // 0x403bc5
    uint64_t v259 = v256 ^ v216; // 0x403bc9
    int64_t v260 = v257 / 0x10000 | 0x1000000000000 * v257; // 0x403bd1
    int64_t v261 = v258 + v245; // 0x403bd5
    int64_t v262 = v259 / 0x100000000 | 0x100000000 * v259; // 0x403bd8
    int64_t v263 = v260 + v249; // 0x403bdc
    uint64_t v264 = v261 ^ v244; // 0x403be4
    int64_t v265 = v262 + v217; // 0x403be7
    uint64_t v266 = v263 ^ v252; // 0x403bef
    int64_t v267 = v264 / 0x1000000 | 0x10000000000 * v264; // 0x403bf2
    uint64_t v268 = v265 ^ v250; // 0x403bf6
    int64_t v269 = v266 / 0x8000000000000000 | 2 * v266; // 0x403bf9
    int64_t v270 = v253 + v6 + v267; // 0x403bfc
    int64_t v271 = v268 / 0x1000000 | 0x10000000000 * v268; // 0x403bff
    uint64_t v272 = v270 ^ v258; // 0x403c03
    int64_t v273 = v256 + v6 + v271; // 0x403c06
    int64_t v274 = v272 / 0x10000 | 0x1000000000000 * v272; // 0x403c09
    uint64_t v275 = v273 ^ v262; // 0x403c0d
    int64_t v276 = v274 + v261; // 0x403c10
    int64_t v277 = v275 / 0x10000 | 0x1000000000000 * v275; // 0x403c13
    uint64_t v278 = v276 ^ v267; // 0x403c17
    int64_t v279 = v278 / 0x8000000000000000 | 2 * v278; // 0x403c24
    int64_t v280 = v277 + v265; // 0x403c27
    int64_t v281 = v239 + v6 + v221; // 0x403c34
    uint64_t v282 = v280 ^ v271; // 0x403c37
    uint64_t v283 = v281 ^ v238; // 0x403c3f
    int64_t v284 = v282 / 0x8000000000000000 | 2 * v282; // 0x403c47
    int64_t v285 = v283 / 0x100000000 | 0x100000000 * v283; // 0x403c4a
    int64_t v286 = v285 + v218; // 0x403c4e
    uint64_t v287 = v286 ^ v221; // 0x403c51
    int64_t v288 = v287 / 0x1000000 | 0x10000000000 * v287; // 0x403c54
    int64_t v289 = v281 + v6 + v288; // 0x403c58
    uint64_t v290 = v289 ^ v285; // 0x403c5b
    int64_t v291 = v290 / 0x10000 | 0x1000000000000 * v290; // 0x403c5e
    int64_t v292 = v291 + v286; // 0x403c62
    uint64_t v293 = v292 ^ v288; // 0x403c65
    int64_t v294 = v293 / 0x8000000000000000 | 2 * v293; // 0x403c68
    int64_t v295 = v254 + v6 + v294; // 0x403c6b
    uint64_t v296 = v295 ^ v274; // 0x403c6e
    int64_t v297 = v296 / 0x100000000 | 0x100000000 * v296; // 0x403c76
    int64_t v298 = v297 + v280; // 0x403c7a
    uint64_t v299 = v298 ^ v294; // 0x403c7d
    int64_t v300 = v299 / 0x1000000 | 0x10000000000 * v299; // 0x403c80
    int64_t v301 = v295 + v6 + v300; // 0x403c84
    uint64_t v302 = v301 ^ v297; // 0x403c87
    int64_t v303 = v302 / 0x10000 | 0x1000000000000 * v302; // 0x403c8a
    int64_t v304 = v303 + v298; // 0x403c8e
    uint64_t v305 = v304 ^ v300; // 0x403c91
    int64_t v306 = v305 / 0x8000000000000000 | 2 * v305; // 0x403c94
    int64_t v307 = v270 + v6 + v269; // 0x403c97
    uint64_t v308 = v307 ^ v277; // 0x403ca3
    int64_t v309 = v273 + v6 + v279; // 0x403ca6
    int64_t v310 = v308 / 0x100000000 | 0x100000000 * v308; // 0x403cb3
    uint64_t v311 = v309 ^ v291; // 0x403cb7
    int64_t v312 = v289 + v1 + v284; // 0x403cbf
    int64_t v313 = v310 + v292; // 0x403cc2
    int64_t v314 = v311 / 0x100000000 | 0x100000000 * v311; // 0x403cc5
    uint64_t v315 = v313 ^ v269; // 0x403cce
    int64_t v316 = v314 + v263; // 0x403cd1
    int64_t v317 = v315 / 0x1000000 | 0x10000000000 * v315; // 0x403cd4
    uint64_t v318 = v316 ^ v279; // 0x403cd8
    uint64_t v319 = v312 ^ v260; // 0x403cdb
    int64_t v320 = v318 / 0x1000000 | 0x10000000000 * v318; // 0x403cde
    int64_t v321 = v307 + v6 + v317; // 0x403ce2
    int64_t v322 = v319 / 0x100000000 | 0x100000000 * v319; // 0x403ce5
    uint64_t v323 = v321 ^ v310; // 0x403ce9
    int64_t v324 = v309 + v6 + v320; // 0x403cec
    int64_t v325 = v323 / 0x10000 | 0x1000000000000 * v323; // 0x403cef
    uint64_t v326 = v324 ^ v314; // 0x403cf3
    int64_t v327 = v325 + v313; // 0x403cf6
    int64_t v328 = v326 / 0x10000 | 0x1000000000000 * v326; // 0x403cf9
    uint64_t v329 = v327 ^ v317; // 0x403cfd
    int64_t v330 = v328 + v316; // 0x403d0a
    uint64_t v331 = v330 ^ v320; // 0x403d0d
    int64_t v332 = v329 / 0x8000000000000000 | 2 * v329; // 0x403d10
    int64_t v333 = v322 + v276; // 0x403d13
    int64_t v334 = v331 / 0x8000000000000000 | 2 * v331; // 0x403d16
    uint64_t v335 = v333 ^ v284; // 0x403d19
    int64_t v336 = v335 / 0x1000000 | 0x10000000000 * v335; // 0x403d26
    int64_t v337 = v301 + v6 + v332; // 0x403d2a
    int64_t v338 = v312 + v6 + v336; // 0x403d2d
    uint64_t v339 = v338 ^ v322; // 0x403d30
    int64_t v340 = v339 / 0x10000 | 0x1000000000000 * v339; // 0x403d33
    int64_t v341 = v340 + v333; // 0x403d37
    uint64_t v342 = v337 ^ v340; // 0x403d3a
    int64_t v343 = v342 / 0x100000000 | 0x100000000 * v342; // 0x403d42
    uint64_t v344 = v341 ^ v336; // 0x403d46
    int64_t v345 = v343 + v330; // 0x403d49
    int64_t v346 = v344 / 0x8000000000000000 | 2 * v344; // 0x403d4c
    uint64_t v347 = v345 ^ v332; // 0x403d4f
    int64_t v348 = v347 / 0x1000000 | 0x10000000000 * v347; // 0x403d52
    int64_t v349 = v337 + v6 + v348; // 0x403d56
    uint64_t v350 = v349 ^ v343; // 0x403d59
    int64_t v351 = v350 / 0x10000 | 0x1000000000000 * v350; // 0x403d5c
    int64_t v352 = v351 + v345; // 0x403d6a
    int64_t v353 = v321 + v6 + v334; // 0x403d6d
    uint64_t v354 = v352 ^ v348; // 0x403d70
    uint64_t v355 = v353 ^ v303; // 0x403d78
    int64_t v356 = v354 / 0x8000000000000000 | 2 * v354; // 0x403d80
    int64_t v357 = v355 / 0x100000000 | 0x100000000 * v355; // 0x403d83
    int64_t v358 = v357 + v341; // 0x403d87
    uint64_t v359 = v358 ^ v334; // 0x403d8a
    int64_t v360 = v359 / 0x1000000 | 0x10000000000 * v359; // 0x403d8d
    int64_t v361 = v353 + v6 + v360; // 0x403d91
    uint64_t v362 = v361 ^ v357; // 0x403d94
    int64_t v363 = v362 / 0x10000 | 0x1000000000000 * v362; // 0x403da1
    int64_t v364 = v324 + v6 + v346; // 0x403da5
    int64_t v365 = v338 + v6 + v306; // 0x403da8
    int64_t v366 = v363 + v358; // 0x403dab
    uint64_t v367 = v364 ^ v325; // 0x403dae
    uint64_t v368 = v365 ^ v328; // 0x403db1
    int64_t v369 = v367 / 0x100000000 | 0x100000000 * v367; // 0x403dbe
    uint64_t v370 = v366 ^ v360; // 0x403dc2
    int64_t v371 = v368 / 0x100000000 | 0x100000000 * v368; // 0x403dc5
    int64_t v372 = v369 + v304; // 0x403dce
    int64_t v373 = v370 / 0x8000000000000000 | 2 * v370; // 0x403dd6
    uint64_t v374 = v372 ^ v346; // 0x403dd9
    int64_t v375 = v371 + v327; // 0x403ddc
    int64_t v376 = v374 / 0x1000000 | 0x10000000000 * v374; // 0x403ddf
    uint64_t v377 = v375 ^ v306; // 0x403de3
    int64_t v378 = v364 + v6 + v376; // 0x403de6
    int64_t v379 = v377 / 0x1000000 | 0x10000000000 * v377; // 0x403de9
    uint64_t v380 = v378 ^ v369; // 0x403ded
    int64_t v381 = v365 + v6 + v379; // 0x403df0
    int64_t v382 = v380 / 0x10000 | 0x1000000000000 * v380; // 0x403df3
    uint64_t v383 = v381 ^ v371; // 0x403df7
    int64_t v384 = v382 + v372; // 0x403dfa
    int64_t v385 = v383 / 0x10000 | 0x1000000000000 * v383; // 0x403dfd
    uint64_t v386 = v384 ^ v376; // 0x403e01
    int64_t v387 = v385 + v375; // 0x403e04
    int64_t v388 = v386 / 0x8000000000000000 | 2 * v386; // 0x403e07
    uint64_t v389 = v387 ^ v379; // 0x403e0a
    int64_t v390 = v389 / 0x8000000000000000 | 2 * v389; // 0x403e0d
    int64_t v391 = v349 + v6 + v390; // 0x403e1a
    int64_t v392 = v361 + v6 + v356; // 0x403e1d
    uint64_t v393 = v391 ^ v363; // 0x403e25
    uint64_t v394 = v392 ^ v382; // 0x403e28
    int64_t v395 = v393 / 0x100000000 | 0x100000000 * v393; // 0x403e35
    int64_t v396 = v394 / 0x100000000 | 0x100000000 * v394; // 0x403e39
    int64_t v397 = v378 + v6 + v373; // 0x403e3d
    int64_t v398 = v395 + v384; // 0x403e40
    int64_t v399 = v396 + v387; // 0x403e43
    uint64_t v400 = v397 ^ v385; // 0x403e46
    uint64_t v401 = v398 ^ v390; // 0x403e49
    uint64_t v402 = v399 ^ v356; // 0x403e4c
    int64_t v403 = v401 / 0x1000000 | 0x10000000000 * v401; // 0x403e4f
    int64_t v404 = v402 / 0x1000000 | 0x10000000000 * v402; // 0x403e53
    int64_t v405 = v391 + v6 + v403; // 0x403e57
    int64_t v406 = v392 + v6 + v404; // 0x403e5a
    uint64_t v407 = v405 ^ v395; // 0x403e5d
    uint64_t v408 = v406 ^ v396; // 0x403e60
    int64_t v409 = v407 / 0x10000 | 0x1000000000000 * v407; // 0x403e63
    int64_t v410 = v408 / 0x10000 | 0x1000000000000 * v408; // 0x403e67
    int64_t v411 = v409 + v398; // 0x403e6b
    int64_t v412 = v410 + v399; // 0x403e6e
    uint64_t v413 = v411 ^ v403; // 0x403e71
    uint64_t v414 = v412 ^ v404; // 0x403e74
    int64_t v415 = v413 / 0x8000000000000000 | 2 * v413; // 0x403e81
    int64_t v416 = v414 / 0x8000000000000000 | 2 * v414; // 0x403e84
    int64_t v417 = v400 / 0x100000000 | 0x100000000 * v400; // 0x403e8c
    int64_t v418 = v417 + v352; // 0x403e9a
    int64_t v419 = v381 + v6 + v388; // 0x403ea2
    uint64_t v420 = v418 ^ v373; // 0x403ea5
    uint64_t v421 = v419 ^ v351; // 0x403ead
    int64_t v422 = v420 / 0x1000000 | 0x10000000000 * v420; // 0x403eb5
    int64_t v423 = v405 + v6 + v416; // 0x403eb9
    int64_t v424 = v421 / 0x100000000 | 0x100000000 * v421; // 0x403ebc
    int64_t v425 = v397 + v6 + v422; // 0x403ec0
    int64_t v426 = v424 + v366; // 0x403ec3
    uint64_t v427 = v425 ^ v417; // 0x403ec6
    uint64_t v428 = v426 ^ v388; // 0x403ec9
    int64_t v429 = v427 / 0x10000 | 0x1000000000000 * v427; // 0x403ecc
    int64_t v430 = v428 / 0x1000000 | 0x10000000000 * v428; // 0x403ed0
    int64_t v431 = v429 + v418; // 0x403ed4
    int64_t v432 = v419 + v6 + v430; // 0x403ed7
    uint64_t v433 = v431 ^ v422; // 0x403eda
    uint64_t v434 = v432 ^ v424; // 0x403edd
    int64_t v435 = v433 / 0x8000000000000000 | 2 * v433; // 0x403ee0
    int64_t v436 = v434 / 0x10000 | 0x1000000000000 * v434; // 0x403ee3
    int64_t v437 = v436 + v426; // 0x403ee7
    uint64_t v438 = v423 ^ v436; // 0x403eea
    int64_t v439 = v438 / 0x100000000 | 0x100000000 * v438; // 0x403eed
    uint64_t v440 = v437 ^ v430; // 0x403ef1
    int64_t v441 = v439 + v431; // 0x403ef4
    int64_t v442 = v440 / 0x8000000000000000 | 2 * v440; // 0x403ef7
    uint64_t v443 = v441 ^ v416; // 0x403efa
    int64_t v444 = v443 / 0x1000000 | 0x10000000000 * v443; // 0x403efd
    int64_t v445 = v406 + v1 + v435; // 0x403f0a
    int64_t v446 = v423 + v6 + v444; // 0x403f12
    uint64_t v447 = v445 ^ v409; // 0x403f15
    int64_t v448 = v425 + v6 + v442; // 0x403f18
    uint64_t v449 = v446 ^ v439; // 0x403f20
    int64_t v450 = v447 / 0x100000000 | 0x100000000 * v447; // 0x403f23
    uint64_t v451 = v448 ^ v410; // 0x403f27
    int64_t v452 = v449 / 0x10000 | 0x1000000000000 * v449; // 0x403f2f
    int64_t v453 = v450 + v437; // 0x403f33
    int64_t v454 = v451 / 0x100000000 | 0x100000000 * v451; // 0x403f36
    int64_t v455 = v452 + v441; // 0x403f3a
    uint64_t v456 = v453 ^ v435; // 0x403f42
    int64_t v457 = v454 + v411; // 0x403f45
    uint64_t v458 = v455 ^ v444; // 0x403f48
    int64_t v459 = v456 / 0x1000000 | 0x10000000000 * v456; // 0x403f50
    uint64_t v460 = v457 ^ v442; // 0x403f54
    int64_t v461 = v458 / 0x8000000000000000 | 2 * v458; // 0x403f57
    int64_t v462 = v445 + v6 + v459; // 0x403f5a
    int64_t v463 = v460 / 0x1000000 | 0x10000000000 * v460; // 0x403f5d
    uint64_t v464 = v462 ^ v450; // 0x403f61
    int64_t v465 = v448 + v6 + v463; // 0x403f64
    int64_t v466 = v464 / 0x10000 | 0x1000000000000 * v464; // 0x403f67
    uint64_t v467 = v465 ^ v454; // 0x403f6b
    int64_t v468 = v466 + v453; // 0x403f6e
    int64_t v469 = v467 / 0x10000 | 0x1000000000000 * v467; // 0x403f71
    uint64_t v470 = v468 ^ v459; // 0x403f75
    int64_t v471 = v470 / 0x8000000000000000 | 2 * v470; // 0x403f82
    int64_t v472 = v469 + v457; // 0x403f85
    int64_t v473 = v432 + v6 + v415; // 0x403f8d
    uint64_t v474 = v472 ^ v463; // 0x403f90
    uint64_t v475 = v473 ^ v429; // 0x403f93
    int64_t v476 = v474 / 0x8000000000000000 | 2 * v474; // 0x403fa0
    int64_t v477 = v475 / 0x100000000 | 0x100000000 * v475; // 0x403fa3
    int64_t v478 = v477 + v412; // 0x403fac
    uint64_t v479 = v478 ^ v415; // 0x403faf
    int64_t v480 = v479 / 0x1000000 | 0x10000000000 * v479; // 0x403fb2
    int64_t v481 = v473 + v6 + v480; // 0x403fb6
    uint64_t v482 = v481 ^ v477; // 0x403fb9
    int64_t v483 = v482 / 0x10000 | 0x1000000000000 * v482; // 0x403fbc
    int64_t v484 = v483 + v478; // 0x403fc0
    uint64_t v485 = v484 ^ v480; // 0x403fc3
    int64_t v486 = v485 / 0x8000000000000000 | 2 * v485; // 0x403fc6
    int64_t v487 = v446 + v6 + v486; // 0x403fc9
    uint64_t v488 = v487 ^ v466; // 0x403fcc
    int64_t v489 = v488 / 0x100000000 | 0x100000000 * v488; // 0x403fd4
    int64_t v490 = v489 + v472; // 0x403fd8
    uint64_t v491 = v490 ^ v486; // 0x403fdb
    int64_t v492 = v491 / 0x1000000 | 0x10000000000 * v491; // 0x403fde
    int64_t v493 = v487 + v6 + v492; // 0x403fe2
    uint64_t v494 = v493 ^ v489; // 0x403fe5
    int64_t v495 = v494 / 0x10000 | 0x1000000000000 * v494; // 0x403fe8
    int64_t v496 = v495 + v490; // 0x403fec
    uint64_t v497 = v496 ^ v492; // 0x403fef
    int64_t v498 = v497 / 0x8000000000000000 | 2 * v497; // 0x403ff2
    int64_t v499 = v462 + v6 + v461; // 0x403ff5
    uint64_t v500 = v499 ^ v469; // 0x404002
    int64_t v501 = v465 + v6 + v471; // 0x404005
    int64_t v502 = v500 / 0x100000000 | 0x100000000 * v500; // 0x404012
    uint64_t v503 = v501 ^ v483; // 0x404016
    int64_t v504 = v502 + v484; // 0x404022
    int64_t v505 = v503 / 0x100000000 | 0x100000000 * v503; // 0x404025
    int64_t v506 = v481 + v6 + v476; // 0x404029
    uint64_t v507 = v504 ^ v461; // 0x40402c
    int64_t v508 = v505 + v455; // 0x40402f
    uint64_t v509 = v506 ^ v452; // 0x404032
    int64_t v510 = v507 / 0x1000000 | 0x10000000000 * v507; // 0x404035
    uint64_t v511 = v508 ^ v471; // 0x404039
    int64_t v512 = v509 / 0x100000000 | 0x100000000 * v509; // 0x40403c
    int64_t v513 = v499 + v6 + v510; // 0x404040
    int64_t v514 = v511 / 0x1000000 | 0x10000000000 * v511; // 0x404043
    uint64_t v515 = v513 ^ v502; // 0x404047
    int64_t v516 = v501 + v1 + v514; // 0x40404a
    int64_t v517 = v515 / 0x10000 | 0x1000000000000 * v515; // 0x40404d
    uint64_t v518 = v516 ^ v505; // 0x404051
    int64_t v519 = v517 + v504; // 0x404054
    int64_t v520 = v518 / 0x10000 | 0x1000000000000 * v518; // 0x404057
    uint64_t v521 = v519 ^ v510; // 0x404060
    int64_t v522 = v520 + v508; // 0x404068
    uint64_t v523 = v522 ^ v514; // 0x40406b
    int64_t v524 = v521 / 0x8000000000000000 | 2 * v521; // 0x40406e
    int64_t v525 = v512 + v468; // 0x404071
    int64_t v526 = v523 / 0x8000000000000000 | 2 * v523; // 0x404074
    uint64_t v527 = v525 ^ v476; // 0x404077
    int64_t v528 = v527 / 0x1000000 | 0x10000000000 * v527; // 0x404084
    int64_t v529 = v493 + v6 + v524; // 0x404088
    int64_t v530 = v506 + v6 + v528; // 0x404090
    int64_t v531 = v513 + v6 + v526; // 0x404093
    uint64_t v532 = v530 ^ v512; // 0x404096
    uint64_t v533 = v531 ^ v495; // 0x404099
    int64_t v534 = v532 / 0x10000 | 0x1000000000000 * v532; // 0x4040a1
    int64_t v535 = v533 / 0x100000000 | 0x100000000 * v533; // 0x4040a5
    int64_t v536 = v534 + v525; // 0x4040a9
    uint64_t v537 = v529 ^ v534; // 0x4040ac
    int64_t v538 = v537 / 0x100000000 | 0x100000000 * v537; // 0x4040b4
    uint64_t v539 = v536 ^ v528; // 0x4040b8
    int64_t v540 = v535 + v536; // 0x4040bb
    int64_t v541 = v538 + v522; // 0x4040be
    uint64_t v542 = v540 ^ v526; // 0x4040c1
    int64_t v543 = v539 / 0x8000000000000000 | 2 * v539; // 0x4040c4
    uint64_t v544 = v541 ^ v524; // 0x4040c7
    int64_t v545 = v542 / 0x1000000 | 0x10000000000 * v542; // 0x4040ca
    int64_t v546 = v544 / 0x1000000 | 0x10000000000 * v544; // 0x4040ce
    int64_t v547 = v531 + v6 + v545; // 0x4040d2
    int64_t v548 = v529 + v6 + v546; // 0x4040d5
    uint64_t v549 = v548 ^ v538; // 0x4040d8
    int64_t v550 = v549 / 0x10000 | 0x1000000000000 * v549; // 0x4040db
    int64_t v551 = v550 + v541; // 0x4040df
    uint64_t v552 = v551 ^ v546; // 0x4040ec
    int64_t v553 = v552 / 0x8000000000000000 | 2 * v552; // 0x4040ef
    uint64_t v554 = v547 ^ v535; // 0x4040f2
    int64_t v555 = v554 / 0x10000 | 0x1000000000000 * v554; // 0x4040ff
    int64_t v556 = v516 + v6 + v543; // 0x404103
    int64_t v557 = v530 + v6 + v498; // 0x404106
    int64_t v558 = v555 + v540; // 0x404109
    uint64_t v559 = v556 ^ v517; // 0x40410c
    uint64_t v560 = v557 ^ v520; // 0x40410f
    int64_t v561 = v559 / 0x100000000 | 0x100000000 * v559; // 0x40411c
    uint64_t v562 = v558 ^ v545; // 0x404120
    int64_t v563 = v560 / 0x100000000 | 0x100000000 * v560; // 0x404123
    int64_t v564 = v561 + v496; // 0x40412c
    int64_t v565 = v562 / 0x8000000000000000 | 2 * v562; // 0x404134
    uint64_t v566 = v564 ^ v543; // 0x404137
    int64_t v567 = v563 + v519; // 0x40413a
    int64_t v568 = v566 / 0x1000000 | 0x10000000000 * v566; // 0x40413d
    uint64_t v569 = v567 ^ v498; // 0x404141
    int64_t v570 = v556 + v6 + v568; // 0x404144
    int64_t v571 = v569 / 0x1000000 | 0x10000000000 * v569; // 0x404147
    uint64_t v572 = v570 ^ v561; // 0x40414b
    int64_t v573 = v557 + v6 + v571; // 0x40414e
    int64_t v574 = v572 / 0x10000 | 0x1000000000000 * v572; // 0x404151
    uint64_t v575 = v573 ^ v563; // 0x404155
    int64_t v576 = v574 + v564; // 0x404158
    int64_t v577 = v575 / 0x10000 | 0x1000000000000 * v575; // 0x40415b
    uint64_t v578 = v576 ^ v568; // 0x40415f
    int64_t v579 = v577 + v567; // 0x404162
    int64_t v580 = v578 / 0x8000000000000000 | 2 * v578; // 0x404165
    uint64_t v581 = v579 ^ v571; // 0x404168
    int64_t v582 = v581 / 0x8000000000000000 | 2 * v581; // 0x40416b
    int64_t v583 = v548 + v6 + v582; // 0x404178
    int64_t v584 = v547 + v6 + v553; // 0x40417b
    uint64_t v585 = v583 ^ v555; // 0x404183
    uint64_t v586 = v584 ^ v574; // 0x404186
    int64_t v587 = v585 / 0x100000000 | 0x100000000 * v585; // 0x404193
    int64_t v588 = v586 / 0x100000000 | 0x100000000 * v586; // 0x404197
    int64_t v589 = v570 + v6 + v565; // 0x40419b
    int64_t v590 = v587 + v576; // 0x40419e
    int64_t v591 = v588 + v579; // 0x4041a1
    uint64_t v592 = v589 ^ v577; // 0x4041a4
    uint64_t v593 = v590 ^ v582; // 0x4041a7
    uint64_t v594 = v591 ^ v553; // 0x4041aa
    int64_t v595 = v593 / 0x1000000 | 0x10000000000 * v593; // 0x4041ad
    int64_t v596 = v594 / 0x1000000 | 0x10000000000 * v594; // 0x4041b1
    int64_t v597 = v583 + v6 + v595; // 0x4041b5
    int64_t v598 = v584 + v6 + v596; // 0x4041b8
    uint64_t v599 = v597 ^ v587; // 0x4041bb
    uint64_t v600 = v598 ^ v588; // 0x4041be
    int64_t v601 = v599 / 0x10000 | 0x1000000000000 * v599; // 0x4041c1
    int64_t v602 = v600 / 0x10000 | 0x1000000000000 * v600; // 0x4041c5
    int64_t v603 = v601 + v590; // 0x4041c9
    int64_t v604 = v602 + v591; // 0x4041cc
    uint64_t v605 = v603 ^ v595; // 0x4041cf
    uint64_t v606 = v604 ^ v596; // 0x4041d2
    int64_t v607 = v605 / 0x8000000000000000 | 2 * v605; // 0x4041da
    int64_t v608 = v606 / 0x8000000000000000 | 2 * v606; // 0x4041dd
    int64_t v609 = v592 / 0x100000000 | 0x100000000 * v592; // 0x4041e5
    int64_t v610 = v609 + v551; // 0x4041f8
    int64_t v611 = v573 + v6 + v580; // 0x4041fb
    uint64_t v612 = v610 ^ v565; // 0x404203
    uint64_t v613 = v611 ^ v550; // 0x40420b
    int64_t v614 = v612 / 0x1000000 | 0x10000000000 * v612; // 0x404213
    int64_t v615 = v597 + v6 + v608; // 0x404217
    int64_t v616 = v613 / 0x100000000 | 0x100000000 * v613; // 0x40421a
    int64_t v617 = v589 + v6 + v614; // 0x40421e
    int64_t v618 = v616 + v558; // 0x404221
    uint64_t v619 = v617 ^ v609; // 0x404224
    uint64_t v620 = v618 ^ v580; // 0x404227
    int64_t v621 = v619 / 0x10000 | 0x1000000000000 * v619; // 0x40422a
    int64_t v622 = v620 / 0x1000000 | 0x10000000000 * v620; // 0x40422e
    int64_t v623 = v621 + v610; // 0x404232
    int64_t v624 = v611 + v6 + v622; // 0x404235
    uint64_t v625 = v623 ^ v614; // 0x404238
    uint64_t v626 = v624 ^ v616; // 0x40423b
    int64_t v627 = v625 / 0x8000000000000000 | 2 * v625; // 0x40423e
    int64_t v628 = v626 / 0x10000 | 0x1000000000000 * v626; // 0x404241
    int64_t v629 = v628 + v618; // 0x404245
    uint64_t v630 = v615 ^ v628; // 0x404248
    int64_t v631 = v630 / 0x100000000 | 0x100000000 * v630; // 0x40424b
    uint64_t v632 = v629 ^ v622; // 0x40424f
    int64_t v633 = v631 + v623; // 0x404252
    int64_t v634 = v632 / 0x8000000000000000 | 2 * v632; // 0x404255
    uint64_t v635 = v633 ^ v608; // 0x404258
    int64_t v636 = v635 / 0x1000000 | 0x10000000000 * v635; // 0x40425b
    int64_t v637 = v598 + v6 + v627; // 0x404269
    int64_t v638 = v615 + v6 + v636; // 0x404271
    uint64_t v639 = v637 ^ v601; // 0x404274
    int64_t v640 = v617 + v6 + v634; // 0x404277
    uint64_t v641 = v638 ^ v631; // 0x40427f
    int64_t v642 = v639 / 0x100000000 | 0x100000000 * v639; // 0x404282
    uint64_t v643 = v640 ^ v602; // 0x404286
    int64_t v644 = v641 / 0x10000 | 0x1000000000000 * v641; // 0x40428e
    int64_t v645 = v642 + v629; // 0x404292
    int64_t v646 = v643 / 0x100000000 | 0x100000000 * v643; // 0x404295
    int64_t v647 = v644 + v633; // 0x404299
    uint64_t v648 = v645 ^ v627; // 0x4042a1
    int64_t v649 = v646 + v603; // 0x4042a4
    uint64_t v650 = v647 ^ v636; // 0x4042ac
    int64_t v651 = v648 / 0x1000000 | 0x10000000000 * v648; // 0x4042af
    uint64_t v652 = v649 ^ v634; // 0x4042b3
    int64_t v653 = v650 / 0x8000000000000000 | 2 * v650; // 0x4042b6
    int64_t v654 = v637 + v6 + v651; // 0x4042b9
    int64_t v655 = v652 / 0x1000000 | 0x10000000000 * v652; // 0x4042bc
    uint64_t v656 = v654 ^ v642; // 0x4042c0
    int64_t v657 = v640 + v6 + v655; // 0x4042c3
    int64_t v658 = v656 / 0x10000 | 0x1000000000000 * v656; // 0x4042c6
    uint64_t v659 = v657 ^ v646; // 0x4042ca
    int64_t v660 = v658 + v645; // 0x4042cd
    int64_t v661 = v659 / 0x10000 | 0x1000000000000 * v659; // 0x4042d0
    uint64_t v662 = v660 ^ v651; // 0x4042d4
    int64_t v663 = v662 / 0x8000000000000000 | 2 * v662; // 0x4042e1
    int64_t v664 = v661 + v649; // 0x4042e4
    int64_t v665 = v624 + v6 + v607; // 0x4042f1
    uint64_t v666 = v664 ^ v655; // 0x4042f4
    uint64_t v667 = v665 ^ v621; // 0x4042fc
    int64_t v668 = v666 / 0x8000000000000000 | 2 * v666; // 0x404303
    int64_t v669 = v667 / 0x100000000 | 0x100000000 * v667; // 0x404306
    int64_t v670 = v669 + v604; // 0x40430a
    uint64_t v671 = v670 ^ v607; // 0x40430d
    int64_t v672 = v671 / 0x1000000 | 0x10000000000 * v671; // 0x404310
    int64_t v673 = v665 + v1 + v672; // 0x404314
    uint64_t v674 = v673 ^ v669; // 0x404317
    int64_t v675 = v674 / 0x10000 | 0x1000000000000 * v674; // 0x40431a
    int64_t v676 = v675 + v670; // 0x40431e
    uint64_t v677 = v676 ^ v672; // 0x404321
    int64_t v678 = v677 / 0x8000000000000000 | 2 * v677; // 0x404324
    int64_t v679 = v638 + v6 + v678; // 0x404327
    uint64_t v680 = v679 ^ v658; // 0x40432a
    int64_t v681 = v680 / 0x100000000 | 0x100000000 * v680; // 0x404331
    int64_t v682 = v681 + v664; // 0x404335
    uint64_t v683 = v682 ^ v678; // 0x404338
    int64_t v684 = v683 / 0x1000000 | 0x10000000000 * v683; // 0x40433b
    int64_t v685 = v679 + v1 + v684; // 0x40433f
    uint64_t v686 = v685 ^ v681; // 0x404342
    int64_t v687 = v686 / 0x10000 | 0x1000000000000 * v686; // 0x404345
    int64_t v688 = v687 + v682; // 0x404349
    uint64_t v689 = v688 ^ v684; // 0x40434c
    int64_t v690 = v689 / 0x8000000000000000 | 2 * v689; // 0x40434f
    int64_t v691 = v654 + v6 + v653; // 0x404352
    uint64_t v692 = v691 ^ v661; // 0x40435f
    int64_t v693 = v657 + v6 + v663; // 0x404362
    int64_t v694 = v692 / 0x100000000 | 0x100000000 * v692; // 0x40436f
    uint64_t v695 = v693 ^ v675; // 0x404373
    int64_t v696 = v673 + v6 + v668; // 0x40437b
    int64_t v697 = v694 + v676; // 0x40437e
    int64_t v698 = v695 / 0x100000000 | 0x100000000 * v695; // 0x404381
    uint64_t v699 = v697 ^ v653; // 0x40438a
    int64_t v700 = v698 + v647; // 0x40438d
    int64_t v701 = v699 / 0x1000000 | 0x10000000000 * v699; // 0x404390
    uint64_t v702 = v700 ^ v663; // 0x404394
    uint64_t v703 = v696 ^ v644; // 0x404397
    int64_t v704 = v702 / 0x1000000 | 0x10000000000 * v702; // 0x40439a
    int64_t v705 = v691 + v6 + v701; // 0x40439e
    int64_t v706 = v703 / 0x100000000 | 0x100000000 * v703; // 0x4043a1
    uint64_t v707 = v705 ^ v694; // 0x4043a5
    int64_t v708 = v693 + v6 + v704; // 0x4043a8
    int64_t v709 = v707 / 0x10000 | 0x1000000000000 * v707; // 0x4043ab
    uint64_t v710 = v708 ^ v698; // 0x4043af
    int64_t v711 = v709 + v697; // 0x4043b2
    int64_t v712 = v710 / 0x10000 | 0x1000000000000 * v710; // 0x4043b5
    uint64_t v713 = v711 ^ v701; // 0x4043b9
    int64_t v714 = v712 + v700; // 0x4043c6
    uint64_t v715 = v714 ^ v704; // 0x4043c9
    int64_t v716 = v713 / 0x8000000000000000 | 2 * v713; // 0x4043cc
    int64_t v717 = v706 + v660; // 0x4043cf
    int64_t v718 = v715 / 0x8000000000000000 | 2 * v715; // 0x4043d2
    uint64_t v719 = v717 ^ v668; // 0x4043d5
    int64_t v720 = v719 / 0x1000000 | 0x10000000000 * v719; // 0x4043e2
    int64_t v721 = v685 + v6 + v716; // 0x4043e6
    int64_t v722 = v696 + v6 + v720; // 0x4043e9
    uint64_t v723 = v722 ^ v706; // 0x4043ec
    int64_t v724 = v723 / 0x10000 | 0x1000000000000 * v723; // 0x4043ef
    int64_t v725 = v724 + v717; // 0x4043f3
    uint64_t v726 = v721 ^ v724; // 0x4043f6
    int64_t v727 = v726 / 0x100000000 | 0x100000000 * v726; // 0x4043fe
    uint64_t v728 = v725 ^ v720; // 0x404402
    int64_t v729 = v727 + v714; // 0x404405
    int64_t v730 = v728 / 0x8000000000000000 | 2 * v728; // 0x404408
    uint64_t v731 = v729 ^ v716; // 0x40440b
    int64_t v732 = v731 / 0x1000000 | 0x10000000000 * v731; // 0x40440e
    int64_t v733 = v721 + v6 + v732; // 0x404412
    uint64_t v734 = v733 ^ v727; // 0x404415
    int64_t v735 = v734 / 0x10000 | 0x1000000000000 * v734; // 0x404418
    int64_t v736 = v735 + v729; // 0x404426
    int64_t v737 = v705 + v6 + v718; // 0x404429
    uint64_t v738 = v736 ^ v732; // 0x40442c
    uint64_t v739 = v737 ^ v687; // 0x404434
    int64_t v740 = v738 / 0x8000000000000000 | 2 * v738; // 0x40443c
    int64_t v741 = v739 / 0x100000000 | 0x100000000 * v739; // 0x40443f
    int64_t v742 = v741 + v725; // 0x404443
    uint64_t v743 = v742 ^ v718; // 0x404446
    int64_t v744 = v743 / 0x1000000 | 0x10000000000 * v743; // 0x404449
    int64_t v745 = v737 + v6 + v744; // 0x40444d
    uint64_t v746 = v745 ^ v741; // 0x404450
    int64_t v747 = v746 / 0x10000 | 0x1000000000000 * v746; // 0x40445d
    int64_t v748 = v708 + v6 + v730; // 0x404461
    int64_t v749 = v722 + v6 + v690; // 0x404464
    int64_t v750 = v747 + v742; // 0x404467
    uint64_t v751 = v748 ^ v709; // 0x40446a
    uint64_t v752 = v749 ^ v712; // 0x40446d
    int64_t v753 = v751 / 0x100000000 | 0x100000000 * v751; // 0x40447a
    uint64_t v754 = v750 ^ v744; // 0x40447e
    int64_t v755 = v752 / 0x100000000 | 0x100000000 * v752; // 0x404481
    int64_t v756 = v753 + v688; // 0x40448a
    int64_t v757 = v754 / 0x8000000000000000 | 2 * v754; // 0x404492
    uint64_t v758 = v756 ^ v730; // 0x404495
    int64_t v759 = v755 + v711; // 0x404498
    int64_t v760 = v758 / 0x1000000 | 0x10000000000 * v758; // 0x40449b
    uint64_t v761 = v759 ^ v690; // 0x40449f
    int64_t v762 = v748 + v6 + v760; // 0x4044a2
    int64_t v763 = v761 / 0x1000000 | 0x10000000000 * v761; // 0x4044a5
    uint64_t v764 = v762 ^ v753; // 0x4044a9
    int64_t v765 = v749 + v6 + v763; // 0x4044ac
    int64_t v766 = v764 / 0x10000 | 0x1000000000000 * v764; // 0x4044af
    uint64_t v767 = v765 ^ v755; // 0x4044b3
    int64_t v768 = v766 + v756; // 0x4044b6
    int64_t v769 = v767 / 0x10000 | 0x1000000000000 * v767; // 0x4044b9
    uint64_t v770 = v768 ^ v760; // 0x4044bd
    int64_t v771 = v769 + v759; // 0x4044c0
    int64_t v772 = v770 / 0x8000000000000000 | 2 * v770; // 0x4044c3
    uint64_t v773 = v771 ^ v763; // 0x4044c6
    int64_t v774 = v773 / 0x8000000000000000 | 2 * v773; // 0x4044c9
    int64_t v775 = v733 + v6 + v774; // 0x4044d6
    int64_t v776 = v745 + v6 + v740; // 0x4044d9
    uint64_t v777 = v775 ^ v747; // 0x4044e0
    uint64_t v778 = v776 ^ v766; // 0x4044e3
    int64_t v779 = v777 / 0x100000000 | 0x100000000 * v777; // 0x4044f0
    int64_t v780 = v778 / 0x100000000 | 0x100000000 * v778; // 0x4044f4
    int64_t v781 = v762 + v1 + v757; // 0x4044f8
    int64_t v782 = v779 + v768; // 0x4044fb
    int64_t v783 = v780 + v771; // 0x4044fe
    uint64_t v784 = v781 ^ v769; // 0x404501
    uint64_t v785 = v782 ^ v774; // 0x404504
    uint64_t v786 = v783 ^ v740; // 0x404507
    int64_t v787 = v785 / 0x1000000 | 0x10000000000 * v785; // 0x40450a
    int64_t v788 = v786 / 0x1000000 | 0x10000000000 * v786; // 0x40450e
    int64_t v789 = v775 + v6 + v787; // 0x404512
    int64_t v790 = v776 + v6 + v788; // 0x404515
    uint64_t v791 = v789 ^ v779; // 0x404518
    uint64_t v792 = v790 ^ v780; // 0x40451b
    int64_t v793 = v791 / 0x10000 | 0x1000000000000 * v791; // 0x40451e
    int64_t v794 = v792 / 0x10000 | 0x1000000000000 * v792; // 0x404522
    int64_t v795 = v793 + v782; // 0x404526
    int64_t v796 = v794 + v783; // 0x404529
    uint64_t v797 = v795 ^ v787; // 0x40452c
    uint64_t v798 = v796 ^ v788; // 0x40452f
    int64_t v799 = v797 / 0x8000000000000000 | 2 * v797; // 0x40453c
    int64_t v800 = v798 / 0x8000000000000000 | 2 * v798; // 0x40453f
    int64_t v801 = v784 / 0x100000000 | 0x100000000 * v784; // 0x404547
    int64_t v802 = v801 + v736; // 0x404555
    int64_t v803 = v765 + v6 + v772; // 0x40455d
    uint64_t v804 = v802 ^ v757; // 0x404560
    uint64_t v805 = v803 ^ v735; // 0x404568
    int64_t v806 = v804 / 0x1000000 | 0x10000000000 * v804; // 0x404570
    int64_t v807 = v789 + v6 + v800; // 0x404574
    int64_t v808 = v805 / 0x100000000 | 0x100000000 * v805; // 0x404577
    int64_t v809 = v781 + v6 + v806; // 0x40457b
    int64_t v810 = v808 + v750; // 0x40457e
    uint64_t v811 = v809 ^ v801; // 0x404581
    uint64_t v812 = v810 ^ v772; // 0x404584
    int64_t v813 = v811 / 0x10000 | 0x1000000000000 * v811; // 0x404587
    int64_t v814 = v812 / 0x1000000 | 0x10000000000 * v812; // 0x40458b
    int64_t v815 = v813 + v802; // 0x40458f
    int64_t v816 = v803 + v6 + v814; // 0x404592
    uint64_t v817 = v815 ^ v806; // 0x404595
    uint64_t v818 = v816 ^ v808; // 0x404598
    int64_t v819 = v817 / 0x8000000000000000 | 2 * v817; // 0x40459b
    int64_t v820 = v818 / 0x10000 | 0x1000000000000 * v818; // 0x40459e
    int64_t v821 = v820 + v810; // 0x4045a2
    uint64_t v822 = v807 ^ v820; // 0x4045a5
    int64_t v823 = v822 / 0x100000000 | 0x100000000 * v822; // 0x4045a8
    uint64_t v824 = v821 ^ v814; // 0x4045ac
    int64_t v825 = v823 + v815; // 0x4045af
    int64_t v826 = v824 / 0x8000000000000000 | 2 * v824; // 0x4045b2
    uint64_t v827 = v825 ^ v800; // 0x4045b5
    int64_t v828 = v827 / 0x1000000 | 0x10000000000 * v827; // 0x4045b8
    int64_t v829 = v790 + v6 + v819; // 0x4045c6
    int64_t v830 = v807 + v6 + v828; // 0x4045ce
    uint64_t v831 = v829 ^ v793; // 0x4045d1
    int64_t v832 = v809 + v6 + v826; // 0x4045d4
    uint64_t v833 = v830 ^ v823; // 0x4045dc
    int64_t v834 = v831 / 0x100000000 | 0x100000000 * v831; // 0x4045df
    uint64_t v835 = v832 ^ v794; // 0x4045e3
    int64_t v836 = v833 / 0x10000 | 0x1000000000000 * v833; // 0x4045eb
    int64_t v837 = v834 + v821; // 0x4045ef
    int64_t v838 = v835 / 0x100000000 | 0x100000000 * v835; // 0x4045f2
    int64_t v839 = v836 + v825; // 0x4045f6
    uint64_t v840 = v837 ^ v819; // 0x4045fe
    int64_t v841 = v838 + v795; // 0x404601
    uint64_t v842 = v839 ^ v828; // 0x404604
    int64_t v843 = v840 / 0x1000000 | 0x10000000000 * v840; // 0x40460c
    uint64_t v844 = v841 ^ v826; // 0x404610
    int64_t v845 = v842 / 0x8000000000000000 | 2 * v842; // 0x404613
    int64_t v846 = v829 + v6 + v843; // 0x404616
    int64_t v847 = v844 / 0x1000000 | 0x10000000000 * v844; // 0x404619
    uint64_t v848 = v846 ^ v834; // 0x40461d
    int64_t v849 = v832 + v6 + v847; // 0x404620
    int64_t v850 = v848 / 0x10000 | 0x1000000000000 * v848; // 0x404623
    uint64_t v851 = v849 ^ v838; // 0x404627
    int64_t v852 = v850 + v837; // 0x40462a
    int64_t v853 = v851 / 0x10000 | 0x1000000000000 * v851; // 0x40462d
    uint64_t v854 = v852 ^ v843; // 0x404631
    int64_t v855 = v854 / 0x8000000000000000 | 2 * v854; // 0x40463e
    int64_t v856 = v853 + v841; // 0x404641
    int64_t v857 = v816 + v6 + v799; // 0x404649
    uint64_t v858 = v856 ^ v847; // 0x40464c
    uint64_t v859 = v857 ^ v813; // 0x40464f
    int64_t v860 = v858 / 0x8000000000000000 | 2 * v858; // 0x40465c
    int64_t v861 = v859 / 0x100000000 | 0x100000000 * v859; // 0x40465f
    int64_t v862 = v861 + v796; // 0x404668
    uint64_t v863 = v862 ^ v799; // 0x40466b
    int64_t v864 = v863 / 0x1000000 | 0x10000000000 * v863; // 0x40466e
    int64_t v865 = v857 + v6 + v864; // 0x404672
    uint64_t v866 = v865 ^ v861; // 0x404675
    int64_t v867 = v866 / 0x10000 | 0x1000000000000 * v866; // 0x404678
    int64_t v868 = v867 + v862; // 0x40467c
    uint64_t v869 = v868 ^ v864; // 0x40467f
    int64_t v870 = v869 / 0x8000000000000000 | 2 * v869; // 0x404682
    int64_t v871 = v830 + v6 + v870; // 0x404685
    uint64_t v872 = v871 ^ v850; // 0x404688
    int64_t v873 = v872 / 0x100000000 | 0x100000000 * v872; // 0x404690
    int64_t v874 = v873 + v856; // 0x404694
    uint64_t v875 = v874 ^ v870; // 0x404697
    int64_t v876 = v875 / 0x1000000 | 0x10000000000 * v875; // 0x40469a
    int64_t v877 = v871 + v6 + v876; // 0x40469e
    uint64_t v878 = v877 ^ v873; // 0x4046a1
    int64_t v879 = v878 / 0x10000 | 0x1000000000000 * v878; // 0x4046a4
    int64_t v880 = v879 + v874; // 0x4046a8
    uint64_t v881 = v880 ^ v876; // 0x4046ab
    int64_t v882 = v881 / 0x8000000000000000 | 2 * v881; // 0x4046ae
    int64_t v883 = v846 + v6 + v845; // 0x4046b1
    uint64_t v884 = v883 ^ v853; // 0x4046be
    int64_t v885 = v849 + v6 + v855; // 0x4046c1
    int64_t v886 = v884 / 0x100000000 | 0x100000000 * v884; // 0x4046ce
    uint64_t v887 = v885 ^ v867; // 0x4046d2
    int64_t v888 = v865 + v6 + v860; // 0x4046da
    int64_t v889 = v886 + v868; // 0x4046dd
    int64_t v890 = v887 / 0x100000000 | 0x100000000 * v887; // 0x4046e0
    uint64_t v891 = v889 ^ v845; // 0x4046e9
    int64_t v892 = v890 + v839; // 0x4046ec
    int64_t v893 = v891 / 0x1000000 | 0x10000000000 * v891; // 0x4046ef
    uint64_t v894 = v892 ^ v855; // 0x4046f3
    uint64_t v895 = v888 ^ v836; // 0x4046f6
    int64_t v896 = v894 / 0x1000000 | 0x10000000000 * v894; // 0x4046f9
    int64_t v897 = v883 + v6 + v893; // 0x4046fd
    int64_t v898 = v895 / 0x100000000 | 0x100000000 * v895; // 0x404700
    uint64_t v899 = v897 ^ v886; // 0x404704
    int64_t v900 = v885 + v6 + v896; // 0x404707
    int64_t v901 = v899 / 0x10000 | 0x1000000000000 * v899; // 0x40470a
    uint64_t v902 = v900 ^ v890; // 0x40470e
    int64_t v903 = v901 + v889; // 0x404711
    int64_t v904 = v902 / 0x10000 | 0x1000000000000 * v902; // 0x404714
    uint64_t v905 = v903 ^ v893; // 0x40471d
    int64_t v906 = v904 + v892; // 0x404725
    uint64_t v907 = v906 ^ v896; // 0x404728
    int64_t v908 = v905 / 0x8000000000000000 | 2 * v905; // 0x40472b
    int64_t v909 = v898 + v852; // 0x40472e
    int64_t v910 = v907 / 0x8000000000000000 | 2 * v907; // 0x404731
    uint64_t v911 = v909 ^ v860; // 0x404734
    int64_t v912 = v911 / 0x1000000 | 0x10000000000 * v911; // 0x404741
    int64_t v913 = v877 + v6 + v908; // 0x404745
    int64_t v914 = v888 + v6 + v912; // 0x40474d
    int64_t v915 = v897 + v6 + v910; // 0x404750
    uint64_t v916 = v914 ^ v898; // 0x404753
    uint64_t v917 = v915 ^ v879; // 0x404756
    int64_t v918 = v916 / 0x10000 | 0x1000000000000 * v916; // 0x40475e
    int64_t v919 = v917 / 0x100000000 | 0x100000000 * v917; // 0x404762
    int64_t v920 = v918 + v909; // 0x404766
    uint64_t v921 = v913 ^ v918; // 0x404769
    int64_t v922 = v921 / 0x100000000 | 0x100000000 * v921; // 0x404770
    uint64_t v923 = v920 ^ v912; // 0x404774
    int64_t v924 = v919 + v920; // 0x404777
    int64_t v925 = v922 + v906; // 0x40477a
    uint64_t v926 = v924 ^ v910; // 0x40477d
    int64_t v927 = v923 / 0x8000000000000000 | 2 * v923; // 0x404780
    uint64_t v928 = v925 ^ v908; // 0x404783
    int64_t v929 = v926 / 0x1000000 | 0x10000000000 * v926; // 0x404786
    int64_t v930 = v928 / 0x1000000 | 0x10000000000 * v928; // 0x40478a
    int64_t v931 = v915 + v6 + v929; // 0x40478e
    int64_t v932 = v913 + v1 + v930; // 0x404791
    uint64_t v933 = v932 ^ v922; // 0x404794
    int64_t v934 = v933 / 0x10000 | 0x1000000000000 * v933; // 0x404797
    int64_t v935 = v934 + v925; // 0x40479b
    uint64_t v936 = v935 ^ v930; // 0x4047a8
    int64_t v937 = v936 / 0x8000000000000000 | 2 * v936; // 0x4047ab
    uint64_t v938 = v931 ^ v919; // 0x4047ae
    int64_t v939 = v938 / 0x10000 | 0x1000000000000 * v938; // 0x4047bb
    int64_t v940 = v900 + v6 + v927; // 0x4047bf
    int64_t v941 = v914 + v6 + v882; // 0x4047c2
    int64_t v942 = v939 + v924; // 0x4047c5
    uint64_t v943 = v940 ^ v901; // 0x4047c8
    uint64_t v944 = v941 ^ v904; // 0x4047cb
    int64_t v945 = v943 / 0x100000000 | 0x100000000 * v943; // 0x4047d8
    uint64_t v946 = v942 ^ v929; // 0x4047dc
    int64_t v947 = v944 / 0x100000000 | 0x100000000 * v944; // 0x4047df
    int64_t v948 = v945 + v880; // 0x4047e8
    int64_t v949 = v946 / 0x8000000000000000 | 2 * v946; // 0x4047f0
    uint64_t v950 = v948 ^ v927; // 0x4047f3
    int64_t v951 = v947 + v903; // 0x4047f6
    int64_t v952 = v950 / 0x1000000 | 0x10000000000 * v950; // 0x4047f9
    uint64_t v953 = v951 ^ v882; // 0x4047fd
    int64_t v954 = v940 + v6 + v952; // 0x404800
    int64_t v955 = v953 / 0x1000000 | 0x10000000000 * v953; // 0x404803
    uint64_t v956 = v954 ^ v945; // 0x404807
    int64_t v957 = v941 + v6 + v955; // 0x40480a
    int64_t v958 = v956 / 0x10000 | 0x1000000000000 * v956; // 0x40480d
    uint64_t v959 = v957 ^ v947; // 0x404811
    int64_t v960 = v958 + v948; // 0x404814
    int64_t v961 = v959 / 0x10000 | 0x1000000000000 * v959; // 0x404817
    uint64_t v962 = v960 ^ v952; // 0x40481b
    int64_t v963 = v961 + v951; // 0x40481e
    int64_t v964 = v962 / 0x8000000000000000 | 2 * v962; // 0x404821
    uint64_t v965 = v963 ^ v955; // 0x404824
    int64_t v966 = v965 / 0x8000000000000000 | 2 * v965; // 0x404827
    int64_t v967 = v932 + v6 + v966; // 0x404834
    int64_t v968 = v931 + v6 + v937; // 0x404837
    uint64_t v969 = v967 ^ v939; // 0x40483f
    uint64_t v970 = v968 ^ v958; // 0x404842
    int64_t v971 = v969 / 0x100000000 | 0x100000000 * v969; // 0x40484f
    int64_t v972 = v970 / 0x100000000 | 0x100000000 * v970; // 0x404853
    int64_t v973 = v954 + v6 + v949; // 0x404857
    int64_t v974 = v971 + v960; // 0x40485a
    int64_t v975 = v972 + v963; // 0x40485d
    uint64_t v976 = v973 ^ v961; // 0x404860
    uint64_t v977 = v974 ^ v966; // 0x404863
    uint64_t v978 = v975 ^ v937; // 0x404866
    int64_t v979 = v977 / 0x1000000 | 0x10000000000 * v977; // 0x404869
    int64_t v980 = v978 / 0x1000000 | 0x10000000000 * v978; // 0x40486d
    int64_t v981 = v967 + v6 + v979; // 0x404871
    int64_t v982 = v968 + v6 + v980; // 0x404874
    uint64_t v983 = v981 ^ v971; // 0x404877
    uint64_t v984 = v982 ^ v972; // 0x40487a
    int64_t v985 = v983 / 0x10000 | 0x1000000000000 * v983; // 0x40487d
    int64_t v986 = v984 / 0x10000 | 0x1000000000000 * v984; // 0x404881
    int64_t v987 = v985 + v974; // 0x404885
    int64_t v988 = v986 + v975; // 0x404888
    uint64_t v989 = v987 ^ v979; // 0x40488b
    uint64_t v990 = v988 ^ v980; // 0x40488e
    int64_t v991 = v989 / 0x8000000000000000 | 2 * v989; // 0x404896
    int64_t v992 = v990 / 0x8000000000000000 | 2 * v990; // 0x404899
    int64_t v993 = v976 / 0x100000000 | 0x100000000 * v976; // 0x4048a1
    int64_t v994 = v993 + v935; // 0x4048b4
    int64_t v995 = v957 + v6 + v964; // 0x4048b7
    uint64_t v996 = v994 ^ v949; // 0x4048bf
    uint64_t v997 = v995 ^ v934; // 0x4048c7
    int64_t v998 = v996 / 0x1000000 | 0x10000000000 * v996; // 0x4048cf
    int64_t v999 = v981 + v6 + v992; // 0x4048d3
    int64_t v1000 = v997 / 0x100000000 | 0x100000000 * v997; // 0x4048d6
    int64_t v1001 = v973 + v6 + v998; // 0x4048da
    int64_t v1002 = v1000 + v942; // 0x4048dd
    uint64_t v1003 = v1001 ^ v993; // 0x4048e0
    uint64_t v1004 = v1002 ^ v964; // 0x4048e3
    int64_t v1005 = v1003 / 0x10000 | 0x1000000000000 * v1003; // 0x4048e6
    int64_t v1006 = v1004 / 0x1000000 | 0x10000000000 * v1004; // 0x4048ea
    int64_t v1007 = v1005 + v994; // 0x4048ee
    int64_t v1008 = v995 + v6 + v1006; // 0x4048f1
    uint64_t v1009 = v1007 ^ v998; // 0x4048f4
    uint64_t v1010 = v1008 ^ v1000; // 0x4048f7
    int64_t v1011 = v1009 / 0x8000000000000000 | 2 * v1009; // 0x4048fa
    int64_t v1012 = v1010 / 0x10000 | 0x1000000000000 * v1010; // 0x4048fd
    int64_t v1013 = v1012 + v1002; // 0x404901
    uint64_t v1014 = v999 ^ v1012; // 0x404904
    int64_t v1015 = v1014 / 0x100000000 | 0x100000000 * v1014; // 0x404907
    uint64_t v1016 = v1013 ^ v1006; // 0x40490b
    int64_t v1017 = v1015 + v1007; // 0x40490e
    int64_t v1018 = v1016 / 0x8000000000000000 | 2 * v1016; // 0x404911
    uint64_t v1019 = v1017 ^ v992; // 0x404914
    int64_t v1020 = v1019 / 0x1000000 | 0x10000000000 * v1019; // 0x404917
    int64_t v1021 = v982 + v6 + v1011; // 0x404925
    int64_t v1022 = v999 + v6 + v1020; // 0x40492d
    uint64_t v1023 = v1021 ^ v985; // 0x404930
    int64_t v1024 = v1001 + v6 + v1018; // 0x404933
    uint64_t v1025 = v1022 ^ v1015; // 0x40493a
    int64_t v1026 = v1023 / 0x100000000 | 0x100000000 * v1023; // 0x40493d
    uint64_t v1027 = v1024 ^ v986; // 0x404941
    int64_t v1028 = v1025 / 0x10000 | 0x1000000000000 * v1025; // 0x404949
    int64_t v1029 = v1026 + v1013; // 0x40494d
    int64_t v1030 = v1027 / 0x100000000 | 0x100000000 * v1027; // 0x404950
    int64_t v1031 = v1028 + v1017; // 0x404954
    uint64_t v1032 = v1029 ^ v1011; // 0x40495c
    int64_t v1033 = v1030 + v987; // 0x40495f
    uint64_t v1034 = v1031 ^ v1020; // 0x404967
    int64_t v1035 = v1032 / 0x1000000 | 0x10000000000 * v1032; // 0x40496a
    uint64_t v1036 = v1033 ^ v1018; // 0x40496e
    int64_t v1037 = v1034 / 0x8000000000000000 | 2 * v1034; // 0x404971
    int64_t v1038 = v1021 + v1 + v1035; // 0x404974
    int64_t v1039 = v1036 / 0x1000000 | 0x10000000000 * v1036; // 0x404977
    uint64_t v1040 = v1038 ^ v1026; // 0x40497b
    int64_t v1041 = v1024 + v6 + v1039; // 0x40497e
    int64_t v1042 = v1040 / 0x10000 | 0x1000000000000 * v1040; // 0x404981
    uint64_t v1043 = v1041 ^ v1030; // 0x404985
    int64_t v1044 = v1042 + v1029; // 0x404988
    int64_t v1045 = v1043 / 0x10000 | 0x1000000000000 * v1043; // 0x40498b
    uint64_t v1046 = v1044 ^ v1035; // 0x40498f
    int64_t v1047 = v1046 / 0x8000000000000000 | 2 * v1046; // 0x40499c
    int64_t v1048 = v1045 + v1033; // 0x40499f
    int64_t v1049 = v1008 + v6 + v991; // 0x4049ac
    uint64_t v1050 = v1048 ^ v1039; // 0x4049af
    uint64_t v1051 = v1049 ^ v1005; // 0x4049b7
    int64_t v1052 = v1050 / 0x8000000000000000 | 2 * v1050; // 0x4049bf
    int64_t v1053 = v1051 / 0x100000000 | 0x100000000 * v1051; // 0x4049c2
    int64_t v1054 = v1053 + v988; // 0x4049c6
    uint64_t v1055 = v1054 ^ v991; // 0x4049c9
    int64_t v1056 = v1055 / 0x1000000 | 0x10000000000 * v1055; // 0x4049cc
    int64_t v1057 = v1049 + v6 + v1056; // 0x4049d0
    uint64_t v1058 = v1057 ^ v1053; // 0x4049d3
    int64_t v1059 = v1058 / 0x10000 | 0x1000000000000 * v1058; // 0x4049d6
    int64_t v1060 = v1059 + v1054; // 0x4049da
    uint64_t v1061 = v1060 ^ v1056; // 0x4049dd
    int64_t v1062 = v1061 / 0x8000000000000000 | 2 * v1061; // 0x4049e0
    int64_t v1063 = v1022 + v6 + v1062; // 0x4049e3
    uint64_t v1064 = v1063 ^ v1042; // 0x4049e6
    int64_t v1065 = v1064 / 0x100000000 | 0x100000000 * v1064; // 0x4049ee
    int64_t v1066 = v1065 + v1048; // 0x4049f2
    uint64_t v1067 = v1066 ^ v1062; // 0x4049f5
    int64_t v1068 = v1063 + v6 + (v1067 / 0x1000000 | 0x10000000000 * v1067); // 0x4049fc
    uint64_t v1069 = v1068 ^ v1065; // 0x4049ff
    int64_t v1070 = v1038 + v6 + v1037; // 0x404a1c
    int64_t v1071 = v1041 + v6 + v1047; // 0x404a29
    uint64_t v1072 = v1070 ^ v1045; // 0x404a2c
    int64_t v1073 = v1057 + v6 + v1052; // 0x404a34
    uint64_t v1074 = v1071 ^ v1059; // 0x404a37
    int64_t v1075 = v1072 / 0x100000000 | 0x100000000 * v1072; // 0x404a3a
    uint64_t v1076 = v1073 ^ v1028; // 0x404a43
    int64_t v1077 = v1074 / 0x100000000 | 0x100000000 * v1074; // 0x404a46
    int64_t v1078 = v1075 + v1060; // 0x404a4a
    int64_t v1079 = v1076 / 0x100000000 | 0x100000000 * v1076; // 0x404a52
    int64_t v1080 = v1077 + v1031; // 0x404a56
    uint64_t v1081 = v1078 ^ v1037; // 0x404a59
    uint64_t v1082 = v1080 ^ v1047; // 0x404a61
    int64_t v1083 = v1081 / 0x1000000 | 0x10000000000 * v1081; // 0x404a64
    int64_t v1084 = v1079 + v1044; // 0x404a6f
    int64_t v1085 = v1071 + v6 + (v1082 / 0x1000000 | 0x10000000000 * v1082); // 0x404a72
    uint64_t v1086 = v1070 + v6 + v1083 ^ v1075; // 0x404a75
    uint64_t v1087 = v1085 ^ v1077; // 0x404a78
    int64_t v1088 = v1086 / 0x10000 | 0x1000000000000 * v1086; // 0x404a7b
    uint64_t v1089 = v1088 + v1078 ^ v1083; // 0x404a89
    int64_t v1090 = v1089 / 0x8000000000000000 | 2 * v1089; // 0x404a8f
    uint64_t v1091 = v1084 ^ v1052; // 0x404a95
    int64_t v1092 = v1091 / 0x1000000 | 0x10000000000 * v1091; // 0x404aa2
    int64_t v1093 = v1068 + v6 + v1090; // 0x404aa6
    uint64_t v1094 = v1073 + v6 + v1092 ^ v1079; // 0x404aac
    int64_t v1095 = v1094 / 0x10000 | 0x1000000000000 * v1094; // 0x404aaf
    uint64_t v1096 = v1093 ^ v1095; // 0x404ab6
    uint64_t v1097 = v1095 + v1084 ^ v1092; // 0x404ac2
    int64_t v1098 = v1097 / 0x8000000000000000 | 2 * v1097; // 0x404ac8
    uint64_t v1099 = (v1087 / 0x10000 | 0x1000000000000 * v1087) + v1080 + (v1096 / 0x100000000 | 0x100000000 * v1096) ^ v1090; // 0x404acb
    int64_t v1100 = v1085 + v1 + v1098; // 0x404b2e
    uint64_t v1101 = v1100 ^ v1088; // 0x404b35
    int64_t v1102 = v1101 / 0x100000000 | 0x100000000 * v1101; // 0x404b48
    int64_t v1103 = (v1069 / 0x10000 | 0x1000000000000 * v1069) + v1066 + v1102; // 0x404b57
    uint64_t v1104 = v1103 ^ v1098; // 0x404b5e
    uint64_t v1105 = v1100 + v6 + (v1104 / 0x1000000 | 0x10000000000 * v1104) ^ v1102; // 0x404b73
    int64_t * v1106 = (int64_t *)a1; // 0x404bfd
    int64_t v1107 = *v1106; // 0x404bfd
    *v1106 = v1093 + v6 + (v1099 / 0x1000000 | 0x10000000000 * v1099) ^ v1107 ^ (v1105 / 0x10000 | 0x1000000000000 * v1105) + v1103;
    for (int64_t i = 1; i < 8; i++) {
        int64_t v1108 = 8 * i;
        int64_t v1109 = *(int64_t *)(v2 + 104 + v1108); // 0x404bf5
        int64_t * v1110 = (int64_t *)(v1108 + a1); // 0x404bfd
        *v1110 = v1109 ^ *(int64_t *)(v1108 + v4) ^ *v1110;
    }
    // 0x404c0b
    return 8;
}
// Address range: 0x404c20 - 0x404d42
int64_t function_404c20(int64_t a1, int64_t * a2, uint64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = a1 + 96; // 0x404c24
    int64_t * v3 = (int64_t *)(a1 + 224); // 0x404c40
    int64_t v4 = *v3; // 0x404c40
    uint64_t v5 = 128 - v4; // 0x404c47
    int64_t v6 = v4 + v2; // 0x404c4a
    int64_t v7 = v6; // 0x404c51
    int64_t v8 = v1; // 0x404c51
    int64_t v9 = a3; // 0x404c51
    if (v5 < a3) {
        // 0x404c78
        *v3 = 0;
        int64_t v10 = a3 - 128 + v4; // 0x404c86
        memcpy((int64_t *)v6, a2, (int32_t)v5);
        int64_t * v11 = (int64_t *)(a1 + 64); // 0x404c90
        uint64_t v12 = *v11 + 128; // 0x404c9a
        *v11 = v12;
        int64_t v13 = v5 + v1; // 0x404ca9
        int64_t * v14 = (int64_t *)(a1 + 72); // 0x404caf
        *v14 = *v14 + (int64_t)(v12 < 128);
        function_403680(a1, v2);
        if (v10 < 129) {
            // 0x404d30
            v7 = *v3 + v2;
            v8 = v13;
            v9 = v10;
        } else {
            int64_t v15 = (v10 - 1 & -128) + v13; // 0x404cd4
            uint64_t v16 = *v11 + 128; // 0x404cea
            *v11 = v16;
            int64_t v17 = v13 + 128; // 0x404cf9
            *v14 = *v14 + (int64_t)(v16 < 128);
            function_403680(a1, v13);
            while (v15 != v17) {
                int64_t v18 = v17;
                v16 = *v11 + 128;
                *v11 = v16;
                v17 = v18 + 128;
                *v14 = *v14 + (int64_t)(v16 < 128);
                function_403680(a1, v18);
            }
            // 0x404d0e
            v7 = *v3 + v2;
            v8 = v15;
            v9 = v10 - 128 - (v10 - 129 & -128);
        }
    }
    int64_t * dest_mem = memcpy((int64_t *)v7, (int64_t *)v8, (int32_t)v9); // 0x404c59
    *v3 = *v3 + v9;
    return (int64_t)dest_mem;
}
// Address range: 0x404d50 - 0x404e1b
int64_t function_404d50(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 240) = 0;
    int64_t v2 = a1 + 72 & -8; // 0x404d77
    __asm_rep_stosq_memset((char *)v2, 0, (a1 + 248 - v2) / 8 % 0x20000000);
    int64_t * v3 = (int64_t *)a1;
    *v3 = 0x6a09e667f3bcc908;
    *(int64_t *)(a1 + 8) = -0x4498517a7b3558c5;
    *(int64_t *)(a1 + 16) = 0x3c6ef372fe94f82b;
    *(int64_t *)(a1 + 24) = -0x5ab00ac5a0e2c90f;
    *(int64_t *)(a1 + 32) = 0x510e527fade682d1;
    *(int64_t *)(a1 + 40) = -0x64fa9773d4c193e1;
    *(int64_t *)(a1 + 48) = 0x1f83d9abfb41bd6b;
    *(int64_t *)(a1 + 56) = 0x5be0cd19137e2179;
    *v3 = *(int64_t *)v1 ^ 0x6a09e667f3bcc908;
    for (int64_t i = 1; i < 8; i++) {
        int64_t v4 = 8 * i;
        int64_t * v5 = (int64_t *)(v4 + a1);
        *v5 = *(int64_t *)(v1 + v4) ^ *v5;
    }
    // 0x404e0e
    *(int64_t *)(a1 + 232) = (int64_t)*(char *)&v1;
    return 0;
}
// Address range: 0x404e20 - 0x404e86
int64_t function_404e20(int64_t * a1, int64_t a2) {
    // 0x404e20
    int128_t v1; // 0x404e20
    int128_t v2 = v1;
    if (a2 >= 65) {
        // 0x404e80
        return 0xffffffff;
    }
    int128_t v3 = __asm_pxor(v2, v2); // 0x404e2e
    int64_t v4 = 0x100000000000000 * a2 >> 56; // bp-72, 0x404e34
    __asm_movaps(v3);
    __asm_movaps(v3);
    return function_404d50((int64_t)a1, (int64_t)&v4);
}
// Address range: 0x404e90 - 0x404f7b
int64_t function_404e90(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404e90
    int128_t v1; // 0x404e90
    int128_t v2 = v1;
    if (a2 >= 65 || a3 == 0 || a4 > 64) {
        // 0x404f5d
        return 0xffffffff;
    }
    int64_t v3 = (int64_t)a1;
    int128_t v4 = __asm_pxor(v2, v2); // 0x404eb8
    int64_t v5 = 0x100000000000000 * a2 >> 56; // bp-216, 0x404ecd
    __asm_movaps(v4);
    __asm_movaps(v4);
    int64_t v6 = function_404d50(v3, (int64_t)&v5); // 0x404f0a
    int64_t result = 0xffffffff; // 0x404f11
    if ((int32_t)v6 >= 0) {
        // 0x404f13
        int64_t v7; // bp-152, 0x404e90
        __asm_rep_stosq_memset((char *)&v7, 0, 16);
        __memcpy_chk(&v7, (int64_t *)a3, (int32_t)a4, 128);
        function_404c20(v3, &v7, 128);
        memset(&v7, 0, 128);
        result = 0;
    }
    // 0x404f5d
    return result;
}
// Address range: 0x404f80 - 0x404f9b
int64_t function_404f80(int64_t * a1, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x404f98
        return 0;
    }
    // 0x404f85
    function_404c20((int64_t)a1, (int64_t *)a2, a3);
    return 0;
}
// Address range: 0x404fa0 - 0x4050e4
int64_t function_404fa0(int64_t * a1, int64_t a2, uint64_t a3) {
    // 0x404fa0
    int128_t v1; // 0x404fa0
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x404fa2
    int64_t v4 = __asm_movaps(v3); // bp-88, 0x404fac
    __asm_movaps(v3);
    __asm_movaps(v3);
    __asm_movaps(v3);
    if (a2 == 0) {
        // 0x4050c3
        return 0xffffffff;
    }
    int64_t v5 = (int64_t)a1;
    int64_t * v6 = (int64_t *)(v5 + 232); // 0x404fc8
    if (*v6 > a3) {
        // 0x4050c3
        return 0xffffffff;
    }
    int64_t * v7 = (int64_t *)(v5 + 80); // 0x404fd5
    if (*v7 != 0) {
        // 0x4050c3
        return 0xffffffff;
    }
    uint64_t v8 = *(int64_t *)(v5 + 224); // 0x404fe0
    int64_t * v9 = (int64_t *)(v5 + 64); // 0x404fea
    uint64_t v10 = *v9 + v8; // 0x404fea
    int64_t * v11 = (int64_t *)(v5 + 72); // 0x404fee
    *v11 = *v11 + (int64_t)(v10 < v8);
    *v9 = v10;
    if (*(char *)(v5 + 240) != 0) {
        // 0x4050d0
        *(int64_t *)(v5 + 88) = -1;
    }
    int64_t v12 = v5 + 96; // 0x405004
    *v7 = -1;
    memset((int64_t *)(v8 + v12), 0, 128 - (int32_t)v8);
    function_403680(v5, v12);
    int64_t v13 = v5; // 0x40503f
    int64_t v14 = &v4;
    uint64_t v15 = *(int64_t *)v13; // 0x405040
    int64_t v16 = v14 + 8; // 0x405043
    *(char *)v14 = (char)v15;
    *(char *)(v14 | 1) = (char)(v15 / 256);
    *(char *)(v14 | 2) = (char)(v15 / 0x10000);
    *(char *)(v14 | 3) = (char)(v15 / 0x1000000);
    *(char *)(v14 | 4) = (char)(v15 / 0x100000000);
    *(char *)(v14 | 5) = (char)(v15 / 0x10000000000);
    *(char *)(v14 | 7) = (char)(v15 / 0x100000000000000);
    *(char *)(v14 | 6) = (char)(v15 / 0x1000000000000);
    v13 += 8;
    int64_t v17; // bp-24, 0x404fa0
    while (v16 != (int64_t)&v17) {
        // 0x405040
        v14 = v16;
        v15 = *(int64_t *)v13;
        v16 = v14 + 8;
        *(char *)v14 = (char)v15;
        *(char *)(v14 | 1) = (char)(v15 / 256);
        *(char *)(v14 | 2) = (char)(v15 / 0x10000);
        *(char *)(v14 | 3) = (char)(v15 / 0x1000000);
        *(char *)(v14 | 4) = (char)(v15 / 0x100000000);
        *(char *)(v14 | 5) = (char)(v15 / 0x10000000000);
        *(char *)(v14 | 7) = (char)(v15 / 0x100000000000000);
        *(char *)(v14 | 6) = (char)(v15 / 0x1000000000000);
        v13 += 8;
    }
    // 0x40509c
    memcpy((int64_t *)a2, &v4, (int32_t)*v6);
    memset(&v4, 0, 64);
    // 0x4050c3
    return 0;
}
// Address range: 0x4050f0 - 0x4051bd
int64_t function_4050f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    // 0x4050f0
    if (a1 == 0 || a3 == 0 == (a4 != 0) || a5 == 0 == (a6 != 0) || a2 < 65 != a6 < 65) {
        // 0x405187
        return 0xffffffff;
    }
    int64_t v1; // bp-296, 0x4050f0
    if (a6 != 0) {
        // 0x4051a0
        if ((int32_t)function_404e90(&v1, a2, a5, a6) < 0) {
            // 0x405187
            return 0xffffffff;
        }
    } else {
        // 0x405158
        if ((int32_t)function_404e20(&v1, a2) < 0) {
            // 0x405187
            return 0xffffffff;
        }
    }
    if (a4 != 0) {
        // 0x405169
        function_404c20((int64_t)&v1, (int64_t *)a3, a4);
    }
    // 0x405177
    function_404fa0(&v1, a1, a2);
    // 0x405187
    return 0;
}
// Address range: 0x4051c0 - 0x4051c5
int64_t function_4051c0(void) {
    // 0x4051c0
    int64_t v1; // 0x4051c0
    return function_4050f0(v1, v1, v1, v1, v1, v1);
}
// Address range: 0x4051d0 - 0x4052b7
int64_t function_4051d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * mem = malloc(0x8000); // 0x4051ef
    if (mem == NULL) {
        // 0x40528b
        return 0xffffffff;
    }
    int64_t v1 = (int64_t)mem; // 0x4051ef
    int64_t v2; // bp-312, 0x4051d0
    function_404e20(&v2, a3);
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    int64_t v3; // 0x405240
    while (true) {
        int64_t v4 = 0;
        int32_t items_read = fread((int64_t *)(v4 + v1), 1, 0x8000 - (int32_t)v4, stream); // 0x40523b
        v3 = v4 + (int64_t)items_read;
        while (v3 != 0x8000) {
            if (items_read == 0) {
                // break (via goto) -> 0x405260
                goto lab_0x405260;
            }
            // 0x405220
            if (feof(stream) != 0) {
                goto lab_0x40526e;
            }
            v4 = v3;
            items_read = fread((int64_t *)(v4 + v1), 1, 0x8000 - (int32_t)v4, stream);
            v3 = v4 + (int64_t)items_read;
        }
        // 0x40524c
        function_404f80(&v2, v1, 0x8000);
    }
  lab_0x405260:
    // 0x405260
    if (ferror(stream) != 0) {
        // 0x405283
        free(mem);
        // 0x40528b
        return 0xffffffff;
    }
  lab_0x40526e:
    if (v3 != 0) {
        // 0x4052a0
        function_404f80(&v2, v1, v3);
    }
    // 0x405273
    function_404fa0(&v2, a2, a3);
    // 0x405283
    free(mem);
    // 0x40528b
    return 0;
}
// Address range: 0x4052c0 - 0x4052ca
int64_t function_4052c0(void) {
    // 0x4052c0
    return function_403280(1);
}
// Address range: 0x4052d0 - 0x4053e6
int64_t function_4052d0(int64_t a1, char (**a2)[8], int32_t a3, int32_t n) {
    char * str = (char *)a1; // 0x4052f1
    int32_t len = strlen(str); // 0x4052f1
    if (a2 == NULL) {
        // 0x4053bd
        return -1;
    }
    int64_t v1 = n;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = a3;
    int64_t v4 = -1;
    int64_t * str3 = (int64_t *)(v4 * v1 + v3);
    int32_t v5 = 0;
    int64_t v6 = 0; // 0x405357
    int64_t v7 = v3; // 0x4052d0
    int64_t v8 = v2; // 0x40535e
    int64_t str4; // 0x4052d0
    int64_t v9; // 0x4052d0
    int32_t v10; // 0x4052d0
    int32_t v11; // 0x4052d0
    int32_t v12; // 0x4052d0
    int64_t v13; // 0x4052d0
    int64_t result; // 0x4052d0
    int32_t v14; // 0x405353
    char * str2; // 0x405372
    while (true) {
        // 0x405367
        str4 = v7;
        v9 = v6;
        v11 = v5;
        str2 = (char *)v8;
        v10 = v11;
        if (strncmp(str2, str, len) == 0) {
            // 0x40537b
            result = v9;
            if (len == strlen(str2)) {
                // 0x4053bd
                return result;
            }
            if (v4 == -1) {
                // break -> 0x40538f
                break;
            }
            // 0x405320
            v10 = 1;
            if (a3 != 0) {
                // 0x40532e
                v14 = memcmp(str3, (int64_t *)str4, n) != 0 ? 1 : 0x1000000 * v11 >> 24;
                v10 = v14;
            }
        }
        // 0x405357
        v5 = v10;
        v6 = v9 + 1;
        v8 = *(int64_t *)(8 * v6 + v2);
        v7 = str4 + v1;
        v13 = v4;
        v12 = v5;
        if (v8 == 0) {
            return (char)v12 == 0 ? v13 : -2;
        }
    }
    int64_t v15 = v9 + 1; // 0x405393
    int64_t v16 = *(int64_t *)(8 * v15 + v2); // 0x40539a
    v13 = v9;
    v12 = v11;
    while (v16 != 0) {
        // 0x405367
        v4 = v9;
        str3 = (int64_t *)(v4 * v1 + v3);
        v5 = v11;
        v6 = v15;
        v7 = str4 + v1;
        v8 = v16;
        while (true) {
            // 0x405367
            str4 = v7;
            v9 = v6;
            v11 = v5;
            str2 = (char *)v8;
            v10 = v11;
            if (strncmp(str2, str, len) == 0) {
                // 0x40537b
                result = v9;
                if (len == strlen(str2)) {
                    // 0x4053bd
                    return result;
                }
                if (v4 == -1) {
                    // break -> 0x40538f
                    break;
                }
                // 0x405320
                v10 = 1;
                if (a3 != 0) {
                    // 0x40532e
                    v14 = memcmp(str3, (int64_t *)str4, n) != 0 ? 1 : 0x1000000 * v11 >> 24;
                    v10 = v14;
                }
            }
            // 0x405357
            v5 = v10;
            v6 = v9 + 1;
            v8 = *(int64_t *)(8 * v6 + v2);
            v7 = str4 + v1;
            v13 = v4;
            v12 = v5;
            if (v8 == 0) {
                return (char)v12 == 0 ? v13 : -2;
            }
        }
        // 0x40538f
        v15 = v9 + 1;
        v16 = *(int64_t *)(8 * v15 + v2);
        v13 = v9;
        v12 = v11;
    }
  lab_0x4053a8:
    // 0x4053bd
    return (char)v12 == 0 ? v13 : -2;
}
// Address range: 0x4053f0 - 0x405461
int64_t function_4053f0(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x4053f0
    if (a3 == -1) {
        // 0x405450
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x405405
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x405414
    function_4073f0(1, a1);
    function_4070e0(0, 8, a2);
    error(0, 0, format);
    return &g65;
}
// Address range: 0x405470 - 0x405588
int64_t function_405470(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x40549d
    fputs_unlocked(v1, g33);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x405510
        int64_t v5; // 0x405517
        int64_t v6; // 0x405537
        while (v3 != 0) {
            // 0x4054fb
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x4054c0
                break;
            }
            // 0x40550d
            v4 = v3 + 1;
            v5 = function_407410(v2);
            __fprintf_chk(g33, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x405540
                goto lab_0x405540;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x4054c3
        int64_t v8 = function_407410(v2); // 0x4054cd
        __fprintf_chk(g33, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x4054ed
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x4054fb
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x4054c0
                    break;
                }
                // 0x40550d
                v4 = v3 + 1;
                v5 = function_407410(v2);
                __fprintf_chk(g33, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x405540
                    goto lab_0x405540;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x4054c0
            v7 = v3 + 1;
            v8 = function_407410(v2);
            __fprintf_chk(g33, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x405540:;
    int64_t v10 = (int64_t)g33; // 0x405540
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x405547
    uint64_t result = *v11; // 0x405547
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x405570
        return __overflow(g33, 10);
    }
    // 0x405551
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x405590 - 0x405600
int64_t function_405590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_4052d0(a2, (char (**)[8])a3, (int32_t)a4, (int32_t)a5); // 0x4055bc
    int64_t result = v1; // 0x4055c4
    if (v1 < 0) {
        // 0x4055d8
        function_4053f0(a1, a2, v1);
        function_405470(a3, a4, a5);
        result = -1;
    }
    // 0x4055c6
    return result;
}
// Address range: 0x405600 - 0x40564d
int64_t function_405600(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x405600
    if (result == 0) {
        // 0x405641
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x405638
    int32_t n = a4; // 0x405638
    int64_t v1 = result; // 0x40563f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x405641
        return result;
    }
    int64_t str3 = str2; // 0x40563f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x405620
    int64_t result2 = 0; // 0x40562d
    while (v2 != 0) {
        // 0x40562f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x405641
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x405641
    return result2;
}
// Address range: 0x405650 - 0x405658
int64_t function_405650(int64_t a1) {
    // 0x405650
    g47 = a1;
    int64_t result; // 0x405650
    return result;
}
// Address range: 0x405660 - 0x405668
int64_t function_405660(int64_t a1) {
    // 0x405660
    g46 = a1;
    int64_t result; // 0x405660
    return result;
}
// Address range: 0x405670 - 0x40570e
int64_t function_405670(void) {
    // 0x405670
    int32_t * err_num; // 0x405686
    if ((int32_t)function_409690((int64_t)g30) == 0) {
        goto lab_0x40569c;
    } else {
        // 0x405686
        err_num = __errno_location();
        if (g46 == 0) {
            goto lab_0x4056b3;
        } else {
            // 0x405697
            if (*err_num != 32) {
                goto lab_0x4056b3;
            } else {
                goto lab_0x40569c;
            }
        }
    }
  lab_0x40569c:;
    int64_t result = function_409690((int64_t)g33); // 0x4056a3
    if ((int32_t)result == 0) {
        // 0x4056ac
        return result;
    }
    // 0x4056ee
    _exit(g20);
    // UNREACHABLE
  lab_0x4056b3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4056bf
    if (g47 == 0) {
        // 0x4056f9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4056d3
        error(0, *err_num, "%s: %s", (char *)function_407260((int64_t)g47), v1);
    }
    // 0x4056ee
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x405710 - 0x405715
int64_t function_405710(void) {
    // 0x405710
    int64_t fd; // 0x405710
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x405720 - 0x405741
int64_t function_405720(int64_t stream, int64_t advice, int64_t a3) {
    // 0x405720
    if (stream == 0) {
        // 0x405740
        int64_t result; // 0x405720
        return result;
    }
    // 0x405725
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x405750 - 0x4057e3
int64_t function_405750(int64_t file_path, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x405757
    int64_t result = (int64_t)file; // 0x405757
    if (file == NULL) {
        // 0x405771
        return result;
    }
    uint32_t v1 = fileno(file); // 0x405767
    if (v1 >= 3) {
        // 0x405771
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_407430((int64_t)v1, v2); // 0x40578a
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x4057c8
        function_4085e0(result, v2);
        // 0x405771
        return 0;
    }
    // 0x40578e
    if ((int32_t)function_4085e0(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, (char *)mode); // 0x4057a0
        if (v4 != NULL) {
            // 0x405771
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x4057ad
    close(fd);
    // 0x405771
    return 0;
}
// Address range: 0x4057f0 - 0x405889
int64_t function_4057f0(int64_t str) {
    // 0x4057f0
    if (str == 0) {
        // 0x405869
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g33);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4057fe
    int64_t result = (int64_t)found_char_pos; // 0x4057fe
    if (found_char_pos == NULL) {
        // 0x405859
        g48 = str;
        g32 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x405808
    if (v1 - str < 7) {
        // 0x405859
        g48 = str;
        g32 = str;
        return result;
    }
    // 0x405818
    bool v2; // 0x4057f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4057f0
    int64_t v5 = result - 6; // 0x4057f0
    int64_t v6 = 7; // 0x405826
    unsigned char v7 = *(char *)v5; // 0x405826
    char v8 = *(char *)v4; // 0x405826
    char v9 = v8; // 0x405826
    bool v10 = false; // 0x405826
    while (v7 == v8) {
        v6--;
        v4 += v3;
        v5 += v3;
        v9 = v7;
        v10 = true;
        if (v6 == 0) {
            // break -> 
            break;
        }
        v7 = *(char *)v5;
        v8 = *(char *)v4;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    int64_t v12 = (int64_t)"lt-"; // 0x405830
    int64_t v13 = v1; // 0x405830
    int64_t v14 = 3; // 0x405830
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x405859
        g48 = str;
        g32 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x405842
    char v16 = *(char *)v12; // 0x405842
    char v17 = v16; // 0x405842
    bool v18 = false; // 0x405842
    while (v15 == v16) {
        // 0x405832
        v14--;
        v12 += v3;
        v13 += v3;
        v17 = v15;
        v18 = true;
        if (v14 == 0) {
            // break -> 
            break;
        }
        v15 = *(char *)v13;
        v16 = *(char *)v12;
        v17 = v16;
        v18 = false;
    }
    unsigned char v19 = v17;
    int64_t v20 = v1; // 0x40584c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40584e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x405859
    g48 = v20;
    g32 = v20;
    return result;
}
// Address range: 0x405890 - 0x405982
int64_t function_405890(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4058a4
    int64_t result = (int64_t)v1; // 0x4058a4
    if (result != a1) {
        // 0x4058b1
        return result;
    }
    int64_t v2 = function_409750(); // 0x4058c0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x405976
    if (v3 == 85) {
        // 0x4058d0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x405968
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x4058fe
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x40590b
        // 0x4058b1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x405968
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x40594d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x40595a
    // 0x4058b1
    return result4;
}
// Address range: 0x405990 - 0x4059e7
int64_t function_405990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x405990
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4059d8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4059e7 - 0x406bb1
int64_t function_4059e7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x405a31
    int64_t v3 = 0; // 0x405a31
    int64_t v4; // 0x4059e7
    int64_t v5; // 0x4059e7
    int64_t v6; // 0x4059e7
    int64_t v7; // 0x4059e7
    int64_t v8; // 0x4059e7
    int64_t v9; // 0x4059e7
    int64_t v10; // 0x4059e7
    int64_t v11; // 0x4059e7
    int64_t v12; // 0x4059e7
    int64_t v13; // 0x4059e7
    int64_t v14; // 0x4059e7
    int64_t v15; // 0x4059e7
    int64_t v16; // 0x4059e7
    int64_t v17; // 0x4059e7
    int64_t v18; // 0x4059e7
    int64_t result; // 0x4059e7
    int64_t v19; // 0x4059e7
    int32_t wc; // bp+132, 0x4059e7
    int64_t ps; // bp+136, 0x4059e7
    char v20; // 0x405fa0
    int64_t v21; // 0x405fa0
    int64_t v22; // 0x406348
    int64_t v23; // 0x4059e7
    int64_t v24; // 0x406367
    int32_t v25; // 0x4059e7
    while (true) {
      lab_0x405a38_2:
        // 0x405a38
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4059e7
        int64_t v27; // 0x405a6c
        while (true) {
          lab_0x405a38:
            // 0x405a38
            v5 = v26;
            bool v28 = v15 == v5; // 0x405a43
            if (v15 == -1) {
                // 0x405a45
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x405a53
            if (v28) {
                // break (via goto) -> 0x4061b8
                goto lab_0x4061b8;
            }
            // 0x405a5c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g64 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40604b
                    if (v25 % 2 == 0) {
                        goto lab_0x405b91;
                    }
                    // 0x40646d
                    v26 = v5 + 1;
                    goto lab_0x405a38;
                }
                case 7: {
                    goto lab_0x405b91;
                }
                case 8: {
                    goto lab_0x405b91;
                }
                case 9: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x405b91;
                }
                case 12: {
                    goto lab_0x405b91;
                }
                case 13: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x405b5d;
                }
                case 36: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x405b91;
                }
                case 38: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x405b91;
                }
                case 44: {
                    goto lab_0x405b91;
                }
                case 45: {
                    goto lab_0x405b91;
                }
                case 46: {
                    goto lab_0x405b91;
                }
                case 47: {
                    goto lab_0x405b91;
                }
                case 48: {
                    goto lab_0x405b91;
                }
                case 49: {
                    goto lab_0x405b91;
                }
                case 50: {
                    goto lab_0x405b91;
                }
                case 51: {
                    goto lab_0x405b91;
                }
                case 52: {
                    goto lab_0x405b91;
                }
                case 53: {
                    goto lab_0x405b91;
                }
                case 54: {
                    goto lab_0x405b91;
                }
                case 55: {
                    goto lab_0x405b91;
                }
                case 56: {
                    goto lab_0x405b91;
                }
                case 57: {
                    goto lab_0x405b91;
                }
                case 58: {
                    goto lab_0x405b91;
                }
                case 59: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x405b91;
                }
                case 66: {
                    goto lab_0x405b91;
                }
                case 67: {
                    goto lab_0x405b91;
                }
                case 68: {
                    goto lab_0x405b91;
                }
                case 69: {
                    goto lab_0x405b91;
                }
                case 70: {
                    goto lab_0x405b91;
                }
                case 71: {
                    goto lab_0x405b91;
                }
                case 72: {
                    goto lab_0x405b91;
                }
                case 73: {
                    goto lab_0x405b91;
                }
                case 74: {
                    goto lab_0x405b91;
                }
                case 75: {
                    goto lab_0x405b91;
                }
                case 76: {
                    goto lab_0x405b91;
                }
                case 77: {
                    goto lab_0x405b91;
                }
                case 78: {
                    goto lab_0x405b91;
                }
                case 79: {
                    goto lab_0x405b91;
                }
                case 80: {
                    goto lab_0x405b91;
                }
                case 81: {
                    goto lab_0x405b91;
                }
                case 82: {
                    goto lab_0x405b91;
                }
                case 83: {
                    goto lab_0x405b91;
                }
                case 84: {
                    goto lab_0x405b91;
                }
                case 85: {
                    goto lab_0x405b91;
                }
                case 86: {
                    goto lab_0x405b91;
                }
                case 87: {
                    goto lab_0x405b91;
                }
                case 88: {
                    goto lab_0x405b91;
                }
                case 89: {
                    goto lab_0x405b91;
                }
                case 90: {
                    goto lab_0x405b91;
                }
                case 91: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x405b91;
                }
                case 94: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x405b91;
                }
                case 96: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x405b91;
                }
                case 98: {
                    goto lab_0x405b91;
                }
                case 99: {
                    goto lab_0x405b91;
                }
                case 100: {
                    goto lab_0x405b91;
                }
                case 101: {
                    goto lab_0x405b91;
                }
                case 102: {
                    goto lab_0x405b91;
                }
                case 103: {
                    goto lab_0x405b91;
                }
                case 104: {
                    goto lab_0x405b91;
                }
                case 105: {
                    goto lab_0x405b91;
                }
                case 106: {
                    goto lab_0x405b91;
                }
                case 107: {
                    goto lab_0x405b91;
                }
                case 108: {
                    goto lab_0x405b91;
                }
                case 109: {
                    goto lab_0x405b91;
                }
                case 110: {
                    goto lab_0x405b91;
                }
                case 111: {
                    goto lab_0x405b91;
                }
                case 112: {
                    goto lab_0x405b91;
                }
                case 113: {
                    goto lab_0x405b91;
                }
                case 114: {
                    goto lab_0x405b91;
                }
                case 115: {
                    goto lab_0x405b91;
                }
                case 116: {
                    goto lab_0x405b91;
                }
                case 117: {
                    goto lab_0x405b91;
                }
                case 118: {
                    goto lab_0x405b91;
                }
                case 119: {
                    goto lab_0x405b91;
                }
                case 120: {
                    goto lab_0x405b91;
                }
                case 121: {
                    goto lab_0x405b91;
                }
                case 122: {
                    goto lab_0x405b91;
                }
                case 123: {
                    goto lab_0x405b35;
                }
                case 124: {
                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x405b35;
                }
                case 126: {
                    goto lab_0x405b5d;
                }
                default: {
                    goto lab_0x405f35;
                }
            }
        }
      lab_0x405f35:
        if (v23 != 1) {
            // 0x4062a0
            ps = 0;
            int64_t len = v15; // 0x4062b0
            if (v15 == -1) {
                // 0x4062b2
                len = strlen((char *)str);
            }
            // 0x4062de
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40633f:
                // 0x40633f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x406344
                int64_t v30 = v29 + str;
                v24 = function_409610(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4068ba_2;
                    }
                    case -1: {
                        goto lab_0x4068ba_2;
                    }
                    case -2: {
                        // 0x40699d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4069d7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4069da
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4069e7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4069e0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4068ba
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4068ba_2;
                    }
                    case 1: {
                        goto lab_0x406310;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4063bc
                        char v34 = *(char *)v33; // 0x4063cd
                        unsigned char v35; // 0x4059e7
                        if (v34 < 125) {
                            // 0x4063d8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4063ef
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_405990(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4063c0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4063cd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4063d8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4063ef
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_405990(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4063c0
                            v33++;
                        }
                        goto lab_0x406310;
                    }
                }
            }
            goto lab_0x4068ba_2;
        } else {
            // 0x405f84
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x405b91;
        }
    }
  lab_0x4061b8:
    // 0x4061b8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x406aba
        if (v8 > result) {
            // 0x406ac3
            *(char *)(v12 + result) = 0;
        }
        // 0x405de7
        return result;
    }
    return function_405990(v10, v6, str, v4, 2, v25 & -3);
  lab_0x405b91:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x405ba0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x405daa_2;
        }
    }
    int64_t v39 = result; // 0x405ca1
    char v40 = v20; // 0x405ca1
    int64_t v41 = v38; // 0x405ca1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x405ca1
    int64_t v43 = v36; // 0x405ca1
    goto lab_0x405c1d;
  lab_0x405daa_2:
    // 0x405de7
    return function_405990(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4068ba_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x405b91;
    } else {
        uint64_t v49 = v46 + v5; // 0x40648e
        int64_t v50 = v5 + 1; // 0x406571
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x406578
        char v52 = v20; // 0x406578
        int64_t v53 = result; // 0x406578
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x406541
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x406545
            int64_t v56 = v54 + 1; // 0x40654a
            int64_t v57 = v51 + 1; // 0x406571
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40653c
                v54 = v56;
                if (v47 > v54) {
                    // 0x406541
                    *(char *)(v54 + v48) = v55;
                }
                // 0x406545
                v55 = *(char *)(v51 + str);
                v56 = v54 + 1;
                v57 = v51 + 1;
                v39 = v56;
                v40 = v55;
                v41 = v22;
                v3 = v57;
                v42 = v47;
                v43 = v48;
                v51 = v57;
            }
        }
        goto lab_0x405c1d;
    }
  lab_0x406310:
    // 0x406310
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40632f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x406332
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4068ba
        goto lab_0x4068ba_2;
    }
    goto lab_0x40633f;
  lab_0x405b5d:
    // 0x405b5d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x405daa_2;
    }
    goto lab_0x405b91;
  lab_0x405b35:;
    bool v60 = v15 == 1; // 0x405b40
    if (v15 == -1) {
        // 0x405b42
        v60 = *(char *)v1 == 0;
    }
    // 0x405b4e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x405b91;
    } else {
        goto lab_0x405b5d;
    }
  lab_0x405c1d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x405c22
        *(char *)(v44 + v45) = v40;
    }
    // 0x405c26
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x405a38_2;
}
// Address range: 0x406bc0 - 0x406d5e
int64_t function_406bc0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x406bc2
    int32_t * v3 = __errno_location(); // 0x406bdc
    int64_t v4 = (int64_t)g22; // 0x406be1
    int32_t v5 = *v3; // 0x406beb
    int64_t v6 = v4; // 0x406c01
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x406d59
            function_407c30(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x406c10
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x406c17
        int64_t v9; // 0x406bc0
        if (g22 == &g23) {
            int64_t v10 = function_407a40(0, v8); // 0x406d3a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x406d3f
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_407a40(v4, v8); // 0x406c2b
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x406c3a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x406c3a
        int32_t v14 = v7; // 0x406c41
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x406c71
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x406c7b
    int64_t * v17 = (int64_t *)v15; // 0x406c7e
    uint64_t v18 = *v17; // 0x406c7e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x406c81
    int64_t result = *v19; // 0x406c81
    int64_t v20; // 0x406bc0
    uint64_t v21 = function_405990(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x406ca4
    if (v18 > v21) {
        // 0x406d1b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x406cb7
    *v17 = v22;
    if (result != (int64_t)&g49) {
        // 0x406cc7
        free((int64_t *)result);
    }
    int64_t result2 = function_4079e0(v22); // 0x406ce1
    *v19 = result2;
    int64_t v23; // 0x406bc0
    function_405990(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x406d1b
    *v3 = v5;
    return result2;
}
// Address range: 0x406d60 - 0x406d94
int64_t function_406d60(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x406d67
    int64_t result = function_407be0(a1 == 0 ? (int64_t)&g50 : a1, 56); // 0x406d86
    return result;
}
// Address range: 0x406da0 - 0x406daf
int64_t function_406da0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g50 : a1); // 0x406dac
    return result;
}
// Address range: 0x406db0 - 0x406dbf
int64_t function_406db0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g50 : a1; // 0x406db8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g50;
}
// Address range: 0x406dc0 - 0x406df3
int64_t function_406dc0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g50 + 8 : a1 + 8; // 0x406dd9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x406dde
    uint32_t v3 = *v2; // 0x406dde
    uint32_t v4 = (int32_t)a2 % 32; // 0x406de2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x406e00 - 0x406e13
int64_t function_406e00(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g50 + 4 : a1 + 4); // 0x406e0c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x406e20 - 0x406e4b
int64_t function_406e20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g50 : a1; // 0x406e28
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x406e45
        abort();
        // UNREACHABLE
    }
    // 0x406e3c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g50;
}
// Address range: 0x406e50 - 0x406ec2
int64_t function_406e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g50 : a5; // 0x406e72
    int32_t * v2 = __errno_location(); // 0x406e7b
    uint32_t v3 = *(int32_t *)v1; // 0x406e9b
    int64_t result = function_405990(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x406eaa
    return result;
}
// Address range: 0x406ed0 - 0x406fb1
int64_t function_406ed0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g50 : a4; // 0x406ef2
    int32_t * v2 = __errno_location(); // 0x406ef8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x406f17
    int32_t * v4 = (int32_t *)v1; // 0x406f1a
    int64_t v5 = function_405990(0, 0, a1, a2, (int64_t)*v4, v3); // 0x406f35
    int64_t v6 = v5 + 1; // 0x406f3a
    int64_t result = function_4079e0(v6); // 0x406f4f
    function_405990(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x406f94
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x406f9d
    return result;
}
// Address range: 0x406fc0 - 0x406fca
int64_t function_406fc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406fc0
    return function_406ed0(a1, a2, 0, a3);
}
// Address range: 0x406fd0 - 0x407065
int64_t function_406fd0(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x406fd0
    int64_t v2 = v1; // 0x406fd0
    int64_t v3 = v2; // 0x406fe4
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x407003
        free((int64_t *)*(int64_t *)v4);
        v3 = &g65;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x407000
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g65;
        }
    }
    int64_t v6 = v3; // 0x40701d
    if (g23 != 0x60e340) {
        // 0x40701f
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g49;
        v6 = &g65;
    }
    int64_t result = v6; // 0x407041
    if (g22 != &g23) {
        // 0x407043
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g65;
    }
    // 0x407056
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x407070 - 0x407081
int64_t function_407070(void) {
    // 0x407070
    int64_t v1; // 0x407070
    return function_406bc0(v1, v1, -1, (int64_t *)&g50);
}
// Address range: 0x407090 - 0x40709a
int64_t function_407090(void) {
    // 0x407090
    int64_t v1; // 0x407090
    return function_406bc0(v1, v1, v1, (int64_t *)&g50);
}
// Address range: 0x4070a0 - 0x4070b6
int64_t function_4070a0(int64_t a1) {
    // 0x4070a0
    return function_406bc0(0, a1, -1, (int64_t *)&g50);
}
// Address range: 0x4070c0 - 0x4070d2
int64_t function_4070c0(int64_t a1, int64_t a2) {
    // 0x4070c0
    return function_406bc0(0, a1, a2, (int64_t *)&g50);
}
// Address range: 0x4070e0 - 0x407148
int64_t function_4070e0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4070f0
    return function_406bc0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x407150 - 0x4071b4
int64_t function_407150(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x407160
    return function_406bc0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4071c0 - 0x4071cc
int64_t function_4071c0(int64_t a1, int64_t a2) {
    // 0x4071c0
    return function_4070e0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4071d0 - 0x4071df
int64_t function_4071d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4071d0
    return function_407150(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4071e0 - 0x407250
int64_t function_4071e0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g50); // 0x4071ed
    int128_t v2 = __asm_movdqa(g51); // 0x4071f5
    int128_t v3 = __asm_movdqa(g52); // 0x4071fd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x407212
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x407228
    uint32_t v6 = *v5; // 0x407228
    uint32_t v7 = (int32_t)a3 % 32; // 0x40722d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_406bc0(0, a1, a2, &v4);
}
// Address range: 0x407250 - 0x40725d
int64_t function_407250(int64_t a1, int64_t a2) {
    // 0x407250
    return function_4071e0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x407260 - 0x407271
int64_t function_407260(int64_t a1) {
    // 0x407260
    return function_4071e0(a1, -1, 58);
}
// Address range: 0x407280 - 0x40728a
int64_t function_407280(void) {
    // 0x407280
    int64_t v1; // 0x407280
    return function_4071e0(v1, v1, 58);
}
// Address range: 0x407290 - 0x4072fe
int64_t function_407290(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4072aa
    return function_406bc0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x407300 - 0x40736c
int64_t function_407300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g50); // 0x407307
    int128_t v2 = __asm_movdqa(g51); // 0x40730f
    int128_t v3 = __asm_movdqa(g52); // 0x407317
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x407339
    if (a2 == 0 || a3 == 0) {
        // 0x407367
        abort();
        // UNREACHABLE
    }
    // 0x40734a
    return function_406bc0(a1, a4, a5, &v4);
}
// Address range: 0x407370 - 0x407379
int64_t function_407370(void) {
    // 0x407370
    int64_t v1; // 0x407370
    return function_407300(v1, v1, v1, v1, -1);
}
// Address range: 0x407380 - 0x407397
int64_t function_407380(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407380
    return function_407300(0, a1, a2, a3, -1);
}
// Address range: 0x4073a0 - 0x4073b3
int64_t function_4073a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4073a0
    return function_407300(0, a1, a2, a3, a4);
}
// Address range: 0x4073c0 - 0x4073ca
int64_t function_4073c0(void) {
    // 0x4073c0
    int64_t v1; // 0x4073c0
    return function_406bc0(v1, v1, v1, &g21);
}
// Address range: 0x4073d0 - 0x4073e2
int64_t function_4073d0(int64_t a1, int64_t a2) {
    // 0x4073d0
    return function_406bc0(0, a1, a2, &g21);
}
// Address range: 0x4073f0 - 0x407401
int64_t function_4073f0(int64_t a1, int64_t a2) {
    // 0x4073f0
    return function_406bc0(a1, a2, -1, &g21);
}
// Address range: 0x407410 - 0x407426
int64_t function_407410(int64_t a1) {
    // 0x407410
    return function_406bc0(0, a1, -1, &g21);
}
// Address range: 0x407430 - 0x40743e
int64_t function_407430(int64_t a1, int64_t a2) {
    // 0x407430
    int64_t v1; // 0x407430
    return function_408660(a1, 0, 3, v1);
}
// Address range: 0x407440 - 0x40781d
int64_t function_407440(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4074d8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40745c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x407476
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4074bb
    if (a6 < 10) {
        // 0x4074ca
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4075c2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x407820 - 0x407840
int64_t function_407820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407820
    if (a5 == 0) {
        // 0x40783b
        return function_407440(a1, a2, a3, a4, a5, 0, (int64_t)&g65);
    }
    int64_t v1 = 0; // 0x407827
    v1++;
    int64_t v2 = v1; // 0x407839
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x407830
        v1++;
        v2 = v1;
    }
    // 0x40783b
    return function_407440(a1, a2, a3, a4, a5, v2, (int64_t)&g65);
}
// Address range: 0x407840 - 0x4078a0
int64_t function_407840(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x407840
    int64_t v3 = &v2; // 0x407840
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x407873
    int64_t v6; // 0x40785d
    int64_t * v7; // 0x40787b
    int64_t v8; // 0x40787b
    int64_t v9; // 0x407887
    if (v5 < 48) {
        // 0x407850
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x407893
            break;
        }
    } else {
        // 0x40787b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x407893
            break;
        }
    }
    int64_t v10 = 10; // 0x407871
    while (v4 != 9) {
        // 0x407869
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x407850
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x407893
                break;
            }
        } else {
            // 0x40787b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x407893
                break;
            }
        }
        // 0x407869
        v10 = 10;
    }
    // 0x407893
    return function_407440(a1, a2, a3, a4, v3, v10, (int64_t)&g65);
}
// Address range: 0x4078a0 - 0x40795c
int64_t function_4078a0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4078a0
    int64_t v1; // bp-168, 0x4078a0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4078a0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4078a0
    int64_t v8; // 0x4078a0
    int64_t v9; // bp-56, 0x4078a0
    int64_t v10; // 0x407905
    int64_t v11; // 0x407929
    if ((int32_t)v6 < 48) {
        // 0x4078f0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x407940
            break;
        }
    } else {
        // 0x407922
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x407940
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40791a
    int64_t v13 = 10; // 0x40791a
    while (v5 != 9) {
        // 0x40791c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4078f0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x407940
                break;
            }
        } else {
            // 0x407922
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x407940
                break;
            }
        }
        // 0x407912
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x407940
    int64_t v14; // bp-136, 0x4078a0
    int64_t result = function_407440(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g65); // 0x40794f
    return result;
}
// Address range: 0x407960 - 0x4079d4
int64_t function_407960(int64_t a1) {
    // 0x407960
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4079c3
    return fputs_unlocked(v1, g30);
}
// Address range: 0x4079e0 - 0x4079fa
int64_t function_4079e0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4079e4
    if (size != 0 != (mem == NULL)) {
        // 0x4079f3
        return (int64_t)mem;
    }
    // 0x4079f5
    function_407c30(size);
    // UNREACHABLE
}
// Address range: 0x407a00 - 0x407a21
int64_t function_407a00(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x407a03
    int64_t v2 = v1; // 0x407a03
    if (v2 < 0) {
        // 0x407a1b
        function_407c30(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x407a19
        return function_4079e0(v2);
    }
    // 0x407a1b
    function_407c30(v2);
    // UNREACHABLE
}
// Address range: 0x407a30 - 0x407a32
int64_t function_407a30(void) {
    // 0x407a30
    int64_t v1; // 0x407a30
    return function_4079e0(v1);
}
// Address range: 0x407a40 - 0x407a76
int64_t function_407a40(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x407a68
        free(v1);
        return (int32_t)&g65 ^ (int32_t)&g65;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x407a51
    if (a2 != 0 != (mem == NULL)) {
        // 0x407a60
        return (int64_t)mem;
    }
    // 0x407a71
    function_407c30(a1);
    // UNREACHABLE
}
// Address range: 0x407a80 - 0x407aa1
int64_t function_407a80(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x407a83
    int64_t v2 = v1; // 0x407a83
    if (v2 < 0) {
        // 0x407a9b
        function_407c30(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x407a99
        return function_407a40(a1, v2);
    }
    // 0x407a9b
    function_407c30(a1);
    // UNREACHABLE
}
// Address range: 0x407ab0 - 0x407b36
int64_t function_407ab0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x407b0b
            function_407c30(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_407a40(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x407af3
    if (a2 == 0) {
        // 0x407b18
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x407af8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x407b0b
        function_407c30(a1);
        // UNREACHABLE
    }
    // 0x407ada
    *(int64_t *)a2 = v2;
    return function_407a40(a1, v2 * a3);
}
// Address range: 0x407b40 - 0x407b90
int64_t function_407b40(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x407b40
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x407b8a
            function_407c30(a1);
            // UNREACHABLE
        }
        // 0x407b62
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_407a40(a1, v1);
    }
    if (a2 == 0) {
        // 0x407b75
        *(int64_t *)a2 = 128;
        return function_407a40(0, 128);
    }
    // 0x407b88
    if (a2 < 0) {
        // 0x407b8a
        function_407c30(a1);
        // UNREACHABLE
    }
    // 0x407b62
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_407a40(a1, v1);
}
// Address range: 0x407b90 - 0x407ba7
int64_t function_407b90(int64_t a1, int64_t a2) {
    // 0x407b90
    return (int64_t)memset((int64_t *)function_4079e0(a1), 0, (int32_t)a1);
}
// Address range: 0x407bb0 - 0x407bde
int64_t function_407bb0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x407bb7
    if ((int64_t)v1 < 0) {
        // 0x407bd9
        function_407c30(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x407bd9
        function_407c30(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x407bca
    if (mem != NULL) {
        // 0x407bd4
        return (int64_t)mem;
    }
    // 0x407bd9
    function_407c30(nmemb);
    // UNREACHABLE
}
// Address range: 0x407be0 - 0x407c08
int64_t function_407be0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4079e0(a2); // 0x407bef
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x407c10 - 0x407c23
int64_t function_407c10(int64_t str) {
    // 0x407c10
    return function_407be0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x407c30 - 0x407c61
int64_t function_407c30(int64_t a1) {
    // 0x407c30
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x407c70 - 0x407d40
int64_t function_407c70(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x407c70
    int64_t result2; // bp-64, 0x407c70
    int32_t v1 = function_4081a0(a1, 0, a2 & 0xffffffff, &result2, a5, a6); // 0x407c9c
    int32_t * v2; // 0x407c70
    if (v1 != 0) {
        int32_t * v3 = __errno_location(); // 0x407d1a
        if (v1 == 1) {
            // 0x407d38
            *v3 = 75;
            v2 = v3;
        } else {
            // 0x407d27
            v2 = v3;
            if (v1 == 3) {
                // 0x407d2c
                *v3 = 0;
                v2 = v3;
            }
        }
    } else {
        uint64_t result = result2; // 0x407ca0
        if (result >= a3 && result <= a4) {
            // 0x407d02
            return result;
        }
        int32_t * v4 = __errno_location(); // 0x407caf
        *v4 = result < 0x40000000 ? 34 : 75;
        v2 = v4;
    }
    int64_t v5 = function_407410(a1); // 0x407ccc
    int32_t v6 = *v2; // 0x407cd1
    int32_t err_num = v6 == 22 ? 0 : v6; // 0x407ce7
    error(a7 == 0 ? 1 : a7, err_num, "%s: %s", (char *)a6, (char *)v5);
    // 0x407d02
    return result2;
}
// Address range: 0x407d40 - 0x407d61
int64_t function_407d40(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x407d40
    int64_t result; // 0x407d40
    return result;
}
// Address range: 0x407d70 - 0x4081a0
int64_t function_407d70(int64_t str, int32_t a2, uint32_t base, int64_t * a4, int32_t a5, int64_t a6) {
    if (base >= 37) {
        // 0x40817b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        return &g65;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x407da2
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x407dd2
    int64_t v3 = str; // 0x407dd7
    char v4 = c; // 0x407dd7
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x407dcc
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x407dc8
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x407dd9
    if (v4 == 45) {
        // 0x407e13
        return 4;
    }
    int64_t str2 = a5;
    int64_t v6; // bp-64, 0x407d70
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x407d9e
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x407de4
    int64_t * v7 = (int64_t *)endptr; // 0x407de9
    int64_t v8 = *v7; // 0x407de9
    char v9; // 0x407d70
    int64_t v10; // 0x407d70
    int64_t v11; // 0x407d70
    int64_t v12; // 0x407d70
    int64_t v13; // 0x407d70
    int64_t v14; // 0x407d70
    int64_t v15; // 0x407d70
    if (v8 == str) {
        // 0x407e40
        if (c == 0 || a5 == 0) {
            // 0x407e13
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x407e61
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x407e13
            return 4;
        }
        goto lab_0x407e6f;
    } else {
        int32_t v16 = *v1; // 0x407df4
        int64_t v17 = 0; // 0x407dfa
        if (v16 != 0) {
            // 0x407e28
            v17 = 1;
            if (v16 != 34) {
                // 0x407e13
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x407de4
        v13 = v18;
        v10 = v17;
        if (a5 == 0) {
            goto lab_0x407e10;
        } else {
            char c2 = *(char *)v8; // 0x407e03
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x407f63
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x407e6f;
                } else {
                    goto lab_0x407f75;
                }
            } else {
                goto lab_0x407e10;
            }
        }
    }
  lab_0x407e6f:;
    int64_t v19 = 0x100000000 * v8 >> 32;
    unsigned char v20 = v9 - 69;
    int64_t v21 = 1024; // 0x407e77
    int64_t v22 = 1; // 0x407e77
    int64_t v23; // 0x407d70
    int64_t v24; // 0x407d70
    int64_t v25; // 0x407d70
    int64_t v26; // 0x407d70
    int64_t v27; // 0x407d70
    int64_t v28; // 0x407d70
    int64_t v29; // 0x407d70
    int64_t v30; // 0x407d70
    int64_t v31; // 0x407d70
    int64_t v32; // 0x407d70
    int64_t v33; // 0x407d70
    int64_t v34; // 0x407d70
    int64_t v35; // 0x407d70
    int64_t v36; // 0x407d70
    int64_t v37; // 0x407d70
    int64_t v38; // 0x407d70
    int64_t v39; // 0x407d70
    int64_t v40; // 0x407d70
    int64_t v41; // 0x407d70
    int64_t v42; // 0x407d70
    if (v20 < 48) {
        // 0x407e79
        v21 = 1024;
        v22 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x407eda;
        } else {
            // 0x407e8c
            v21 = 1024;
            v22 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x407eda;
            } else {
                // 0x407ea8
                v21 = 1000;
                v22 = 2;
                switch (*(char *)(v19 + 1)) {
                    case 68: {
                        goto lab_0x407eda;
                    }
                    case 105: {
                        char v43 = *(char *)(v19 + 2); // 0x408109
                        v21 = 1024;
                        v22 = (v43 == 66 ? 2 : 1) + (int64_t)(v43 == 66);
                        goto lab_0x407eda;
                    }
                    default: {
                        // 0x407ebd
                        g60 = v20;
                        v21 = 1000;
                        v22 = 2;
                        v25 = 1024;
                        v37 = 1;
                        v24 = v14;
                        v23 = v11;
                        v38 = 1;
                        v26 = 1024;
                        v39 = 1;
                        v15 = v14;
                        v12 = v11;
                        v40 = 1;
                        v27 = 1024;
                        v41 = 1;
                        v28 = 1024;
                        v42 = 1;
                        v29 = 1024;
                        v33 = 1;
                        v30 = 1024;
                        v34 = 1;
                        v31 = 1024;
                        v35 = 1;
                        v32 = 1024;
                        v36 = 1;
                        switch (v9) {
                            case 69: {
                                goto lab_0x40807b;
                            }
                            case 70: {
                                goto lab_0x407f75;
                            }
                            case 71: {
                                goto lab_0x4080b3;
                            }
                            case 72: {
                                goto lab_0x407f75;
                            }
                            case 73: {
                                goto lab_0x407f75;
                            }
                            case 74: {
                                goto lab_0x407f75;
                            }
                            case 75: {
                                goto lab_0x407f3c;
                            }
                            case 76: {
                                goto lab_0x407f75;
                            }
                            case 77: {
                                goto lab_0x407efe;
                            }
                            case 78: {
                                goto lab_0x407f75;
                            }
                            case 79: {
                                goto lab_0x407f75;
                            }
                            case 80: {
                                goto lab_0x408048;
                            }
                            case 81: {
                                goto lab_0x407f75;
                            }
                            case 82: {
                                goto lab_0x407f75;
                            }
                            case 83: {
                                goto lab_0x407f75;
                            }
                            case 84: {
                                goto lab_0x408018;
                            }
                            case 85: {
                                goto lab_0x407f75;
                            }
                            case 86: {
                                goto lab_0x407f75;
                            }
                            case 87: {
                                goto lab_0x407f75;
                            }
                            case 88: {
                                goto lab_0x407f75;
                            }
                            case 89: {
                                goto lab_0x407fe6;
                            }
                            case 90: {
                                goto lab_0x407fab;
                            }
                            case 91: {
                                goto lab_0x407f75;
                            }
                            case 92: {
                                goto lab_0x407f75;
                            }
                            case 93: {
                                goto lab_0x407f75;
                            }
                            case 94: {
                                goto lab_0x407f75;
                            }
                            case 95: {
                                goto lab_0x407f75;
                            }
                            case 96: {
                                goto lab_0x407f75;
                            }
                            case 97: {
                                goto lab_0x407f75;
                            }
                            case 98: {
                                goto lab_0x407f8f;
                            }
                            case 99: {
                                goto lab_0x407f18;
                            }
                            case 100: {
                                goto lab_0x407f75;
                            }
                            case 101: {
                                goto lab_0x407f75;
                            }
                            case 102: {
                                goto lab_0x407f75;
                            }
                            case 103: {
                                goto lab_0x4080b3;
                            }
                            case 104: {
                                goto lab_0x407f75;
                            }
                            case 105: {
                                goto lab_0x407f75;
                            }
                            case 106: {
                                goto lab_0x407f75;
                            }
                            case 107: {
                                goto lab_0x407f3c;
                            }
                            case 108: {
                                goto lab_0x407f75;
                            }
                            case 109: {
                                goto lab_0x407efe;
                            }
                            case 110: {
                                goto lab_0x407f75;
                            }
                            case 111: {
                                goto lab_0x407f75;
                            }
                            case 112: {
                                goto lab_0x407f75;
                            }
                            case 113: {
                                goto lab_0x407f75;
                            }
                            case 114: {
                                goto lab_0x407f75;
                            }
                            case 115: {
                                goto lab_0x407f75;
                            }
                            case 116: {
                                goto lab_0x408018;
                            }
                            default: {
                                goto lab_0x407eda;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x407eda;
    }
  lab_0x407e10:
    // 0x407e10
    *a4 = v13;
    // 0x407e13
    return v10 & 0xffffffff;
  lab_0x407eda:
    // 0x407eda
    g61 = v9 - 66;
    v25 = v21;
    v37 = v22;
    v24 = v14;
    v23 = v11;
    v38 = v22;
    v26 = v21;
    v39 = v22;
    v15 = v14;
    v12 = v11;
    v40 = v22;
    v27 = v21;
    v41 = v22;
    v28 = v21;
    v42 = v22;
    v29 = v21;
    v33 = v22;
    v30 = v21;
    v34 = v22;
    v31 = v21;
    v35 = v22;
    v32 = v21;
    v36 = v22;
    int64_t v44; // 0x407d70
    switch (v9) {
        case 66: {
            // 0x4080d4
            v44 = v22;
            if (v14 >= 0x40000000000000) {
                goto lab_0x407f47;
            } else {
                // 0x4080e1
                v24 = 1024 * v14;
                v23 = v11;
                v38 = v22;
                goto lab_0x407f18;
            }
        }
        case 69: {
            goto lab_0x40807b;
        }
        case 71: {
            goto lab_0x4080b3;
        }
        case 75: {
            goto lab_0x407f3c;
        }
        case 77: {
            goto lab_0x407efe;
        }
        case 80: {
            goto lab_0x408048;
        }
        case 84: {
            goto lab_0x408018;
        }
        case 89: {
            goto lab_0x407fe6;
        }
        case 90: {
            goto lab_0x407fab;
        }
        case 98: {
            goto lab_0x407f8f;
        }
        case 99: {
            goto lab_0x407f18;
        }
        case 103: {
            goto lab_0x4080b3;
        }
        case 107: {
            goto lab_0x407f3c;
        }
        case 109: {
            goto lab_0x407efe;
        }
        case 116: {
            goto lab_0x408018;
        }
        case 119: {
            // 0x407f80
            v44 = v22;
            if (v14 < 0) {
                goto lab_0x407f47;
            } else {
                // 0x407f85
                v24 = 2 * v14;
                v23 = v11;
                v38 = v22;
                goto lab_0x407f18;
            }
        }
        default: {
            goto lab_0x407f75;
        }
    }
  lab_0x40807b:;
    uint128_t v45 = (int128_t)v14 * (int128_t)v31; // 0x408093
    int64_t v46 = (int64_t)(v45 < 0xffffffffffffffff ? v45 : 0xffffffffffffffff);
    int64_t v47 = v45 > 0xffffffffffffffff ? 1 : 0;
    int32_t v48 = 5; // 0x40809f
    int64_t v49 = v46; // 0x4080a2
    int64_t v50 = v35; // 0x4080a2
    int64_t v51 = v47; // 0x4080a2
    int32_t v52 = v48; // 0x4080a2
    int64_t v53 = v47; // 0x4080a2
    while (v48 != 0) {
        // 0x408090
        v45 = (int128_t)v46 * (int128_t)v31;
        v46 = (int64_t)(v45 < 0xffffffffffffffff ? v45 : 0xffffffffffffffff);
        v47 = v45 > 0xffffffffffffffff ? 1 : v53;
        v48 = v52 - 1;
        v49 = v46;
        v50 = v35;
        v51 = v47;
        v52 = v48;
        v53 = v47;
    }
    goto lab_0x407fd4;
  lab_0x4080b3:
    // 0x4080b3
    v24 = -1;
    v23 = 1;
    v38 = v36;
    if ((int128_t)v32 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x4080be
        int128_t v54; // 0x4080b9
        uint128_t v55; // 0x4080b9
        uint128_t v56 = (v55 & 0xffffffffffffffff) * v54; // 0x4080be
        v24 = -1;
        v23 = 1;
        int64_t v57; // 0x407d70
        v38 = v57;
        if (v56 <= 0xffffffffffffffff) {
            uint128_t v58 = (v56 & 0xffffffffffffffff) * v54; // 0x4080c3
            v24 = -1;
            v23 = 1;
            v38 = v57;
            if (v58 <= 0xffffffffffffffff) {
                // 0x4080c8
                v24 = v58;
                int64_t v59; // 0x407d70
                v23 = v59 & 0xffffffff;
                v38 = v57;
            }
        }
    }
    goto lab_0x407f18;
  lab_0x407f3c:;
    uint128_t v62 = (int128_t)v26 * (int128_t)v14; // 0x407f3f
    v24 = v62;
    v23 = v11;
    v38 = v39;
    v44 = v39;
    if (v62 <= 0xffffffffffffffff) {
        goto lab_0x407f18;
    } else {
        goto lab_0x407f47;
    }
  lab_0x407efe:;
    int128_t v63 = v25; // 0x407f04
    uint128_t v64 = v63 * (int128_t)v14; // 0x407f04
    v44 = v37;
    if (v64 > 0xffffffffffffffff) {
        goto lab_0x407f47;
    } else {
        uint128_t v65 = (v64 & 0xffffffffffffffff) * v63; // 0x407f09
        v44 = v37;
        if (v65 > 0xffffffffffffffff) {
            goto lab_0x407f47;
        } else {
            // 0x407f0e
            v24 = v65;
            v23 = v11;
            v38 = v37;
            goto lab_0x407f18;
        }
    }
  lab_0x408048:;
    uint128_t v66 = (int128_t)v14 * (int128_t)v30; // 0x40805b
    int64_t v67 = (int64_t)(v66 < 0xffffffffffffffff ? v66 : 0xffffffffffffffff);
    int64_t v68 = v66 > 0xffffffffffffffff ? 1 : 0;
    int32_t v69 = 4; // 0x408067
    v49 = v67;
    v50 = v34;
    v51 = v68;
    int32_t v70 = v69; // 0x40806a
    int64_t v71 = v68; // 0x40806a
    while (v69 != 0) {
        // 0x408058
        v66 = (int128_t)v67 * (int128_t)v30;
        v67 = (int64_t)(v66 < 0xffffffffffffffff ? v66 : 0xffffffffffffffff);
        v68 = v66 > 0xffffffffffffffff ? 1 : v71;
        v69 = v70 - 1;
        v49 = v67;
        v50 = v34;
        v51 = v68;
        v70 = v69;
        v71 = v68;
    }
    goto lab_0x407fd4;
  lab_0x408018:;
    uint128_t v72 = (int128_t)v14 * (int128_t)v29; // 0x40802b
    int64_t v73 = (int64_t)(v72 < 0xffffffffffffffff ? v72 : 0xffffffffffffffff);
    int64_t v74 = v72 > 0xffffffffffffffff ? 1 : 0;
    int32_t v75 = 3; // 0x408037
    v49 = v73;
    v50 = v33;
    v51 = v74;
    int32_t v76 = v75; // 0x40803a
    int64_t v77 = v74; // 0x40803a
    while (v75 != 0) {
        // 0x408028
        v72 = (int128_t)v73 * (int128_t)v29;
        v73 = (int64_t)(v72 < 0xffffffffffffffff ? v72 : 0xffffffffffffffff);
        v74 = v72 > 0xffffffffffffffff ? 1 : v77;
        v75 = v76 - 1;
        v49 = v73;
        v50 = v33;
        v51 = v74;
        v76 = v75;
        v77 = v74;
    }
    goto lab_0x407fd4;
  lab_0x407fe6:;
    uint128_t v78 = (int128_t)v14 * (int128_t)v28; // 0x407ffb
    int64_t v79 = (int64_t)(v78 < 0xffffffffffffffff ? v78 : 0xffffffffffffffff);
    int64_t v80 = v78 > 0xffffffffffffffff ? 1 : 0;
    int32_t v81 = 7; // 0x408007
    v49 = v79;
    v50 = v42;
    v51 = v80;
    int32_t v82 = v81; // 0x40800a
    int64_t v83 = v80; // 0x40800a
    while (v81 != 0) {
        // 0x407ff8
        v78 = (int128_t)v79 * (int128_t)v28;
        v79 = (int64_t)(v78 < 0xffffffffffffffff ? v78 : 0xffffffffffffffff);
        v80 = v78 > 0xffffffffffffffff ? 1 : v83;
        v81 = v82 - 1;
        v49 = v79;
        v50 = v42;
        v51 = v80;
        v82 = v81;
        v83 = v80;
    }
    goto lab_0x407fd4;
  lab_0x407fab:;
    uint128_t v84 = (int128_t)v14 * (int128_t)v27; // 0x407fc3
    int64_t v85 = (int64_t)(v84 < 0xffffffffffffffff ? v84 : 0xffffffffffffffff);
    int64_t v86 = v84 > 0xffffffffffffffff ? 1 : 0;
    int32_t v87 = 6; // 0x407fcf
    int32_t v88 = v87; // 0x407fd2
    int64_t v89 = v86; // 0x407fd2
    v49 = v85;
    v50 = v41;
    v51 = v86;
    while (v87 != 0) {
        // 0x407fc0
        v84 = (int128_t)v85 * (int128_t)v27;
        v85 = (int64_t)(v84 < 0xffffffffffffffff ? v84 : 0xffffffffffffffff);
        v86 = v84 > 0xffffffffffffffff ? 1 : v89;
        v87 = v88 - 1;
        v88 = v87;
        v89 = v86;
        v49 = v85;
        v50 = v41;
        v51 = v86;
    }
    goto lab_0x407fd4;
  lab_0x407f8f:
    // 0x407f8f
    v44 = v40;
    if (v14 >= 0x80000000000000) {
        goto lab_0x407f47;
    } else {
        // 0x407f98
        v24 = 512 * v14;
        v23 = v11;
        v38 = v40;
        goto lab_0x407f18;
    }
  lab_0x407f18:;
    int64_t v60 = v23;
    int64_t v61 = (0x100000000 * v38 >> 32) + v19; // 0x407f1d
    *v7 = v61;
    v13 = v24;
    v10 = (*(char *)v61 != 0 ? v60 | 2 : v60) & 0xffffffff;
    goto lab_0x407e10;
  lab_0x407f75:
    // 0x407f75
    *a4 = v15;
    // 0x407e13
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x407f47:
    // 0x407f47
    v24 = -1;
    v23 = 1;
    v38 = v44;
    goto lab_0x407f18;
  lab_0x407fd4:
    // 0x407fd4
    v24 = v49;
    v23 = (v51 | v11) & 0xffffffff;
    v38 = v50;
    goto lab_0x407f18;
}
// Address range: 0x4081a0 - 0x4085e0
int64_t function_4081a0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x4081ae
    if (v1 >= 37) {
        // 0x4085bb
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g65;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x4081d2
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x408202
    int64_t v4 = a1; // 0x408207
    char v5 = c; // 0x408207
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x4081fc
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x4081f8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x408209
    if (v5 == 45) {
        // 0x408245
        return 4;
    }
    // 0x40820e
    int64_t v7; // bp-64, 0x4081a0
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x4081ce
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x408216
    int64_t * v10 = (int64_t *)v8; // 0x40821b
    int64_t v11 = *v10; // 0x40821b
    char v12; // 0x4081a0
    int64_t v13; // 0x4081a0
    int64_t v14; // 0x4081a0
    int64_t v15; // 0x4081a0
    int64_t v16; // 0x4081a0
    int64_t v17; // 0x4081a0
    int64_t v18; // 0x4081a0
    if (v11 == a1) {
        // 0x408278
        if (c == 0 || str == 0) {
            // 0x408245
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x408299
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x408245
            return 4;
        }
        goto lab_0x4082a7;
    } else {
        int32_t v19 = *v2; // 0x408226
        int64_t v20 = 0; // 0x40822c
        if (v19 != 0) {
            // 0x408260
            v20 = 1;
            if (v19 != 34) {
                // 0x408245
                return 4;
            }
        }
        int64_t v21 = v9; // 0x408216
        v16 = v21;
        v13 = v20;
        if (str == 0) {
            goto lab_0x408242;
        } else {
            char c2 = *(char *)v11; // 0x408235
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x4083a3
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x4082a7;
                } else {
                    goto lab_0x4083b5;
                }
            } else {
                goto lab_0x408242;
            }
        }
    }
  lab_0x4082a7:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x4082af
    int64_t v24 = 1; // 0x4082af
    int64_t v25; // 0x4081a0
    int64_t v26; // 0x4081a0
    int64_t v27; // 0x4081a0
    int64_t v28; // 0x4081a0
    int64_t v29; // 0x4081a0
    int64_t v30; // 0x4081a0
    int64_t v31; // 0x4081a0
    int64_t v32; // 0x4081a0
    int64_t v33; // 0x4081a0
    int64_t v34; // 0x4081a0
    int64_t v35; // 0x4081a0
    int64_t v36; // 0x4081a0
    int64_t v37; // 0x4081a0
    int64_t v38; // 0x4081a0
    int64_t v39; // 0x4081a0
    int64_t v40; // 0x4081a0
    int64_t v41; // 0x4081a0
    int64_t v42; // 0x4081a0
    int64_t v43; // 0x4081a0
    int64_t v44; // 0x4081a0
    if (v22 < 48) {
        // 0x4082b1
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40831a;
        } else {
            // 0x4082c4
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x40831a;
            } else {
                // 0x4082e0
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x40831a;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x408549
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x40831a;
                    }
                    default: {
                        // 0x4082f5
                        g62 = v22;
                        v23 = 1000;
                        v24 = 2;
                        v27 = 1024;
                        v39 = 1;
                        v26 = v17;
                        v25 = v14;
                        v40 = 1;
                        v28 = 1024;
                        v41 = 1;
                        v18 = v17;
                        v15 = v14;
                        v42 = 1;
                        v29 = 1024;
                        v43 = 1;
                        v30 = 1024;
                        v44 = 1;
                        v31 = 1024;
                        v35 = 1;
                        v32 = 1024;
                        v36 = 1;
                        v33 = 1024;
                        v37 = 1;
                        v34 = 1024;
                        v38 = 1;
                        switch (v12) {
                            case 69: {
                                goto lab_0x4084bb;
                            }
                            case 70: {
                                goto lab_0x4083b5;
                            }
                            case 71: {
                                goto lab_0x4084f3;
                            }
                            case 72: {
                                goto lab_0x4083b5;
                            }
                            case 73: {
                                goto lab_0x4083b5;
                            }
                            case 74: {
                                goto lab_0x4083b5;
                            }
                            case 75: {
                                goto lab_0x40837c;
                            }
                            case 76: {
                                goto lab_0x4083b5;
                            }
                            case 77: {
                                goto lab_0x40833e;
                            }
                            case 78: {
                                goto lab_0x4083b5;
                            }
                            case 79: {
                                goto lab_0x4083b5;
                            }
                            case 80: {
                                goto lab_0x408488;
                            }
                            case 81: {
                                goto lab_0x4083b5;
                            }
                            case 82: {
                                goto lab_0x4083b5;
                            }
                            case 83: {
                                goto lab_0x4083b5;
                            }
                            case 84: {
                                goto lab_0x408458;
                            }
                            case 85: {
                                goto lab_0x4083b5;
                            }
                            case 86: {
                                goto lab_0x4083b5;
                            }
                            case 87: {
                                goto lab_0x4083b5;
                            }
                            case 88: {
                                goto lab_0x4083b5;
                            }
                            case 89: {
                                goto lab_0x408426;
                            }
                            case 90: {
                                goto lab_0x4083eb;
                            }
                            case 91: {
                                goto lab_0x4083b5;
                            }
                            case 92: {
                                goto lab_0x4083b5;
                            }
                            case 93: {
                                goto lab_0x4083b5;
                            }
                            case 94: {
                                goto lab_0x4083b5;
                            }
                            case 95: {
                                goto lab_0x4083b5;
                            }
                            case 96: {
                                goto lab_0x4083b5;
                            }
                            case 97: {
                                goto lab_0x4083b5;
                            }
                            case 98: {
                                goto lab_0x4083cf;
                            }
                            case 99: {
                                goto lab_0x408358;
                            }
                            case 100: {
                                goto lab_0x4083b5;
                            }
                            case 101: {
                                goto lab_0x4083b5;
                            }
                            case 102: {
                                goto lab_0x4083b5;
                            }
                            case 103: {
                                goto lab_0x4084f3;
                            }
                            case 104: {
                                goto lab_0x4083b5;
                            }
                            case 105: {
                                goto lab_0x4083b5;
                            }
                            case 106: {
                                goto lab_0x4083b5;
                            }
                            case 107: {
                                goto lab_0x40837c;
                            }
                            case 108: {
                                goto lab_0x4083b5;
                            }
                            case 109: {
                                goto lab_0x40833e;
                            }
                            case 110: {
                                goto lab_0x4083b5;
                            }
                            case 111: {
                                goto lab_0x4083b5;
                            }
                            case 112: {
                                goto lab_0x4083b5;
                            }
                            case 113: {
                                goto lab_0x4083b5;
                            }
                            case 114: {
                                goto lab_0x4083b5;
                            }
                            case 115: {
                                goto lab_0x4083b5;
                            }
                            case 116: {
                                goto lab_0x408458;
                            }
                            default: {
                                goto lab_0x40831a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40831a;
    }
  lab_0x408242:
    // 0x408242
    *a4 = v16;
    // 0x408245
    return v13 & 0xffffffff;
  lab_0x40831a:
    // 0x40831a
    g63 = v12 - 66;
    v27 = v23;
    v39 = v24;
    v26 = v17;
    v25 = v14;
    v40 = v24;
    v28 = v23;
    v41 = v24;
    v18 = v17;
    v15 = v14;
    v42 = v24;
    v29 = v23;
    v43 = v24;
    v30 = v23;
    v44 = v24;
    v31 = v23;
    v35 = v24;
    v32 = v23;
    v36 = v24;
    v33 = v23;
    v37 = v24;
    v34 = v23;
    v38 = v24;
    int64_t v46; // 0x4081a0
    switch (v12) {
        case 66: {
            // 0x408514
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x408387;
            } else {
                // 0x408521
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x408358;
            }
        }
        case 69: {
            goto lab_0x4084bb;
        }
        case 71: {
            goto lab_0x4084f3;
        }
        case 75: {
            goto lab_0x40837c;
        }
        case 77: {
            goto lab_0x40833e;
        }
        case 80: {
            goto lab_0x408488;
        }
        case 84: {
            goto lab_0x408458;
        }
        case 89: {
            goto lab_0x408426;
        }
        case 90: {
            goto lab_0x4083eb;
        }
        case 98: {
            goto lab_0x4083cf;
        }
        case 99: {
            goto lab_0x408358;
        }
        case 103: {
            goto lab_0x4084f3;
        }
        case 107: {
            goto lab_0x40837c;
        }
        case 109: {
            goto lab_0x40833e;
        }
        case 116: {
            goto lab_0x408458;
        }
        case 119: {
            // 0x4083c0
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x408387;
            } else {
                // 0x4083c5
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x408358;
            }
        }
        default: {
            goto lab_0x4083b5;
        }
    }
  lab_0x4084bb:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x4084d3
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x4084df
    int64_t v51 = v48; // 0x4084e2
    int64_t v52 = v37; // 0x4084e2
    int64_t v53 = v49; // 0x4084e2
    int32_t v54 = v50; // 0x4084e2
    int64_t v55 = v49; // 0x4084e2
    while (v50 != 0) {
        // 0x4084d0
        v47 = (int128_t)v48 * (int128_t)v33;
        v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
        v49 = v47 > 0xffffffffffffffff ? 1 : v55;
        v50 = v54 - 1;
        v51 = v48;
        v52 = v37;
        v53 = v49;
        v54 = v50;
        v55 = v49;
    }
    goto lab_0x408414;
  lab_0x4084f3:
    // 0x4084f3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x4084fe
        int128_t v56; // 0x4084f9
        uint128_t v57; // 0x4084f9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x4084fe
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x4081a0
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x408503
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x408508
                v26 = v60;
                int64_t v61; // 0x4081a0
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x408358;
  lab_0x40837c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x40837f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x408358;
    } else {
        goto lab_0x408387;
    }
  lab_0x40833e:;
    int128_t v65 = v27; // 0x408344
    uint128_t v66 = v65 * (int128_t)v17; // 0x408344
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x408387;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x408349
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x408387;
        } else {
            // 0x40834e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x408358;
        }
    }
  lab_0x408488:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x40849b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x4084a7
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x4084aa
    int64_t v73 = v70; // 0x4084aa
    while (v71 != 0) {
        // 0x408498
        v68 = (int128_t)v69 * (int128_t)v32;
        v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
        v70 = v68 > 0xffffffffffffffff ? 1 : v73;
        v71 = v72 - 1;
        v51 = v69;
        v52 = v36;
        v53 = v70;
        v72 = v71;
        v73 = v70;
    }
    goto lab_0x408414;
  lab_0x408458:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x40846b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x408477
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x40847a
    int64_t v79 = v76; // 0x40847a
    while (v77 != 0) {
        // 0x408468
        v74 = (int128_t)v75 * (int128_t)v31;
        v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
        v76 = v74 > 0xffffffffffffffff ? 1 : v79;
        v77 = v78 - 1;
        v51 = v75;
        v52 = v35;
        v53 = v76;
        v78 = v77;
        v79 = v76;
    }
    goto lab_0x408414;
  lab_0x408426:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x40843b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x408447
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x40844a
    int64_t v85 = v82; // 0x40844a
    while (v83 != 0) {
        // 0x408438
        v80 = (int128_t)v81 * (int128_t)v30;
        v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
        v82 = v80 > 0xffffffffffffffff ? 1 : v85;
        v83 = v84 - 1;
        v51 = v81;
        v52 = v44;
        v53 = v82;
        v84 = v83;
        v85 = v82;
    }
    goto lab_0x408414;
  lab_0x4083eb:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x408403
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x40840f
    int32_t v90 = v89; // 0x408412
    int64_t v91 = v88; // 0x408412
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x408400
        v86 = (int128_t)v87 * (int128_t)v29;
        v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
        v88 = v86 > 0xffffffffffffffff ? 1 : v91;
        v89 = v90 - 1;
        v90 = v89;
        v91 = v88;
        v51 = v87;
        v52 = v43;
        v53 = v88;
    }
    goto lab_0x408414;
  lab_0x4083cf:
    // 0x4083cf
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x408387;
    } else {
        // 0x4083d8
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x408358;
    }
  lab_0x408358:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x40835d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x408242;
  lab_0x4083b5:
    // 0x4083b5
    *a4 = v18;
    // 0x408245
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x408387:
    // 0x408387
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x408358;
  lab_0x408414:
    // 0x408414
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x408358;
}
// Address range: 0x4085e0 - 0x40865b
int64_t function_4085e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4085e7
    if (fileno(stream) < 0) {
        // 0x408647
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4085fa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40862b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x408647
            return fclose(stream);
        }
    }
    // 0x4085fc
    if ((int32_t)function_4087a0(a1, v1) == 0) {
        // 0x408647
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x408608
    int32_t v3 = *v2; // 0x408610
    int64_t result = fclose(stream); // 0x40861e
    if (v3 != 0) {
        // 0x408650
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x408620
    return result;
}
// Address range: 0x408660 - 0x408795
int64_t function_408660(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x408740
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40869c
    int64_t v2; // 0x408660
    if (g53 < 0) {
        int64_t v3 = function_408660(fd, 0, v1, a4); // 0x4086e4
        int64_t v4 = v3 & 0xffffffff; // 0x4086e9
        if ((int32_t)v3 < 0) {
            // 0x4086d0
            return v4 & 0xffffffff;
        }
        // 0x4086ef
        v2 = v4;
        if (g53 != -1) {
            // 0x4086d0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x4086b7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x4086c6
            g53 = 1;
            // 0x4086d0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_408660(fd & 0xffffffff, 0, v1, a4); // 0x408777
        int64_t v7 = v6 & 0xffffffff; // 0x40877c
        if ((int32_t)v6 < 0) {
            // 0x4086d0
            return v7 & 0xffffffff;
        }
        // 0x408786
        g53 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x4086ff
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40870a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x4086d0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x408722
    close(fd2);
    // 0x4086d0
    return 0xffffffff;
}
// Address range: 0x4087a0 - 0x4087e0
int64_t function_4087a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4087ba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4087ba
        return fflush(stream);
    }
    // 0x4087c8
    function_4087e0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4087e0 - 0x408837
int64_t function_4087e0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4087e0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4087ea
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40881b
    int64_t result = -1; // 0x408824
    if (v1 != -1) {
        // 0x408826
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x408832
    return result;
}
// Address range: 0x408840 - 0x40891f
int64_t function_408840(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40884c
    uint32_t v2 = *v1; // 0x40884c
    int64_t v3 = a2 & 0xffffffff; // 0x408851
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x408854
    uint64_t v5 = (int64_t)*v4; // 0x408854
    int64_t v6; // 0x4088c2
    if (v3 <= v5) {
      lab_0x4088bc_2:
        // 0x4088bc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x408842
    int64_t v8 = v2; // 0x408840
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4088bc
        goto lab_0x4088bc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x408878
    int64_t v17; // 0x408886
    int64_t * v18; // 0x4088a0
    int64_t * v19; // 0x4088a3
    int64_t v20; // 0x4088ae
    int64_t v21; // 0x408886
    while ((v16 & 0xffffffff) > v10) {
        // 0x408883
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4088a0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4088b7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4088bc
            goto lab_0x4088bc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4088bc
            goto lab_0x4088bc_2;
        }
        // 0x408872
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4088fb
    int64_t * v23 = (int64_t *)v22; // 0x408900
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x408903
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x408900
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x408917
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40886d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4088bc
            goto lab_0x4088bc_2;
        }
        // 0x408872
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x408883
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4088a0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4088b7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4088bc
                goto lab_0x4088bc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4088bc
                goto lab_0x4088bc_2;
            }
            // 0x408872
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4088e0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x408900
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x408917
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4088bc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x408920 - 0x408f3c
int64_t function_408920(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40893f
    int64_t v2 = *v1; // 0x40893f
    char * str2 = (char *)v2; // 0x40894c
    char c = *str2; // 0x40894c
    int64_t v3 = v2; // 0x408978
    int64_t v4 = 0; // 0x408920
    int32_t v5; // 0x408920
    int64_t v6; // 0x408920
    int64_t v7; // 0x408920
    int64_t v8; // 0x408920
    int64_t v9; // 0x408920
    int64_t v10; // 0x408920
    int64_t v11; // 0x408920
    int64_t v12; // 0x408920
    int64_t v13; // 0x408920
    int64_t str3; // 0x408920
    int64_t v14; // 0x408920
    int64_t v15; // 0x408920
    int64_t v16; // 0x408920
    int64_t v17; // 0x408920
    int32_t v18; // 0x408920
    int32_t v19; // 0x408920
    int32_t v20; // 0x408920
    int32_t v21; // 0x408920
    int32_t v22; // 0x408920
    int32_t v23; // 0x408920
    int32_t v24; // 0x408920
    int32_t v25; // 0x408920
    int32_t v26; // 0x408920
    int32_t v27; // 0x408920
    int32_t v28; // 0x408920
    int32_t v29; // 0x408920
    int64_t nmemb; // 0x408920
    int64_t v30; // 0x408920
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40897c
            while (v31 != 0 == (v31 != 61)) {
                // 0x408978
                v3++;
                v31 = *(char *)v3;
            }
            // 0x408988
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40898e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x408958
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4089bc
                int64_t v34; // 0x408920
                int64_t v35; // 0x408920
                if (strncmp(str, str2, n) == 0) {
                    // 0x4089c5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x408b40;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4089d6
                int64_t v37 = *(int64_t *)v36; // 0x4089da
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4089b0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4089c5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x408b40;
                        }
                    }
                    // 0x4089d6
                    v36 = v38 + 32;
                    v37 = *(int64_t *)v36;
                    nmemb = v33 + 1;
                }
                int32_t v39 = v32;
                v22 = -1;
                v26 = 0;
                v18 = 0;
                v14 = 0;
                v10 = 0;
                v8 = a4;
                str3 = a4;
                v6 = 0;
                while (true) {
                  lab_0x408a26:
                    // 0x408a26
                    v7 = v6;
                    v9 = v8;
                    v11 = v10;
                    v15 = v14;
                    v19 = v18;
                    v27 = v26;
                    v23 = v22;
                    v24 = v23;
                    v28 = v27;
                    v20 = v19;
                    v16 = v15;
                    v12 = v11;
                    if (strncmp((char *)str3, str2, n) != 0) {
                        goto lab_0x408a80;
                    } else {
                        if (v11 == 0) {
                            // 0x408bf0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x408a80;
                        } else {
                            if (v39 == 0) {
                                // 0x408ba0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x408a4a;
                                } else {
                                    // 0x408bac
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x408a4a;
                                    } else {
                                        // 0x408bba
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x408a4a;
                                        } else {
                                            goto lab_0x408a80;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x408a4a;
                            }
                        }
                    }
                }
              lab_0x408a91:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x408c66
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x408e12
                            flockfile(g33);
                            int64_t v41 = *v1; // 0x408e32
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x408e7f
                            int64_t v43 = (int64_t)g33;
                            int64_t v44 = v43; // 0x408e99
                            int64_t v45; // 0x408e9b
                            if (*(char *)v42 != 0) {
                                // 0x408e9b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g33;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x408e93
                            while (v17 + nmemb != v42) {
                                // 0x408e95
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x408e9b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g33;
                                }
                                // 0x408e88
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x408ec0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g33);
                            v40 = *v1;
                        } else {
                            // 0x408c74
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x408dcf
                        free((int64_t *)v17);
                    }
                    // 0x408cc9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x408ce0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x408b8e
                    return 63;
                }
                // 0x408ab0
                v5 = v39;
                if (v13 != 0) {
                    // 0x408b34
                    v35 = v13;
                    v34 = v25;
                  lab_0x408b40:;
                    int32_t * v49 = (int32_t *)a7; // 0x408b50
                    uint32_t v50 = *v49; // 0x408b50
                    int64_t v51 = v50; // 0x408b50
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x408b5a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x408b63
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x408d8f
                                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x408d3a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x408b8e
                            return 63;
                        }
                        // 0x408bd8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x408eef
                                    __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x408ded
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x408e00
                                // 0x408b8e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x408cfe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x408d12
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x408b7b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x408b7e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x408b82
                    int64_t result = v59; // 0x408b88
                    if (v58 != 0) {
                        // 0x408b8a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x408b8e
                    return result;
                }
            } else {
                // 0x40898e
                v5 = v32;
            }
            // break -> 0x408ab5
            break;
        }
    }
    // 0x408ab5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x408acd
        if (*(char *)(v60 + 1) != 45) {
            // 0x408ad7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x408b8e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x408c19
        __fprintf_chk(g33, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x408b06
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x408b16
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x408a80:
    // 0x408a80
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x408a80
    int64_t v63 = *(int64_t *)v62; // 0x408a84
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x408a91
        goto lab_0x408a91;
    }
    goto lab_0x408a26;
  lab_0x408a4a:
    // 0x408a4a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x408920
    int32_t v65; // 0x408920
    int32_t v66; // 0x408920
    if (v27 != 0) {
        goto lab_0x408a80;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x408c00
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x408a80;
            } else {
                goto lab_0x408a71;
            }
        } else {
            // 0x408a65
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x408d5c
                int64_t v67 = (int64_t)mem; // 0x408d5c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x408a80;
                } else {
                    // 0x408d6f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x408a71;
                }
            } else {
                goto lab_0x408a71;
            }
        }
    }
  lab_0x408a71:
    // 0x408a71
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x408a80;
}
// Address range: 0x408f40 - 0x409506
int64_t function_408f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x408f61
    if (v3 < 1) {
        // 0x40911e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x408f5d
    int32_t v5 = *(int32_t *)a7; // 0x408f69
    uint64_t v6 = a1 & 0xffffffff; // 0x408f6b
    int64_t v7 = v2; // 0x408f70
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x408f73
    *v8 = 0;
    int64_t v9; // 0x408f40
    int64_t v10; // 0x408f40
    int64_t v11; // 0x408f40
    int64_t v12; // 0x408f40
    int64_t str; // 0x408f40
    int64_t v13; // 0x408f40
    int64_t v14; // 0x408f40
    int64_t v15; // 0x408f40
    int64_t v16; // 0x408f40
    int64_t v17; // 0x408f40
    int32_t v18; // 0x408f40
    char v19; // 0x408f40
    if (v5 == 0) {
        // 0x409158
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x408f8a;
    } else {
        // 0x408f83
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x408fd0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x408fd3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x409098;
            } else {
                int64_t v22 = v7 + 1; // 0x408fe6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x408ff6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4090ac;
                } else {
                    goto lab_0x409008;
                }
            }
        } else {
            goto lab_0x408f8a;
        }
    }
  lab_0x408f8a:
    // 0x408f8a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x408f90
    *v24 = 0;
    int64_t v25; // 0x408f40
    int64_t v26; // 0x408f40
    int64_t v27; // 0x408f40
    switch (*(char *)&v2) {
        case 45: {
            // 0x409080
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40908d;
        }
        case 43: {
            // 0x409390
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40908d;
        }
        default: {
            // 0x408fac
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40930f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x409428
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40908d;
                } else {
                    // 0x40931d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x408fba;
                }
            } else {
                goto lab_0x408fba;
            }
        }
    }
  lab_0x409098:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40909f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x409008;
    } else {
        goto lab_0x4090ac;
    }
  lab_0x408fba:
    // 0x408fba
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40908d;
  lab_0x40908d:
    // 0x40908d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x409098;
  lab_0x409008:;
    uint32_t v30 = *(int32_t *)a7; // 0x409008
    int64_t v31 = v30; // 0x409008
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40900a
    if ((int64_t)*v32 > v31) {
        // 0x40900f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x409012
    if (*v33 > v30) {
        // 0x409017
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40901a
    int64_t v35 = v31; // 0x40901e
    int64_t v36 = v15; // 0x40901e
    int64_t v37; // 0x408f40
    int64_t v38; // 0x408f40
    int64_t v39; // 0x408f40
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x409188
        int64_t v41 = v40; // 0x409188
        v2 = v41;
        int64_t v42; // 0x408f40
        if (*v33 == v40) {
            // 0x409370
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x409378
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x409194
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x409198
                function_408840(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4091a8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4091b1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4091ba
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4091d1
            int64_t v47 = v45 & 0xffffffff; // 0x4091d5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4091de
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4091e4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4091e6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4091c0
            int64_t v49 = v48 & 0xffffffff; // 0x4091c0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4091d1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4091de
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4091e4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4091e6;
                    }
                }
                // 0x4091c0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x409388
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4091e6;
    } else {
        goto lab_0x409024;
    }
  lab_0x4090ac:
    // 0x4090ac
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4090af
    int64_t v51 = v12; // 0x4090af
    int64_t v52 = v14; // 0x4090af
    if (*(char *)v10 == 0) {
        goto lab_0x409008;
    } else {
        goto lab_0x4090b5;
    }
  lab_0x409024:;
    int32_t v53 = v35; // 0x409024
    int64_t v54; // 0x408f40
    int64_t v55; // 0x408f40
    int64_t v56; // 0x408f40
    int64_t v57; // 0x408f40
    int64_t v58; // 0x408f40
    int64_t v59; // 0x408f40
    char * v60; // 0x408f40
    int64_t v61; // 0x408f40
    int64_t v62; // 0x409039
    int64_t v63; // 0x408f40
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x409173
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x409176;
    } else {
        // 0x40902c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x408f40
        int64_t v66 = v65 ? -1 : 1; // 0x409040
        int64_t v67 = (int64_t)"--"; // 0x408f40
        int64_t v68 = v62; // 0x408f40
        int64_t v69 = 3; // 0x409040
        unsigned char v70 = *(char *)v68; // 0x409040
        char v71 = *(char *)v67; // 0x409040
        char v72 = v71; // 0x409040
        bool v73 = false; // 0x409040
        while (v70 == v71) {
            v69--;
            v67 += v66;
            v68 += v66;
            v72 = v70;
            v73 = true;
            if (v69 == 0) {
                // break -> 
                break;
            }
            v70 = *(char *)v68;
            v71 = *(char *)v67;
            v72 = v71;
            v73 = false;
        }
        unsigned char v74 = v72;
        if ((v70 >= v74 && !v73) != v70 < v74) {
            // 0x409130
            if (*(char *)v62 == 45) {
                // 0x4091f0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4091f0
                if (c == 0) {
                    goto lab_0x40913a;
                } else {
                    // 0x4091fd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x409280;
                    } else {
                        if (c == 45) {
                            // 0x409463
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4092d5;
                        } else {
                            // 0x40920e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x409280;
                            } else {
                                // 0x409213
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x409234;
                                } else {
                                    // 0x40921a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x409280;
                                    } else {
                                        goto lab_0x409234;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40913a;
            }
        } else {
            uint32_t v75 = *v33; // 0x409050
            v2 = v75;
            int32_t v76 = *v32; // 0x409053
            int64_t v77 = v35 + 1; // 0x409056
            int32_t v78 = v77; // 0x409059
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4093c0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x409067
                    function_408840(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x409075
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x409176;
        }
    }
  lab_0x4090b5:;
    // 0x4090b5
    int64_t v79; // bp-104, 0x408f40
    int64_t v80 = &v79; // 0x408f4a
    int64_t v81 = v50 + 1; // 0x4090b5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4090bc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4090c1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4090c5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4090c9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4090d1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4090d6
    int32_t c2 = v84; // 0x4090d6
    char * found_char_pos = strchr(str2, c2); // 0x4090d6
    int64_t v87 = *v82; // 0x4090db
    v2 = v87;
    int64_t v88 = *v85; // 0x4090e5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4090f0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4093e0
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4093ad
        *(int32_t *)(v1 + 8) = c2;
        // 0x40911e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4090d6
    char v91 = *(char *)(v90 + 1); // 0x40910b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4090c5
        if (v91 != 58) {
            // 0x40911e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x409334
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x409438
                *v8 = 0;
            } else {
                // 0x40941c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40935e
            *v83 = 0;
            // 0x40911e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40933e
        if (v93 != 0) {
            // 0x4093d0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40935e
            *v83 = 0;
            // 0x40911e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x409351
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40935e
            *v83 = 0;
            // 0x40911e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40949a
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40944a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x409451
        // 0x40935e
        *v83 = 0;
        // 0x40911e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4092a9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4092ab
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4094d0
                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x409481
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x409488
            // 0x40911e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4092b6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4092ba
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4092d5;
  lab_0x4091e6:
    // 0x4091e6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x409024;
  lab_0x4092d5:;
    int64_t v99 = function_408920(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4092f3
    // 0x40911e
    return v99 & 0xffffffff;
  lab_0x409176:;
    int32_t v100 = v55; // 0x409176
    if (v100 != (int32_t)v59) {
        // 0x40917a
        *(int32_t *)a7 = v100;
    }
    // 0x40911e
    return 0xffffffff;
  lab_0x40913a:
    // 0x40913a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x409141
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40911e
    return v99 & 0xffffffff;
  lab_0x409280:
    // 0x409280
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4090b5;
  lab_0x409234:
    // 0x409234
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_408920(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40925a
    if ((int32_t)v101 != -1) {
        // 0x40911e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40926f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x409280;
}
// Address range: 0x409510 - 0x409566
int64_t function_409510(int64_t a1) {
    // 0x409510
    *(int32_t *)&g54 = g28;
    *(int32_t *)&g55 = g27;
    int64_t v1; // 0x409510
    int64_t result = function_408f40(v1, v1, v1, v1, v1, v1, &g54, a1 & 0xffffffff); // 0x409536
    g28 = *(int32_t *)&g54;
    g59 = g57;
    *(int32_t *)&g26 = g56;
    return result;
}
// Address range: 0x409570 - 0x409588
int64_t function_409570(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409570
    return function_409510(1);
}
// Address range: 0x409590 - 0x4095a3
int64_t function_409590(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x409590
    return function_409510(0);
}
// Address range: 0x4095b0 - 0x4095c5
int64_t function_4095b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4095b0
    return function_408f40(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4095d0 - 0x4095e6
int64_t function_4095d0(void) {
    // 0x4095d0
    return function_409510(0);
}
// Address range: 0x4095f0 - 0x409608
int64_t function_4095f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4095f0
    return function_408f40(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x409610 - 0x40968a
int64_t function_409610(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40961b
    int64_t v2 = (int64_t)&g11; // 0x40961b
    int32_t * pwc; // 0x409610
    int64_t v3; // 0x409610
    int64_t n; // 0x409610
    if (a2 == 0) {
        goto lab_0x409662;
    } else {
        // 0x40961d
        if (a3 == 0) {
            // 0x409648
            return -2;
        }
        // 0x409629
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x409662;
        } else {
            goto lab_0x409634;
        }
    }
  lab_0x409662:
    // 0x409662
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x409610
    pwc = (int32_t *)&v4;
    goto lab_0x409634;
  lab_0x409634:;
    char * wstr = (char *)v3; // 0x40963a
    int64_t ps; // 0x409610
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40963a
    int64_t result = v5; // 0x40963a
    if (v5 < 0xfffffffe) {
        // 0x409648
        return result;
    }
    int64_t result2 = result; // 0x409679
    if ((char)function_4096f0(0, v3) == 0) {
        // 0x40967b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x409648
    return result2;
}
// Address range: 0x409690 - 0x4096ed
int64_t function_409690(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x409697
    int64_t v2; // 0x409690
    int64_t result = function_4085e0(a1, v2); // 0x4096a8
    if ((v2 & 32) != 0) {
        // 0x4096d0
        if ((int32_t)result == 0) {
            // 0x4096d4
            *__errno_location() = 0;
        }
        // 0x4096ca
        return 0xffffffff;
    }
    // 0x4096b1
    if ((int32_t)result == 0) {
        // 0x4096ca
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4096b8
    if (v1 == 0) {
        // 0x4096ba
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4096ca
    return result2;
}
// Address range: 0x4096f0 - 0x40974e
int64_t function_4096f0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4096f6
    if (locale == NULL) {
        // 0x409723
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4096f6
    bool v2; // 0x4096f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x4096f0
    int64_t v5 = v1; // 0x4096f0
    int64_t v6 = 2; // 0x409715
    unsigned char v7 = *(char *)v5; // 0x409715
    char v8 = *(char *)v4; // 0x409715
    char v9 = v8; // 0x409715
    bool v10 = false; // 0x409715
    while (v7 == v8) {
        // 0x409708
        v6--;
        v4 += v3;
        v5 += v3;
        v9 = v7;
        v10 = true;
        if (v6 == 0) {
            // break -> 
            break;
        }
        v7 = *(char *)v5;
        v8 = *(char *)v4;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    int64_t v12 = (int64_t)"POSIX"; // 0x409721
    int64_t v13 = v1; // 0x409721
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x409723
        return 0;
    }
    int64_t v14 = 6; // 0x409721
    unsigned char v15 = *(char *)v13; // 0x40973d
    char v16 = *(char *)v12; // 0x40973d
    char v17 = v16; // 0x40973d
    bool v18 = false; // 0x40973d
    while (v15 == v16) {
        // 0x409730
        v14--;
        v12 += v3;
        v13 += v3;
        v17 = v15;
        v18 = true;
        if (v14 == 0) {
            // break -> 
            break;
        }
        v15 = *(char *)v13;
        v16 = *(char *)v12;
        v17 = v16;
        v18 = false;
    }
    unsigned char v19 = v17;
    return !((v15 < v19 | v18)) != v15 < v19;
}
// Address range: 0x409750 - 0x409cb2
int64_t function_409750(void) {
    char * v1 = nl_langinfo(14); // 0x409766
    char * v2 = g58; // 0x40976b
    char * v3; // 0x409750
    int64_t v4; // 0x409750
    int64_t v5; // 0x409750
    int64_t v6; // 0x409750
    int64_t v7; // 0x409750
    int32_t size; // 0x409750
    int32_t size2; // 0x409750
    int32_t len; // 0x409822
    int64_t v8; // 0x409822
    char * env_val; // 0x40980d
    if (v2 == NULL) {
        // 0x409808
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x409875;
        } else {
            // 0x40981a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x409875;
            } else {
                // 0x40981f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40980d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x409ca5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x409875;
                    } else {
                        // 0x409c19
                        size2 = len + 14;
                        goto lab_0x40983b;
                    }
                } else {
                    goto lab_0x40983b;
                }
            }
        }
    } else {
        // 0x409750
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40978a;
    }
  lab_0x409abc:;
    // 0x409abc
    struct _IO_FILE * stream; // 0x4098fb
    int32_t v10 = __uflow(stream); // 0x409abf
    int64_t v11; // 0x409750
    int64_t v12 = v11; // 0x409ac9
    int64_t v13; // 0x409750
    int64_t v14 = v13; // 0x409ac9
    int32_t v15 = v10; // 0x409ac9
    int64_t v16; // 0x409750
    int64_t v17 = v16; // 0x409ac9
    int64_t v18 = v11; // 0x409ac9
    int64_t v19 = v13; // 0x409ac9
    int64_t v20 = v16; // 0x409ac9
    if (v10 == -1) {
        // break -> 0x409acf
        goto lab_0x409acf;
    }
    goto lab_0x409949;
  lab_0x40993e:;
    // 0x40993e
    int64_t v90; // 0x409750
    int64_t * v32; // 0x409930
    *v32 = v90 + 1;
    int64_t v89; // 0x409750
    v12 = v89;
    int64_t v91; // 0x409750
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x409750
    v17 = v92;
    goto lab_0x409949;
  lab_0x409949:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x409750
    int32_t v25; // bp-120, 0x409750
    int32_t v26; // bp-184, 0x409750
    int64_t v27; // 0x4098fb
    int64_t v28; // 0x409918
    int64_t v29; // 0x40991d
    int64_t * v30; // 0x409934
    switch (c) {
        case 32: {
            goto lab_0x409930;
        }
        case 10: {
            goto lab_0x409930;
        }
        case 9: {
            goto lab_0x409930;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x409b21
            int32_t v33; // 0x409750
            char v34; // 0x409750
            int32_t v35; // 0x409b2e
            if (v31 < *v30) {
                // 0x409b00
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x409b2b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x409b21
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x409b00
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x409b2b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x409b10
                v36 = v33;
            }
            // 0x409bff
            if (v36 == -1) {
                // break -> 0x409acf
                break;
            }
            goto lab_0x409930;
        }
        default: {
            // 0x40995f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x409acf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x409988
            int64_t v39 = v37 + 4; // 0x40998a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x409996
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x409998
            while (v41 == 0) {
                // 0x409988
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4099b6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4099c2
            int64_t v45 = v43 + 4; // 0x4099c4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4099d0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4099d2
            while (v47 == 0) {
                // 0x4099c2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4099bf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4099e8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4099f8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4099fc
            int64_t v52 = v51 + v48; // 0x409a05
            int64_t * mem; // 0x409750
            int64_t v53; // 0x409750
            int64_t v54; // 0x409750
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x409b3b
                int64_t v56 = v55 + 3; // 0x409b47
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x409a21
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x409a30
            if (mem == NULL) {
                // 0x409c5c
                free((int64_t *)v21);
                function_4085e0(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x4098d4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x409a48
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x409a52
            uint32_t v62 = (int32_t)v59; // 0x409a55
            int64_t v63; // 0x409750
            if (v62 >= 8) {
                // 0x409b64
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x409b7e
                int64_t v66 = v61 - v65; // 0x409b82
                uint32_t v67 = (int32_t)(v66 + v59); // 0x409b8d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x409b9e
                    int64_t v70 = v69 & 0xffffffff; // 0x409b9e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x409b9b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x409c2f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x409a67
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x409a6b
                        *(char *)v61 = (char)v26;
                        v63 = v61;
                        if ((v59 & 2) != 0) {
                            int64_t v72 = (v59 & 0xffffffff) - 2;
                            *(int16_t *)(v61 + v72) = *(int16_t *)(v72 + v29);
                            v63 = v61;
                        }
                    }
                }
            }
            int64_t v73 = v51 + 1; // 0x409a7b
            int64_t v74 = v60 - 1; // 0x409a7f
            uint32_t v75 = (int32_t)v73; // 0x409a84
            int64_t v76; // 0x409750
            if (v75 >= 8) {
                // 0x409bb2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x409bbc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x409bcc
                int64_t v80 = v74 - v79; // 0x409bd0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x409bdb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x409beb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x409be9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x409c46
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x409c4e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x409a96
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x409a9a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x409c93
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x409aae
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40993e;
            } else {
                goto lab_0x409abc;
            }
        }
    }
  lab_0x409930:;
    int64_t v93 = v23; // 0x409750
    int64_t v94 = v22; // 0x409750
    int64_t v95 = v21; // 0x409750
    goto lab_0x409930_2;
  lab_0x409875:;
    int64_t * mem3 = malloc(size); // 0x409875
    int64_t v97 = (int64_t)&g11; // 0x409880
    int64_t v98; // 0x409750
    int64_t path; // 0x409750
    if (mem3 == NULL) {
        goto lab_0x409852;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x409875
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x409896;
    }
  lab_0x40978a:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x40977d
    char v100 = *v3; // 0x40978a
    int64_t v101; // 0x409750
    if (v100 == 0) {
        // 0x4097e4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x409750
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x409750
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4097d0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4097d7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4097a0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4097ad
        char v107 = *(char *)v106; // 0x4097b2
        v102 = v107;
        if (v107 == 0) {
            // 0x4097e4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4097bb
    v104 = v103 + 1;
  lab_0x4097d7:
    // 0x4097e4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x409852:;
    char * v108 = (char *)v97;
    g58 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40978a;
  lab_0x409896:;
    int64_t v109 = v98 + path; // 0x409896
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4098c2
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x4098f1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x409c22
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x409915
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x409930_2:;
                uint64_t v96 = *v32; // 0x409930
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x409abc;
                } else {
                    goto lab_0x40993e;
                }
            }
          lab_0x409acf:
            // 0x409acf
            function_4085e0(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x409aee
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4098d4;
  lab_0x40983b:;
    int64_t * mem4 = malloc(size2); // 0x40983b
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x4098e1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x409896;
    } else {
        goto lab_0x409852;
    }
  lab_0x4098d4:
    // 0x4098d4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x409852;
}
// Address range: 0x409cc0 - 0x409d1d
int64_t function_409cc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409cc0
    return function_4016b0();
}
// Address range: 0x409d20 - 0x409d21
int64_t function_409d20(void) {
    // 0x409d20
    int64_t result; // 0x409d20
    return result;
}
// Address range: 0x409d30 - 0x409d48
int64_t function_409d30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409d30
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x409d48 - 0x409d68
int64_t function_409d48(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x409d52
    while (*(int64_t *)v1 != -1) {
        // 0x409d53
        v1 -= 8;
    }
    // 0x409d64
    return result;
}
