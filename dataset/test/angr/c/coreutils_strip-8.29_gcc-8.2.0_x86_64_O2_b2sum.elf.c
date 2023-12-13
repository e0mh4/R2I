#include "decompile_angr.h"
int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_406fc0()
{
}

int sub_4070c0()
{
}

extern char g_60e2e8;
extern unsigned long long g_60e2f0;

int sub_402ed1()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v4;  // rax
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v9;  // rbx
    unsigned long long v10;  // r12

    if (g_60e2e8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60e2f0 >= 0)
            {
                break;
            }
            g_60e2f0 = g_60e2f0 + 1;
            *((long long *)(6348352 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60e2e8 = 1;
        return sub_402e7b();
    }
    return v4;
}

int sub_4096f0()
{
    unsigned int v1;  // edi
    unsigned long v3;  // rsi
    unsigned long long v4;  // cc_dep1
    unsigned long long v5;  // cc_dep2
    unsigned long v6;  // d
    char *v7;  // rdi
    char *v8;  // rsi
    unsigned long long v9;  // rcx
    unsigned long long v10;  // rax
    unsigned long long v11;  // cc_dep1
    char *v12;  // rdi
    unsigned long long v13;  // rcx
    char v14;  // cc_dep1
    char v15;  // cc_dep2

    v10 = 1;
    if (v3 != 0)
    {
        v9 = 2;
        v7 = "C";
        v3 = setlocale(v1, 0x0);
        while (v9 != 0)
        {
            v9 -= 1;
            v4 = *(v8);
            v5 = *(v7);
            v7 = &v7[v6];
            v8 = &v8[v6];
            break;
        }
        v10 = 0;
        v11 = (v4 > v5) - 0 - (v4 < v5);
        if ((char)v11 != 0)
        {
            v12 = "POSIX";
            v13 = 6;
            while (v13 != 0)
            {
                v13 -= 1;
                v14 = *(v8);
                v15 = *(v12);
                v12 = &v12[v6];
                v8 = &v8[v6];
                break;
            }
            return 0;
        }
    }
    if ((char)v11 == 0 || v3 == 0)
    {
        return v10;
    }
}

int sub_402f90()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long v3;  // rsi
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx
    char *v7;  // r9

    v2 = v1 + 1;
    v6 = 0;
    if (v3 != 0)
    {
        while (true)
        {
            v4 = (char)*((char *)(v1 + v6));
            if (*((char *)(v1 + v6)) != 0)
            {
                if (v4 != 92)
                {
                    *((unsigned long long *)(v2 - 1)) = v4;
                    v7 = v2;
                }
                else if (v3 - 1 != v6)
                {
                    v6 += 1;
                    v5 = (char)*((char *)(v1 + v6));
                    if (*((char *)(v1 + v6)) == 92)
                    {
                        v7 = v2;
                        *((char *)(v2 - 1)) = 92;
                    }
                    else if (v5 == 110)
                    {
                        v7 = v2;
                        *((char *)(v2 - 1)) = 10;
                    }
                }
                if ((v4 != 92 || v3 - 1 != v6) && (v5 == 110 || *((char *)(v1 + v6)) == 92 || v4 != 92))
                {
                    v6 += 1;
                    v2 += 1;
                    if (v7 >= v3 + v1)
                    {
                        break;
                    }
                    *(v7) = 0;
                }
            }
            if (*((char *)(v1 + v6)) == 0 || v4 == 92 && v3 - 1 == v6 || v4 == 92 && v5 != 110 && *((char *)(v1 + v6)) != 92)
            {
                return 0;
            }
        }
    }
    return v1;
}

int sub_409570()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_409510();
}

extern unsigned int g_40abfd;
extern unsigned long long stderr[7];

int sub_405470()
{
    unsigned long long v1;  // r14
    void *v2;  // rsi
    unsigned long long v4[2];  // rdi
    unsigned int v5;  // rdx
    unsigned long long v6;  // rax
    void *v7;  // rbp
    unsigned long long v9;  // rbx
    char *v11;  // rax

    v1 = 0;
    v7 = v2;
    v9 = 0;
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40abfd, 0x5), stderr);
    if (*(v4) != 0)
    {
        while (true)
        {
            if (v9 != 0)
            {
                v6 = memcmp(v1, v7, v5);
                if (v6 == 0)
                {
                    v9 += 1;
                    v7 += v5;
                    sub_407410();
                    __fprintf_chk();
                    if (v4[v9] == 0)
                    {
                        break;
                    }
                }
            }
            if (v9 == 0 || v6 != 0)
            {
                v9 += 1;
                v1 = v7;
                v7 += v5;
                sub_407410();
                __fprintf_chk();
                if (v4[v9] == 0)
                {
                    break;
                }
            }
        }
    }
    v11 = stderr[5];
    if (stderr[5] < stderr[6])
    {
        stderr[5] = stderr[5] + 1;
        *(v11) = 10;
        return v11;
    }
}

extern unsigned long long g_60e330;

int sub_405650()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60e330 = v1;
    return v2;
}

extern struct_0 *g_60e298;
extern unsigned long long g_60e2a0;
extern unsigned long long g_60e2a8;
extern unsigned int g_60e2b0;
extern unsigned long long g_60e340;

int sub_406fd0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60e2b0;
    if (g_60e2b0 > 1)
    {
        v2 = &g_60e298[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60e298[(unsigned long long)(g_60e2b0 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60e298->field_8 != 6349632)
    {
        v1 = free(g_60e298->field_8);
        g_60e2a0 = 0x100;
        g_60e2a8 = &g_60e340;
    }
    if (g_60e298 != 6349472)
    {
        v1 = free(g_60e298);
        g_60e298 = &g_60e2a0;
    }
    g_60e2b0 = 1;
    return v1;
}

extern int512_t g_60e440;

int sub_406db0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60e440 : v1)) = v2;
    return &g_60e440;
}

int sub_404e90()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // rsi
    unsigned long v4;  // rcx
    unsigned long v5;  // rdx
    unsigned long v6;  // rbx

    if (v3 - 1 <= 63 && v4 - 1 <= 63 && v5 != 0)
    {
        v1 = stack_base + 0;
        v0 = v6;
    }
    if (v5 == 0 || v4 - 1 > 63 || v3 - 1 > 63)
    {
        return -18446744069414584321;
    }
}

int sub_4095f0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408f40();
}

int sub_407260()
{
}

extern unsigned long long g_60de30;

int sub_409d48()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_60de30;
    while (true)
    {
        v2 = *(v1);
        if (*(v1) == -1)
        {
            break;
        }
        rax<8>();
        v1 = &v1[-1];
    }
    return v4;
}

int sub_407430()
{
}

int sub_409590()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409510();
}

int sub_407090()
{
}

extern unsigned long long __progname_full;
extern unsigned long long g_60e338;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4057f0()
{
    unsigned long long v1;  // rdi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // r8
    unsigned long long v6;  // cc_dep1
    unsigned long long v7;  // cc_dep2
    unsigned long v8;  // d
    char *v9;  // rdi
    char *v10;  // rsi
    unsigned long long v11;  // rcx
    char *v13;  // rdi
    unsigned long long v14;  // rcx
    char *v15;  // rsi
    unsigned long long v16;  // cc_dep1
    unsigned long long v17;  // cc_dep2

    if (v1 != 0)
    {
        v3 = v1;
        v4 = strrchr();
        if (v4 != 0)
        {
            v5 = v4 + 1;
            if (v4 + 1 - v1 > 6)
            {
                v10 = v4 - 6;
                v9 = "/.libs/";
                v11 = 7;
                while (v11 != 0)
                {
                    v11 -= 1;
                    v6 = *(v10);
                    v7 = *(v9);
                    v9 = &v9[v8];
                    v10 = &v10[v8];
                    break;
                }
                if ((v6 > v7) - 0 - (v6 < v7) == 0)
                {
                    v13 = "lt-";
                    v14 = 3;
                    v15 = v5;
                    v3 = v5;
                    while (v14 != 0)
                    {
                        v14 -= 1;
                        v16 = *(v15);
                        v17 = *(v13);
                        v13 = &v13[v8];
                        v15 = &v15[v8];
                        break;
                    }
                    if ((v16 > v17) - 0 - (v16 < v17) == 0)
                    {
                        v3 = v4 + 4;
                        program_invocation_short_name = v4 + 4;
                    }
                }
            }
        }
        g_60e338 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_4050e4()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    unsigned long v6;  // rcx
    unsigned long v7;  // rdx
    unsigned long v8;  // rdi
    unsigned long v9;  // r8
    unsigned long v10;  // r9
    unsigned long v11;  // rsi
    unsigned long v12;  // r14
    unsigned long v13;  // r13
    unsigned long v14;  // r12
    unsigned long v15;  // rbx

    if ((v6 != 0 & v7 == 0) == 0 && v8 != 0 && (v10 == 0 || v9 != 0) && v11 - 1 <= 63 && v10 <= 64)
    {
        v4 = v12;
        v3 = v13;
        v2 = v14;
        v1 = stack_base + 0;
        v0 = v15;
    }
    if (v8 == 0 || (v6 != 0 & v7 == 0) != 0 || v11 - 1 > 63 || v10 > 64 || v9 == 0 && v10 != 0)
    {
        return -18446744069414584321;
    }
}

int sub_4079e0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_407c30(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_407a40()
{
    unsigned int v1;  // rsi
    void *v2;  // rdi
    unsigned long long v3;  // rax

    if (v1 == 0 && v2 != 0)
    {
        free(v2);
        return 0;
    }
    if (v2 == 0 || v1 != 0)
    {
        v3 = realloc(v2, v1);
        if (v3 == 0 && v1 != 0)
        {
            sub_407c30(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_405149()
{
    unsigned long long v0;  // [bp+0x0]
    unsigned long long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]
    unsigned long long v4;  // [bp+0x20]
    unsigned long v5;  // r9
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // r14
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    unsigned long long v13;  // r12
    unsigned long long v14;  // r13
    unsigned long long v15;  // r14

    if (v5 == 0)
    {
        v6 = sub_404e20();
    }
    else
    {
        v7 = sub_404e90();
    }
    if (v6 < 0 && v5 == 0 || v7 < 0 && v5 != 0)
    {
        v11 = -18446744069414584321;
    }
    if (v5 == 0 && v6 >= 0 || v7 >= 0 && v5 != 0)
    {
        if (v8 != 0)
        {
            sub_404c20();
        }
        sub_404fa0();
        v11 = 0;
    }
    v12 = v0;
    v13 = v2;
    v14 = v3;
    v15 = v4;
    return v11;
}

int sub_406ec2()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    unsigned long v7;  // r15
    unsigned long v8;  // r14
    unsigned long v9;  // r13
    unsigned long v10;  // r12
    unsigned long v11;  // rbx

    v5 = v7;
    v4 = v8;
    v3 = v9;
    v2 = v10;
    v1 = stack_base + 0;
    v0 = v11;
}

int sub_405710()
{
}

extern int512_t g_60e440;

int sub_406da0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60e440 : v1));
}

int sub_407c10()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_403680() { crash_skku_timeout;
}
int init()
{
    unsigned long long v1;  // rdx
    unsigned long long v3;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rax
    unsigned long long v11;  // rbx

    v10 = sub_4016b0();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6348336 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_407150()
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned int v9;  // esi

    if (v9 == 10)
    {
        abort(); /* do not return */
    }
    v0 = v9;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    return sub_406bc0();
}

int sub_406eeb()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x2c]
    unsigned long v4;  // [bp-0x28]
    unsigned long v5;  // [bp-0x20]
    unsigned long v6;  // [bp-0x18]
    unsigned long v7;  // [bp-0x10]
    unsigned long long v8;  // [bp+0x0]
    unsigned long long v10;  // [bp+0x10]
    unsigned long long v11;  // [bp+0x18]
    unsigned long long v12;  // [bp+0x20]
    unsigned long long v13;  // [bp+0x28]
    unsigned long v14;  // rcx
    unsigned long v15;  // rax
    unsigned long long v17[7];  // rbx
    unsigned int *v18;  // r13
    unsigned long long *v20;  // r12
    unsigned long long v21;  // rbx
    unsigned long long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15

    v17 = (v14 == 0? v15 : rbx<8>);
    v18 = __errno_location();
    v3 = *(v18);
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = &v17[1];
    v6 = &v17[1];
    v7 = (unsigned int)sub_405990();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4079e0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_405990();
    *(v18) = v3;
    if (v20 != 0)
    {
        *(v20) = v7;
    }
    v21 = v8;
    v22 = v10;
    v23 = v11;
    v24 = v12;
    v25 = v13;
    return v4;
}

extern int512_t g_60e228;

int sub_409d30()
{
}

extern unsigned int g_60e2b4;
extern unsigned int g_60e2b8;
extern unsigned int g_60e2bc;
extern unsigned int g_60e480;
extern unsigned int g_60e484;
extern unsigned int g_60e488;
extern unsigned long long g_60e490;
extern unsigned long long g_60e4c0;

int sub_409510()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60e480 = g_60e2bc;
    g_60e484 = g_60e2b8;
    v1 = (unsigned int)v2;
    v0 = &g_60e480;
    g_60e2bc = g_60e480;
    g_60e4c0 = g_60e490;
    g_60e2b4 = g_60e488;
    return sub_408f40();
}

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned long long field_20;
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
} struct_1;

extern unsigned int g_40c4e0;
extern unsigned int g_40c524;

int sub_408f40()
{
    struct_0 *|struct_1 * v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    unsigned int|char v5;  // [bp-0x4c]
    char v6[2];  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    struct_0 *v8;  // [bp+0x8]
    unsigned int v9;  // [bp+0x10]
    unsigned long v10;  // rcx
    unsigned long v11;  // r8
    unsigned int v12;  // r13d
    unsigned long v13;  // rdi
    unsigned long v14;  // rsi
    char *v15[3];  // r12
    char v16[2];  // rdx
    unsigned int|unsigned long v17;  // eax
    unsigned long long v18;  // rax
    char *|unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned int|unsigned long long v24;  // r9d
    char *[3]|unsigned long long * v26;  // rax
    unsigned long long *v27;  // rdx
    char *v29[3];  // rax
    char v30[2];  // rcx
    unsigned long long *v31;  // rsi
    unsigned long long v32;  // rcx
    char *v33;  // rdi
    char v34[3];  // rsi
    unsigned long long v35;  // cc_dep1
    unsigned long long v36;  // cc_dep2
    unsigned long v37;  // d
    unsigned long long v38;  // cc_dep1
    unsigned int v39;  // ecx
    unsigned int v40;  // eax
    unsigned long long v41;  // rcx
    unsigned int|unsigned long long v42;  // edx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned int|unsigned long v46;  // rbp
    unsigned long long v47;  // rax
    char v48[3];  // r14
    unsigned long v49;  // r13
    char [2]|char * v50;  // r15
    char v51[3];  // rax
    unsigned int v52;  // ecx
    char v53[3];  // r8
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rdx
    unsigned int v57;  // eax
    char v58[3];  // rax
    unsigned long long v59;  // r14
    char v60;  // r14b
    unsigned long long v61;  // r14
    char v62;  // r14b
    unsigned long long v63;  // rax

    v3 = v10;
    v4 = v11;
    v12 = v8->field_4;
    if ((unsigned int)v13 > 0)
    {
        v17 = v0->field_0;
        v46 = v13;
        v15 = v14;
        v50 = v16;
        v0->field_10 = 0;
        if (!((unsigned int)v17 != 0))
        {
            v0->field_0 = 1;
            v17 = 1;
        }
        else if (v0->field_18 != 0)
        {
            v18 = v16[0];
            v19 = v0->field_20;
            if (((char)(v18 - 43) & 253) == 0)
            {
                v20 = v50[1];
                v50 = &v50[1];
                v49 = (unsigned int)(v20 == 58? 0 : (unsigned int)r13<8>);
            }
        }
        if (v0->field_18 == 0 || (unsigned int)v17 == 0)
        {
            *((unsigned long *)&v0->field_30) = v17;
            *((unsigned long *)&v0->field_2c) = v17;
            v0->field_20 = 0;
            if (!(v16[0] != 45))
            {
                v0->field_28 = 2;
                v50 = &v16[1];
                v19 = 0;
            }
            else if (v16[0] != 43)
            {
                v19 = 0;
                if (v9 == 0)
                {
                    v5 = v22;
                    v23 = getenv("POSIXLY_CORRECT");
                    v24 = v5;
                    if (v23 != 0)
                    {
                        v19 = v0->field_20;
                    }
                    else
                    {
                        v0->field_28 = 1;
                        v19 = v0->field_20;
                    }
                }
                if (v23 != 0 || v9 != 0)
                {
                    v0->field_28 = 0;
                }
            }
            else
            {
                v0->field_28 = 0;
                v50 = &v16[1];
                v19 = 0;
            }
            v0->field_18 = 1;
            v18 = v50[0];
        }
        if (v0->field_18 == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0)
        {
            v49 = (unsigned int)(v18 == 58? 0 : (unsigned int)r13<8>);
        }
        if (*(v19) == 0 || v0->field_18 == 0 && v19 == 0 || v19 == 0 && (unsigned int)v17 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || v8->field_20 == 0 && ((char)(v18 - 43) & 253) == 0 && v0->field_18 != 0 && (unsigned int)v17 != 0)
        {
            v26 = (unsigned long long)v0->field_0;
            if (v0->field_30 > v0->field_0)
            {
                v0->field_30 = v8->field_0;
            }
            if (v8->field_0 < v0->field_2c)
            {
                v0->field_2c = v8->field_0;
            }
            if (v0->field_28 == 1)
            {
                v27 = (unsigned long long)v0->field_30;
                if (v0->field_2c != v0->field_30)
                {
                    if (v8->field_0 != v8->field_30)
                    {
                        v5 = v5;
                        sub_408840();
                        v27 = (unsigned long long)v0->field_0;
                        v24 = v5;
                    }
                }
                else
                {
                    if (v8->field_0 != v8->field_30)
                    {
                        v0->field_2c = v8->field_0;
                        v27 = v26;
                    }
                }
                if ((unsigned int)v13 > (unsigned int)v27)
                {
                    v29 = v27;
                    while (true)
                    {
                        v30 = *((long long *)((char *)v15 + 0x8 * v29));
                        v31 = v29;
                        v27 = (unsigned int)v29;
                        if (*((char *)*((long long *)((char *)v15 + 0x8 * v29))) == 45 && v30[1] != 0)
                        {
                            v26 = (unsigned long long)v0->field_0;
                        }
                        if (v30[1] == 0 || *((char *)*((long long *)((char *)v15 + 0x8 * v29))) != 45)
                        {
                            v27 = (char *)v31 + 1;
                            v29 = (char *)v29 + 1;
                            v0->field_0 = (unsigned int)v31 + 1;
                            if ((unsigned int)v13 <= (unsigned int)v29)
                            {
                                break;
                            }
                        }
                    }
                    if (v30[1] == 0 || *((char *)*((long long *)((char *)v15 + 0x8 * v29))) != 45)
                    {
                        v26 = v27;
                    }
                    else if (*((char *)*((long long *)((char *)v15 + 0x8 * v29))) == 45 && v30[1] != 0)
                    {
                        *((unsigned long long **)&v0->field_30) = v27;
                    }
                }
                v26 = v27;
                *((unsigned long long **)&v0->field_30) = v27;
            }
            if ((unsigned int)v13 != (unsigned int)v26)
            {
                v32 = 3;
                v33 = "-";
                v48 = *((long long *)((char *)v15 + 0x8 * v26));
                v34 = *((long long *)((char *)v15 + 0x8 * v26));
                while (v32 != 0)
                {
                    v32 -= 1;
                    v35 = v34[0];
                    v36 = *(v33);
                    v33 = &v33[v37];
                    v34 = &v34[v37];
                    break;
                }
                v38 = (v35 > v36) - 0 - (v35 < v36);
                if ((char)v38 == 0)
                {
                    v42 = v0->field_2c;
                    v39 = v0->field_30;
                    v40 = (unsigned int)v26 + 1;
                    v0->field_0 = v0->field_2c;
                    if ((unsigned int)v42 != v39)
                    {
                        if (v0->field_2c != v8->field_30)
                        {
                            sub_408840();
                            v42 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = v0->field_2c;
                        v42 = v40;
                    }
                    v0->field_30 = v46;
                    v0->field_0 = v46;
                }
                else if (v48[0] == 45)
                {
                    v41 = v48[1];
                    if (v48[1] != 0 && v3 != 0)
                    {
                        if (!(v41 != 45))
                        {
                            v0->field_20 = &v48[2];
                            v2 = "-";
                            v1 = v49;
                            v0 = v0;
                        }
                        else if (v24 != 0)
                        {
                            if (v48[2] == 0)
                            {
                                v5 = v24;
                                v47 = strchr(v50, v41);
                            }
                        }
                    }
                }
            }
            else
            {
                v46 = v0->field_30;
                v42 = v0->field_2c;
            }
        }
    }
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (*(v19) == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (*(v19) == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (*(v19) == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (*(v19) == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
    {
        v44 = (unsigned int)v26 + 1;
        v0->field_10 = v48;
        v45 = 1;
        v0->field_0 = v44;
    }
    if (...)
    {
        v45 = -18446744069414584321;
    }
    if (...)
    {
        v0->field_20 = &v48[1];
        v2 = "-";
        v1 = v49;
        v0 = v8;
        v45 = (unsigned int)sub_408920();
        if ((unsigned int)v45 == -1)
        {
            v48 = v15[(long long)(int)v0->field_0];
        }
    }
    if (...)
    {
        v19 = &v48[1];
    }
    if (...)
    {
        *((char **)&v6[0]) = v19;
        v0->field_20 = &v19[1];
        v45 = *(v19);
        v7 = &v19[1];
        v5 = *(v19);
        v51 = strchr(v50, *(v19));
        v52 = v5;
        v53 = v7;
        if (v6[1] == 0)
        {
            v0->field_0 = v0->field_0 + 1;
        }
        v54 = (unsigned long long)v52 - 58;
        if (v54 > 1 && v51 != 0)
        {
            v55 = v51[1];
            if (v51[0] == 87 && v3 != 0 && v55 == 59 && v6[1] == 0)
            {
                if (v0->field_0 != (unsigned int)v46)
                {
                    v53 = v15[(long long)(int)v8->field_0];
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x40c4e0, 0x5);
                        __fprintf_chk();
                    }
                    v0->field_8 = v45;
                    v59 = 0;
                    v60 = *(v50) != 58;
                    v45 = r14<8> * 5 + 58;
                }
            }
        }
    }
    if (...)
    {
        if ((unsigned int)v49 != 0)
        {
            dcgettext(0x0, 0x40c524, 0x5);
            __fprintf_chk();
        }
        v0->field_8 = v45;
        v45 = 63;
    }
    if (...)
    {
        v56 = v6[1];
        if (v51[2] != 58)
        {
            if (!(v56 == 0))
            {
                v57 = v8->field_0 + 1;
                v0->field_10 = v7;
                v0->field_0 = v57;
            }
            else if ((unsigned int)v46 != v8->field_0)
            {
                v58 = v15[(long long)(int)v8->field_0];
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x40c4e0, 0x5);
                    __fprintf_chk();
                }
                v0->field_8 = v45;
                v61 = 0;
                v62 = *(v50) != 58;
                v45 = r14<8> * 5 + 58;
            }
        }
        else
        {
            if (v56 != 0)
            {
                v0->field_10 = v7;
                v0->field_0 = v0->field_0 + 1;
            }
            else
            {
                v0->field_10 = 0;
            }
        }
        v0->field_20 = 0;
    }
    if (...)
    {
        v0->field_20 = v53;
        v0->field_10 = 0;
        v2 = "-W ";
        v1 = v49;
        v0 = v0;
    }
    if (...)
    {
        v45 = (unsigned int)sub_408920();
    }
    v63 = v45;
    return v63;
}

int sub_404c20()
{
    void tmp_1;  // tmp #1
    char v0;  // [bp-0x20]
    char v1;  // [bp-0x18]
    unsigned long long v3[29];  // rdi
    unsigned long long v4;  // r14
    unsigned long long v5;  // rdx
    unsigned long long v6[29];  // rbx
    unsigned long long v7;  // r15
    unsigned long v8;  // rbp
    void *v9;  // rsi
    unsigned long long v11;  // rbp
    unsigned long long v13;  // r15
    unsigned long long v14;  // r12
    void *v15;  // rdi
    unsigned long long v18;  // r13

    v4 = &v3[12];
    v18 = v5;
    v6 = v3;
    v7 = v3[28];
    v8 = 128 - v3[28];
    v15 = (char *)&v3[12] + v3[28];
    if (v8 < v5)
    {
        v6[28] = 0;
        v18 = v7 + v5 - 128;
        memcpy(v15, v9, v8);
        tmp_1 = v6[8] - -128;
        v6[8] = v6[8] - -128;
        v11 = v8 + v9;
        v6[9] = v6[9] + (unsigned long long)(char)(tmp_1 <= 127);
        sub_403680();
        if (v18 > 128)
        {
            v13 = v18 - 129 >> 7;
            v14 = ((v18 - 129 >> 7) + 1) * 128 + v11;
            while (true)
            {
                tmp_1 = v6[8] - -128;
                v6[8] = v6[8] - -128;
                v11 -= -128;
                v6[9] = v6[9] + (unsigned long long)(char)(tmp_1 <= 127);
                sub_403680();
                if (v14 == v11)
                {
                    break;
                }
            }
            v18 = v18 + (0 - v13) * 128 - 128;
            v15 = v6[28] + v4;
        }
        else
        {
            v15 = v6[28] + v4;
        }
    }
    v6[28] = v6[28] + v18;
    return memcpy(v15, *((long long *)&v0), *((long long *)&v1));
}

int sub_4051c0()
{
}

extern uint128_t g_60e440;
extern uint128_t g_60e450;
extern uint128_t g_60e460;
extern unsigned long long g_60e470;

int sub_407300()
{
    unsigned int|void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60e440;
    *((uint128_t *)&v1) = g_60e450;
    *((uint128_t *)&v2) = g_60e460;
    v4 = g_60e470;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_406bc0();
    }
    if (v6 == 0 || v7 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_4081a0()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    char [3]|char v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    unsigned int|unsigned long|unsigned long long v5;  // rdi
    unsigned long v6;  // rbp
    unsigned long long *v7;  // rcx
    char *v9;  // r8
    unsigned long v11;  // rsi
    unsigned long long *v12;  // r15
    unsigned int *v13;  // r12
    unsigned int *v14;  // r12
    unsigned long long v15;  // rbx
    unsigned long v16;  // rax
    unsigned int v17;  // eax
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rsi
    char v25;  // sil
    unsigned long long v26;  // r12
    unsigned long long v27;  // r12
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rsi
    char v32[3];  // r8
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rcx
    unsigned int|unsigned long long v35;  // rdi
    unsigned long long v36;  // rcx
    unsigned int|unsigned long long v37;  // rdi
    unsigned long long v38;  // rcx
    unsigned int|unsigned long long v39;  // rdi
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rcx
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // cc_dep1
    unsigned long long v46;  // cc_dep1
    unsigned int v47;  // cc_dep1
    unsigned int v48;  // cc_dep1
    unsigned long long v49;  // rax
    unsigned long long v50;  // r8

    if (v4 <= 36)
    {
        v6 = v5;
        v12 = (v11 == 0? stack_base + -64 : v11);
        *(v13) = 0;
        v13 = __errno_location();
        v15 = (char)*((char *)v5);
        v31 = *((long long *)(unsigned long long)__ctype_b_loc());
        for (v16 = v5; (*((char *)(v31 + (v15 << 1) + 1)) & 32) != 0; v15 = (char)*((char *)v16))
        {
            v16 += 1;
        }
        if (v15 != 45)
        {
            v33 = __strtoul_internal(v5, (unsigned int)v12);
            if (*(v12) != v5)
            {
                v17 = *(v14);
                if ((v17 == 34 || *(v14) == 0) && v9 != 0)
                {
                    v18 = v1[0];
                    if (v1[0] != 0)
                    {
                        *((char *[3])&v1[0]) = v1;
                        v20 = strchr(v9, v18);
                        v32 = v1;
                    }
                }
            }
            else
            {
                *((char **)&v1[0]) = v9;
                if (v9 != 0)
                {
                    v18 = (char)*((char *)v6);
                    if (*((char *)v6) != 0)
                    {
                        v33 = 1;
                        v19 = strchr(v9, (char)*((char *)v5));
                        v32 = v1;
                    }
                }
            }
        }
        if (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0)
        {
            v21 = v18 - 69;
            if ((v18 - 69 & 255) <= 47)
            {
                *((unsigned long long *)&v1) = v21;
                v0 = 142129060940101;
                if (((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0)
                {
                    *((char *[3])&v2[0]) = v32;
                    v22 = strchr(v9, 0x30);
                    v32 = v2;
                    if (v22 != 0)
                    {
                        v23 = v32[1];
                        if (v32[1] != 68)
                        {
                            if (v23 != 105)
                            {
                                v30 = v1;
                                if (v23 != 66)
                                {
                                    /* goto *((long long *)(rdx<8> * 8 + 4243672)); */
                                }
                            }
                            else
                            {
                                v24 = 0;
                                v30 = 0x400;
                                v25 = v32[2] == 66;
                                v31 = rsi<8> * 2 + 1;
                            }
                        }
                    }
                }
            }
        }
        if ((*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) > 47)
        {
            v31 = 1;
            v30 = 0x400;
        }
        if (...)
        {
            v31 = 2;
            v30 = 1000;
        }
        if (...)
        {
            v26 = (unsigned int)v18 - 66;
            switch (v26)
            {
            case 0:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 *= 0x400;
                    break;
                }
            case 3:
                v38 = v30;
                v39 = 6;
                do
                {
                    v33 = v33 * v38;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v46 = v39;
                    v39 -= 1;
                }
                while (v46 != 1);
            case 5: case 37:
                v28 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v49 = tmp_11 * v28 * v28;
                    v33 = v49;
                }
                else
                {
                    v33 = -1;
                }
            case 9: case 41:
                v33 = v33 * v30;
            case 11: case 43:
                v29 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v33 = tmp_11 * v29;
                    break;
                }
            case 14:
                v34 = v30;
                v35 = 5;
                do
                {
                    v33 = v33 * v34;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v44 = v35;
                    v35 -= 1;
                }
                while (v44 != 1);
            case 18: case 50:
                v40 = v30;
                v5 = 4;
                do
                {
                    v33 = v33 * v40;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v47 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v47 != 1);
                break;
            case 23:
                v36 = v30;
                v37 = 8;
                do
                {
                    v33 = v33 * v36;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v45 = v37;
                    v37 -= 1;
                }
                while (v45 != 1);
            case 24:
                v41 = v30;
                v5 = 7;
                do
                {
                    v33 = v33 * v41;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v48 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v48 != 1);
            case 32:
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v33 = -1;
                    break;
                }
                else
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v50 = &v32[v31];
                *(v12) = v50;
            case 53:
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v33 *= 2;
                    break;
                }
            default:
                *(v7) = v33;
            }
            if (v26 <= 53)
            {
                v27 = v26;
            }
        }
        v31 = 1;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        *(v7) = v33;
        return stack_base + 0;
    }
    __assert_fail(); /* do not return */
}

int sub_4073a0()
{
}

extern int512_t g_60e440;

int sub_406e50()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60e440 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_405990();
}

int sub_407a00()
{
    void tmp_10;  // tmp #10
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdi

    tmp_10 = v2;
    v4 = v2 * v3;
    v5 = v2 * v3;
    v4 = (char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t10, rsi<8>, cc_ndep<8>);
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>)))
    {
        v4 = [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t10, rsi<8>, cc_ndep<8>);
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>) || [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t10, rsi<8>, cc_ndep<8>) != 0)
    {
        v0 = v4;
        sub_407c30(); /* do not return */
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[24];
    unsigned long long field_48;
    char padding_50[64];
    unsigned long long field_90;
} struct_0;

int sub_4087e0()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct_0 *v4;  // rdi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbx
    struct_0 *v7;  // rbx
    unsigned int v8;  // esi
    unsigned int v9;  // edx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r12

    if (v4->field_10 == v4->field_8 && v4->field_28 == v4->field_20 && v4->field_48 == 0)
    {
        v2 = v5;
        v1 = stack_base + 0;
        v0 = v6;
        v7 = v4;
        v10 = lseek(fileno(v4), v8, v9);
        if (v10 != -1)
        {
            v7->field_0 = v7->field_0 & -17;
            v7->field_90 = v10;
            v10 = 0;
        }
        v11 = v0;
        v12 = v2;
        return v10;
    }
}

int sub_4070e0()
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned int v9;  // esi

    if (v9 == 10)
    {
        abort(); /* do not return */
    }
    v0 = v9;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    return sub_406bc0();
}

int sub_407410()
{
}

extern int512_t g_60e440;

int sub_406dc0()
{
    void tmp_2;  // tmp #2
    void tmp_52;  // tmp #52
    void tmp_123;  // tmp #123
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long long v3;  // rcx
    unsigned long long v5;  // rsi
    unsigned long v6;  // rdx

    tmp_2 = v1;
    tmp_52 = v1 == 0;
    v3 = (unsigned int)v2 & 31;
    v5 = (unsigned int)*((int *)((tmp_52? &g_60e440 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60e440 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_405590()
{
    unsigned long long v1;  // rax

    v1 = sub_4052d0();
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
    {
        sub_4053f0();
        sub_405470();
        r9<8>();
        v1 = -1;
    }
    return v1;
}

extern char g_60e440;

int sub_406e20()
{
    void tmp_2;  // tmp #2
    void tmp_11;  // tmp #11
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long long v3[7];  // rdi
    unsigned long v4;  // rsi
    unsigned long v5;  // rdx

    tmp_2 = v2;
    tmp_11 = v2 == 0;
    v3 = (v2 == 0? &g_60e440 : v2);
    *((int *)(tmp_11? &g_60e440 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60e440;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60e440;
        abort(); /* do not return */
    }
}

int sub_4071c0()
{
}

int sub_4078a0()
{
    unsigned int v0;  // [bp-0xa0]
    void tmp_12;  // tmp #12
    void tmp_8;  // tmp #8
    unsigned long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x18]
    unsigned long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp+0x8]
    char v7;  // [bp+0x10]
    unsigned long long v8;  // r11
    unsigned long long v9;  // r8
    unsigned long v10;  // r9
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // r8
    unsigned long long *|unsigned long long v14;  // r10
    unsigned long long v15;  // r9

    v8 = 0;
    v4 = v9;
    v14 = &v6;
    v13 = 32;
    v1 = &v6;
    v5 = v10;
    v15 = 0;
    v0 = 32;
    v2 = stack_base + -56;
    while (true)
    {
        if ((unsigned int)v13 <= 47)
        {
            tmp_12 = v13;
            v13 = (unsigned int)v13 + 8;
            v8 = 1;
            v11 = v4;
            v3 = v4;
        }
        else
        {
            tmp_8 = v14;
            v14 = &v7;
            v12 = v6;
            v3 = v6;
        }
        if ((unsigned int)v13 <= 47 && v11 != 0 || (unsigned int)v13 > 47 && v12 != 0)
        {
            v15 += 1;
        }
        if (v8 != 0)
        {
            v0 = v13;
        }
        return sub_407440();
    }
}

extern uint128_t g_60e440;
extern uint128_t g_60e450;
extern uint128_t g_60e460;
extern unsigned long long g_60e470;

int sub_4071df()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60e470;
    *((uint128_t *)&v0) = g_60e440;
    *((uint128_t *)&v1) = g_60e450;
    *((uint128_t *)&v2) = g_60e460;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_406bc0();
}

int sub_407290()
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned int v9;  // esi

    if (v9 == 10)
    {
        abort(); /* do not return */
    }
    v0 = v9;
    v2 = 0x400000000000000;
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    return sub_406bc0();
}

int sub_407b40() { crash_skku;
}
int sub_407be0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4079e0();
}

extern unsigned long long program_invocation_short_name;

int sub_402e7b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_405990()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    char|unsigned long|unsigned long long v4;  // [bp-0xc0]
    char|unsigned long|unsigned long long v5;  // [bp-0xb8]
    char v6;  // [bp-0xa9]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    char|unsigned long long v9;  // [bp-0x98]
    unsigned long|unsigned long long v10;  // [bp-0x90]
    unsigned int|unsigned long long v11;  // [bp-0x88]
    unsigned int|unsigned long long v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned long v15;  // [bp-0x68]
    unsigned int v16;  // [bp-0x60]
    char v17;  // [bp-0x5c]
    char|unsigned long long v18;  // [bp-0x5b]
    unsigned long long v19;  // [bp-0x5a]
    char v20;  // [bp-0x59]
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    char v23;  // [bp-0x44]
    unsigned long long v24;  // [bp-0x40]
    unsigned int *v25;  // [bp+0x8]
    unsigned long long v26;  // [bp+0x10]
    unsigned long long v27;  // [bp+0x18]
    unsigned long long v28;  // rdi
    unsigned long long v29;  // r15
    unsigned long v30;  // r8
    unsigned long long v31;  // rcx
    unsigned long v32;  // r9
    char|unsigned long|unsigned long long v33;  // r10
    unsigned long long v34;  // rbp
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    unsigned long long v37;  // r8
    unsigned long long v38;  // r9
    unsigned long long v39;  // r11
    unsigned long|unsigned long long v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    char v43;  // al
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rcx
    unsigned short|unsigned long|unsigned long long v46;  // rax
    unsigned long long v47;  // rcx
    unsigned long long v48;  // r13
    unsigned long long v49;  // r13
    unsigned long long v50;  // r13
    char v51;  // r13b
    unsigned long long v52;  // r13
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rbx
    unsigned long long v55;  // r13
    unsigned long long v56;  // r15
    unsigned long long v57;  // rbp
    unsigned long long v58;  // r14
    char *v59;  // rax
    unsigned long long v60;  // rcx
    unsigned long long v62;  // r13
    unsigned long long v63;  // r13
    unsigned long long v64;  // rcx
    char v65;  // al
    char v66;  // al
    unsigned int v67;  // eax
    char v68;  // al
    unsigned int v70;  // eax
    char v71;  // al
    unsigned long v72;  // rdx
    unsigned long long v73;  // rax
    char v74;  // al
    unsigned long long v75;  // rdx
    unsigned long long v76;  // rbx
    unsigned int|unsigned long long v77;  // rsi
    unsigned int|unsigned long long v78;  // r13
    unsigned long long v79;  // r14
    unsigned long long v80;  // r12
    unsigned int v81;  // r13d
    unsigned long long v82;  // r11
    char v83;  // dl
    unsigned long long v84;  // rax
    unsigned long long v85;  // cc_dep1
    unsigned long long v86;  // dl
    unsigned long long v87;  // rax
    unsigned long long v88;  // rax
    char|unsigned long long v89;  // rdx
    unsigned long long v90;  // rdx
    unsigned long long v91;  // rax
    unsigned long long v92;  // rax

    v29 = v28;
    v79 = v77;
    v78 = v30;
    v7 = v89;
    v4 = v31;
    v16 = v32;
    v15 = __ctype_get_mb_cur_max();
    v17 = ((unsigned int)v32 & 2) != 0;
    switch ((unsigned int)v30)
    {
    case 0:
        v6 = 1;
        v33 = 0;
        v76 = 0;
        v18 = 0;
        v14 = 0;
        v17 = 0;
        v4 = 0;
        v8 = 0;
        v13 = 0;
    case 1:
        v6 = 1;
        v33 = 0;
        v76 = 0;
        v78 = 2;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 0;
        v8 = 1;
        v13 = "'";
    case 2:
        if (((char)v32 & 2) == 0)
        {
            v4 = 0;
            if (v77 == 0)
            {
                v6 = 1;
                v33 = 0;
                v76 = 1;
                v78 = 2;
                v14 = 0;
                v18 = 0;
                v17 = 0;
                v8 = 1;
                v13 = "'";
            }
            else
            {
                v84 = 0;
                v6 = 1;
                v14 = 0;
            }
        }
        else
        {
            v6 = 1;
            v33 = 0;
            v76 = 0;
            v18 = 0;
            v14 = 0;
            v17 = 1;
            v4 = 0;
            v8 = 1;
            v13 = "'";
        }
    case 3:
        v6 = 1;
        v33 = 0;
        v76 = 0;
        v78 = 2;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 1;
        v8 = 1;
        v13 = "'";
    case 4:
        if (((char)v32 & 2) == 0)
        {
            v4 = 1;
        }
    case 5:
        if (((char)v32 & 2) == 0)
        {
            if (v77 != 0)
            {
                *((char *)v28) = 34;
                v33 = 0;
                v6 = 1;
                v18 = 0;
                v14 = 0;
            }
            else
            {
                v14 = 0;
                v33 = 0;
                v6 = 1;
                v18 = 0;
            }
            v17 = 0;
            v76 = 1;
            v4 = 1;
            v8 = 1;
            v13 = "\"";
        }
        else
        {
            v6 = 1;
            v33 = 0;
            v76 = 0;
            v18 = 0;
            v14 = 0;
            v17 = 1;
            v4 = 1;
            v8 = 1;
            v13 = "\"";
        }
    case 6:
        v6 = 1;
        v33 = 0;
        v76 = 0;
        v78 = 5;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 1;
        v8 = 1;
        v13 = "\"";
    case 7:
        v6 = 1;
        v33 = 0;
        v76 = 0;
        v18 = 0;
        v14 = 0;
        v17 = 0;
        v4 = 1;
        v8 = 0;
        v13 = 0;
    case 8: case 9: case 10:
        if (v30 != 10)
        {
            v4 = v4;
            v26 = (unsigned int)sub_405890();
            v27 = (unsigned int)sub_405890();
        }
        v76 = 0;
        if (((char)v32 & 2) == 0)
        {
            v78 = (char)*((char *)v26);
            if (*((char *)v26) != 0)
            {
                do
                {
                    if (v77 > v76)
                    {
                        *((unsigned long long *)(v28 + v76)) = v78;
                    }
                    v76 += 1;
                    v78 = (char)*((char *)(v26 + v76));
                }
                while ((char)v78 != 0);
            }
        }
        v5 = v82;
        v6 = 1;
        v8 = strlen(v27);
        v18 = 0;
        v13 = v27;
        v14 = 0;
        v4 = 1;
    default:
        abort(); /* do not return */
    }
    v82 = v4;
    while (true)
    {
        v38 = v82;
        v80 = 0;
        v39 = v78;
        while (true)
        {
            v78 = (char)(v38 != v80);
            if (v38 == -1)
            {
                v78 = (char)(*((char *)(v7 + v80)) != 0);
            }
            if (v78 != 0)
            {
                v37 = v7 + v80;
                v5 = (unsigned int)v39 != 2 & v4;
                if (((unsigned int)v39 != 2 & v4) != 0)
                {
                    v78 = v8;
                    if (v8 != 0)
                    {
                        v34 = v80 + v78;
                        if (v38 == -1 && v78 > 1)
                        {
                            v11 = v39;
                            v10 = v33;
                            v9 = v37;
                            v38 = strlen(v7);
                        }
                        if (v34 <= v38)
                        {
                            v12 = v39;
                            v11 = v38;
                            v10 = v33;
                            v9 = v37;
                            v78 = memcmp(v37, v13, v8);
                            v37 = v9;
                            v33 = (char)v10;
                            v38 = v11;
                            v39 = v12;
                            if (v17 == 0 && v78 == 0)
                            {
                                v40 = (char)*((char *)v37);
                                switch (*((char *)v37))
                                {
                                case 0:
                                    v89 = (char)((unsigned int)v39 == 2);
                                    v78 = (unsigned int)(0 ^ 1);
                                    v78 = (char)(0 ^ 1) & (unsigned int)v39 == 2;
                                    if (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0)
                                    {
                                        if (v77 > v76)
                                        {
                                            *((char *)(v28 + v76)) = 39;
                                        }
                                        if (v77 > v76 + 1)
                                        {
                                            *((char *)(v28 + v76 + 1)) = 36;
                                        }
                                        if (v77 > v76 + 2)
                                        {
                                            *((char *)(v28 + v76 + 2)) = 39;
                                        }
                                        v47 = v76 + 3;
                                        v76 += 4;
                                        v33 = rax<8>;
                                        v78 = 0;
                                        v40 = 48;
                                    }
                                    else
                                    {
                                        v47 = v76;
                                        v78 = 0;
                                        v76 = v47 + 1;
                                        v78 = v78;
                                        v40 = 48;
                                        v78 = 0;
                                        v40 = 48;
                                        if (1 < v38)
                                        {
                                            v9 = *((char *)(v7 + 0 + 1));
                                            if (((unsigned int)(char)*((char *)(v7 + 0 + 1)) - 48 & 255) <= 9)
                                            {
                                                if (v77 > v76)
                                                {
                                                    *((char *)(v28 + v76)) = 48;
                                                }
                                                if (v77 > v47 + 2)
                                                {
                                                    *((char *)(v28 + v47 + 2)) = 48;
                                                }
                                                v76 = v47 + 3;
                                                v40 = 48;
                                            }
                                        }
                                        v78 = v78;
                                        v78 = 0;
                                    }
                                    if ((v77 > v76 || ((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) == 0 || v77 > v76 + 3))
                                    {
                                        *((char *)(v28 + v47)) = 92;
                                        v33 = v78;
                                    }
                                case 7:
                                    v40 = 97;
                                case 8:
                                    v89 = 0;
                                    v78 = 0;
                                    v40 = 98;
                                case 13:
                                    v40 = 13;
                                    v45 = 114;
                                    v89 = (unsigned int)v39 == 2;
                                    if (v4 == 0)
                                    {
                                        v55 = 0;
                                        v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                                        v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                                        v78 = 0;
                                        v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                                        v89 = (unsigned int)v39 == 2;
                                        v89 = (unsigned int)v39 == 2;
                                        v80 += 1;
                                        v46 = (v78 ^ 1) & (unsigned int)v33;
                                        if (v46 != 0)
                                        {
                                            if (v79 > v76)
                                            {
                                                *((char *)(v29 + v76)) = 39;
                                            }
                                            if (v79 > v76 + 1)
                                            {
                                                *((char *)(v29 + v76 + 1)) = 39;
                                            }
                                            v76 += 2;
                                            v33 = 0;
                                        }
                                    }
                                    else
                                    {
                                        v40 = v45;
                                        v78 = 0;
                                        v87 = v89;
                                        v73 = (unsigned int)v33 ^ 1;
                                        v74 = (char)((unsigned int)v33 ^ 1) & v89;
                                        if (((char)((unsigned int)v33 ^ 1) & v89) != 0)
                                        {
                                            if (v79 > v76)
                                            {
                                                *((char *)(v29 + v76)) = 39;
                                            }
                                            if (v76 + 1 < v79)
                                            {
                                                *((char *)(v29 + v76 + 1)) = 36;
                                            }
                                            v75 = v76 + 2;
                                            if (v76 + 2 < v79)
                                            {
                                                *((char *)(v29 + v76 + 2)) = 39;
                                            }
                                            v76 += 3;
                                            v33 = rax<8>;
                                        }
                                        *((unsigned long long *)&v4) = v4 & v87;
                                        if (v79 > v76)
                                        {
                                            *((char *)(v29 + v76)) = 92;
                                        }
                                        v76 += 1;
                                        v80 += 1;
                                    }
                                case 32:
                                    v41 = v5;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v89 = 0;
                                case 35: case 126:
                                    v42 = v5;
                                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                    v41 = v5;
                                case 92:
                                    v44 = v4;
                                    v40 = 92;
                                    v45 = 92;
                                    v89 = v4 & v17 & v8 != 0;
                                    if ((v4 & v17 & v8 != 0) != 0)
                                    {
                                        v80 = 1;
                                        v46 = 0;
                                        v78 = 0;
                                    }
                                }
                            }
                        }
                    }
                    if (v8 == 0 || v78 != 0 || v34 > v38)
                    {
                        v40 = (char)*((char *)v37);
                        switch (*((char *)v37))
                        {
                        case 0:
                            if (v17 == 0)
                            {
                                v5 = 0;
                            }
                            else
                            {
                                v4 = (unsigned int)v39 == 2;
                            }
                        case 7:
                            v40 = 97;
                            break;
                        case 8:
                            v40 = 98;
                        case 9:
                            v40 = 116;
                        case 10:
                            v40 = 110;
                            v89 = 0;
                            v78 = 0;
                        case 11:
                            v40 = 118;
                            break;
                            if (v17 == 0)
                            {
                                v78 = 0;
                            }
                            else
                            {
                                v87 = 0;
                            }
                        case 12:
                            v40 = 102;
                            break;
                        case 13:
                            v5 = 0;
                        case 32:
                            v41 = 0;
                            v40 = 32;
                            v48 = v5;
                            v5 = v41;
                            v78 = 0;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
                            v49 = v5;
                            v89 = 0;
                            v5 = v42;
                        case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                            v41 = 0;
                        case 39:
                            v5 = 0;
                        case 63:
                            v5 = 0;
                        case 92:
                            v5 = 0;
                        case 123: case 125:
                            v5 = 0;
                        default:
                            v5 = 0;
                        }
                    }
                }
                else
                {
                    v40 = (char)*((char *)v37);
                    switch (*((char *)v37))
                    {
                    case 0:
                        if (v4 == 0)
                        {
                            v80 += 1;
                            v5 = 0;
                            v89 = (char)((unsigned int)v39 == 2);
                            v36 = 0;
                            v40 = 0;
                            break;
                        }
                    case 7:
                        v40 = 7;
                        v45 = 97;
                        v89 = (unsigned int)v39 == 2;
                    case 8:
                        v40 = 8;
                        v45 = 98;
                        v89 = (unsigned int)v39 == 2;
                    case 9:
                        v40 = 9;
                        v45 = 116;
                        v89 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
                    case 10:
                        v40 = 10;
                        v45 = 110;
                    case 11:
                        v40 = 11;
                        v45 = 118;
                        v89 = (unsigned int)v39 == 2;
                    case 12:
                        v40 = 12;
                        v45 = 102;
                        v89 = (unsigned int)v39 == 2;
                    case 13:
                        v40 = 13;
                        v45 = 114;
                    case 32:
                        v40 = 32;
                        v89 = (char)((unsigned int)v39 == 2);
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v89 = (char)((unsigned int)v39 == 2);
                        v35 = 0;
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 35: case 126:
                        v89 = (unsigned int)v39 == 2;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v89 = (char)((unsigned int)v39 == 2);
                        break;
                    case 39:
                        if ((unsigned int)v39 == 2)
                        {
                            if (v77 != 0)
                            {
                                v53 = 0;
                            }
                            if (v77 == 0 || v14 != 0)
                            {
                                if (v77 > v76)
                                {
                                    *((char *)(v28 + v76)) = 39;
                                }
                                if (v77 > v76 + 1)
                                {
                                    *((char *)(v28 + v76 + 1)) = 92;
                                }
                                if (v77 > v76 + 2)
                                {
                                    v53 = v77;
                                    *((char *)(v28 + v76 + 2)) = 39;
                                    v79 = v14;
                                }
                                else
                                {
                                    v53 = v77;
                                    v79 = v14;
                                }
                            }
                            v18 = v78;
                            v76 += 3;
                            v78 = 0;
                            v33 = 0;
                            v14 = v79;
                            v40 = 39;
                            v79 = v53;
                        }
                        else
                        {
                            v18 = v78;
                            v89 = 0;
                            v40 = 39;
                            break;
                        }
                    case 63:
                        if ((unsigned int)v39 != 2)
                        {
                            v40 = 63;
                            v89 = (char)((unsigned int)v39 == 2);
                            v52 = 0;
                            break;
                            v77 = v7;
                            v40 = (char)*((char *)(v77 + 2));
                            v77 = 0x7000a38200000000;
                            v0 = 0x7000a38200000000;
                            v89 = 0;
                            v62 = 0;
                            v40 = 63;
                            break;
                            if (v79 > v76)
                            {
                                *((char *)(v28 + v76)) = 63;
                            }
                            if (v79 > v76 + 1)
                            {
                                *((char *)(v28 + v76 + 1)) = 34;
                            }
                            if (v79 > v76 + 2)
                            {
                                *((char *)(v28 + v76 + 2)) = 34;
                            }
                            if (v79 > v76 + 3)
                            {
                                *((char *)(v28 + v76 + 3)) = 63;
                            }
                            v76 += 4;
                            v89 = 0;
                            v78 = 0;
                            v80 = 2;
                        }
                        else
                        {
                            v78 = 0;
                            v78 = 0;
                            v40 = 63;
                        }
                    case 92:
                        if ((unsigned int)v39 == 2)
                        {
                            v80 += 1;
                            v46 = v33;
                            v78 = 0;
                            v40 = 92;
                        }
                    case 123: case 125:
                        v43 = v38 != 1;
                        if (v38 == -1)
                        {
                            v43 = *((char *)(v7 + 1)) != 0;
                        }
                        v89 = (unsigned int)v39 == 2;
                    }
                }
            }
            else
            {
                v81 = v39;
                v82 = v38;
                v83 = v81 == 2;
                if ((v81 == 2 & v17) == 0 || v76 != 0)
                {
                    v84 = (unsigned int)v17 ^ 1;
                    v85 = v83 & (char)((unsigned int)v17 ^ 1);
                    v86 = v83 & (char)((unsigned int)v17 ^ 1);
                    if ((char)v85 == 0)
                    {
                        v86 = v84;
                    }
                    else if (v18 != 0)
                    {
                        if (v6 == 0)
                        {
                            v84 = v79 == 0 & v14 != 0;
                            if ((v79 == 0 & v14 != 0) == 0)
                            {
                                v86 = v18;
                            }
                        }
                        else
                        {
                            v3 = v27;
                            v2 = v26;
                            v1 = v25;
                            v76 = (unsigned int)sub_405990();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0)
            {
                v88 = v13;
                if (v13 != 0 && v86 != 0)
                {
                    v90 = (char)*((char *)v88);
                    if (*((char *)v88) != 0)
                    {
                        v91 = v88 - v76;
                        do
                        {
                            if (v79 > v76)
                            {
                                *((unsigned long long *)(v29 + v76)) = v90;
                            }
                            v76 += 1;
                            v90 = (char)*((char *)(v91 + v76));
                        }
                        while ((char)v90 != 0);
                    }
                }
                if (v79 > v76)
                {
                    *((char *)(v29 + v76)) = 0;
                }
            }
            if (v15 == 1)
            {
                v11 = v39;
                v10 = v38;
                v9 = v33;
                v46 = (unsigned short)*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v40 * 2));
                tmp_38 = v46 & 0x4000;
                v46 &= 0x4000;
                v51 = (tmp_38 & 65535) != 0;
                v89 = (tmp_38 & 65535) == 0 & v4;
                if (v89 != 0)
                {
                    v89 = v4;
                    v78 = 0;
                }
            }
            else
            {
                v24 = 0;
                if (v38 == -1)
                {
                    v11 = v39;
                    v10 = v33;
                    v9 = v37;
                    v38 = strlen(v7);
                }
                v21 = v76;
                v22 = v37;
                v54 = 0;
                v19 = v33;
                *((unsigned long long *)&v20) = v40;
                v11 = v29;
                v12 = v79;
                v9 = v38;
                v10 = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_409610();
                    v58 = v46;
                    if (v46 != -1 && v46 != -2 && v46 != 0)
                    {
                        if ((int)v10 == 2 && v17 != 0 && v46 != 1)
                        {
                            v59 = v7 + v77 + 1;
                            v77 = v7 + v58 + v77;
                            while (true)
                            {
                                v60 = (unsigned int)*(v59) - 91;
                                if ((8589934635 & 1 << (v60 & 63)) == 0 || ((unsigned int)*(v59) - 91 & 255) > 33)
                                {
                                    v59 = &v59[1];
                                    if (v77 == v59)
                                    {
                                        break;
                                    }
                                }
                            }
                            if ((8589934635 & 1 << (v60 & 63)) == 0 || ((unsigned int)*(v59) - 91 & 255) > 33)
                            {
                                v78 = (unsigned int)(iswprint(*((int *)&v23)) == 0? 0 : (unsigned int)r13<8>);
                                v54 += v58;
                                v46 = mbsinit((unsigned int)&v24);
                            }
                        }
                        v78 = (unsigned int)(iswprint(*((int *)&v23)) == 0? 0 : (unsigned int)r13<8>);
                        v54 += v58;
                        v46 = mbsinit((unsigned int)&v24);
                    }
                    if (v46 == -1)
                    {
                        v28 = v54;
                        v40 = v20;
                        v76 = v21;
                        v78 = 0;
                        v33 = (char)v19;
                        v29 = v11;
                        v79 = v12;
                        v38 = v9;
                        v39 = (unsigned int)v10;
                        v89 = v4;
                    }
                    if (v46 == -2)
                    {
                        v38 = v9;
                        v77 = v56;
                        v46 = v54;
                        v28 = v54;
                        v33 = (char)v19;
                        v40 = v20;
                        v76 = v21;
                        v29 = v11;
                        v79 = v12;
                        v39 = (unsigned int)v10;
                        if (v77 < v9 && *((char *)v57) != 0)
                        {
                            do
                            {
                                v46 += 1;
                            }
                            while (v46 < v9 && *((char *)(v22 + v46)) != 0);
                            v28 = v46;
                        }
                        v89 = v4;
                        v78 = 0;
                    }
                    if (v46 == 0 || (unsigned int)v46 != 0 && v46 != -1 && v46 != -2)
                    {
                        v28 = v54;
                        v40 = v20;
                        v76 = v21;
                        v33 = (char)v19;
                        v29 = v11;
                        v89 = (unsigned int)v78 ^ 1;
                        v79 = v12;
                        v38 = v9;
                        v39 = (unsigned int)v10;
                        v89 = (char)((unsigned int)v78 ^ 1) & v4;
                    }
                }
                while (v28 <= 1);
                if (v46 == -1 || v46 == -2 || v46 == 0 || (unsigned int)v46 != 0)
                {
                    v9 = v78;
                    v77 = 0;
                    v63 = v17;
                    v64 = v28 + v80;
                    v28 = v5;
                }
            }
            if (false)
            {
                v5 = v42;
                v50 = 0;
            }
            if (v15 != 1 || v89 != 0)
            {
                v9 = v78;
                v77 = 0;
                v63 = v17;
                v64 = v28 + v80;
                v28 = v5;
                while (true)
                {
                    if (v89 != 0)
                    {
                        v65 = (unsigned int)v39 == 2;
                        if (v63 == 0)
                        {
                            v77 = (unsigned int)v33 ^ 1;
                            v66 = v4 & (char)((unsigned int)v33 ^ 1);
                            if ((v4 & (char)((unsigned int)v33 ^ 1)) != 0)
                            {
                                if (v79 > v76)
                                {
                                    *((char *)(v29 + v76)) = 39;
                                }
                                if (v79 > v76 + 1)
                                {
                                    *((char *)(v29 + v76 + 1)) = 36;
                                }
                                v77 = v76 + 2;
                                if (v79 > v76 + 2)
                                {
                                    *((char *)(v29 + v76 + 2)) = 39;
                                }
                                v76 += 3;
                                v33 = v46;
                            }
                            if (v79 > v76)
                            {
                                *((char *)(v29 + v76)) = 92;
                            }
                            if (v79 > v76 + 1)
                            {
                                v67 = v40;
                                v68 = (char)v40 % 64;
                                *((unsigned long long *)(v29 + v76 + 1)) = (unsigned long long)(unsigned int)rax<4> + 48;
                            }
                            v46 = v76 + 2;
                            if (v79 > v76 + 2)
                            {
                                v70 = v40;
                                v71 = (char)v40 % 8;
                                v46 = (unsigned int)((rax<4> & 7) + 48);
                                *((unsigned long long *)(v29 + v76 + 2)) = v46;
                            }
                            v80 += 1;
                            v76 += 3;
                            v40 = ((unsigned int)v40 & 7) + 48;
                            if (v80 < v64)
                            {
                                v77 = v89;
                            }
                            else
                            {
                                v78 = (char)v9;
                            }
                        }
                        else
                        {
                            v4 = v65;
                        }
                    }
                    else
                    {
                        v46 = (v77 ^ 1) & (unsigned int)v33;
                        if (v28 != 0)
                        {
                            if (v79 > v76)
                            {
                                *((char *)(v29 + v76)) = 92;
                            }
                            v76 += 1;
                        }
                        v80 += 1;
                        if (v80 >= v64)
                        {
                            v78 = (char)v9;
                        }
                        else if (v46 != 0)
                        {
                            if (v79 > v76)
                            {
                                *((char *)(v29 + v76)) = 39;
                            }
                            v46 = v76 + 1;
                            if (v79 > v76 + 1)
                            {
                                *((char *)(v29 + v76 + 1)) = 39;
                            }
                            v76 += 2;
                            v28 = 0;
                            v33 = 0;
                        }
                        else
                        {
                            v28 = 0;
                        }
                    }
                    if ((v89 == 0 || v80 < v64) && (v89 == 0 || v63 == 0) && (v80 < v64 || v89 != 0))
                    {
                        if (v79 > v76)
                        {
                            *((unsigned long long *)(v29 + v76)) = v40;
                        }
                        v40 = (char)*((char *)(v7 + v80));
                        v76 += 1;
                    }
                }
            }
            if ((v76 == 0 || v17 != 0) && (v76 == 0 || v4 != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v4 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0) && ((v81 == 2 & v17) != 0 || v4 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_405990();
            }
            if (v17 == 0 && v4 != 0 || v17 == 0 && v5 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 && v4 == 0 || (v15 != 1 || v89 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && v6 != 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v76 == 0 || v17 != 0) && (v76 == 0 || v4 != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v4 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0) && ((v81 == 2 & v17) != 0 || v4 != 0))
            {
                v92 = v76;
                return v92;
            }
        }
        *((char *)v29) = 39;
        v78 = 2;
        v13 = "'";
        v8 = 1;
        v17 = 0;
        v18 = v84;
    }
}

int sub_4095b0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408f40();
}

int sub_407070()
{
}

int sub_4071d0()
{
}

int sub_4085e0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_4087a0() != 0)
        {
            v8 = fclose(v2);
            if (v0 != 0)
            {
                *(__errno_location()) = v0;
                v8 = -18446744069414584321;
            }
            return v8;
        }
    }
}

int sub_4070a0()
{
}

int sub_402f28() { crash_skku;
}
int sub_407250()
{
}

int sub_4095d0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409510();
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60e298;
extern uint128_t g_60e2a0;
extern unsigned int g_60e2b0;
extern int512_t g_60e340;

int sub_406bc0()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x50]
    unsigned long|unsigned long long v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x40]
    unsigned int v6;  // [bp-0x3c]
    unsigned long long v8;  // rcx
    struct_0 *v9;  // rbp
    unsigned long v10;  // rsi
    unsigned int *v11;  // r13
    unsigned long v13;  // rdi
    uint128_t *v15;  // rax
    unsigned long long v16;  // rax
    uint128_t *v17;  // rbx
    unsigned long long v19[2];  // rbx
    void *v20;  // r12
    unsigned long long v21;  // rax
    unsigned long long v22;  // rsi
    unsigned long long v24;  // rax

    v9 = v8;
    v3 = v10;
    v17 = g_60e298;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60e2b0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60e298 != 6349472)
            {
                v16 = sub_407a40();
                g_60e298 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_407a40();
                v17 = v15;
                g_60e298 = v15;
                *(v15) = g_60e2a0;
            }
            memset(&v17[(long long)(int)g_60e2b0], 0x0, (int)((unsigned int)v13 + 1 - g_60e2b0) * 16);
            g_60e2b0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_407c30(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_60e2b0 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_405990();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6349632)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4079e0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_405990();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern unsigned int g_40ba12;
extern unsigned int g_40ba3d;
extern unsigned int g_40bc70;

int sub_407960()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ba12, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ba3d, 0x5));
    dcgettext(0x0, 0x40bc70, 0x5);
}

int sub_407bb0()
{
    unsigned int v1;  // rdi
    unsigned int v2;  // rsi
    unsigned long long v3;  // rax

    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (rdi<8> Mull rsi<8>)), 0x0<64>, cc_ndep<8>)) && [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rdi<8>, rsi<8>, cc_ndep<8>) == 0)
    {
        v3 = calloc(v1, v2);
        if (v3 != 0)
        {
            return v3;
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (rdi<8> Mull rsi<8>)), 0x0<64>, cc_ndep<8>) || v3 == 0 || [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rdi<8>, rsi<8>, cc_ndep<8>) != 0)
    {
        sub_407c30(); /* do not return */
    }
}

int sub_409690()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_4085e0();
    if (((char)*(v3) & 32) == 0)
    {
        if ((unsigned int)v2 != 0 && v1 == 0)
        {
            v2 = 0 - (unsigned int)(char)(*(__errno_location()) != 9);
        }
    }
    else
    {
        if ((unsigned int)v2 == 0)
        {
            *(__errno_location()) = 0;
            v2 = -18446744069414584321;
        }
    }
    if ((unsigned int)v2 != 0 && (v1 != 0 || ((char)*(v3) & 32) != 0))
    {
        v2 = -18446744069414584321;
    }
    return v2;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_40c418;
extern unsigned int g_40c438;
extern unsigned int g_40c468;
extern unsigned int g_40c488;
extern unsigned int g_40c4b8;
extern unsigned long long stderr;

int sub_408920()
{
    char *v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned int *v2;  // [bp-0x68]
    char *v3;  // [bp-0x58]
    unsigned int v4;  // [bp-0x50]
    char v5;  // [bp-0x49]
    unsigned int v6;  // [bp-0x44]
    unsigned int v7;  // [bp-0x40]
    unsigned int v8;  // [bp-0x3c]
    struct_0 *v9;  // [bp+0x8]
    unsigned int v10;  // [bp+0x10]
    char *v11;  // r14
    char *v12;  // rdx
    unsigned long v13;  // r8
    char *v14;  // rbp
    unsigned long long v15;  // rax
    unsigned long long v16;  // r13
    unsigned long long v17;  // rcx
    unsigned long long *|unsigned long long v18;  // rbx
    unsigned int|unsigned long|unsigned long long v19;  // r12
    char *v20;  // r15
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // r8
    char *v24;  // rdi
    unsigned long long v25;  // r15
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rax
    unsigned int v28;  // r9d
    unsigned long long v29;  // r9
    unsigned long long v30;  // rdx
    unsigned int v31;  // ecx
    char *v33;  // rbp
    unsigned long long v34;  // rdx
    unsigned long long *v35;  // rsi
    void *v36;  // rdi
    unsigned long long|unsigned long long * v37;  // rbx
    unsigned long long v38;  // rbp
    unsigned long long v39;  // r12
    unsigned int *v41;  // rdx
    unsigned long long v42;  // rax
    unsigned long long v43;  // r14

    v11 = v9->field_20;
    v3 = v12;
    v2 = v13;
    v14 = v9->field_20;
    *((struct struct_1 *)&v5) = *(v9->field_20);
    if (*(v9->field_20) != 61 && *(v9->field_20) != 0)
    {
        do
        {
            v14 = &v14[1];
            v15 = *(v14);
        }
        while ((char)v15 != 0 && v15 != 61);
        v16 = v14 - v11;
    }
    if (*(v9->field_20) == 0 || *(v9->field_20) == 61)
    {
        v16 = 0;
    }
    v18 = v17;
    v19 = 0;
    v0 = *((long long *)v17);
    v20 = *((long long *)v17);
    if (*((long long *)v17) != 0)
    {
        while (true)
        {
            v21 = strncmp(v20, v9->field_20, v16);
            if (v21 == 0)
            {
                v22 = strlen(v20);
            }
            if (v21 != 0 || v22 != v16)
            {
                v18 += 32;
                v20 = *(v18);
                v23 = v19 + 1;
                if (*(v18) != 0)
                {
                    v19 = v23;
                }
                else
                {
                    v8 = v19;
                    v18 = 0;
                    v6 = -1;
                    v24 = v0;
                    v25 = 0;
                    v4 = 0;
                    v7 = 0;
                    v1 = 0;
                    v0 = v14;
                    v26 = v17;
                    do
                    {
                        v27 = strncmp(v24, v9->field_20, v16);
                        if (v27 == 0)
                        {
                            if (v18 == 0)
                            {
                                v6 = v25;
                                v18 = v26;
                            }
                            else if (*((int *)(v18 + 24)) != *((int *)(v26 + 24)) || *((int *)(v18 + 8)) != *((int *)(v26 + 8)) || v28 != 0 || *((long long *)(v18 + 16)) != *((long long *)(v26 + 16)))
                            {
                                if (v4 == 0)
                                {
                                    if (v10 == 0)
                                    {
                                        v4 = 1;
                                    }
                                    else if (v1 == 0)
                                    {
                                        v1 = calloc((int)v8, 0x1);
                                        v4 = 1;
                                    }
                                    if (false)
                                    {
                                        v7 = 1;
                                        *((char *)(v1 + (int)v6)) = 1;
                                    }
                                    if (v1 != 0)
                                    {
                                        *((char *)(v1 + v25)) = 1;
                                    }
                                }
                            }
                        }
                        v26 += 32;
                        v24 = *((long long *)v26);
                        v25 += 1;
                    }
                    while (*((long long *)v26) != 0);
                    v14 = v0;
                    if (v1 == 0)
                    {
                        v29 = v4;
                        if (v4 == 0)
                        {
                            if (v18 == 0)
                            {
                                break;
                            }
                            v19 = v6;
                        }
                    }
                    if (v4 != 0 || v1 != 0)
                    {
                        if (v10 != 0)
                        {
                            if (v4 != 0)
                            {
                                dcgettext(0x0, 0x40c418, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40c438, 0x5);
                                __fprintf_chk();
                                v36 = stderr;
                                v37 = v17;
                                v38 = v1;
                                v39 = v1 + v19 + 1;
                                do
                                {
                                    if (*((char *)v38) != 0)
                                    {
                                        __fprintf_chk();
                                        v36 = stderr;
                                    }
                                    v38 += 1;
                                    v37 = &v37[4];
                                }
                                while (v39 != v38);
                                fputc(0xa, v36);
                                funlockfile(stderr);
                                v11 = v9->field_20;
                            }
                        }
                        if (v7 != 0)
                        {
                            free(v1);
                        }
                        v43 = &v11[strlen(v11)];
                        v9->field_20 = v43;
                        v9->field_0 = v9->field_0 + 1;
                        v9->field_8 = 0;
                        v42 = 63;
                    }
                }
            }
            if ((*(v18) == 0 || v21 == 0) && (*(v18) == 0 || v22 == v16) && (v21 == 0 || v4 == 0) && (v21 == 0 || v1 == 0) && (v4 == 0 || v22 == v16) && (v1 == 0 || v22 == v16))
            {
                v30 = v9->field_0;
                v9->field_20 = 0;
                v9->field_0 = (unsigned int)v30 + 1;
                v31 = *((int *)(v18 + 8));
                if (*(v14) == 0)
                {
                    if (v31 == 1)
                    {
                        if ((unsigned int)((unsigned long long)v9->field_0 + 1) < v24)
                        {
                            v9->field_0 = v9->field_0 + 2;
                            v9->field_10 = v35[1 + v30];
                        }
                        else
                        {
                            if (v10 != 0)
                            {
                                dcgettext(0x0, 0x40c4b8, 0x5);
                                __fprintf_chk();
                            }
                            v9->field_8 = *((int *)(v18 + 24));
                            v42 = (unsigned long long)(char)(*(v3) != 58) * 5 + 58;
                        }
                    }
                }
                else
                {
                    if (v31 != 0)
                    {
                        v33 = &v14[1];
                        v9->field_10 = v33;
                    }
                    else
                    {
                        if (v10 != 0)
                        {
                            dcgettext(0x0, 0x40c488, 0x5);
                            __fprintf_chk();
                        }
                        v9->field_8 = *((int *)(v18 + 24));
                        v42 = 63;
                    }
                }
                if (*(v14) == 0 && (unsigned int)((unsigned long long)v9->field_0 + 1) < v24 || *(v14) == 0 && v31 != 1 || *(v14) != 0 && v31 != 0)
                {
                    if (v2 != 0)
                    {
                        *((unsigned long *)&v2) = v19;
                    }
                    v41 = *((long long *)(v18 + 16));
                    v42 = (unsigned int)*((int *)(v18 + 24));
                    if (*((long long *)(v18 + 16)) == 0)
                    {
                        break;
                    }
                    *(v41) = v42;
                    v42 = 0;
                }
            }
        }
        if (...)
        {
            return v42;
        }
    }
    if (v28 != 0)
    {
        if (*((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45)
        {
            v34 = strchr(v3, v5);
            v42 = -18446744069414584321;
        }
        if ((v34 != 0 || *((long long *)v17) != 0) && (*((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45 || *((long long *)v17) != 0))
        {
            return v42;
        }
    }
    if (v28 == 0 && *((long long *)v17) == 0 || v34 == 0 && v28 != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x40c468, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

extern char g_60e328;

int sub_405660()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60e328 = v1;
    return v2;
}

extern unsigned int g_40ac1f;
extern unsigned int g_60e250;
extern char g_60e328;
extern unsigned long long g_60e330;

int sub_405670()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_409690();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60e328 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40ac1f, 0x5);
            if (g_60e330 != 0)
            {
                sub_407260();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60e328 != 0)
    {
        v3 = sub_409690();
    }
    if ((unsigned int)v3 == 0 && (*(v2) == 32 || v1 == 0) && (v1 == 0 || g_60e328 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60e250);
        error(0x0, *(v2), "%s");
    }
}

int sub_404ec6()
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xc7]
    unsigned long long v2;  // [bp-0xc6]
    unsigned long long v3;  // [bp-0xbe]
    unsigned long long v4;  // [bp-0xb6]
    unsigned int v5;  // [bp-0xae]
    unsigned short v6;  // [bp-0xaa]
    void v7;  // [bp-0xa8]
    void v8;  // [bp-0x98]
    char|unsigned long long v9;  // [bp-0x88]
    unsigned long long v10;  // [bp+0x0]
    char v12;  // sil
    char v13;  // cl
    unsigned short v14;  // ax
    void v15;  // xmm0
    unsigned long v17;  // d
    unsigned long long *v18;  // rdi
    unsigned long long v19;  // rcx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rbx

    v0 = v12;
    v1 = v13;
    v2 = 257;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = v14;
    v7 = v15;
    v8 = v15;
    if (sub_404d50() >= 0)
    {
        v19 = 16;
        for (v18 = &v9; v19 != 0; v18 = &v18[v17])
        {
            v19 -= 1;
            v9 = 0;
        }
        __memcpy_chk((unsigned int)&v9);
        sub_404c20();
        memset(&v9, 0x0, 0x80);
        v22 = 0;
    }
    else
    {
        v22 = -18446744069414584321;
    }
    v23 = v10;
    return v22;
}

extern unsigned int g_40bd4f;
extern unsigned int g_60e250;

int sub_407c30()
{
    dcgettext(0x0, 0x40bd4f, 0x5);
    error(g_60e250, 0x0, "%s");
    abort(); /* do not return */
}

int sub_407c70()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned int v4;  // ebp
    unsigned long v5;  // rcx
    unsigned int *v6;  // r14

    v2 = sub_4081a0();
    if ((unsigned int)v2 == 0)
    {
        if (v0 >= v3 && v0 <= v5)
        {
            return v0;
        }
        if (v0 < v3 || v0 > v5)
        {
            v6 = __errno_location();
            *(v6) = (0 - (unsigned int)(char)(v0 < 0x40000000) & -41) + 75;
        }
    }
    else
    {
        v4 = v2;
        v6 = __errno_location();
        if (!(v4 != 1))
        {
            *(v6) = 75;
        }
        else if (v4 == 3)
        {
            *(v6) = 0;
        }
    }
    if (v0 < v3 || (unsigned int)v2 != 0 || v0 > v5)
    {
        sub_407410();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: %s");
    }
}

int sub_407cfd()
{
}

int sub_4052d0()
{
    unsigned long long v0;  // [bp-0x58]
    char v1;  // [bp-0x41]
    unsigned long v2;  // [bp-0x40]
    unsigned long long v4;  // rsi
    unsigned long long v5;  // r15
    unsigned long v6;  // rcx
    unsigned long v7;  // r13
    void *v8;  // rdx
    char *v9;  // rdi
    unsigned long v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    void *v15;  // rbp
    char *v16;  // r14

    v5 = v4;
    v7 = v6;
    v15 = v8;
    v2 = v8;
    v16 = *((long long *)v5);
    v0 = -1;
    if (*((long long *)v5) != 0)
    {
        v11 = strlen(v9);
        v1 = 0;
        v12 = 0;
        while (true)
        {
            v13 = strncmp(v16, v9, v11);
            if (v13 == 0)
            {
                v14 = strlen(v16);
                if (v14 == v11)
                {
                    v0 = v12;
                }
                else if (v0 == -1)
                {
                    v0 = v12;
                    v12 += 1;
                    v15 += v6;
                    v16 = *((long long *)(v5 + v12 * 8));
                }
                else if (v2 != 0)
                {
                    v1 = (memcmp(v7 * v0 + v2, v15, v7) != 0? 1 : (unsigned int)(char)(char)(stack_base)[-65]);
                }
                else
                {
                    v1 = 1;
                }
            }
            if (v13 != 0 || v0 != -1 && v14 != v11)
            {
                v12 += 1;
                v15 += v6;
                v16 = *((long long *)(v5 + v12 * 8));
            }
            if ((*((long long *)(v5 + (v12 << 3))) == 0 || v13 == 0) && (*((long long *)(v5 + (v12 << 3))) == 0 || v0 == -1) && (v13 != 0 || v14 != v11) && (*((long long *)(v5 + (v12 << 3))) != 0 || v13 != 0 || v0 != -1))
            {
                *((int *)&v0) = (v1 == 0? v0 : -2);
            }
        }
    }
    return v0;
}

int sub_407280()
{
}

int sub_4073d0()
{
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[56];
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    char padding_60[128];
    unsigned long long field_e0;
    unsigned long long field_e8;
    char field_f0;
} struct_0;

int sub_404fa0()
{
    char|uint128_t v0;  // [bp-0x58]
    char v1;  // [bp-0x57]
    char v2;  // [bp-0x56]
    char v3;  // [bp-0x55]
    char v4;  // [bp-0x54]
    char v5;  // [bp-0x53]
    char v6;  // [bp-0x52]
    char v7;  // [bp-0x51]
    uint128_t v8;  // [bp-0x48]
    uint128_t v9;  // [bp-0x38]
    uint128_t v10;  // [bp-0x28]
    void *v12;  // rsi
    struct_0 *v13;  // rdi
    unsigned long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    char v17;  // cc_dep1
    struct_0 *v22;  // rcx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v27;  // rax

    v0 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    if (v12 != 0 && v13->field_e8 <= v14 && v13->field_50 == 0)
    {
        v15 = v13->field_e0;
        v16 = v13->field_e0 + v13->field_40;
        v13->field_48 = v13->field_48 + ((v13->field_e0 + v13->field_40 <= v13->field_e0? 1 : 0) & 1);
        v17 = v13->field_f0;
        v13->field_40 = v16;
        if (v17 != 0)
        {
            v13->field_58 = -1;
        }
        v13->field_50 = -1;
        memset((char *)&v13->padding_60 + v15, 0x0, 128 - v15);
        sub_403680();
        v22 = v13;
        v23 = &v0;
        do
        {
            v24 = v22->field_0;
            v23 = &v0;
            v22 = &v22->padding_8;
            *((unsigned long long *)&v0) = v24;
            v1 = (char)v24 % 0x100;
            v2 = (char)v24 % 0x10000;
            v3 = (char)v24 % 0x1000000;
            v4 = (char)v24 % 0x100000000;
            v5 = (char)v24 % 0x10000000000;
            v7 = (char)v24 % 0x100000000000000;
            v6 = (char)v24 % 0x1000000000000;
        }
        while (v23 != stack_base + -24);
        memcpy(v12, &v0, v22->field_e8);
        memset(&v0, 0x0, 0x40);
        v27 = 0;
    }
    if (v12 == 0 || v13->field_e8 > v14 || v13->field_50 != 0)
    {
        v27 = -18446744069414584321;
    }
    return v27;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_407840()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long long v2;  // r9
    struct_0 *v3;  // r8
    unsigned long long v4;  // rax
    unsigned long long *v5;  // r10
    unsigned long long v6;  // rax
    unsigned long long *v7;  // r10
    unsigned long long v8;  // rax

    v2 = 0;
    do
    {
        v4 = v3->field_0;
        if (v3->field_0 <= 47)
        {
            v5 = v4 + v3->field_10;
            v3->field_0 = (unsigned int)v4 + 8;
            v6 = *(v5);
            v0 = *(v5);
            if (v6 == 0)
            {
                break;
            }
        }
        else
        {
            v7 = v3->field_8;
            v3->field_8 = v3->field_8 + 8;
            v8 = *(v7);
            v0 = *(v7);
            if (v8 == 0)
            {
                break;
            }
        }
        v2 += 1;
    }
    while (v2 != 10);
    return sub_407440();
}

extern unsigned int g_409dff;
extern unsigned int g_409f68;
extern unsigned int g_409f90;
extern unsigned int g_409fd8;
extern unsigned int g_40a010;
extern unsigned int g_40a040;
extern unsigned int g_40a088;
extern unsigned int g_40a120;
extern unsigned int g_40a158;
extern unsigned int g_40a190;
extern unsigned int g_40a348;
extern unsigned int g_40a378;
extern unsigned int g_40a3b0;
extern unsigned int g_40a508;
extern unsigned int g_40a550;
extern unsigned int g_40a570;
extern unsigned long long stdout;

int sub_403280()
{
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x70]
    unsigned long v4;  // [bp-0x68]
    unsigned long v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48]
    unsigned long v9;  // [bp-0x40]
    unsigned long v10;  // [bp-0x38]
    unsigned long v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x28]
    unsigned long long v13;  // [bp-0x20]
    unsigned long v14;  // [bp-0x18]
    unsigned long v15;  // [bp-0x8]
    unsigned long v17;  // r12
    unsigned long v18;  // rbx
    unsigned long v19;  // rdi
    unsigned long long v32[2];  // rax
    char *v33;  // rdi
    char *v34;  // rsi
    unsigned long long v35;  // rcx
    unsigned long long v36;  // cc_dep1
    unsigned long long v37;  // cc_dep2
    unsigned long v38;  // d
    char *v42;  // rax
    char *v43;  // rax
    unsigned long long v44;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x409f68, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409f90, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409fd8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a010, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a040, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a088, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a120, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a158, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a190, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a348, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a378, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a3b0, 0x5));
        v0 = "[";
        v32 = &v0;
        v1 = "test invocation";
        v2 = "coreutils";
        v3 = "Multi-call";
        v4 = "sha224sum";
        v5 = "sha2 utilities";
        v6 = "sha256sum";
        v7 = "sha2 utilities";
        v8 = "sha384sum";
        v9 = "sha2 utilities";
        v10 = "sha512sum";
        v11 = "sha2 utilities";
        v12 = 0;
        v13 = 0;
        while (true)
        {
            v32 = &v2;
            v33 = v2;
            if (v2 == 0)
            {
                break;
            }
            v34 = "b2sum";
            v35 = 6;
            if ((v36 > v37) - 0 - (v36 < v37) == 0)
            {
                break;
            }
            while (v35 != 0)
            {
                v35 -= 1;
                v36 = *(v34);
                v37 = *(v33);
                v33 = &v33[v38];
                v34 = &v34[v38];
                break;
            }
        }
        if (v32[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409dff, 0x5));
            v43 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409dff, 0x5));
            v42 = setlocale(0x5, 0x0);
            if (v42 != 0)
            {
                v44 = strncmp(v42, "en_", 0x3);
            }
            if (v44 == 0 || v42 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a550, 0x5));
            }
        }
        if ((v32[1] == 0 || v43 != 0) && (v32[1] == 0 || strncmp(v43, "en_", 0x3) != 0) && (v44 != 0 || v32[1] != 0) && (v32[1] != 0 || v42 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a508, 0x5));
        }
        if (v32[1] != 0 || v44 != 0 && v42 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a550, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a570, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_406d60()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_407be0();
}

int sub_4073f0()
{
}

extern char g_60e306;
extern char g_60e320;
extern unsigned long long stdin;

int sub_4030d0()
{
    unsigned long long v1;  // rcx
    unsigned long long v2;  // rdi
    unsigned long long v4;  // cc_dep1
    unsigned long long v5;  // cc_dep2
    unsigned long v6;  // d
    char *v7;  // rsi
    char *v8;  // rdi
    char *v9;  // rdx
    unsigned long long v10;  // cc_dep1
    unsigned long long v11;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // r12
    unsigned int *v17;  // rbx
    unsigned long long v18;  // rax
    unsigned long long v20;  // rbp
    unsigned long long v21;  // rbx
    unsigned long long v23;  // rax

    v1 = 2;
    v8 = "-";
    v7 = v2;
    while (v1 != 0)
    {
        v1 -= 1;
        v4 = *(v7);
        v5 = *(v8);
        v8 = &v8[v6];
        v7 = &v7[v6];
        break;
    }
    *(v9) = 0;
    v10 = (v4 > v5) - 0 - (v4 < v5);
    if ((char)v10 == 0)
    {
        v11 = stdin;
        g_60e320 = 1;
        sub_405720();
        v13 = sub_4051d0();
    }
    else
    {
        v11 = (unsigned int)sub_405750();
        if (v11 != 0)
        {
            sub_405720();
            v15 = sub_4051d0();
            if (v15 == 0)
            {
                v18 = sub_4085e0();
                if (v18 != 0)
                {
                    v16 = 0;
                    v21 = (unsigned int)sub_407290();
                    error(0x0, *(__errno_location()), "%s");
                }
            }
        }
        else
        {
            v16 = g_60e306;
            v17 = __errno_location();
            if (g_60e306 != 0 && *(v17) == 2)
            {
                *(v9) = 1;
            }
            if (g_60e306 == 0 || *(v17) != 2)
            {
                v16 = 0;
                sub_407290();
                error(0x0, *(v17), "%s");
            }
        }
    }
    if ((char)v10 == 0 || v11 != 0)
    {
        if (((char)v10 == 0 || v15 != 0) && (v13 != 0 || (char)v10 != 0))
        {
            v16 = 0;
            v20 = (unsigned int)sub_407290();
            error(0x0, *(__errno_location()), "%s");
            if (stdin != v11)
            {
                sub_4085e0();
            }
        }
        if ((v15 == 0 || (char)v10 == 0) && (v18 == 0 || (char)v10 == 0) && (v13 == 0 || (char)v10 != 0))
        {
            v16 = 1;
        }
    }
    v23 = v16;
    return v23;
}

int sub_407d40()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // r9

    v0 = v2;
    return sub_407c70();
}

int sub_404d50()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // r8
    unsigned long long v3[22];  // rdi
    unsigned long long v4;  // rcx
    unsigned long v5;  // d
    unsigned long long v6;  // rax
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rdx

    *((long long *)(v1 + 64)) = 0;
    v2 = v1;
    v9 = 7640891576956012808;
    *((long long *)(v1 + 72 + 168)) = 0;
    v3 = v1 + 72 & -8;
    for (v4 = &((unsigned long long [22])(v2 + -0x1 * v3))[31] >> 3; v4 != 0; v3 = &v3[v5])
    {
        v4 -= 1;
        v3[0] = 0;
    }
    *((long long *)v2) = 7640891576956012808;
    *((long long *)(v2 + 8)) = 13503953896175478587;
    *((long long *)(v2 + 16)) = 4354685564936845355;
    *((long long *)(v2 + 24)) = 11912009170470909681;
    *((long long *)(v2 + 32)) = 5840696475078001361;
    *((long long *)(v2 + 40)) = 11170449401992604703;
    *((long long *)(v2 + 48)) = 2270897969802886507;
    *((long long *)(v2 + 56)) = 6620516959819538809;
    v6 = 0;
    while (true)
    {
        v8 = v9 ^ *((long long *)(v7 + v6 * 8));
        *((unsigned long long *)(v2 + v6 * 8)) = v8;
        v6 += 1;
        if (v6 == 8)
        {
            break;
        }
        v9 = *((long long *)(v2 + v6 * 8));
    }
    *((unsigned long long *)(v2 + 232)) = (char)*((char *)v7);
    return 0;
}

extern unsigned int g_40b9cb;
extern unsigned int g_40b9cf;
extern unsigned int g_40b9df;
extern unsigned int g_40b9f6;
extern unsigned int g_40ba58;
extern unsigned int g_40bb28;
extern unsigned int g_40bb48;
extern unsigned int g_40bb70;
extern unsigned int g_40bb98;
extern unsigned int g_40bbc8;

int sub_407440()
{
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x70]
    unsigned long v4;  // [bp-0x68]
    unsigned long v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48]
    unsigned long v9;  // [bp-0x40]
    unsigned long long v11[9];  // r8
    unsigned long long v12[9];  // rbx
    unsigned long v13;  // rsi
    void *v14;  // rdi
    unsigned long v16;  // r9
    unsigned long long v17;  // r8
    unsigned long long v18;  // r15
    unsigned long long v19;  // r14
    unsigned long v20;  // rsi
    unsigned long long v21;  // r8
    unsigned long long v22;  // r13
    unsigned long long v23;  // r12
    unsigned long long v24;  // r14

    v12 = v11;
    if (v13 != 0)
    {
        __fprintf_chk();
    }
    else
    {
        __fprintf_chk();
    }
    dcgettext(0x0, 0x40b9cb, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ba58, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40b9cf, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40b9df, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40b9f6, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40bb28, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40bb48, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40bb70, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40bb98, 0x5);
        *((unsigned long long [9])&v5) = v11[6];
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 8:
        v22 = v12[6];
        v23 = v12[5];
        v18 = v12[4];
        *((unsigned long long [9])&v8) = v12[7];
        v19 = v12[3];
        *((unsigned long long [9])&v6) = v12[2];
        *((unsigned long long [9])&v7) = v12[1];
        dcgettext(0x0, 0x40bbc8, 0x5);
    case 9:
        v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
        v21 = v11[1];
        v22 = v12[6];
        v23 = v12[5];
        *((unsigned long long [9])&v9) = v12[8];
        v18 = v12[4];
        v19 = v12[3];
        *((unsigned long long [9])&v8) = v12[7];
        *((unsigned long long [9])&v6) = v12[2];
        v7 = v21;
    default:
        v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        v17 = v11[1];
        v22 = v12[6];
        v23 = v12[5];
        *((unsigned long long [9])&v9) = v12[8];
        v18 = v12[4];
        v19 = v12[3];
        *((unsigned long long [9])&v8) = v12[7];
        *((unsigned long long [9])&v6) = v12[2];
        v7 = v17;
    }
    dcgettext(0x0, v20, 0x5);
    v5 = v9;
    v4 = v24;
    __fprintf_chk();
    return v4;
    return __fprintf_chk();
    v4 = v8;
    v3 = v22;
    v2 = v23;
    v1 = v18;
    v0 = v19;
    return __fprintf_chk();
}

int sub_407a80()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rsi
    unsigned long v3;  // rdx
    unsigned long long v4;  // rax

    v4 = v2 * v3;
    v4 = (char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rsi<8>, rdx<8>, cc_ndep<8>);
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (rsi<8> Mull rdx<8>)), 0x0<64>, cc_ndep<8>)))
    {
        v4 = [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t10, t1, cc_ndep<8>);
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (rsi<8> Mull rdx<8>)), 0x0<64>, cc_ndep<8>) || [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t10, t1, cc_ndep<8>) != 0)
    {
        v0 = v4;
        sub_407c30(); /* do not return */
    }
}

extern int512_t g_60e440;

int sub_406e00()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60e440 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60e440 : v1) + 4)) = v3;
    return v2;
}

int sub_405720()
{
    unsigned long v0;  // [bp-0x8]
    void *v2;  // rdi
    unsigned long v3;  // rax
    unsigned long v4;  // rbx

    if (v2 != 0)
    {
        v0 = v4;
        fileno(v2);
    }
    else
    {
        return v3;
    }
}

int sub_407a30()
{
}

int sub_407b90()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4079e0();
}

int sub_407370()
{
}

typedef struct struct_1 {
    char padding_0[4237792];
    char field_40a9e0;
} struct_1;

extern unsigned int g_409e1a;
extern unsigned int g_409e28;
extern unsigned int g_409e37;
extern unsigned int g_409e4a;
extern unsigned int g_409e8a;
extern unsigned int g_409e99;
extern unsigned int g_409ed3;
extern unsigned int g_409ee2;
extern unsigned int g_40a5a8;
extern unsigned int g_40a618;
extern unsigned int g_40a848;
extern unsigned int g_40a878;
extern unsigned int g_40a8b0;
extern unsigned int g_40a8e0;
extern unsigned int g_40a910;
extern unsigned int g_40a940;
extern unsigned int g_40a970;
extern unsigned int g_40a9a0;
extern int512_t g_40aba0;
extern unsigned int g_40c53f;
extern unsigned int g_60e230;
extern unsigned int g_60e2bc;
extern unsigned long long g_60e2f8;
extern unsigned int g_60e300;
extern char g_60e304;
extern char g_60e305;
extern char g_60e306;
extern char g_60e307;
extern char g_60e308;
extern unsigned long long g_60e310;
extern unsigned long long g_60e318;
extern char g_60e320;
extern unsigned long long stdin;
extern unsigned long long stdout[7];

int main()
{
    unsigned long long v0;  // [bp-0x168]
    void tmp_11;  // tmp #11
    char|char *|unsigned long long v1;  // [bp-0x150]
    unsigned long long *v2;  // [bp-0x148]
    char *|unsigned long v3;  // [bp-0x140]
    char *|char|unsigned long|unsigned long long v4;  // [bp-0x138]
    char *|unsigned long long v5;  // [bp-0x130]
    unsigned long|unsigned long long v6;  // [bp-0x128]
    char v7;  // [bp-0x11d]
    unsigned int v8;  // [bp-0x11c]
    unsigned long|unsigned long long v9;  // [bp-0x118]
    unsigned long long *v10;  // [bp-0x110]
    unsigned long|unsigned long long v11;  // [bp-0x108]
    char v12;  // [bp-0x100]
    char v13;  // [bp-0xff]
    char v14;  // [bp-0xfe]
    char v15;  // [bp-0xfd]
    unsigned int v16;  // [bp-0xfc]
    unsigned long long v17;  // [bp-0xf0]
    unsigned long long v18;  // [bp-0xe8]
    unsigned long long v19;  // [bp-0xe0]
    char v20;  // [bp-0xd8]
    char v21;  // [bp-0x88]
    unsigned long long v23;  // r14
    unsigned long long v24;  // rdi
    unsigned long long v25;  // r12
    unsigned long long v26;  // rsi
    unsigned long long v27;  // rbp
    unsigned long long v31;  // rax
    unsigned int|unsigned long v32;  // rbx
    char v33;  // dl
    unsigned long long v35;  // rbx
    unsigned long long v36;  // rbx
    unsigned long v38;  // rsi
    unsigned long long v39;  // rbx
    char *v41;  // rdi
    unsigned long long v43;  // rax
    void *v44;  // r13
    unsigned long long v45;  // rax
    char *v46;  // rax
    unsigned long long v47;  // rdx
    char *v48;  // r10
    unsigned long long v49;  // rbx
    unsigned long long v50;  // r8
    char *v51;  // rdi
    unsigned long long v52;  // rcx
    unsigned long long v53;  // cc_dep1
    unsigned long long v54;  // cc_dep2
    unsigned long v55;  // d
    unsigned long long v56;  // cc_dep1
    unsigned long long v58;  // rax
    unsigned long long v59;  // rcx
    unsigned long long v60;  // rsi
    char *v61;  // rbx
    unsigned long long v62;  // rbp
    char *v63;  // r11
    char *v67;  // r10
    char *|unsigned long long v68;  // r11
    char *v69;  // rbx
    unsigned long long v71;  // rdx
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    char *|unsigned long long v76;  // r8
    unsigned long long v77;  // rdx
    unsigned long long v78;  // rax
    char *|unsigned long long v79;  // rbx
    unsigned long long v80;  // al
    unsigned long long v81;  // rbx
    unsigned long long v82;  // r10
    unsigned long long v83;  // r11
    unsigned long long v84;  // r10
    unsigned long long v85;  // rax
    unsigned long long v86;  // rdx
    unsigned long long v87;  // rax
    char *v88;  // rdx
    unsigned long long v89;  // rax
    char *v90;  // r8
    char *v91;  // rdi
    unsigned long long v92;  // rcx
    char *v93;  // rsi
    unsigned long long v94;  // cc_dep1
    unsigned long long v95;  // cc_dep2
    unsigned long long v96;  // cc_dep1
    unsigned int|unsigned long long v97;  // ebp
    unsigned long long v98;  // rbx
    char *v100;  // rax
    unsigned long long v101;  // rdx
    unsigned long|unsigned long long v102;  // r15
    unsigned int *v103;  // rdi
    struct_1 *v105;  // rsi
    char v106;  // sil
    unsigned long v107;  // rsi
    char *v109;  // rax
    unsigned long long v112;  // r12
    unsigned long long v113;  // rbp
    char *v114;  // rax
    unsigned int|unsigned long v115;  // rbx
    unsigned long long v116;  // rax
    unsigned long long v117;  // rbx
    unsigned long long v119;  // rax
    unsigned long long v124;  // rbx
    unsigned long long v125;  // rbp
    char *v129;  // rax
    unsigned long long v130;  // rbp
    char *v132;  // rax
    unsigned long long v133;  // rbp
    char *v134;  // rax
    char *v136;  // rax
    unsigned long long v137;  // rbx

    v23 = 0;
    v25 = v24;
    v27 = v26;
    v32 = -18446744069414584321;
    sub_4057f0();
    setlocale(0x6, 0x40c53f);
    bindtextdomain(0x409e1a, 0x40a5a8);
    textdomain(0x409e1a);
    sub_409d30();
    setvbuf(stdout, NULL, 0x1, 0x0);
    v7 = 0;
    while (true)
    {
        v31 = sub_409590();
        if ((unsigned int)v31 == -1)
        {
            g_60e318 = 3;
            if (g_60e2f8 <= 0x200)
            {
                v33 = (unsigned int)v32 == 0 & v7;
                if (g_60e2f8 == 0 && v23 == 0)
                {
                    g_60e2f8 = 0x200;
                    g_60e310 = 128;
                }
                if (g_60e2f8 != 0 || v23 != 0)
                {
                    g_60e310 = g_60e2f8 >> 2;
                    if (v33 == 0 && (unsigned int)v32 >= 0 && (v7 == 0 || v23 == 0))
                    {
                        v38 = "the --binary and --text options are meaningless when verifying checksums";
                    }
                }
                if (v33 == 0)
                {
                    if (v23 != 0)
                    {
                        v38 = "the --tag option is meaningless when verifying checksums";
                    }
                    if (v23 == 0 && g_60e306 != 0)
                    {
                        v38 = "the --ignore-missing option is meaningful only when verifying checksums";
                    }
                }
                else
                {
                    v38 = "--tag does not support --text mode";
                }
            }
            else
            {
                v36 = (unsigned int)sub_407410();
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409e37, 0x5));
                v39 = (unsigned int)sub_407410();
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a618, 0x5));
            }
        }
        else if ((unsigned int)v31 != 116)
        {
            if (v31 > 116)
            {
                if ((unsigned int)v31 == 129)
                {
                    g_60e308 = 1;
                    g_60e307 = 0;
                    g_60e305 = 0;
                }
                else if (v31 <= 129)
                {
                    if ((unsigned int)v31 == 119)
                    {
                        g_60e308 = 0;
                        g_60e307 = 1;
                        g_60e305 = 0;
                    }
                    if ((unsigned int)v31 == 128)
                    {
                        g_60e306 = 1;
                    }
                }
                else if ((unsigned int)v31 == 131)
                {
                    g_60e304 = 1;
                }
                else if (v31 < 131)
                {
                    g_60e308 = 0;
                    g_60e307 = 0;
                    g_60e305 = 1;
                }
                else if ((unsigned int)v31 == 132)
                {
                    v7 = 1;
                }
            }
            else
            {
                if ((unsigned int)v31 != 98)
                {
                    if (v31 > 98)
                    {
                        if ((unsigned int)v31 == 99)
                        {
                            v23 = 1;
                        }
                        if ((unsigned int)v31 == 108)
                        {
                            dcgettext(0x0, 0x409e28, 0x5);
                            g_60e2f8 = (unsigned int)sub_407d40();
                            v35 = (unsigned int)sub_407410();
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409e37, 0x5));
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x409e4a, 0x5));
                        }
                    }
                    else
                    {
                        if ((unsigned int)v31 == -131)
                        {
                            v0 = 0;
                            sub_4078a0();
                            exit(0x0); /* do not return */
                        }
                        if ((unsigned int)v31 == -130)
                        {
                            sub_403280(); /* do not return */
                        }
                    }
                }
            }
        }
        if ((unsigned int)v31 == 116)
        {
            v32 = 0;
        }
        if ((unsigned int)v31 == 98 && v31 <= 116 && (unsigned int)v31 != 116 && (unsigned int)v31 != -1 || (unsigned int)v31 == 132 && v31 > 129 && (unsigned int)v31 != 129 && (unsigned int)v31 != 116 && v31 >= 131 && v31 > 116 && (unsigned int)v31 != -1 && (unsigned int)v31 != 131)
        {
            v32 = 1;
        }
        if (g_60e2f8 == 0 && g_60e306 == 0 && g_60e2f8 <= 0x200 && g_60e308 == 0 && v33 == 0 && v23 == 0 && (unsigned int)v31 == -1 || g_60e306 == 0 && g_60e2f8 <= 0x200 && g_60e308 == 0 && v33 == 0 && (unsigned int)v31 == -1 && (v7 == 0 || v23 == 0) && (v23 == 0 || (unsigned int)v32 < 0) && (g_60e2f8 != 0 || v23 != 0))
        {
            if (g_60e307 != 0)
            {
                v38 = "the --warn option is meaningful only when verifying checksums";
            }
            else if (g_60e305 == 1)
            {
                v38 = "the --quiet option is meaningful only when verifying checksums";
            }
        }
        if (g_60e2f8 == 0 && g_60e306 == 0 && g_60e2f8 <= 0x200 && v33 == 0 && v23 == 0 && (unsigned int)v31 == -1 && g_60e308 != 0 || g_60e306 == 0 && g_60e2f8 <= 0x200 && v33 == 0 && v23 == 0 && (unsigned int)v31 == -1 && g_60e308 != 0 && (v7 == 0 || v23 == 0) && (v23 == 0 || (unsigned int)v32 < 0) && (g_60e2f8 != 0 || v23 != 0))
        {
            v38 = "the --status option is meaningful only when verifying checksums";
        }
        if (((g_60e2f8 == 0 && g_60e306 == 0 && g_60e2f8 <= 0x200 && g_60e308 == 0 && v33 == 0 && v23 == 0 && (unsigned int)v31 == -1 || g_60e306 == 0 && g_60e2f8 <= 0x200 && g_60e308 == 0 && v33 == 0 && (unsigned int)v31 == -1 && (v7 == 0 || v23 == 0) && (v23 == 0 || (unsigned int)v32 < 0) && (g_60e2f8 != 0 || v23 != 0)) && g_60e307 == 0 && g_60e305 == 1 && v23 != 0 || (g_60e2f8 == 0 && g_60e306 == 0 && g_60e2f8 <= 0x200 && g_60e308 == 0 && v33 == 0 && v23 == 0 && (unsigned int)v31 == -1 || g_60e306 == 0 && g_60e2f8 <= 0x200 && g_60e308 == 0 && v33 == 0 && (unsigned int)v31 == -1 && (v7 == 0 || v23 == 0) && (v23 == 0 || (unsigned int)v32 < 0) && (g_60e2f8 != 0 || v23 != 0)) && g_60e307 == 0 && g_60e305 != 1 || (g_60e2f8 <= 0x200 && v33 == 0 && (unsigned int)v31 == -1 && g_60e306 != 0 && v23 != 0 && (v7 == 0 || v23 == 0) && (v23 == 0 || (unsigned int)v32 < 0) && (g_60e2f8 != 0 || v23 != 0) || g_60e306 == 0 && g_60e2f8 <= 0x200 && v33 == 0 && (unsigned int)v31 == -1 && g_60e308 != 0 && v23 != 0 && (v7 == 0 || v23 == 0) && (v23 == 0 || (unsigned int)v32 < 0) && (g_60e2f8 != 0 || v23 != 0)) && g_60e307 == 0) && g_60e304 != 0)
        {
            v38 = "the --strict option is meaningful only when verifying checksums";
        }
        if (...)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v38, 0x5));
        }
        if (...)
        {
            if ((unsigned int)v32 == -1)
            {
                v32 = 0;
            }
            v10 = v27 + v25 * 8;
            if (g_60e2bc == (unsigned int)v25)
            {
                *(v10) = "-";
                v10 = &v10[1];
            }
            v2 = v27 + (int)g_60e2bc * 8;
            if (v10 > v2)
            {
                v13 = 1;
                v16 = (0 - (unsigned int)(char)(v32 < 1) & -10) + 42;
                v15 = (0 - (unsigned int)(char)(v32 < 1) & -10) + 42;
                do
                {
                    v41 = *(v2);
                    v3 = *(v2);
                    if (v23 != 0)
                    {
                        v8 = strcmp(v41, "-");
                        if (v8 == 0)
                        {
                            g_60e320 = 1;
                            v44 = stdin;
                            v3 = dcgettext(0x0, 0x409e8a, 0x5);
                        }
                        else
                        {
                            v44 = (unsigned long long)(unsigned int)sub_405750();
                        }
                        if (v8 == 0 || v44 != 0)
                        {
                            v17 = 0;
                            v112 = 1;
                            v18 = 0;
                            v14 = 0;
                            v12 = 0;
                            v11 = 0;
                            v9 = 0;
                            v6 = 0;
                            while (true)
                            {
                                v46 = __getdelim(&v17, &v18, 0xa, v44);
                                if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                                {
                                    v47 = (char)*((char *)v17);
                                    if (*((char *)v17) != 35)
                                    {
                                        v48 = v46;
                                        if (v46[-1] == 10)
                                        {
                                            v48 = &v48[-1];
                                            *(v48) = 0;
                                            v47 = (char)*((char *)v17);
                                        }
                                        v49 = 0;
                                        if (v47 == 32 || v47 == 9)
                                        {
                                            do
                                            {
                                                v49 += 1;
                                                v47 = (char)*((char *)(0 + v49));
                                            }
                                            while (v47 == 9);
                                        }
                                        v1 = 0;
                                        if (v47 == 92)
                                        {
                                            *((unsigned long long *)&v1) = v23;
                                            v49 += 1;
                                        }
                                        v50 = 0 + v49;
                                        v51 = "BLAKE2";
                                        v52 = 6;
                                        v60 = 0 + v49;
                                        while (v52 != 0)
                                        {
                                            v52 -= 1;
                                            v53 = (char)*((char *)v60);
                                            v54 = *(v51);
                                            v51 = &v51[v55];
                                            v60 += v55;
                                            break;
                                        }
                                        v56 = (v53 > v54) - 0 - (v53 < v54);
                                        if ((char)v56 == 0)
                                        {
                                            v61 = v49 + 6;
                                            v63 = v61;
                                            if ((char)v62 != 0)
                                            {
                                                if (v62 != 9 && v62 != 32)
                                                {
                                                    for (v62 = *(v61); v62 != 45; g_60e300 = sub_4052d0())
                                                    {
                                                        if (v62 != 40)
                                                        {
                                                            v61 = &v61[1];
                                                            v62 = *(v61);
                                                            v63 = v61;
                                                            if (v62 == 9 || (char)v62 == 0 || v62 == 32)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            *(v63) = 0;
                                                            v5 = v48;
                                                            v4 = v63;
                                                            v68 = v4;
                                                            v67 = v5;
                                                            if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>))
                                                            {
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    if (v62 == 40)
                                                    {
                                                        v6 += 1;
                                                    }
                                                    else if ((char)v62 != 0 && v62 != 40)
                                                    {
                                                        *(v63) = 0;
                                                        v5 = v48;
                                                        v4 = v63;
                                                    }
                                                    else if (v62 == 40 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                                                    {
                                                        *(v68) = 40;
                                                    }
                                                    else
                                                    {
                                                        *(v63) = 0;
                                                        v4 = v48;
                                                        v67 = v4;
                                                    }
                                                }
                                                if (v62 == 9 || v62 == 32 || g_60e307 != 0)
                                                {
                                                    *(v63) = 0;
                                                    v5 = v48;
                                                    v4 = v63;
                                                    g_60e300 = sub_4052d0();
                                                    v68 = v4;
                                                    v67 = v5;
                                                    if (v62 != 40)
                                                    {
                                                        v61 = &v61[1];
                                                    }
                                                    if ((v62 == 40 || v62 != 9) && (v62 == 40 || v62 != 32))
                                                    {
                                                        *(v68) = 40;
                                                    }
                                                }
                                            }
                                            if ((char)v62 == 0 || v62 != 9 && g_60e307 != 0 && v62 != 32)
                                            {
                                                *(v63) = 0;
                                                v4 = v48;
                                                v67 = v4;
                                                g_60e300 = sub_4052d0();
                                                v61 = &v61[1];
                                            }
                                            if ((char)v62 == 0 || v62 == 9 && v62 != 40 || v62 == 32 && v62 != 40 || v62 != 9 && g_60e307 != 0 && v62 != 32)
                                            {
                                                v68 = v61;
                                                if (v62 == 45)
                                                {
                                                    v5 = v67;
                                                    v4 = v68;
                                                    v73 = sub_407d70();
                                                    if (v73 == 0 && v19 - 1 <= 511 && ((char)v19 & 7) == 0)
                                                    {
                                                        g_60e2f8 = v19;
                                                        v67 = v5;
                                                        for (v68 = v4; (unsigned int)*(v61) - 48 <= 9; v68 = v61)
                                                        {
                                                            v61 = &v61[1];
                                                        }
                                                        v72 = v19 >> 2;
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v5 = v48;
                                            v4 = v50;
                                            if (&v48[-1 * v49] >= (char)(*((char *)v4) == 92) + g_60e318)
                                            {
                                                g_60e310 = 0;
                                                v58 = 0;
                                                while (true)
                                                {
                                                    v59 = v58 + 1;
                                                    if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + ((unsigned long long)(char)*((char *)(v4 + v58)) << 1) + 1)) & 16) == 0)
                                                    {
                                                        break;
                                                    }
                                                    v58 = v59;
                                                    v60 = v23;
                                                }
                                                if (v60 != 0)
                                                {
                                                    g_60e310 = v58;
                                                    if (v58 - 2 <= 126 && (v58 & 1) == 0)
                                                    {
                                                        v69 = v49 + v58;
                                                        tmp_11 = v58 * 4;
                                                        g_60e2f8 = tmp_11;
                                                        v71 = *(v69);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && (char)v56 != 0 && *((char *)v17) != 35 && v60 != 0 && &v48[-1 * v49] >= (char)(*((char *)v4) == 92) + g_60e318 && v58 - 2 <= 126 && (v58 & 1) == 0 && *(v69) != 32 && v71 == 9 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && (char)v56 != 0 && *((char *)v17) != 35 && v60 != 0 && &v48[-1 * v49] >= (char)(*((char *)v4) == 92) + g_60e318 && v58 - 2 <= 126 && (v58 & 1) == 0 && *(v69) == 32)
                                {
                                    *(v69) = 0;
                                    v5 = v5;
                                    v4 = v4;
                                    v74 = sub_402f30();
                                    if (v74 != 0)
                                    {
                                        v75 = &v69[1];
                                        v76 = v4;
                                        if (v5 - &v69[1] != 1)
                                        {
                                            v77 = v69[1];
                                        }
                                    }
                                }
                                if ((char)v56 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && (char)v62 != 0 && *((char *)v17) != 35 && (v62 == 40 || v62 != 9) && (v62 == 40 || v62 != 32) && (v62 == 9 || v62 == 32 || g_60e307 != 0) || (char)v56 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v62 != 45 && *((char *)v17) != 35 && ((char)v62 == 0 || v62 != 9 || v62 != 40) && ((char)v62 == 0 || v62 != 32 || v62 != 40) && (v62 == 9 || (char)v62 == 0 || v62 == 32 || g_60e307 != 0))
                                {
                                    g_60e2f8 = 0x200;
                                    v72 = 128;
                                }
                                if (...)
                                {
                                    g_60e230 = 1;
                                }
                                if (...)
                                {
                                    g_60e230 = 0;
                                    v75 = &v69[2];
                                }
                                if (v62 == 45 && (char)v56 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && *((char *)v17) != 35 && ((char)v62 == 0 || v62 != 9 || v62 != 40) && ((char)v62 == 0 || v62 != 32 || v62 != 40) && (v62 == 9 || (char)v62 == 0 || v62 == 32 || g_60e307 != 0) && v73 == 0 && v19 - 1 <= 511 && ((char)v19 & 7) == 0 || (char)v56 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && (char)v62 != 0 && *((char *)v17) != 35 && (v62 == 40 || v62 != 9) && (v62 == 40 || v62 != 32) && (v62 == 9 || v62 == 32 || g_60e307 != 0) || (char)v56 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v62 != 45 && *((char *)v17) != 35 && ((char)v62 == 0 || v62 != 9 || v62 != 40) && ((char)v62 == 0 || v62 != 32 || v62 != 40) && (v62 == 9 || (char)v62 == 0 || v62 == 32 || g_60e307 != 0))
                                {
                                    g_60e310 = v72;
                                    v78 = *(v68);
                                    if (*(v68) == 32)
                                    {
                                        v78 = v61[1];
                                        v61 = &v61[1];
                                    }
                                    if (v78 == 40)
                                    {
                                        v81 = &v61[1];
                                        v82 = &v67[-1 * v81];
                                        if (v82 != v81)
                                        {
                                            v79 = v81 + 0;
                                            v83 = v82 - 1;
                                            if (*((char *)(v79 + v82 - 1)) != 41 && v82 != 1)
                                            {
                                                do
                                                {
                                                    v83 -= 1;
                                                }
                                                while (v83 != 1 && *((char *)(v79 + v83)) != 41);
                                                if (v83 != 1)
                                                {
                                                    v84 = v79 + v83;
                                                }
                                            }
                                        }
                                    }
                                }
                                if (...)
                                {
                                    v79 = 0 + v75;
                                    if (v1 != 0)
                                    {
                                        v1 = v4;
                                        v80 = (char)(sub_402f90() != 0);
                                    }
                                }
                                if (...)
                                {
                                    v84 = v79;
                                    v83 = 0;
                                }
                                if (...)
                                {
                                    v84 = v79 + v83;
                                }
                                if (...)
                                {
                                    v85 = sub_402f90();
                                }
                                if (...)
                                {
                                    *((char *)v84) = 0;
                                    v86 = (char)*((char *)(v79 + v83 + 1));
                                    v87 = v83 + 1;
                                    if (v86 == 32 || *((char *)(v79 + v83 + 1)) == 9)
                                    {
                                        do
                                        {
                                            v87 += 1;
                                            v86 = (char)*((char *)(v79 + v87));
                                        }
                                        while (v86 == 9);
                                    }
                                    if (v86 == 61)
                                    {
                                        v88 = v79 + v87 + 1;
                                        do
                                        {
                                            v89 = *(v88);
                                            v90 = v88;
                                            v88 = &v88[1];
                                        }
                                        while (v89 == 9);
                                        v1 = v90;
                                        v80 = sub_402f30();
                                        v76 = v1;
                                    }
                                }
                                if (...)
                                {
                                    v91 = "-";
                                    v92 = 2;
                                    v93 = v79;
                                    while (v92 != 0)
                                    {
                                        v92 -= 1;
                                        v94 = *(v93);
                                        v95 = *(v91);
                                        v91 = &v91[v55];
                                        v93 = &v93[v55];
                                        break;
                                    }
                                    v96 = (v94 > v95) - 0 - (v94 < v95);
                                }
                                if (...)
                                {
                                    v97 = 0;
                                    if (g_60e308 == 0)
                                    {
                                        v1 = v76;
                                        v97 = 0;
                                        v97 = (char)(strchr(v79, 0xa) != 0);
                                    }
                                    v1 = v76;
                                    if ((char)v4 == 0)
                                    {
                                        v9 += 1;
                                        if (g_60e308 == 0)
                                        {
                                            if (v97 != 0)
                                            {
                                                v100 = stdout[5];
                                                if (stdout[5] < stdout[6])
                                                {
                                                    stdout[5] = stdout[5] + 1;
                                                    *(v100) = 92;
                                                }
                                                else
                                                {
                                                    __overflow();
                                                }
                                            }
                                            sub_403020();
                                            v107 = "FAILED open or read";
                                        }
                                    }
                                    else if ((char)v19 == 0 || g_60e306 == 0)
                                    {
                                        v1 = v1;
                                        v101 = g_60e310 >> 1;
                                        if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                                        {
                                            v5 = g_60e310 >> 1;
                                            v102 = 0;
                                            *((unsigned long long *)&v4) = (unsigned int)sub_4030d0();
                                            v103 = *((long long *)(unsigned long long)__ctype_tolower_loc());
                                            v101 = v5;
                                            while (true)
                                            {
                                                v105 = (unsigned long long)v21;
                                                v106 = (unsigned long long)v21 >> 4;
                                                if (v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1)))] == (char)*((char *)(4237792 + (unsigned long long)((unsigned int)rsi<8> & 15))) && v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1) + 1))] == (char)*((char *)(4237792 + (unsigned long long)(v21 & 15))))
                                                {
                                                    v102 += 1;
                                                    v102 = v5;
                                                }
                                                if (v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1)))] != (char)*((char *)(4237792 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1) + 1))] != (char)*((char *)(4237792 + (unsigned long long)(v21 & 15))))
                                                {
                                                    v11 += 1;
                                                    break;
                                                    if (g_60e308 != 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            if (v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1)))] != (char)*((char *)(4237792 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1) + 1))] != (char)*((char *)(4237792 + (unsigned long long)(v21 & 15))))
                                            {
                                                *((unsigned long long *)&v12) = v23;
                                            }
                                            else if (g_60e308 == 0 && (v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1)))] != (char)*((char *)(4237792 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1) + 1))] != (char)*((char *)(4237792 + (unsigned long long)(v21 & 15)))))
                                            {
                                                v109 = stdout[5];
                                            }
                                            else if (v5 == v102 && v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1) + 1))] == (char)*((char *)(4237792 + (unsigned long long)(v21 & 15))))
                                            {
                                                v14 = g_60e308;
                                            }
                                            else if (g_60e308 == 0 && (v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1)))] != (char)*((char *)(4237792 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v103[(unsigned long long)(char)*((char *)(v1 + (v102 << 1) + 1))] != (char)*((char *)(4237792 + (unsigned long long)(v21 & 15)))))
                                            {
                                                v1 = v101;
                                                sub_403020();
                                            }
                                        }
                                        else
                                        {
                                            v102 = 0;
                                        }
                                        if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v44) & 48) != 0)
                                        {
                                            v14 = g_60e308;
                                            if (g_60e308 == 0)
                                            {
                                                v14 = g_60e305;
                                                if (g_60e305 == 0)
                                                {
                                                    if (v97 != 0)
                                                    {
                                                        v14 = v4;
                                                    }
                                                    else
                                                    {
                                                        v1 = v4;
                                                        sub_403020();
                                                        v14 = v1;
                                                    }
                                                }
                                            }
                                            if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || g_60e305 == 0 && g_60e308 == 0 && v97 != 0)
                                            {
                                                v109 = stdout[5];
                                                if (stdout[5] < stdout[6])
                                                {
                                                    stdout[5] = stdout[5] + 1;
                                                    *(v109) = 92;
                                                }
                                                else
                                                {
                                                    v1 = v101;
                                                    __overflow();
                                                    v101 = v1;
                                                }
                                                v1 = v101;
                                                sub_403020();
                                                if (v1 != v102)
                                                {
                                                    v107 = "FAILED";
                                                }
                                            }
                                        }
                                    }
                                    if ((v97 == 0 && g_60e305 == 0 && g_60e308 == 0 && (char)v4 != 0 && ((char)v19 == 0 || g_60e306 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v44) & 48) != 0) || (char)v4 != 0 && ((char)v19 == 0 || g_60e306 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v44) & 48) != 0) && (g_60e305 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60e308 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v97 != 0) && v1 == v102) && g_60e305 == 0)
                                    {
                                        v107 = "OK";
                                    }
                                    if ((char)v4 == 0 && g_60e308 == 0 || (v97 == 0 && g_60e305 == 0 && g_60e308 == 0 && (char)v4 != 0 && ((char)v19 == 0 || g_60e306 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v44) & 48) != 0) || (char)v4 != 0 && ((char)v19 == 0 || g_60e306 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v44) & 48) != 0) && (g_60e305 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60e308 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v97 != 0) && v1 == v102) && g_60e305 == 0 || (char)v4 != 0 && ((char)v19 == 0 || g_60e306 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v44) & 48) != 0) && (g_60e305 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60e308 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v97 != 0) && v1 != v102)
                                    {
                                        __printf_chk(0x1, ": %s\n", dcgettext(0x0, v107, 0x5));
                                    }
                                    *((unsigned long long *)&v12) = v23;
                                }
                                if (...)
                                {
                                    v6 += 1;
                                    if (g_60e307 != 0)
                                    {
                                        v98 = (unsigned int)sub_407290();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a848, 0x5));
                                    }
                                }
                                if (...)
                                {
                                    free(v17);
                                    v115 = (unsigned int)(*((int *)v44) & 32);
                                    if (((char)*((int *)v44) & 32) == 0)
                                    {
                                        if (v8 != 0)
                                        {
                                            v116 = sub_4085e0();
                                        }
                                        if (v116 == 0 || v8 == 0)
                                        {
                                            if (v12 != 0)
                                            {
                                                if (g_60e308 == 0)
                                                {
                                                    if (v6 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x40a8e0, 0x40a8b0, v6, 0x5));
                                                    }
                                                    if (v9 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x40a940, 0x40a910, v9, 0x5));
                                                    }
                                                    if (v11 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x40a9a0, 0x40a970, v11, 0x5));
                                                    }
                                                    if (v14 == 0 && g_60e306 != 0)
                                                    {
                                                        v133 = (unsigned int)sub_407290();
                                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409ee2, 0x5));
                                                    }
                                                }
                                                if (v11 == 0 && v9 == 0 && v14 != 0)
                                                {
                                                    v115 = (unsigned int)g_60e304 ^ 1 | (unsigned int)v115;
                                                }
                                            }
                                            else
                                            {
                                                v125 = (unsigned int)sub_407290();
                                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a878, 0x5));
                                            }
                                            v119 = v115 & 1;
                                        }
                                    }
                                    else
                                    {
                                        v117 = (unsigned int)sub_407290();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409ed3, 0x5));
                                        v119 = 0;
                                    }
                                }
                                if (...)
                                {
                                    v112 += 1;
                                    v137 = (unsigned int)sub_407290();
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x409e99, 0x5));
                                }
                            }
                            if (...)
                            {
                                *((unsigned long long *)&v13) = v13 & v119;
                            }
                            else if (...)
                            {
                                v124 = (unsigned int)sub_407290();
                                error(0x0, *(__errno_location()), "%s");
                                v119 = 0;
                            }
                        }
                        v124 = (unsigned int)sub_407290();
                        error(0x0, *(__errno_location()), "%s");
                        v119 = 0;
                        *((unsigned long long *)&v13) = v13 & v119;
                    }
                    else if (sub_4030d0() == 0)
                    {
                        v13 = 0;
                    }
                    else
                    {
                        v43 = strchr(v3, 0x5c);
                        if (v43 == 0)
                        {
                            v45 = strchr(v3, 0xa);
                            if (v45 == 0)
                            {
                                v113 = 0;
                            }
                        }
                        if (v43 != 0 || v45 != 0)
                        {
                            if (v7 == 0)
                            {
                                v129 = stdout[5];
                                if (stdout[5] < stdout[6])
                                {
                                    stdout[5] = stdout[5] + 1;
                                    *(v129) = 92;
                                }
                                else
                                {
                                    __overflow();
                                }
                            }
                            else
                            {
                                v114 = stdout[5];
                                if (stdout[6] > stdout[5])
                                {
                                    v113 = v7;
                                    stdout[5] = stdout[5] + 1;
                                    *(v114) = 92;
                                }
                                else
                                {
                                    __overflow();
                                    v113 = v7;
                                }
                            }
                        }
                        if (v7 == 0)
                        {
                            v132 = stdout[5];
                            if (stdout[5] < stdout[6])
                            {
                                stdout[5] = stdout[5] + 1;
                                *(v132) = 32;
                            }
                            else
                            {
                                __overflow();
                            }
                            v134 = stdout[5];
                            if (stdout[5] < stdout[6])
                            {
                                stdout[5] = stdout[5] + 1;
                                *(v134) = v15;
                            }
                            else
                            {
                                __overflow();
                            }
                            sub_403020();
                        }
                        else
                        {
                            fputs_unlocked((&g_40aba0)[(unsigned long long)g_60e300], stdout);
                            if (g_60e2f8 > 511)
                            {
                                fwrite_unlocked(" (", 0x1, 0x2, stdout);
                                sub_403020();
                                fwrite_unlocked(") = ", 0x1, 0x4, stdout);
                            }
                            else
                            {
                                __printf_chk(0x1, "-%lu", (unsigned int)g_60e2f8);
                                fwrite_unlocked(" (", 0x1, 0x2, stdout);
                                sub_403020();
                                fwrite_unlocked(") = ", 0x1, 0x4, stdout);
                            }
                        }
                        if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e310<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e310<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                        {
                            v130 = 0;
                            while (true)
                            {
                                v130 += 1;
                                __printf_chk(0x1, "%02x", (unsigned int)v20);
                                if (g_60e310 >> 1 <= v130)
                                {
                                    break;
                                }
                            }
                        }
                        v136 = stdout[5];
                        if (stdout[5] < stdout[6])
                        {
                            stdout[5] = stdout[5] + 1;
                            *(v136) = 10;
                        }
                        else
                        {
                            __overflow();
                        }
                    }
                    v2 = &v2[1];
                }
                while (v10 > v2);
            }
            else
            {
                v13 = 1;
            }
            if (g_60e320 != 0)
            {
                if ((char)(sub_4085e0() + 1 == 0))
                {
                    break;
                }
            }
            return (unsigned int)v13 ^ 1;
        }
        if (...)
        {
            sub_403280(); /* do not return */
        }
    }
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x409e8a, 0x5));
}

int sub_405600()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // r14
    void *v3;  // rdx
    void *v4;  // rdi
    unsigned int v5;  // rcx
    unsigned long long v6;  // rax
    unsigned long long *v7;  // rbx
    void *v8;  // rbp
    unsigned long long v9;  // rax

    v2 = *(v1);
    if (*(v1) != 0)
    {
        v7 = &v1[1];
        v8 = v3;
        do
        {
            v6 = memcmp(v4, v8, v5);
            if (v6 == 0)
            {
                break;
            }
            v2 = *(v7);
            v8 += v5;
            v7 = &v7[1];
        }
        while (v2 != 0);
    }
    v9 = v2;
    return v9;
}

extern int512_t g_40ac7e;
extern int512_t g_40ac82;

int sub_405890()
{
    unsigned long v1;  // rdi
    char *v2;  // rbx
    char v3[8];  // rax
    unsigned long long v4;  // rdx
    unsigned long v5;  // rsi
    char *v6;  // rax

    v2 = (unsigned long long)dcgettext(0x0, v1, 0x5);
    if (v1 == v2)
    {
        v3 = sub_409750();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40ac7e : 4238473);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40ac82 : 4238469);
            }
        }
    }
    if (...)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[3] == 45 && v3[5] == 0 && v1 == v2 && (v3[1] & 223) == 84 && (v3[0] & 223) == 85 && (v3[2] & 223) == 70 && v3[4] == 56 || v4 == 71 && v3[3] == 56 && (v3[1] & 223) == 66 && v1 == v2 && v3[4] == 48 && v3[2] == 49 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

extern unsigned long long g_40c53f;

int sub_409610()
{
    char v0;  // [bp-0x1c]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long v4;  // rdx
    char *|unsigned long long v5;  // rbp
    unsigned long long v6;  // rdi
    unsigned int *v7;  // r12
    unsigned long long v9;  // rax

    if (v2 != 0)
    {
        v3 = -2;
        if (v4 != 0)
        {
            v7 = v6;
            v5 = v2;
        }
    }
    else
    {
        v5 = &g_40c53f;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_4096f0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_407380()
{
}

extern unsigned int g_40abc5;
extern unsigned int g_40abe0;

int sub_4053f0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x40abc5, 0x5);
    }
    dcgettext(0x0, 0x40abe0, 0x5);
    sub_4073f0();
    sub_4070e0();
}

int sub_4087a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_4087e0();
    }
}

extern unsigned long long g_60e310;

int sub_402f30()
{
    unsigned long long v1;  // rdi
    char *v2;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v2 = v1;
    if (g_60e310 != 0)
    {
        v4 = 0;
        while (true)
        {
            if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + ((unsigned long long)*(v2) << 1) + 1)) & 16) != 0)
            {
                v5 = v4 + 1;
                v2 = &v2[1];
                v4 += 1;
                if (v5 >= g_60e310)
                {
                    break;
                }
            }
            else
            {
                return 0;
            }
        }
    }
    return v4;
}

int sub_407d70()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    char [3]|char v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    unsigned int|unsigned long|unsigned long long v5;  // rdi
    unsigned long v6;  // rbp
    unsigned long long *v7;  // rcx
    char *v9;  // r8
    unsigned long v11;  // rsi
    unsigned long long *v12;  // r15
    unsigned int *v13;  // r12
    unsigned int *v14;  // r12
    unsigned long long v15;  // rbx
    unsigned long v16;  // rax
    unsigned int v17;  // eax
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rsi
    char v25;  // sil
    unsigned long long v26;  // r12
    unsigned long long v27;  // r12
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rsi
    char v32[3];  // r8
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rcx
    unsigned int|unsigned long long v35;  // rdi
    unsigned long long v36;  // rcx
    unsigned int|unsigned long long v37;  // rdi
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rcx
    unsigned long long v43;  // cc_dep1
    unsigned long long v44;  // cc_dep1
    unsigned int v45;  // cc_dep1
    unsigned int v46;  // cc_dep1
    unsigned int v47;  // cc_dep1
    unsigned long long v48;  // rax
    unsigned long long v49;  // r8

    if (v4 <= 36)
    {
        v6 = v5;
        v12 = (v11 == 0? stack_base + -64 : v11);
        *(v13) = 0;
        v13 = __errno_location();
        v15 = (char)*((char *)v5);
        v31 = *((long long *)(unsigned long long)__ctype_b_loc());
        for (v16 = v5; (*((char *)(v31 + (v15 << 1) + 1)) & 32) != 0; v15 = (char)*((char *)v16))
        {
            v16 += 1;
        }
        if (v15 != 45)
        {
            v33 = strtoul();
            if (*(v12) != v5)
            {
                v17 = *(v14);
                if ((v17 == 34 || *(v14) == 0) && v9 != 0)
                {
                    v18 = v1[0];
                    if (v1[0] != 0)
                    {
                        *((char *[3])&v1[0]) = v1;
                        v20 = strchr(v9, v18);
                        v32 = v1;
                    }
                }
            }
            else
            {
                *((char **)&v1[0]) = v9;
                if (v9 != 0)
                {
                    v18 = (char)*((char *)v6);
                    if (*((char *)v6) != 0)
                    {
                        v33 = 1;
                        v19 = strchr(v9, (char)*((char *)v5));
                        v32 = v1;
                    }
                }
            }
        }
        if (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v1[0] != 0 && v9 != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0)
        {
            v21 = v18 - 69;
            if ((v18 - 69 & 255) <= 47)
            {
                *((unsigned long long *)&v1) = v21;
                v0 = 142129060940101;
                if (((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0)
                {
                    *((char *[3])&v2[0]) = v32;
                    v22 = strchr(v9, 0x30);
                    v32 = v2;
                    if (v22 != 0)
                    {
                        v23 = v32[1];
                        if (v32[1] != 68)
                        {
                            if (v23 != 105)
                            {
                                v30 = v1;
                                if (v23 != 66)
                                {
                                    /* goto *((long long *)(rdx<8> * 8 + 4242840)); */
                                }
                            }
                            else
                            {
                                v24 = 0;
                                v30 = 0x400;
                                v25 = v32[2] == 66;
                                v31 = rsi<8> * 2 + 1;
                            }
                        }
                    }
                }
            }
        }
        if ((*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v1[0] != 0 && v9 != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v1[0] != 0 && v9 != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v1[0] != 0 && v9 != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) > 47)
        {
            v31 = 1;
            v30 = 0x400;
        }
        if (...)
        {
            v31 = 2;
            v30 = 1000;
        }
        if (...)
        {
            v26 = (unsigned int)v18 - 66;
            switch (v26)
            {
            case 0:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 *= 0x400;
                    break;
                }
            case 3:
                v39 = v30;
                v5 = 6;
                do
                {
                    v33 = v33 * v39;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v46 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v46 != 1);
            case 5: case 37:
                v28 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v48 = tmp_11 * v28 * v28;
                    v33 = v48;
                }
                else
                {
                    v33 = -1;
                }
            case 9: case 41:
                v33 = v33 * v30;
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 = -1;
                    break;
                }
            case 11: case 43:
                v29 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v33 = tmp_11 * v29;
                    break;
                }
            case 14:
                v36 = v30;
                v37 = 5;
                do
                {
                    v33 = v33 * v36;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v44 = v37;
                    v37 -= 1;
                }
                while (v44 != 1);
            case 18: case 50:
                v38 = v30;
                v5 = 4;
                do
                {
                    v33 = v33 * v38;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v45 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v45 != 1);
                break;
            case 23:
                v34 = v30;
                v35 = 8;
                do
                {
                    v33 = v33 * v34;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v43 = v35;
                    v35 -= 1;
                }
                while (v43 != 1);
            case 24:
                v40 = v30;
                v5 = 7;
                do
                {
                    v33 = v33 * v40;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v47 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v47 != 1);
            case 32:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v49 = &v32[v31];
                *(v12) = v49;
            case 53:
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v33 *= 2;
                    break;
                }
            default:
                *(v7) = v33;
            }
            if (v26 <= 53)
            {
                v27 = v26;
            }
        }
        v31 = 1;
        v31 = 1;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        *(v7) = v33;
        return stack_base + 0;
    }
    __assert_fail(); /* do not return */
}

int sub_407ab0() { crash_skku;
}
int sub_408840()
{
    unsigned int v1[13];  // rsi
    unsigned long long v2;  // r12
    unsigned long long v3;  // rbp
    unsigned long long v4;  // rbx
    unsigned long long v5;  // r9
    unsigned long long v6;  // r8
    unsigned long long v7;  // r14
    unsigned long long v8;  // rdx
    unsigned long v9;  // rdi
    unsigned long long *v10;  // rax
    unsigned long long *v12;  // rdx
    unsigned long long v13;  // rcx
    unsigned long long v14;  // r10
    unsigned long long *v15;  // rax
    unsigned long long *v17;  // rdx
    unsigned long long v18;  // rcx
    unsigned int v19;  // r9d

    v2 = v1[5 + 1];
    v3 = v1[0];
    v4 = (int)v1[6];
    v5 = v1[5 + 1];
    v14 = v1[0];
    while ((unsigned int)v14 > v1[6])
    {
        for (v6 = (int)v1[6]; v5 < v1[6]; v19 = v5 + v7)
        {
            v7 = v14 - v6;
            v8 = v6 - v5;
            if ((unsigned int)(v14 - v6) > (unsigned int)(v6 - v5))
            {
                v14 -= v8;
                v10 = v9 + v5 * 8;
                v12 = v14 - v5;
                do
                {
                    v13 = *(v10);
                    *(v10) = *((long long *)((char *)v10 + 0x8 * v12));
                    *((unsigned long long *)((char *)v10 + 0x8 * v12)) = v13;
                    v10 = &v10[1];
                }
                while (v9 + 8 + ((unsigned int)v8 - 1 + v5) * 8 != v10);
                if ((unsigned int)v14 <= (unsigned int)v6)
                {
                    break;
                }
            }
            else
            {
                v15 = v9 + v5 * 8;
                v17 = v4 - v5;
                do
                {
                    v18 = *(v15);
                    *(v15) = *((long long *)((char *)v15 + 0x8 * v17));
                    *((unsigned long long *)((char *)v15 + 0x8 * v17)) = v18;
                    v15 = &v15[1];
                }
                while (v15 != v9 + 8 + (v7 - 1 + v5) * 8);
            }
        }
        if (v5 >= v1[6] || (unsigned int)(v14 - v6) > (unsigned int)(v6 - v5))
        {
            v1[6] = v3;
            v1[5 + 1] = (unsigned int)(v2 + stack_base + 0 - v6);
            return stack_base + 0 - v6;
        }
    }
    v1[6] = v3;
    v1[5 + 1] = (unsigned int)(v2 + stack_base + 0 - v6);
    return stack_base + 0 - v6;
}

int sub_405750()
{
    unsigned int v1;  // [bp+0x100008]
    char *v2;  // rdi
    char *v3;  // rsi
    unsigned long long v4;  // rax
    unsigned int v5;  // r12d
    unsigned long long v6;  // rax
    unsigned int v8;  // ebp
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rax

    v10 = fopen(v2, v3);
    if (v10 != 0)
    {
        v4 = fileno(v10);
        if (v4 <= 2)
        {
            v5 = sub_407430();
            if (v5 >= 0)
            {
                v6 = sub_4085e0();
                if (v6 == 0)
                {
                    v10 = fdopen(v5, v3);
                }
                if (v10 == 0 || v6 != 0)
                {
                    v8 = *((int *)v10);
                    close(v5);
                    *(__errno_location()) = v8;
                    v10 = 0;
                }
            }
            else
            {
                v10 = 0;
                sub_4085e0();
                *(__errno_location()) = v1;
            }
        }
    }
    v11 = v10;
    return v11;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40c53f;
extern char g_60e4b8[2];

int sub_409750()
{
    unsigned long|unsigned long long v0;  // [bp-0xd0]
    void tmp_12;  // tmp #12
    void tmp_56;  // tmp #56
    void tmp_1;  // tmp #1
    void tmp_10;  // tmp #10
    void tmp_3;  // tmp #3
    void tmp_28;  // tmp #28
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    char v3;  // [bp-0xb8]
    char v4;  // [bp-0xb4]
    char v5;  // [bp-0x78]
    char v6;  // [bp-0x74]
    unsigned int v7;  // [bp-0x4]
    char [2]|unsigned long long v9;  // r15
    char *|unsigned long v10;  // rbx
    unsigned long v11;  // rax
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r12
    char *v15;  // r13
    unsigned long long v16;  // r14
    unsigned long long v17;  // rbp
    struct_1 *v20;  // r12
    unsigned short v21;  // dx
    unsigned int v22;  // r12d
    unsigned long v26;  // rdi
    unsigned long long v28;  // rax
    unsigned int *v29;  // rcx
    unsigned int v30;  // eax
    unsigned long v31;  // rax
    unsigned int *v32;  // rdx
    unsigned long long v33;  // rcx
    unsigned long long v34;  // rax
    unsigned long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long v38;  // rsi
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rcx
    unsigned long long v42;  // rdi
    unsigned long long v43;  // rsi
    unsigned long long v44;  // r9
    unsigned long long v45;  // r10
    unsigned int v46;  // ecx
    unsigned long long v48;  // r8
    void *v49;  // rcx
    unsigned long long v52;  // rcx
    unsigned int v54;  // edx
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rsi
    char *v59;  // rax
    unsigned long long v60;  // rdi
    char *v61;  // rax
    unsigned long long v62;  // rdx
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbp
    unsigned long long v70;  // rax

    v9 = g_60e4b8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40c53f : (unsigned long long)nl_langinfo(0xe));
    if (g_60e4b8 == 0)
    {
        v15 = getenv("CHARSETALIASDIR");
        if (v15 != 0 && *(v15) != 0)
        {
            v11 = strlen(v15);
            v14 = v11;
            v16 = v11;
            if (v11 == 0)
            {
                v12 = 14;
            }
            else if (v15[v11 + -1] == 47)
            {
                v12 = v11 + 14;
            }
            else
            {
                v13 = v11 + 15;
                v14 += 1;
            }
            if (v15[v11 + -1] == 47 || v11 == 0)
            {
                v17 = malloc(v12);
                if (v17 != 0)
                {
                    memcpy(v17, v15, v16);
                }
            }
        }
        if (*(v15) == 0 || v15 == 0)
        {
            v13 = 115;
            v14 = 101;
            v16 = 100;
            v15 = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        }
        if (*(v15) == 0 || v15 == 0 || v15[v11 + -1] != 47 && v11 != 0)
        {
            v17 = malloc(v13);
        }
        if (v17 == 0 || v17 == 0)
        {
            v9 = &g_40c53f;
        }
        if (v17 != 0 && (*(v15) == 0 || v15 == 0 || v15[v11 + -1] != 47) && (*(v15) == 0 || v15 == 0 || v11 != 0))
        {
            memcpy(v17, v15, v16);
            *((char *)(v17 + v16)) = 47;
        }
        if (*(v15) == 0 && v17 != 0 || v15 == 0 && v17 != 0 || v15[v11 + -1] != 47 && v17 != 0 && v11 != 0 || v15[v11 + -1] == 47 && *(v15) != 0 && v17 != 0 && v15 != 0 || v11 == 0 && *(v15) != 0 && v17 != 0 && v15 != 0)
        {
            v20 = v14 + v17;
            v20->field_0 = 3347411969557751907;
            v20->field_c = 115;
            v20->field_8 = 1634298977;
            v22 = open(v17, 0x0, v21);
            if (v22 >= 0)
            {
                v9 = 0;
                v0 = 0;
                if (v10 != 0)
                {
                    v10 = fdopen(v22, "r");
                    while (true)
                    {
                        v59 = *((long long *)(v10 + 8));
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                        {
                            *((char **)(v10 + 8)) = &v59[1];
                            v26 = *(v59);
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1)
                        {
                            if ((unsigned int)v26 != 32 && (unsigned int)v26 != 35)
                            {
                                ungetc(v26, v10);
                                v28 = fscanf(v10, "%50s %50s", (unsigned int)&v3, (unsigned int)&v5);
                                if (v28 > 1)
                                {
                                    v29 = &v3;
                                    do
                                    {
                                        tmp_12 = (unsigned int)*((int *)&v3);
                                        v29 = &v4;
                                        v30 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                    }
                                    while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                    v31 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax<8> >> 16) : (unsigned int)rax<8>);
                                    v32 = &v5;
                                    v33 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v29 + 2) : v29) + -1 * ((v31 + v31 <= v31? 1 : 0) & 1) + -0x1 * &v3;
                                    do
                                    {
                                        tmp_12 = (unsigned int)*((int *)&v5);
                                        v32 = &v6;
                                        v34 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                    }
                                    while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                    v1 = v33;
                                    tmp_56 = (unsigned int)v34 % 0x10000;
                                    v35 = (unsigned int)(((unsigned int)v34 & 32896) == 0? (unsigned int)(v34 >> 16) : (unsigned int)v34);
                                    v36 = &((char *)(-3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v32)[2] : v32) + -1 * ((v35 + v35 <= v35? 1 : 0) & 1) + -0x1 * &v5))[v1];
                                    v2 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v32)[2] : v32) + -1 * (((unsigned int)((((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)? 1 : 0) & 1) + -0x1 * &v5;
                                    if (v0 == 0)
                                    {
                                        v0 = v36 + 2;
                                        v37 = malloc(v36 + 3);
                                        v39 = v1;
                                        v40 = v2;
                                    }
                                    else
                                    {
                                        v38 = v36 + v0 + 3;
                                        v0 = v36 + v0 + 2;
                                        v37 = realloc(NULL, v38);
                                        v40 = v2;
                                        v39 = v1;
                                    }
                                    if (v37 != 0)
                                    {
                                        tmp_1 = -2 - v39;
                                        v41 = v39 + 1;
                                        v42 = v0 - v40;
                                        v43 = tmp_1 + v0 - v40 + v37;
                                        if ((unsigned int)v41 >= 8)
                                        {
                                            *((long long *)v43) = *((long long *)&v3);
                                            *((long long *)(v43 + v41 - 8)) = *((long long *)&(&v3)[v41 + -8]);
                                            v44 = v43 + 8 & -8;
                                            v43 -= v43 + 8 & -8;
                                            v45 = &(&v3)[-1 * v43];
                                            v46 = (unsigned int)(v41 + v43) & -8;
                                            if (v46 >= 8)
                                            {
                                                v43 = 0;
                                                do
                                                {
                                                    v48 = v43;
                                                    v43 = (unsigned int)v43 + 8;
                                                    *((long long *)(v44 + v48)) = *((long long *)(v45 + v48));
                                                }
                                                while ((unsigned int)v43 < (v46 & -8));
                                            }
                                        }
                                        else if ((v41 & 4) != 0)
                                        {
                                            *((int *)v43) = *((int *)&v3);
                                            *((int *)(v43 + v41 - 4)) = *((int *)&(&v3)[v41 + -4]);
                                        }
                                        else if ((unsigned int)v41 != 0)
                                        {
                                            *((char *)v43) = v3;
                                            if ((v41 & 2) != 0)
                                            {
                                                *((short *)(v43 + v41 - 2)) = *((short *)&(&v3)[v41 + -2]);
                                            }
                                        }
                                        v62 = v40 + 1;
                                        v49 = v37 + v42 - 1;
                                        if ((unsigned int)v43 >= 8)
                                        {
                                            *((long long *)v49) = *((long long *)&v5);
                                            v43 = v62;
                                            *((long long *)&((char *)v49)[v43 + -8]) = *((long long *)&(&v5)[v43 + -8]);
                                            v52 = v49 - (v49 + 8 & -8);
                                            v54 = (unsigned int)(v43 + v52) & -8;
                                            if (v54 >= 8)
                                            {
                                                v57 = 0;
                                                do
                                                {
                                                    v58 = v57;
                                                    v57 = (unsigned int)v57 + 8;
                                                    *((long long *)((v49 + 8 & -8) + v58)) = *((long long *)&(&v5)[v58 + -1 * v52]);
                                                }
                                                while ((unsigned int)v57 < (v54 & -8));
                                            }
                                        }
                                        else if (((char)v43 & 4) != 0)
                                        {
                                            *((int *)v49) = *((int *)&v5);
                                            *((unsigned int *)&((char *)v49)[(unsigned long long)v7 + -4]) = v7;
                                        }
                                        else if ((unsigned int)v43 != 0)
                                        {
                                            *((char *)v49) = v5;
                                            if ((v5 & 2) != 0)
                                            {
                                                *((short *)&((char *)v49)[(unsigned long long)v5 + -2]) = v7;
                                            }
                                        }
                                        v9 = v37;
                                        v59 = *((long long *)(v10 + 8));
                                    }
                                    else
                                    {
                                        v9 = &g_40c53f;
                                        v10 = (tmp_10 == 0? &g_40c53f : tmp_10);
                                        free(NULL);
                                        sub_4085e0();
                                    }
                                }
                            }
                            if ((unsigned int)v26 == 35)
                            {
                                do
                                {
                                    v61 = *((long long *)(v10 + 8));
                                    if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                                    {
                                        *((char **)(v10 + 8)) = &v61[1];
                                        v61 = (unsigned int)*(v61);
                                        v62 = 1;
                                    }
                                    else
                                    {
                                        v61 = __uflow(v10);
                                        v62 = (char)((unsigned int)v61 != -1);
                                    }
                                }
                                while (v61 != 10 && v62 != 0);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v37 != 0 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && v28 > 1)
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v37 != 0 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && v28 > 1) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40c53f : tmp_10);
                            sub_4085e0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && v61 == -1 || (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1)
                    {
                        v9 = &g_40c53f;
                    }
                    else if (((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && v61 == -1 || (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1) && v0 != 0 || v37 == 0 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40c53f;
            free(v17);
        }
        *((char *[2])&g_60e4b8[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_40c53f : tmp_10), v9);
            if (v67 != 0 && (v66 != 42 || v9[1] != 0))
            {
                v68 = strlen(v9);
                v69 = &((char [2])&v9[v68])[1];
                v70 = strlen(&((char [2])&v9[v68])[1]);
                v9 = v69 + v70 + 1;
                v66 = (char)*((char *)(v69 + v70 + 1));
                if (v66 == 0)
                {
                    break;
                }
            }
            if (v67 == 0 || v66 == 42 && v9[1] == 0)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

int sub_404e20()
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x47]
    unsigned long long v2;  // [bp-0x3f]
    char v3;  // [bp-0x37]
    unsigned long long v4;  // [bp-0x36]
    unsigned int v5;  // [bp-0x2e]
    unsigned short v6;  // [bp-0x2a]
    uint128_t v7;  // [bp-0x28]
    uint128_t v8;  // [bp-0x18]
    unsigned long v10;  // rsi

    if (v10 - 1 <= 63)
    {
        *((unsigned long *)&v0) = v10;
        v1 = 0x10100;
        v2 = 0;
        v3 = 0;
        v4 = 0;
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v8 = 0;
        return sub_404d50();
    }
    return -18446744069414584321;
}

int sub_404f80()
{
    unsigned long v1;  // rdx

    if (v1 != 0)
    {
        sub_404c20();
        return 0;
    }
    return 0;
}

int sub_4051d0()
{
    void *v1;  // rdi
    unsigned long v4;  // r12
    void *v5;  // r12
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbx

    if (v4 != 0)
    {
        v4 = malloc(0x8000);
        sub_404e20();
        while (true)
        {
            v9 = 0;
            while (true)
            {
                v7 = fread(v5 + v9, 0x1, 0x8000 - v9, v1);
                v9 += v7;
                if (v9 != 0x8000)
                {
                    v1 = v1;
                    if (v7 != 0)
                    {
                        v8 = feof(v1);
                    }
                    if (v7 == 0 && ferror() == 0 || v8 != 0 && v7 != 0)
                    {
                        if (v9 != 0)
                        {
                            sub_404f80();
                        }
                        sub_404fa0();
                    }
                    free(v5);
                }
                else
                {
                    sub_404f80();
                }
            }
            if (v9 == 0x8000)
            {
                v9 = 0;
            }
            else if (v9 != 0x8000 && (v7 == 0 || v8 != 0))
            {
                return stack_base + 0;
            }
        }
    }
    return stack_base + 0;
}

extern unsigned int g_60e478;

int sub_408660()
{
    unsigned int v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x38]
    unsigned long v4;  // [bp-0x30]
    unsigned int v6;  // [bp+0x100008]
    unsigned long v7;  // rdx
    unsigned long v8;  // rcx
    unsigned int v9;  // rsi
    unsigned int v10;  // edi
    unsigned int v11;  // edi
    unsigned int *v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v17;  // rax

    v3 = v7;
    v1 = stack_base + 8;
    v4 = v8;
    v0 = 16;
    v2 = stack_base + -72;
    if (v9 == 1030)
    {
        v0 = 24;
        if (g_60e478 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_408660();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_60e478 = -1;
                    }
                }
            }
            if ((unsigned int)v15 >= 0 || *(v12) != 22)
            {
                g_60e478 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_408660();
        }
        if (((unsigned int)v15 < 0 || g_60e478 < 0) && (*(v12) == 22 || g_60e478 < 0) && (g_60e478 == -1 || g_60e478 >= 0) && (g_60e478 < 0 || (unsigned int)v15 >= 0) && ((unsigned int)v15 >= 0 || g_60e478 >= 0))
        {
            v13 = fcntl(v15, 0x1);
            if (v13 >= 0)
            {
                v14 = fcntl(v15, 0x2);
            }
            if (v14 == -1 || v13 < 0)
            {
                v15 = -18446744069414584321;
                close(v11);
                *(__errno_location()) = v6;
            }
        }
        v17 = v15;
        return v17;
    }
    return fcntl(v10, v9);
}

int sub_407820()
{
    unsigned long long v1;  // r9
    unsigned long long v2[2];  // r8

    v1 = 0;
    if (*(v2) != 0)
    {
        do
        {
            v1 += 1;
        }
        while (v2[v1] != 0);
    }
}

extern unsigned long long stdout[7];

int sub_403020()
{
    unsigned long long v1;  // rdi
    char *v2;  // rbx
    char v3;  // sil
    unsigned long long v4;  // rsi
    unsigned long long v5[7];  // rcx
    char *v6;  // rax

    v2 = v1;
    if (v3 != 0)
    {
        while (true)
        {
            v4 = *(v2);
            if (*(v2) == 0)
            {
                break;
            }
            v5 = stdout;
            if (v4 == 10)
            {
                v6 = fwrite_unlocked("\\n", 0x1, 0x2, stdout);
            }
            else if (v4 != 92)
            {
                v6 = v5[5];
                if (v5[5] < v5[6])
                {
                    v5[5] = stdout[5] + 1;
                    *((unsigned long long *)&v6) = v4;
                }
                else
                {
                    v6 = __overflow();
                }
            }
            else
            {
                v6 = fwrite_unlocked("\\\\", 0x1, 0x2, stdout);
            }
            v2 = &v2[1];
        }
        return v6;
    }
}

int sub_4052c0()
{
}

int sub_4073c0()
{
}

