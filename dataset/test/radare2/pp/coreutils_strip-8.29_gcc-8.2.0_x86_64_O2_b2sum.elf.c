#include "decompile_radare2.h"
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x401b20 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    uint32_t var_8h;
    int64_t var_10h;
    char * s;
    uint32_t var_20h;
    uint32_t var_28h;
    uint32_t var_30h;
    uint32_t var_3bh;
    uint32_t var_3ch;
    uint32_t var_40h;
    uint32_t var_48h;
    uint32_t var_50h;
    uint32_t var_58h;
    int64_t var_59h;
    uint32_t var_5ah;
    int64_t var_5bh;
    int64_t var_5ch;
    void * ptr;
    int64_t var_70h;
    uint32_t var_78h;
    int64_t var_80h;
    int64_t var_d0h;
    rdi = argc;
    rsi = argv;
    r14d = 0;
    r13d = 0x40c53f;
    r12d = edi;
    ebx = 0xffffffff;
    fcn_004057f0 (*(rsi));
    setlocale (6, 0x40c53f);
    bindtextdomain (0x409e1a, "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain (0x409e1a, rsi);
    edi = 0x405670;
    fcn_00409d30 ();
    rax = setvbuf (*(obj.stdout), 0, 1, 0);
    *((rsp + 0x3b)) = 0;
    do {
label_0:
        r8d = 0;
        ecx = 0x40aa00;
        edx = "l:bctw";
        rsi = rbp;
        edi = r12d;
        eax = fcn_00409590 ();
        if (eax == 0xffffffff) {
            goto label_42;
        }
        if (eax == 0x74) {
            goto label_43;
        }
        if (eax <= 0x74) {
            goto label_44;
        }
        if (eax == 0x81) {
            goto label_45;
        }
        if (eax <= 0x81) {
            goto label_46;
        }
        if (eax == 0x83) {
            goto label_47;
        }
        if (eax >= 0x83) {
            goto label_48;
        }
        *(0x0060e308) = 0;
        *(0x0060e307) = 0;
        *(0x0060e305) = 1;
    } while (1);
label_44:
    if (eax != 0x62) {
        if (eax <= 0x62) {
            goto label_49;
        }
        if (eax != 0x63) {
            goto label_50;
        }
        r14d = 1;
        goto label_0;
label_48:
        if (eax != 0x84) {
            goto label_51;
        }
        *((rsp + 0x3b)) = 1;
    }
    ebx = 1;
    goto label_0;
label_50:
    if (eax != 0x6c) {
        goto label_51;
    }
    edx = 5;
    rax = dcgettext (0, "invalid length");
    r9d = 0;
    rax = fcn_00407d40 (*(0x0060e4c0), 0, 0xffffffffffffffff, 0x40c53f, rax);
    r13 = imp.__libc_start_main;
    *(0x0060e2f8) = rax;
    if ((al & 7) == 0) {
        goto label_0;
    }
    rax = fcn_00407410 (r13);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid length: %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    edx = 5;
    rax = dcgettext (0, "length is not a multiple of 8");
    eax = 0;
    eax = error (1, 0, rax);
label_49:
    if (eax == 0xffffff7d) {
        eax = 0;
        rcx = *(str_8_29);
        r9d = "Samuel Neves";
        r8d = "Padraig Brady";
        fcn_004078a0 (*(obj.stdout), "b2sum", "GNU coreutils");
        eax = exit (0);
label_46:
        if (eax != 0x77) {
            goto label_52;
        }
        *(0x0060e308) = 0;
        *(0x0060e307) = 1;
        *(0x0060e305) = 0;
        goto label_0;
    }
    if (eax != 0xffffff7e) {
        goto label_51;
    }
    eax = fcn_00403280 (0);
label_52:
    if (eax != 0x80) {
        goto label_51;
    }
    *(0x0060e306) = 1;
    goto label_0;
label_47:
    *(0x0060e304) = 1;
    goto label_0;
label_43:
    ebx = 0;
    goto label_0;
label_45:
    *(0x0060e308) = 1;
    *(0x0060e307) = 0;
    *(0x0060e305) = 0;
    goto label_0;
label_42:
    rax = imp.__libc_start_main;
    *(0x0060e318) = 3;
    if (rax > 0x200) {
        goto label_53;
    }
    dl = (ebx == 0) ? 1 : 0;
    dl &= *((rsp + 0x3b));
    if (rax == 0) {
        if (r14b == 0) {
            goto label_54;
        }
    }
    rax >>= 2;
    *(0x0060e310) = rax;
    if (dl != 0) {
        goto label_55;
    }
    if (r14b != 0) {
        edx = 5;
        esi = "the --tag option is meaningless when verifying checksums";
        if (*((rsp + 0x3b)) != 0) {
            goto label_22;
        }
    }
    if (ebx >= 0) {
        edx = 5;
        esi = "the --binary and --text options are meaningless when verifying checksums";
        if (r14b != 0) {
            goto label_22;
        }
    }
    if (*(0x0060e306) == 0) {
        goto label_56;
    }
    if (r14b == 0) {
        goto label_57;
    }
label_21:
    if (*(0x0060e307) != 0) {
        goto label_58;
    }
label_36:
    if (*(0x0060e304) == 0) {
        goto label_58;
    }
    edx = 5;
    esi = "the --strict option is meaningful only when verifying checksums";
    if (r14b != 0) {
        goto label_58;
    }
    do {
label_22:
        rax = dcgettext (0, rsi);
        eax = 0;
        error (0, 0, rax);
label_51:
        fcn_00403280 (1);
label_54:
        *(0x0060e2f8) = 0x200;
        *(0x0060e310) = 0x80;
        if (dl != 0) {
            goto label_55;
        }
        if (*(0x0060e306) != 0) {
            goto label_57;
        }
        if (*(0x0060e308) != 0) {
            goto label_59;
        }
label_20:
        if (*(0x0060e307) == 0) {
            goto label_60;
        }
        edx = 5;
        esi = "the --warn option is meaningful only when verifying checksums";
    } while (r14b == 0);
label_58:
    if (ebx == 0xffffffff) {
        ebx = 0;
    }
    rax = (int64_t) r12d;
    rax = rbp + rax*8;
    *((rsp + 0x48)) = rax;
    rax = *(0x0060e2bc);
    if (eax == r12d) {
        rcx = *((rsp + 0x48));
        *(rcx) = 0x40c522;
        rcx += 8;
        *((rsp + 0x48)) = rcx;
    }
    rax = rbp + rax*8;
    *((rsp + 0x10)) = rax;
    if (*((rsp + 0x48)) <= rax) {
        goto label_61;
    }
    *((rsp + 0x59)) = 1;
    eax -= eax;
    eax &= 0xfffffff6;
    eax += 0x2a;
    *((rsp + 0x5c)) = eax;
    *((rsp + 0x5b)) = al;
label_9:
    rax = *((rsp + 0x10));
    rdi = *(rax);
    *((rsp + 0x18)) = rdi;
    if (r14b == 0) {
        goto label_62;
    }
    eax = strcmp (rdi, 0x40c522);
    *((rsp + 0x3c)) = eax;
    if (eax != 0) {
        goto label_63;
    }
    edx = 5;
    *(0x0060e320) = 1;
    rax = dcgettext (0, "standard input");
    r13 = stdin;
    *((rsp + 0x18)) = rax;
label_11:
    *((rsp + 0x68)) = 0;
    r12d = 1;
    *((rsp + 0x70)) = 0;
    *((rsp + 0x5a)) = 0;
    *((rsp + 0x58)) = 0;
    *((rsp + 0x50)) = 0;
    *((rsp + 0x40)) = 0;
    *((rsp + 0x30)) = 0;
label_2:
    rcx = r13;
    edx = 0xa;
    rsi = rsp + 0x70;
    rdi = rsp + 0x68;
    rax = getdelim ();
    if (rax <= 0) {
        goto label_64;
    }
    r15 = *((rsp + 0x68));
    edx = *(r15);
    if (dl == 0x23) {
        goto label_5;
    }
    r10 = rax;
    if (*((r15 + rax - 1)) == 0xa) {
        r10--;
        *((r15 + r10)) = 0;
        r15 = *((rsp + 0x68));
        edx = *(r15);
    }
    ebx = 0;
    if (dl == 9) {
        goto label_1;
    }
    if (dl != 0x20) {
        goto label_65;
    }
    do {
label_1:
        rbx++;
        edx = *((r15 + rbx));
    } while (dl == 0x20);
    if (dl == 9) {
        goto label_1;
    }
label_65:
    *((rsp + 8)) = 0;
    if (dl == 0x5c) {
        *((rsp + 8)) = r14b;
        rbx++;
    }
    r8 = r15 + rbx;
    edi = "BLAKE2";
    ecx = 6;
    rsi = r8;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (rbx > 0) ? 1 : 0;
    if (al != 0) {
        goto label_66;
    }
    rbx += 6;
    r11 = r15 + rbx;
    ebp = *(r11);
    if (bpl == 0) {
        goto label_67;
    }
    if (bpl == 9) {
        goto label_68;
    }
    if (bpl != 0x20) {
        goto label_69;
    }
    goto label_68;
    do {
        if (bpl == 0x28) {
            goto label_70;
        }
        rbx++;
        ebp = *((r15 + rbx));
        r11 = r15 + rbx;
        if (bpl == 0) {
            goto label_67;
        }
        if (bpl == 0x20) {
            goto label_68;
        }
        if (bpl == 9) {
            goto label_68;
        }
INVALID_JUMP;
    } while (bpl != 0x2d);
label_67:
    *(r11) = 0;
    *((rsp + 0x20)) = r10;
    rax = fcn_004052d0 (r8, 0x40aba0, 0, 0);
    r10 = *((rsp + 0x20));
    if (rax >= 0) {
        *(0x0060e300) = eax;
        rbx++;
label_7:
        r11 = r15 + rbx;
        if (bpl == 0x2d) {
            goto label_71;
        }
label_8:
        *(0x0060e2f8) = 0x200;
        eax = 0x80;
label_10:
        *(0x0060e310) = rax;
        eax = *(r11);
        if (al == 0x20) {
            eax = *((r15 + rbx + 1));
            rbx++;
        }
        if (al == 0x28) {
            goto label_72;
        }
    }
label_3:
    if (*(0x0060e307) != 0) {
        goto label_73;
    }
label_5:
    if ((*(r13) & 0x30) != 0) {
        goto label_64;
    }
label_4:
    r12++;
    if (r12 != 0) {
        goto label_2;
    }
    rdx = *((rsp + 0x18));
    rax = fcn_00407290 (0, 3);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: too many checksum lines");
    rcx = rbx;
    eax = 0;
    rax = error (1, 0, rax);
label_66:
    rdx = r10;
    *((rsp + 0x28)) = r10;
    rdx -= rbx;
    *((rsp + 0x20)) = r8;
    al = (*(r8) == 0x5c) ? 1 : 0;
    eax = (int32_t) al;
    rax += *(0x0060e318);
    if (rdx < rax) {
        goto label_3;
    }
    *(0x0060e310) = 0;
    rax = ctype_b_loc ();
    esi = 0;
    r10 = *((rsp + 0x28));
    r8 = *((rsp + 0x20));
    rdi = *(rax);
    eax = 0;
    while ((*((rdi + rdx*2 + 1)) & 0x10) != 0) {
        rax = rcx;
        esi = r14d;
        edx = *((r8 + rax));
        rcx = rax + 1;
    }
    if (sil == 0) {
        goto label_3;
    }
    rdx = rax - 2;
    *(0x0060e310) = rax;
    if (rdx > 0x7e) {
        goto label_3;
    }
    if ((al & 1) != 0) {
        goto label_3;
    }
    rbx += rax;
    rdx = rax*4;
    rax = r15 + rbx;
    *(0x0060e2f8) = rdx;
    edx = *(rax);
    if (dl == 0x20) {
        goto label_74;
    }
    if (dl != 9) {
        goto label_3;
    }
label_74:
    *(rax) = 0;
    rdi = r8;
    *((rsp + 0x28)) = r10;
    *((rsp + 0x20)) = r8;
    al = fcn_00402f30 (rdi);
    if (al == 0) {
        goto label_3;
    }
    r10 = *((rsp + 0x28));
    rax = rbx + 1;
    ecx = *(0x0060e230);
    r8 = *((rsp + 0x20));
    rdx = r10;
    rdx -= rax;
    rdx--;
    if (rdx != 0) {
        edx = *((r15 + rbx + 1));
        if (dl == 0x20) {
            goto label_75;
        }
        if (dl == 0x2a) {
            goto label_75;
        }
    }
    if (ecx == 0) {
        goto label_3;
    }
    *(0x0060e230) = 1;
label_19:
    rbx = r15 + rax;
    if (*((rsp + 8)) != 0) {
        goto label_76;
    }
label_18:
    eax = *((rsp + 0x3c));
    if (eax != 0) {
        goto label_77;
    }
    edi = 0x40c522;
    ecx = 2;
    rsi = rbx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (eax > 0) ? 1 : 0;
    if (al == 0) {
        goto label_3;
    }
label_77:
    ebp = 0;
    if (*(0x0060e308) == 0) {
        *((rsp + 8)) = r8;
        ebp = 0;
        rax = strchr (rbx, 0xa);
        r8 = *((rsp + 8));
        bpl = (rax != 0) ? 1 : 0;
    }
    *((rsp + 8)) = r8;
    al = fcn_004030d0 (rbx, rsp + 0xd0, rsp + 0x78);
    r8 = *((rsp + 8));
    ecx = eax;
    if (al != 0) {
        goto label_78;
    }
    if (*(0x0060e308) == 0) {
        if (ebp != 0) {
            rdi = stdout;
            rax = *((rdi + 0x28));
            if (rax >= *((rdi + 0x30))) {
                goto label_79;
            }
            rdx = rax + 1;
            *((rdi + 0x28)) = rdx;
            *(rax) = 0x5c;
        }
label_37:
        esi = ebp;
        fcn_00403020 (rbx);
        edx = 5;
        rax = dcgettext (0, "FAILED open or read");
        esi = 0x40ba21;
        edi = 1;
        rdx = rax;
        eax = 0;
        printf_chk ();
    }
label_6:
    *((rsp + 0x58)) = r14b;
    if ((*(r13) & 0x30) == 0) {
        goto label_4;
    }
label_64:
    free (*((rsp + 0x68)));
    ebx = *(r13);
    ebx &= 0x20;
    if (ebx != 0) {
        goto label_80;
    }
    if (*((rsp + 0x3c)) != 0) {
        goto label_81;
    }
label_16:
    if (*((rsp + 0x58)) == 0) {
        goto label_82;
    }
    if (*(0x0060e308) != 0) {
        goto label_83;
    }
    if (*((rsp + 0x30)) != 0) {
        goto label_84;
    }
label_32:
    if (*((rsp + 0x40)) != 0) {
        goto label_85;
    }
label_31:
    if (*((rsp + 0x50)) != 0) {
        goto label_86;
    }
label_30:
    if (*(0x0060e306) == 0) {
        goto label_83;
    }
    if (*((rsp + 0x5a)) == 0) {
        goto label_87;
    }
label_13:
    rax = *((rsp + 0x40));
    rax |= *((rsp + 0x50));
    if (rax == 0) {
        eax = *(0x0060e304);
        eax ^= 1;
        bl = (*((rsp + 0x30)) == 0) ? 1 : 0;
        eax |= ebx;
        ebx = (int32_t) al;
    }
label_14:
    eax = ebx;
    eax &= 1;
label_12:
    goto label_15;
label_73:
    rdx = *((rsp + 0x18));
    rax = fcn_00407290 (0, 3);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: %lu: improperly formatted %s checksum line");
    r9d = "BLAKE2";
    r8 = r12;
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    goto label_5;
label_78:
    if (*(0x0060e306) == 0) {
        goto label_88;
    }
    if (*((rsp + 0x78)) != 0) {
        goto label_6;
    }
label_88:
    rdx = imp.__libc_start_main;
    *((rsp + 8)) = r8;
    rdx >>= 1;
    if (rdx == 0) {
        goto label_89;
    }
    *((rsp + 0x28)) = rdx;
    r15d = 0;
    *((rsp + 0x20)) = cl;
    rax = ctype_tolower_loc ();
    r8 = *((rsp + 8));
    ecx = *((rsp + 0x20));
    rdi = *(rax);
    rdx = *((rsp + 0x28));
    while (*((rdi + r9*4)) == esi) {
        esi = *((r8 + r15*2 + 1));
        eax &= 0xf;
        eax = *((rax + str_0123456789abcdef));
        if (*((rdi + rsi*4)) != eax) {
            goto label_90;
        }
        eax = *((rsp + r15 + 0xd0));
        r9d = *((r8 + r15*2));
        esi = eax;
        sil >>= 4;
        esi &= 0xf;
        esi = *((rsi + str_0123456789abcdef));
    }
label_90:
    if (*(0x0060e308) != 0) {
        goto label_6;
    }
label_68:
    *(r11) = 0;
    *((rsp + 0x28)) = r10;
    *((rsp + 0x20)) = r11;
    rax = fcn_004052d0 (r8, 0x40aba0, 0, 0);
    if (rax < 0) {
        goto label_3;
    }
    *(0x0060e300) = eax;
    r11 = *((rsp + 0x20));
    r10 = *((rsp + 0x28));
    if (bpl == 0x28) {
        goto label_91;
    }
    rbx++;
    goto label_7;
label_70:
    *(r11) = 0;
    *((rsp + 0x28)) = r10;
    *((rsp + 0x20)) = r11;
    rax = fcn_004052d0 (r8, 0x40aba0, 0, 0);
    r11 = *((rsp + 0x20));
    r10 = *((rsp + 0x28));
    if (rax < 0) {
        goto label_3;
    }
    *(0x0060e300) = eax;
label_91:
    *(r11) = 0x28;
    goto label_8;
label_62:
    al = fcn_004030d0 (*((rsp + 0x18)), rsp + 0x80, rsp + 0xd0);
    if (al != 0) {
        goto label_92;
    }
    *((rsp + 0x59)) = 0;
label_15:
    rax = *((rsp + 0x10));
    if (*((rsp + 0x48)) > rax) {
        goto label_9;
    }
label_38:
    if (*(0x0060e320) != 0) {
        goto label_93;
    }
label_23:
    eax = *((rsp + 0x59));
    eax ^= 1;
    eax = (int32_t) al;
    return rax;
label_71:
    rdi = r11;
    *((rsp + 0x28)) = r10;
    *((rsp + 0x20)) = r11;
    eax = fcn_00407d70 (rdi, 0, 0, rsp + 0x78, 0);
    if (eax != 0) {
        goto label_3;
    }
    rax = *((rsp + 0x78));
    rdx = rax - 1;
    if (rdx > 0x1ff) {
        goto label_3;
    }
    if ((al & 7) != 0) {
        goto label_3;
    }
    *(0x0060e2f8) = rax;
    r10 = *((rsp + 0x28));
    r11 = *((rsp + 0x20));
    while (edx <= 9) {
        rbx++;
        r11 = r15 + rbx;
        edx = *((r15 + rbx));
        edx -= 0x30;
    }
    rax >>= 2;
    goto label_10;
label_72:
    rbx++;
    r10 -= rbx;
    if (r10 == 0) {
        goto label_3;
    }
    r11 = r10;
    rbx += r15;
    r11--;
    if (r11 == 0) {
        goto label_94;
    }
    if (*((rbx + r10 - 1)) != 0x29) {
        goto label_95;
    }
    goto label_96;
    do {
        if (*((rbx + r11)) == 0x29) {
            goto label_96;
        }
label_95:
        r11--;
    } while (r11 != 0);
label_94:
    if (*(rbx) != 0x29) {
        goto label_3;
    }
    r10 = rbx;
    r11d = 0;
    goto label_97;
label_63:
    rax = fcn_00405750 (*((rsp + 0x18)), 0x409ee0);
    r13 = rax;
    if (rax != 0) {
        goto label_11;
    }
label_17:
    rdx = *((rsp + 0x18));
    rax = fcn_00407290 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    eax = error (0, *(rax), 0x40ac1c);
    eax = 0;
    goto label_12;
label_83:
    if (*((rsp + 0x5a)) != 0) {
        goto label_13;
    }
    goto label_14;
label_92:
    rax = strchr (*((rsp + 0x18)), 0x5c);
    if (rax == 0) {
        goto label_98;
    }
label_24:
    if (*((rsp + 0x3b)) != 0) {
        goto label_99;
    }
    ebx = 1;
label_29:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (rax >= *((rdi + 0x30))) {
        goto label_100;
    }
    rdx = rax + 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0x5c;
label_25:
    rax = imp.__libc_start_main;
    rax >>= 1;
    if (rax == 0) {
        goto label_101;
    }
label_26:
    ebp = 0;
    do {
        edx = *((rsp + rbp + 0x80));
        esi = "%02x";
        edi = 1;
        eax = 0;
        rbp++;
        printf_chk ();
        rax = imp.__libc_start_main;
        rax >>= 1;
    } while (rax > rbp);
label_27:
    while (1) {
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_102;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
        goto label_15;
label_101:
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_103;
        }
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0x20;
label_40:
        rdi = stdout;
        rax = *((rdi + 0x28));
        if (rax >= *((rdi + 0x30))) {
            goto label_104;
        }
        ecx = *((rsp + 0x5b));
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = cl;
label_41:
        esi = ebx;
        fcn_00403020 (*((rsp + 0x18)));
    }
label_81:
    eax = fcn_004085e0 (r13);
    if (eax == 0) {
        goto label_16;
    }
    goto label_17;
label_39:
    eax = *(0x0060e308);
    *((rsp + 0x5a)) = al;
    if (al != 0) {
        goto label_6;
    }
    eax = *(0x0060e305);
    *((rsp + 0x5a)) = al;
    if (al != 0) {
        goto label_6;
    }
label_82:
    rdx = *((rsp + 0x18));
    rax = fcn_00407290 (0, 3);
    edx = 5;
    rax = dcgettext (0, "%s: no properly formatted %s checksum lines found");
    r8d = "BLAKE2";
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    goto label_14;
label_80:
    rdx = *((rsp + 0x18));
    rax = fcn_00407290 (0, 3);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "%s: read error");
    rcx = rbx;
    eax = 0;
    eax = error (0, 0, rax);
    eax = 0;
    goto label_12;
label_96:
    r10 = rbx + r11;
label_97:
    if (*((rsp + 8)) != 0) {
        goto label_105;
    }
label_35:
    *(r10) = 0;
    edx = *((rbx + r11 + 1));
    rax = r11 + 1;
    if (dl == 9) {
invalid_funccall(); //        void (*0x4029b0)() ();
    }
label_34:
    if (al != 0) {
        goto label_18;
    }
    goto label_3;
label_75:
    ecx--;
    if (ecx == 0) {
        goto label_19;
    }
    *(0x0060e230) = 0;
    rax = rbx + 2;
    goto label_19;
label_87:
    rdx = *((rsp + 0x18));
    rax = fcn_00407290 (0, 3);
    edx = 5;
    rax = dcgettext (0, "%s: no file was verified");
    rcx = rbp;
    eax = 0;
    error (0, 0, rax);
    goto label_14;
label_56:
    if (*(0x0060e308) == 0) {
        goto label_20;
    }
    if (r14b != 0) {
        goto label_21;
    }
label_59:
    edx = 5;
    esi = "the --status option is meaningful only when verifying checksums";
    goto label_22;
label_93:
    eax = fcn_004085e0 (*(obj.stdin));
    eax++;
    if (eax != 0) {
        goto label_23;
    }
    edx = 5;
    rax = dcgettext (0, "standard input");
    rbx = rax;
    rax = errno_location ();
    eax = 0;
    error (1, *(rax), rbx);
label_98:
    rax = strchr (*((rsp + 0x18)), 0xa);
    if (rax != 0) {
        goto label_24;
    }
    ebp = 0;
    ebx = 0;
    if (*((rsp + 0x3b)) == 0) {
        goto label_25;
    }
label_33:
    eax = imp.__libc_start_main;
    rsi = stdout;
    rdi = *((rax*8 + 0x40aba0));
    fputs_unlocked ();
    rdx = imp.__libc_start_main;
    if (rdx <= 0x1ff) {
        goto label_106;
    }
    edx = 2;
    esi = 1;
    edi = 0x409f00;
    rcx = stdout;
    fwrite_unlocked ();
    esi = ebx;
    fcn_00403020 (*((rsp + 0x18)));
    edx = 4;
    esi = 1;
    rcx = stdout;
    edi = ") = ";
    fwrite_unlocked ();
label_28:
    rax = imp.__libc_start_main;
    rax >>= 1;
    if (rax != 0) {
        goto label_26;
    }
    goto label_27;
label_106:
    esi = "-%lu";
    edi = 1;
    eax = 0;
    printf_chk ();
    edx = 2;
    esi = 1;
    rcx = stdout;
    edi = 0x409f00;
    fwrite_unlocked ();
    esi = ebx;
    fcn_00403020 (*((rsp + 0x18)));
    edx = 4;
    esi = 1;
    rcx = stdout;
    edi = ") = ";
    fwrite_unlocked ();
    if (*((rsp + 0x3b)) != 0) {
        goto label_28;
    }
    if (bpl == 0) {
        goto label_28;
    }
    goto label_29;
label_86:
    r15 = *((rsp + 0x50));
    edi = 0;
    r8d = 5;
    edx = "WARNING: %lu computed checksums did NOT match";
    esi = "WARNING: %lu computed checksum did NOT match";
    rcx = r15;
    rax = dcngettext ();
    rcx = r15;
    eax = 0;
    error (0, 0, rax);
    goto label_30;
label_85:
    r15 = *((rsp + 0x40));
    edi = 0;
    r8d = 5;
    edx = "WARNING: %lu listed files could not be read";
    esi = "WARNING: %lu listed file could not be read";
    rcx = r15;
    rax = dcngettext ();
    rcx = r15;
    eax = 0;
    error (0, 0, rax);
    goto label_31;
label_84:
    r15 = *((rsp + 0x30));
    edi = 0;
    r8d = 5;
    edx = "WARNING: %lu lines are improperly formatted";
    esi = "WARNING: %lu line is improperly formatted";
    rcx = r15;
    rax = dcngettext ();
    rcx = r15;
    eax = 0;
    error (0, 0, rax);
    goto label_32;
label_99:
    rdi = stdout;
    rax = *((rdi + 0x28));
    if (*((rdi + 0x30)) <= rax) {
        goto label_107;
    }
    rdx = rax + 1;
    ebp = *((rsp + 0x3b));
    ebx = 1;
    *((rdi + 0x28)) = rdx;
    *(rax) = 0x5c;
    goto label_33;
label_76:
    *((rsp + 8)) = r8;
    rsi -= rax;
    rax = fcn_00402f90 (rbx, r10);
    r8 = *((rsp + 8));
    al = (rax != 0) ? 1 : 0;
    goto label_34;
label_105:
    rax = fcn_00402f90 (rbx, r11);
    if (rax != 0) {
        goto label_35;
    }
label_60:
    if (*(0x0060e305) != 1) {
        goto label_36;
    }
    edx = 5;
    esi = "the --quiet option is meaningful only when verifying checksums";
    if (r14b != 0) {
        goto label_36;
    }
    goto label_22;
label_79:
    esi = 0x5c;
    overflow ();
    goto label_37;
label_61:
    *((rsp + 0x59)) = 1;
    goto label_38;
label_102:
    esi = 0xa;
    overflow ();
    goto label_15;
label_89:
    r15d = 0;
    goto label_39;
label_100:
    esi = 0x5c;
    overflow ();
    goto label_25;
label_103:
    esi = 0x20;
    overflow ();
    goto label_40;
label_104:
    esi = *((rsp + 0x5c));
    overflow ();
    goto label_41;
label_107:
    esi = 0x5c;
    ebx = 1;
    overflow ();
    ebp = *((rsp + 0x3b));
    goto label_33;
label_55:
    edx = 5;
    esi = "--tag does not support --text mode";
    goto label_22;
label_57:
    edx = 5;
    esi = "the --ignore-missing option is meaningful only when verifying checksums";
    goto label_22;
label_53:
    rax = fcn_00407410 (r13);
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "invalid length: %s");
    rcx = rbx;
    eax = 0;
    error (0, 0, rax);
    eax = imp.__libc_start_main;
    rax = fcn_00407410 (*((rax*8 + 0x40abb0)));
    edx = 5;
    rbx = rax;
    rax = dcgettext (0, "maximum digest length for %s is %lu bits");
    r8d = 0x200;
    rcx = rbx;
    eax = 0;
    error (1, 0, rax);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x402e7b */
#include <stdint.h>
 
int32_t fcn_00402e7b (void) {
    eax = __progname;
    if (rax != obj.__progname) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = __progname;
invalid_funccall(); //        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x402ed1 */
#include <stdint.h>
 
int64_t fcn_00402ed1 (int32_t argc, func fini, func init, func main, func rtld_fini, void * stack_end, char ** ubp_av) {
    rsi = argc;
    r8 = fini;
    rcx = init;
    rdi = main;
    r9 = rtld_fini;
    xmm0 = stack_end;
    rdx = ubp_av;
    if (*(0x0060e2e8) != 0) {
        goto label_0;
    }
    r12d = section.dtors;
    ebx = 0x60de48;
    rbx -= section.dtors;
    rbx >>= 3;
    rbx--;
    do {
        rax = imp.__libc_start_main;
        if (rax >= rbx) {
            goto label_1;
        }
        rax++;
        *(0x0060e2f0) = rax;
invalid_funccall(); //        uint64_t (*r12 + rax*8)() ();
    } while (1);
label_1:
    fcn_00402e7b ();
    *(0x0060e2e8) = 1;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x402f28 */
#include <stdint.h>
 
int64_t fcn_00402f28 (void) {
    do {
        esi = __progname;
        ecx = 2;
        rsi -= obj.__progname;
        rsi >>= 3;
        rax = rsi;
        __asm ("cqo");
        rax = rdx_rax / rcx;
        rdx = rdx_rax % rcx;
        rsi = rax;
        if (rax != 0) {
            eax = 0;
            if (rax == 0) {
                goto label_0;
            }
            edi = __progname;
invalid_funccall(); //            void (*rax)() ();
        }
label_0:
        return rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x402f30 */
#include <stdint.h>
 
uint64_t fcn_00402f30 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rbp = imp.__libc_start_main;
    if (rbp == 0) {
        goto label_0;
    }
    rax = ctype_b_loc ();
    rcx = *(rax);
    eax = 0;
    while ((*((rcx + rdx*2 + 1)) & 0x10) != 0) {
        edx = rax + 1;
        rbx++;
        rax = rdx;
        if (rdx >= rbp) {
            goto label_0;
        }
        edx = *(rbx);
    }
    eax = 0;
    return rax;
label_0:
    al = (*(rbx) == 0) ? 1 : 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x402f90 */
#include <stdint.h>
 
uint64_t fcn_00402f90 (int64_t arg1, uint32_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rax = rdi + 1;
    edx = 0;
    r8 = rsi - 1;
    if (rsi == 0) {
        goto label_1;
    }
    do {
        ecx = *((rdi + rdx));
        if (cl != 0) {
            if (cl != 0x5c) {
                goto label_2;
            }
            if (r8 == rdx) {
                goto label_3;
            }
            rdx++;
            ecx = *((rdi + rdx));
            if (cl == 0x5c) {
                goto label_4;
            }
            if (cl == 0x6e) {
                goto label_5;
            }
        }
label_3:
        eax = 0;
        return rax;
label_2:
        *((rax - 1)) = cl;
        r9 = rax;
label_0:
        rdx++;
        rax++;
    } while (rsi > rdx);
    rsi += rdi;
    if (r9 < rsi) {
        *(r9) = 0;
    }
label_1:
    rax = rdi;
    return rax;
label_5:
    r9 = rax;
    *((rax - 1)) = 0xa;
    goto label_0;
label_4:
    r9 = rax;
    *((rax - 1)) = 0x5c;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x403020 */
#include <stdint.h>
 
int64_t fcn_00403020 (char * arg1) {
    rdi = arg1;
    rbx = rdi;
    if (sil != 0) {
        goto label_1;
    }
    goto label_2;
    do {
        rax = *((rcx + 0x28));
        if (rax >= *((rcx + 0x30))) {
            goto label_3;
        }
        rdx = rax + 1;
        *((rcx + 0x28)) = rdx;
        *(rax) = sil;
label_0:
        rbx++;
label_1:
        esi = *(rbx);
        if (sil == 0) {
            goto label_4;
        }
        rcx = stdout;
        if (sil == 0xa) {
            goto label_5;
        }
    } while (sil != 0x5c);
    edx = 2;
    esi = 1;
    edi = 0x409d87;
    fwrite_unlocked ();
    goto label_0;
label_5:
    edx = 2;
    esi = 1;
    edi = 0x409d84;
    fwrite_unlocked ();
    goto label_0;
label_4:
    return rax;
label_3:
    rdi = rcx;
    overflow ();
    goto label_0;
label_2:
    rsi = stdout;
    return fputs_unlocked ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4030d0 */
#include <stdint.h>
 
uint64_t fcn_004030d0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    ecx = 2;
    r12 = rsi;
    edi = 0x40c522;
    rsi = rbp;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    *(rdx) = 0;
    al = (unknown > unknown) ? 1 : 0;
    if (al != 0) {
        goto label_1;
    }
    rbx = stdin;
    *(0x0060e320) = 1;
    fcn_00405720 (rbx, 2);
    rdx >>= 3;
    eax = fcn_004051d0 (rbx, r12, *(0x0060e2f8));
    if (eax != 0) {
        goto label_2;
    }
    do {
        r12d = 1;
label_0:
        eax = r12d;
        return eax;
label_1:
        r13 = rdx;
        rax = fcn_00405750 (rbp, 0x409ee0);
        rbx = rax;
        if (rax == 0) {
            goto label_3;
        }
        fcn_00405720 (rax, 2);
        rdx >>= 3;
        eax = fcn_004051d0 (rbx, r12, *(0x0060e2f8));
        if (eax != 0) {
            goto label_2;
        }
        eax = fcn_004085e0 (rbx);
    } while (eax == 0);
    rdx = rbp;
    r12d = 0;
    rax = fcn_00407290 (0, 3);
    rbx = rax;
    rax = errno_location ();
    rcx = rbx;
    eax = 0;
    error (0, *(rax), 0x40ac1c);
    goto label_0;
label_2:
    rdx = rbp;
    r12d = 0;
    rax = fcn_00407290 (0, 3);
    rax = errno_location ();
    rcx = rbp;
    eax = 0;
    error (0, *(rax), 0x40ac1c);
    if (*(obj.stdin) == rbx) {
        goto label_0;
    }
    fcn_004085e0 (rbx);
    goto label_0;
label_3:
    rax = errno_location ();
    r12d = *(0x0060e306);
    rbx = rax;
    if (r12b != 0) {
        if (*(rax) == 2) {
            goto label_4;
        }
    }
    rdx = rbp;
    r12d = 0;
    rax = fcn_00407290 (0, 3);
    rcx = rax;
    eax = 0;
    error (0, *(rbx), 0x40ac1c);
    goto label_0;
label_4:
    *(r13) = 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x403280 */
#include <stdint.h>
 
uint64_t fcn_00403280 (int64_t arg1) {
    char * var_8h;
    int64_t var_10h;
    char * var_18h;
    char * var_20h;
    char * var_28h;
    char * var_30h;
    char * var_38h;
    char * var_40h;
    char * var_48h;
    char * var_50h;
    char * var_58h;
    int64_t var_60h;
    int64_t var_68h;
    rdi = arg1;
    edx = 5;
    ebx = edi;
    rbp = imp.__libc_start_main;
    if (edi != 0) {
        rax = dcgettext (0, "Try '%s --help' for more information.\n");
        rdi = stderr;
        rcx = rbp;
        esi = 1;
        rdx = rax;
        eax = 0;
        fprintf_chk ();
label_0:
        exit (ebx);
    }
    rax = dcgettext (0, "Usage: %s [OPTION].. [FILE]..\nPrint or check %s (%d-bit) checksums.\n");
    r8d = 0x200;
    ecx = "BLAKE2";
    rdx = rbp;
    rsi = rax;
    edi = 1;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nWith no FILE, or when FILE is -, read standard input.\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\n  -b, --binary         read in binary mode\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "  -c, --check          read %s sums from the FILEs and check them\n");
    edx = "BLAKE2";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -l, --length         digest length in bits; must not exceed the maximum for\n                       the blake2 algorithm and must be a multiple of 8\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --tag            create a BSD-style checksum\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "  -t, --text           read in text mode (default)\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "\nThe following five options are useful only when verifying checksums:\n      --ignore-missing  don't fail or report status for missing files\n      --quiet          don't print OK for each successfully verified file\n      --status         don't output anything, status code shows success\n      --strict         exit non-zero for improperly formatted checksum lines\n  -w, --warn           warn about improperly formatted checksum lines\n\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    rbp = stdout;
    edx = 5;
    rax = dcgettext (0, "      --help     display this help and exit\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rbp = stdout;
    rax = dcgettext (0, "      --version  output version information and exit\n");
    rsi = rbp;
    rdi = rax;
    fputs_unlocked ();
    edx = 5;
    rax = dcgettext (0, "\nThe sums are computed as described in %s.  When checking, the input\nshould be a former output of this program.  The default mode is to print a\nline with checksum, a space, a character indicating input mode ('*' for binary,\n' ' for text or where binary is insignificant), and name for each FILE.\n");
    edx = "RFC 7693";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    *(rsp) = 0x409da0;
    rax = rsp;
    *((rsp + 8)) = "test invocation";
    *((rsp + 0x10)) = 0x409e1a;
    *((rsp + 0x18)) = "Multi-call invocation";
    *((rsp + 0x20)) = "sha224sum";
    *((rsp + 0x28)) = "sha2 utilities";
    *((rsp + 0x30)) = "sha256sum";
    *((rsp + 0x38)) = "sha2 utilities";
    *((rsp + 0x40)) = "sha384sum";
    *((rsp + 0x48)) = "sha2 utilities";
    *((rsp + 0x50)) = "sha512sum";
    *((rsp + 0x58)) = "sha2 utilities";
    *((rsp + 0x60)) = 0;
    *((rsp + 0x68)) = 0;
    do {
        rax += 0x10;
        rdi = *(rax);
        if (rdi == 0) {
            goto label_2;
        }
        esi = "b2sum";
        ecx = 6;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        dl = (rdi > 0) ? 1 : 0;
    } while (dl != 0);
label_2:
    rbp = *((rax + 8));
    edx = 5;
    esi = "\n%s online help: <%s>\n";
    edi = 0;
    if (rbp == 0) {
        goto label_3;
    }
    rax = dcgettext (rdi, rsi);
    edi = 1;
    ecx = "https://www.gnu.org/software/coreutils/";
    edx = "GNU coreutils";
    rsi = rax;
    eax = 0;
    printf_chk ();
    rax = setlocale (5, 0);
    if (rax != 0) {
        eax = strncmp (rax, 0x409e24, 3);
        if (eax != 0) {
            goto label_4;
        }
    }
label_1:
    edx = 5;
    r12d = 0x409dbc;
    rax = dcgettext (0, "Full documentation at: <%s%s>\n");
    ecx = "b2sum";
    edx = "https://www.gnu.org/software/coreutils/";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    ecx = 0x40c53f;
    r12 = rcx;
    while (1) {
        edx = 5;
        rax = dcgettext (0, "or available locally via: info '(coreutils) %s%s'\n");
        rcx = r12;
        rdx = rbp;
        edi = 1;
        rsi = rax;
        eax = 0;
        printf_chk ();
        goto label_0;
label_3:
        rax = dcgettext (rdi, rsi);
        edi = 1;
        ecx = "https://www.gnu.org/software/coreutils/";
        edx = "GNU coreutils";
        rsi = rax;
        eax = 0;
        printf_chk ();
        rax = setlocale (5, 0);
        if (rax != 0) {
            eax = strncmp (rax, 0x409e24, 3);
            if (eax != 0) {
                goto label_5;
            }
        }
        edx = 5;
        rax = dcgettext (0, "Full documentation at: <%s%s>\n");
        ecx = "b2sum";
        edx = "https://www.gnu.org/software/coreutils/";
        edi = 1;
        rsi = rax;
        eax = 0;
        r12d = 0x409dbc;
        printf_chk ();
    }
label_5:
label_4:
    edx = 5;
    rax = dcgettext (0, "Report %s translation bugs to <https://translationproject.org/team/>\n");
    edx = "b2sum";
    edi = 1;
    rsi = rax;
    eax = 0;
    printf_chk ();
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x403680 */
#include <stdint.h>
 
 
int64_t fcn_00403680 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    rdi = arg1;
    rsi = arg2;
    eax = 0;
    do {
        rdx = *((rsi + rax*8));
        *((rsp + rax*8 - 0x58)) = rdx;
        rax++;
    } while (rax != 0x10);
    eax = 0;
    do {
        rdx = *((rdi + rax*8));
        *((rsp + rax*8 + 0x28)) = rdx;
        rax++;
    } while (rax != 8);
    r13 = *((rsp + 0x48));
    rbp = *((rsp + 0x28));
    rax = 0x510e527fade682d1;
    r14 = 0x6a09e667f3bcc908;
    rcx = *((rsp + 0x50));
    r9 = *((rdi + 0x40));
    r15 = 0xbb67ae8584caa73b;
    r12 = 0x3c6ef372fe94f82b;
    rbx = *((rsp + 0x30));
    rbp += r13;
    r8 = *((rdi + 0x48));
    rbp += *((rsp - 0x58));
    rdx = *((rsp + 0x58));
    r9 ^= rbp;
    rbx += rcx;
    rbx += *((rsp - 0x48));
    rbp += *((rsp - 0x50));
    r9 ^= rax;
    r8 ^= rbx;
    rbx += *((rsp - 0x40));
    r11 = *((rsp + 0x38));
    r9 = rotate_left64 (r9, 0x20);
    rsi = *((rdi + 0x50));
    r10 = *((rsp + 0x40));
    rax = 0x9b05688c2b3e6c1f;
    r8 ^= rax;
    r14 += r9;
    r11 += rdx;
    r11 += *((rsp - 0x38));
    r8 = rotate_left64 (r8, 0x20);
    r13 ^= r14;
    rsi ^= r11;
    r15 += r8;
    r13 = rotate_right64 (r13, 0x18);
    rcx ^= r15;
    rbp += r13;
    rcx = rotate_right64 (rcx, 0x18);
    r9 ^= rbp;
    rbx += rcx;
    r9 = rotate_right64 (r9, 0x10);
    r8 ^= rbx;
    r14 += r9;
    r8 = rotate_right64 (r8, 0x10);
    r13 ^= r14;
    rax = r15 + r8;
    r13 = rotate_left64 (r13, 1);
    r15 = *((rdi + 0x58));
    rcx ^= rax;
    *((rsp - 0x78)) = rax;
    rax = 0x1f83d9abfb41bd6b;
    rcx = rotate_left64 (rcx, 1);
    rsi ^= rax;
    rax = *((rsp + 0x60));
    *((rsp - 0x68)) = r13;
    rsi = rotate_left64 (rsi, 0x20);
    r11 += *((rsp - 0x30));
    rbp += *((rsp - 0x18));
    r10 += rax;
    r10 += *((rsp - 0x28));
    r12 += rsi;
    rbp += rcx;
    r15 ^= r10;
    rdx ^= r12;
    r10 += *((rsp - 0x20));
    r13 = r15;
    rdx = rotate_right64 (rdx, 0x18);
    r15 = 0x5be0cd19137e2179;
    r13 ^= r15;
    r11 += rdx;
    r15 = 0xa54ff53a5f1d36f1;
    r13 = rotate_left64 (r13, 0x20);
    rsi ^= r11;
    r15 += r13;
    rsi = rotate_right64 (rsi, 0x10);
    rax ^= r15;
    r12 += rsi;
    rax = rotate_right64 (rax, 0x18);
    rdx ^= r12;
    r10 += rax;
    rdx = rotate_left64 (rdx, 1);
    r13 ^= r10;
    r13 = rotate_right64 (r13, 0x10);
    r15 += r13;
    r13 ^= rbp;
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r12 += r13;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rbp += *((rsp - 0x10));
    rbx += *((rsp - 8));
    rcx = rotate_right64 (rcx, 0x18);
    rbx += rdx;
    r11 += *((rsp + 8));
    rbp += rcx;
    r9 ^= rbx;
    r11 += rax;
    rbx += *(rsp);
    r13 ^= rbp;
    r9 = rotate_left64 (r9, 0x20);
    r8 ^= r11;
    r11 += *((rsp + 0x10));
    r13 = rotate_right64 (r13, 0x10);
    r8 = rotate_left64 (r8, 0x20);
    r12 += r13;
    *((rsp - 0x60)) = r13;
    r13 = r15 + r9;
    r14 += r8;
    rdx ^= r13;
    rax ^= r14;
    rcx ^= r12;
    rdx = rotate_right64 (rdx, 0x18);
    rax = rotate_right64 (rax, 0x18);
    rbx += rdx;
    r11 += rax;
    rcx = rotate_left64 (rcx, 1);
    r9 ^= rbx;
    r8 ^= r11;
    r9 = rotate_right64 (r9, 0x10);
    r8 = rotate_right64 (r8, 0x10);
    r15 = r13 + r9;
    r13 = *((rsp - 0x68));
    rdx ^= r15;
    *((rsp - 0x70)) = r15;
    rdx = rotate_left64 (rdx, 1);
    r14 += r8;
    r10 += *((rsp + 0x18));
    r15 = *((rsp - 0x78));
    r10 += r13;
    rbp += *((rsp + 0x18));
    rax ^= r14;
    rbx += *((rsp - 0x38));
    rsi ^= r10;
    r10 += *((rsp + 0x20));
    rax = rotate_left64 (rax, 1);
    rsi = rotate_left64 (rsi, 0x20);
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    r10 += r13;
    rsi ^= r10;
    rsi = rotate_right64 (rsi, 0x10);
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += r13;
    r9 ^= rbp;
    rbp += *((rsp - 8));
    r9 = rotate_left64 (r9, 0x20);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_right64 (r13, 0x18);
    rbp += r13;
    r9 ^= rbp;
    r9 = rotate_right64 (r9, 0x10);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_left64 (r13, 1);
    rbx += rcx;
    r11 += *((rsp - 0x10));
    r10 += *((rsp + 0x10));
    r8 ^= rbx;
    r11 += rdx;
    rbx += *((rsp - 0x18));
    *((rsp - 0x68)) = r13;
    r8 = rotate_left64 (r8, 0x20);
    rsi ^= r11;
    r11 += *((rsp + 0x20));
    r10 += rax;
    r15 += r8;
    rsi = rotate_left64 (rsi, 0x20);
    r13 = *((rsp - 0x60));
    rcx ^= r15;
    r12 += rsi;
    rcx = rotate_right64 (rcx, 0x18);
    rdx ^= r12;
    r13 ^= r10;
    rdx = rotate_right64 (rdx, 0x18);
    rbx += rcx;
    r13 = rotate_left64 (r13, 0x20);
    r8 ^= rbx;
    r11 += rdx;
    r8 = rotate_right64 (r8, 0x10);
    rsi ^= r11;
    r15 += r8;
    rsi = rotate_right64 (rsi, 0x10);
    *((rsp - 0x78)) = r15;
    rcx ^= r15;
    r15 = *((rsp - 0x70));
    r12 += rsi;
    rdx ^= r12;
    rcx = rotate_left64 (rcx, 1);
    r15 += r13;
    rdx = rotate_left64 (rdx, 1);
    rax ^= r15;
    r10 += *((rsp - 0x28));
    rbp += *((rsp - 0x50));
    rax = rotate_right64 (rax, 0x18);
    rbp += rcx;
    rbx += *((rsp - 0x58));
    r10 += rax;
    rbx += rdx;
    r13 ^= r10;
    r9 ^= rbx;
    rbx += *((rsp - 0x48));
    r13 = rotate_right64 (r13, 0x10);
    r9 = rotate_left64 (r9, 0x20);
    r15 += r13;
    r13 ^= rbp;
    rbp += *((rsp + 8));
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r15 += r9;
    r12 += r13;
    rdx ^= r15;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rdx = rotate_right64 (rdx, 0x18);
    rcx = rotate_right64 (rcx, 0x18);
    rbx += rdx;
    rbp += rcx;
    r13 ^= rbp;
    r13 = rotate_right64 (r13, 0x10);
    r12 += r13;
    *((rsp - 0x60)) = r13;
    r13 = *((rsp - 0x68));
    rcx ^= r12;
    rcx = rotate_left64 (rcx, 1);
    r9 ^= rbx;
    r11 += *(rsp);
    r10 += *((rsp - 0x30));
    r9 = rotate_right64 (r9, 0x10);
    r11 += rax;
    r10 += r13;
    r15 += r9;
    r8 ^= r11;
    rsi ^= r10;
    r11 += *((rsp - 0x20));
    *((rsp - 0x70)) = r15;
    r8 = rotate_left64 (r8, 0x20);
    rdx ^= r15;
    rsi = rotate_left64 (rsi, 0x20);
    r15 = *((rsp - 0x78));
    r14 += r8;
    r10 += *((rsp - 0x40));
    rdx = rotate_left64 (rdx, 1);
    rax ^= r14;
    r15 += rsi;
    rax = rotate_right64 (rax, 0x18);
    r13 ^= r15;
    r11 += rax;
    r13 = rotate_right64 (r13, 0x18);
    r8 ^= r11;
    r10 += r13;
    r8 = rotate_right64 (r8, 0x10);
    rsi ^= r10;
    r14 += r8;
    rsi = rotate_right64 (rsi, 0x10);
    rax ^= r14;
    r15 += rsi;
    rax = rotate_left64 (rax, 1);
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += *(rsp);
    rbx += *((rsp + 8));
    rbp += r13;
    rbx += rcx;
    r9 ^= rbp;
    r8 ^= rbx;
    rbp += *((rsp - 0x18));
    rbx += *((rsp - 0x58));
    r9 = rotate_left64 (r9, 0x20);
    r8 = rotate_left64 (r8, 0x20);
    r14 += r9;
    r15 += r8;
    r13 ^= r14;
    rcx ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    rcx = rotate_right64 (rcx, 0x18);
    rbp += r13;
    rbx += rcx;
    r9 ^= rbp;
    r8 ^= rbx;
    r9 = rotate_right64 (r9, 0x10);
    r8 = rotate_right64 (r8, 0x10);
    r14 += r9;
    r15 += r8;
    r13 ^= r14;
    *((rsp - 0x78)) = r15;
    rcx ^= r15;
    r13 = rotate_left64 (r13, 1);
    rcx = rotate_left64 (rcx, 1);
    *((rsp - 0x68)) = r13;
    r11 += *((rsp - 0x30));
    r11 += rdx;
    r13 = *((rsp - 0x60));
    r15 = *((rsp - 0x70));
    rsi ^= r11;
    rsi = rotate_left64 (rsi, 0x20);
    r10 += *((rsp + 0x20));
    r11 += *((rsp - 0x48));
    r10 += rax;
    r12 += rsi;
    rbp += *((rsp - 8));
    r13 ^= r10;
    rdx ^= r12;
    r10 += *((rsp + 0x10));
    rbp += rcx;
    r13 = rotate_left64 (r13, 0x20);
    rdx = rotate_right64 (rdx, 0x18);
    r15 += r13;
    r11 += rdx;
    rax ^= r15;
    rsi ^= r11;
    rax = rotate_right64 (rax, 0x18);
    rsi = rotate_right64 (rsi, 0x10);
    r10 += rax;
    r12 += rsi;
    r13 ^= r10;
    rdx ^= r12;
    r13 = rotate_right64 (r13, 0x10);
    rdx = rotate_left64 (rdx, 1);
    r15 += r13;
    r13 ^= rbp;
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r12 += r13;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rcx = rotate_right64 (rcx, 0x18);
    rbp += *((rsp + 0x18));
    rbx += *((rsp - 0x40));
    rbx += rdx;
    r11 += *((rsp - 0x20));
    rbp += rcx;
    r9 ^= rbx;
    r11 += rax;
    rbx += *((rsp - 0x28));
    r13 ^= rbp;
    r9 = rotate_left64 (r9, 0x20);
    r8 ^= r11;
    r11 += *((rsp - 0x50));
    r13 = rotate_right64 (r13, 0x10);
    r15 += r9;
    r8 = rotate_left64 (r8, 0x20);
    r12 += r13;
    *((rsp - 0x60)) = r13;
    rdx ^= r15;
    r14 += r8;
    r13 = *((rsp - 0x68));
    rcx ^= r12;
    rdx = rotate_right64 (rdx, 0x18);
    rax ^= r14;
    rcx = rotate_left64 (rcx, 1);
    rbx += rdx;
    rax = rotate_right64 (rax, 0x18);
    r9 ^= rbx;
    r11 += rax;
    r9 = rotate_right64 (r9, 0x10);
    r8 ^= r11;
    r15 += r9;
    r8 = rotate_right64 (r8, 0x10);
    rdx ^= r15;
    *((rsp - 0x70)) = r15;
    r15 = *((rsp - 0x78));
    rdx = rotate_left64 (rdx, 1);
    r14 += r8;
    r10 += *((rsp - 0x10));
    rbp += *((rsp - 0x20));
    r10 += r13;
    rax ^= r14;
    rbx += *((rsp - 0x40));
    rsi ^= r10;
    r10 += *((rsp - 0x38));
    rax = rotate_left64 (rax, 1);
    rsi = rotate_left64 (rsi, 0x20);
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    r10 += r13;
    rsi ^= r10;
    rsi = rotate_right64 (rsi, 0x10);
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += r13;
    r9 ^= rbp;
    rbp += *((rsp - 0x10));
    r9 = rotate_left64 (r9, 0x20);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_right64 (r13, 0x18);
    rbp += r13;
    r9 ^= rbp;
    r9 = rotate_right64 (r9, 0x10);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_left64 (r13, 1);
    rbx += rcx;
    r11 += *((rsp + 0x10));
    r10 += *(rsp);
    r8 ^= rbx;
    r11 += rdx;
    rbx += *((rsp - 0x50));
    *((rsp - 0x68)) = r13;
    r8 = rotate_left64 (r8, 0x20);
    rsi ^= r11;
    r11 += *((rsp + 8));
    r10 += rax;
    r15 += r8;
    rsi = rotate_left64 (rsi, 0x20);
    r13 = *((rsp - 0x60));
    rcx ^= r15;
    r12 += rsi;
    rcx = rotate_right64 (rcx, 0x18);
    rdx ^= r12;
    r13 ^= r10;
    rdx = rotate_right64 (rdx, 0x18);
    rbx += rcx;
    r13 = rotate_left64 (r13, 0x20);
    r8 ^= rbx;
    r11 += rdx;
    r8 = rotate_right64 (r8, 0x10);
    rsi ^= r11;
    r15 += r8;
    rsi = rotate_right64 (rsi, 0x10);
    rcx ^= r15;
    *((rsp - 0x78)) = r15;
    r15 = *((rsp - 0x70));
    r12 += rsi;
    rdx ^= r12;
    rcx = rotate_left64 (rcx, 1);
    r15 += r13;
    rdx = rotate_left64 (rdx, 1);
    rax ^= r15;
    r10 += *((rsp + 0x18));
    rbp += *((rsp - 0x48));
    rax = rotate_right64 (rax, 0x18);
    rbp += rcx;
    r10 += rax;
    r13 ^= r10;
    r13 = rotate_right64 (r13, 0x10);
    r15 += r13;
    r13 ^= rbp;
    rbp += *((rsp - 0x28));
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r12 += r13;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rcx = rotate_right64 (rcx, 0x18);
    rbp += rcx;
    r13 ^= rbp;
    r13 = rotate_right64 (r13, 0x10);
    *((rsp - 0x60)) = r13;
    rbx += *((rsp - 0x30));
    r12 += r13;
    rbx += rdx;
    rcx ^= r12;
    r13 = *((rsp - 0x68));
    r9 ^= rbx;
    rbx += *((rsp - 8));
    rcx = rotate_left64 (rcx, 1);
    r9 = rotate_left64 (r9, 0x20);
    r15 += r9;
    rdx ^= r15;
    rdx = rotate_right64 (rdx, 0x18);
    rbx += rdx;
    r9 ^= rbx;
    r11 += *((rsp - 0x38));
    r10 += *((rsp + 0x20));
    r9 = rotate_right64 (r9, 0x10);
    r11 += rax;
    r10 += r13;
    r15 += r9;
    r8 ^= r11;
    rsi ^= r10;
    r11 += *((rsp - 0x58));
    *((rsp - 0x70)) = r15;
    r8 = rotate_left64 (r8, 0x20);
    rdx ^= r15;
    rsi = rotate_left64 (rsi, 0x20);
    r15 = *((rsp - 0x78));
    r14 += r8;
    r10 += *((rsp - 0x18));
    rdx = rotate_left64 (rdx, 1);
    rax ^= r14;
    r15 += rsi;
    rax = rotate_right64 (rax, 0x18);
    r13 ^= r15;
    r11 += rax;
    r13 = rotate_right64 (r13, 0x18);
    r8 ^= r11;
    r10 += r13;
    r8 = rotate_right64 (r8, 0x10);
    rsi ^= r10;
    r14 += r8;
    rsi = rotate_right64 (rsi, 0x10);
    rax ^= r14;
    r15 += rsi;
    rax = rotate_left64 (rax, 1);
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += *((rsp - 0x10));
    rbx += *((rsp - 0x30));
    rbp += r13;
    rbx += rcx;
    r11 += *((rsp - 0x48));
    r9 ^= rbp;
    r8 ^= rbx;
    rbp += *((rsp - 0x58));
    rbx += *((rsp - 0x20));
    r9 = rotate_left64 (r9, 0x20);
    r8 = rotate_left64 (r8, 0x20);
    r11 += rdx;
    r14 += r9;
    r15 += r8;
    rsi ^= r11;
    r13 ^= r14;
    rcx ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    rcx = rotate_right64 (rcx, 0x18);
    rbp += r13;
    rbx += rcx;
    r9 ^= rbp;
    r8 ^= rbx;
    r9 = rotate_right64 (r9, 0x10);
    r8 = rotate_right64 (r8, 0x10);
    r14 += r9;
    r15 += r8;
    r13 ^= r14;
    rcx ^= r15;
    *((rsp - 0x78)) = r15;
    r15 = *((rsp - 0x70));
    r13 = rotate_left64 (r13, 1);
    rcx = rotate_left64 (rcx, 1);
    *((rsp - 0x68)) = r13;
    rsi = rotate_left64 (rsi, 0x20);
    r13 = *((rsp - 0x60));
    r10 += *((rsp - 8));
    r12 += rsi;
    r11 += *((rsp - 0x38));
    r10 += rax;
    rdx ^= r12;
    rbp += *((rsp + 0x18));
    r13 ^= r10;
    r10 += *((rsp + 0x20));
    rdx = rotate_right64 (rdx, 0x18);
    rbp += rcx;
    r13 = rotate_left64 (r13, 0x20);
    r11 += rdx;
    r15 += r13;
    rsi ^= r11;
    rax ^= r15;
    rsi = rotate_right64 (rsi, 0x10);
    rax = rotate_right64 (rax, 0x18);
    r12 += rsi;
    r10 += rax;
    rdx ^= r12;
    r13 ^= r10;
    rdx = rotate_left64 (rdx, 1);
    r13 = rotate_right64 (r13, 0x10);
    r15 += r13;
    r13 ^= rbp;
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r12 += r13;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rcx = rotate_right64 (rcx, 0x18);
    rbp += *((rsp - 0x50));
    rbx += *(rsp);
    rbx += rdx;
    r11 += *((rsp - 0x28));
    rbp += rcx;
    r9 ^= rbx;
    r11 += rax;
    rbx += *((rsp + 8));
    r13 ^= rbp;
    r9 = rotate_left64 (r9, 0x20);
    r8 ^= r11;
    r11 += *((rsp - 0x18));
    r13 = rotate_right64 (r13, 0x10);
    r15 += r9;
    r8 = rotate_left64 (r8, 0x20);
    r12 += r13;
    *((rsp - 0x60)) = r13;
    rdx ^= r15;
    r14 += r8;
    rcx ^= r12;
    r13 = *((rsp - 0x68));
    rdx = rotate_right64 (rdx, 0x18);
    rax ^= r14;
    rcx = rotate_left64 (rcx, 1);
    rbx += rdx;
    rax = rotate_right64 (rax, 0x18);
    r9 ^= rbx;
    r11 += rax;
    r9 = rotate_right64 (r9, 0x10);
    r8 ^= r11;
    r15 += r9;
    r8 = rotate_right64 (r8, 0x10);
    rdx ^= r15;
    *((rsp - 0x70)) = r15;
    r15 = *((rsp - 0x78));
    rdx = rotate_left64 (rdx, 1);
    r14 += r8;
    r10 += *((rsp - 0x40));
    r10 += r13;
    rax ^= r14;
    rsi ^= r10;
    r10 += *((rsp + 0x10));
    rbp += *((rsp - 0x48));
    rax = rotate_left64 (rax, 1);
    rsi = rotate_left64 (rsi, 0x20);
    rbx += *((rsp - 0x28));
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    r10 += r13;
    rsi ^= r10;
    rsi = rotate_right64 (rsi, 0x10);
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += r13;
    r9 ^= rbp;
    rbp += *((rsp + 8));
    r9 = rotate_left64 (r9, 0x20);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_right64 (r13, 0x18);
    rbp += r13;
    r9 ^= rbp;
    r9 = rotate_right64 (r9, 0x10);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_left64 (r13, 1);
    rbx += rcx;
    r11 += *((rsp - 0x58));
    r10 += *((rsp - 0x18));
    r8 ^= rbx;
    r11 += rdx;
    rbx += *((rsp - 8));
    *((rsp - 0x68)) = r13;
    r8 = rotate_left64 (r8, 0x20);
    rsi ^= r11;
    r11 += *(rsp);
    r13 = *((rsp - 0x60));
    r15 += r8;
    rsi = rotate_left64 (rsi, 0x20);
    r10 += rax;
    rcx ^= r15;
    r12 += rsi;
    r13 ^= r10;
    rcx = rotate_right64 (rcx, 0x18);
    rdx ^= r12;
    r13 = rotate_left64 (r13, 0x20);
    rbx += rcx;
    rdx = rotate_right64 (rdx, 0x18);
    r8 ^= rbx;
    r11 += rdx;
    r8 = rotate_right64 (r8, 0x10);
    rsi ^= r11;
    r15 += r8;
    rsi = rotate_right64 (rsi, 0x10);
    *((rsp - 0x78)) = r15;
    rcx ^= r15;
    r15 = *((rsp - 0x70));
    r12 += rsi;
    rdx ^= r12;
    rcx = rotate_left64 (rcx, 1);
    r15 += r13;
    rdx = rotate_left64 (rdx, 1);
    rax ^= r15;
    r10 += *((rsp - 0x40));
    rbp += *((rsp - 0x38));
    rax = rotate_right64 (rax, 0x18);
    rbp += rcx;
    rbx += *((rsp - 0x20));
    r10 += rax;
    rbx += rdx;
    r13 ^= r10;
    r9 ^= rbx;
    rbx += *((rsp - 0x30));
    r13 = rotate_right64 (r13, 0x10);
    r9 = rotate_left64 (r9, 0x20);
    r15 += r13;
    r13 ^= rbp;
    rbp += *((rsp + 0x10));
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r15 += r9;
    r12 += r13;
    rdx ^= r15;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rdx = rotate_right64 (rdx, 0x18);
    rcx = rotate_right64 (rcx, 0x18);
    rbx += rdx;
    rbp += rcx;
    r13 ^= rbp;
    r13 = rotate_right64 (r13, 0x10);
    r12 += r13;
    *((rsp - 0x60)) = r13;
    r13 = *((rsp - 0x68));
    rcx ^= r12;
    rcx = rotate_left64 (rcx, 1);
    r9 ^= rbx;
    r11 += *((rsp + 0x20));
    r10 += *((rsp - 0x50));
    r9 = rotate_right64 (r9, 0x10);
    r11 += rax;
    r10 += r13;
    r15 += r9;
    r8 ^= r11;
    rsi ^= r10;
    r11 += *((rsp + 0x18));
    *((rsp - 0x70)) = r15;
    r8 = rotate_left64 (r8, 0x20);
    rdx ^= r15;
    rsi = rotate_left64 (rsi, 0x20);
    r15 = *((rsp - 0x78));
    r14 += r8;
    r10 += *((rsp - 0x10));
    rdx = rotate_left64 (rdx, 1);
    rax ^= r14;
    r15 += rsi;
    rax = rotate_right64 (rax, 0x18);
    r13 ^= r15;
    r11 += rax;
    r13 = rotate_right64 (r13, 0x18);
    r8 ^= r11;
    r10 += r13;
    r8 = rotate_right64 (r8, 0x10);
    rsi ^= r10;
    r14 += r8;
    rsi = rotate_right64 (rsi, 0x10);
    rax ^= r14;
    r15 += rsi;
    rax = rotate_left64 (rax, 1);
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += *((rsp + 8));
    rbx += *((rsp - 0x50));
    rbp += r13;
    rbx += rcx;
    r11 += *((rsp + 0x18));
    r9 ^= rbp;
    r8 ^= rbx;
    rbp += *((rsp - 0x30));
    rbx += *((rsp + 0x20));
    r9 = rotate_left64 (r9, 0x20);
    r8 = rotate_left64 (r8, 0x20);
    r11 += rdx;
    r14 += r9;
    r15 += r8;
    rsi ^= r11;
    r13 ^= r14;
    rcx ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    rcx = rotate_right64 (rcx, 0x18);
    rbp += r13;
    rbx += rcx;
    r9 ^= rbp;
    r8 ^= rbx;
    r9 = rotate_right64 (r9, 0x10);
    r8 = rotate_right64 (r8, 0x10);
    r14 += r9;
    r15 += r8;
    r13 ^= r14;
    rcx ^= r15;
    *((rsp - 0x78)) = r15;
    r13 = rotate_left64 (r13, 1);
    rcx = rotate_left64 (rcx, 1);
    *((rsp - 0x68)) = r13;
    rsi = rotate_left64 (rsi, 0x20);
    r11 += *((rsp + 0x10));
    r13 = *((rsp - 0x60));
    r10 += *((rsp - 0x38));
    r12 += rsi;
    r10 += rax;
    r15 = *((rsp - 0x70));
    rdx ^= r12;
    rbp += *((rsp - 0x58));
    r13 ^= r10;
    r10 += *((rsp - 8));
    rdx = rotate_right64 (rdx, 0x18);
    rbp += rcx;
    r13 = rotate_left64 (r13, 0x20);
    r11 += rdx;
    r15 += r13;
    rsi ^= r11;
    rax ^= r15;
    rsi = rotate_right64 (rsi, 0x10);
    rax = rotate_right64 (rax, 0x18);
    r12 += rsi;
    r10 += rax;
    rdx ^= r12;
    r13 ^= r10;
    rdx = rotate_left64 (rdx, 1);
    r13 = rotate_right64 (r13, 0x10);
    r15 += r13;
    r13 ^= rbp;
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r12 += r13;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rcx = rotate_right64 (rcx, 0x18);
    rbp += *((rsp - 0x20));
    rbx += *((rsp - 0x28));
    rbx += rdx;
    r11 += *((rsp - 0x10));
    rbp += rcx;
    r9 ^= rbx;
    r11 += rax;
    rbx += *((rsp - 0x40));
    r13 ^= rbp;
    r9 = rotate_left64 (r9, 0x20);
    r8 ^= r11;
    r11 += *((rsp - 0x48));
    r13 = rotate_right64 (r13, 0x10);
    r15 += r9;
    r8 = rotate_left64 (r8, 0x20);
    r12 += r13;
    *((rsp - 0x60)) = r13;
    rdx ^= r15;
    r14 += r8;
    r13 = *((rsp - 0x68));
    rcx ^= r12;
    rdx = rotate_right64 (rdx, 0x18);
    rax ^= r14;
    rcx = rotate_left64 (rcx, 1);
    rbx += rdx;
    rax = rotate_right64 (rax, 0x18);
    r9 ^= rbx;
    r11 += rax;
    r9 = rotate_right64 (r9, 0x10);
    r8 ^= r11;
    r15 += r9;
    r8 = rotate_right64 (r8, 0x10);
    rdx ^= r15;
    *((rsp - 0x70)) = r15;
    r15 = *((rsp - 0x78));
    rdx = rotate_left64 (rdx, 1);
    r14 += r8;
    r10 += *((rsp - 0x18));
    rbp += *((rsp + 0x10));
    r10 += r13;
    rax ^= r14;
    rbx += *((rsp - 0x20));
    rsi ^= r10;
    r10 += *(rsp);
    rax = rotate_left64 (rax, 1);
    rsi = rotate_left64 (rsi, 0x20);
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    r10 += r13;
    rsi ^= r10;
    rsi = rotate_right64 (rsi, 0x10);
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += r13;
    r9 ^= rbp;
    rbp += *(rsp);
    r9 = rotate_left64 (r9, 0x20);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_right64 (r13, 0x18);
    rbp += r13;
    r9 ^= rbp;
    r9 = rotate_right64 (r9, 0x10);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_left64 (r13, 1);
    rbx += rcx;
    r11 += *((rsp + 8));
    r10 += *((rsp - 0x40));
    r8 ^= rbx;
    r11 += rdx;
    rbx += *((rsp + 0x18));
    *((rsp - 0x68)) = r13;
    r8 = rotate_left64 (r8, 0x20);
    rsi ^= r11;
    r11 += *((rsp - 0x50));
    r10 += rax;
    r15 += r8;
    rsi = rotate_left64 (rsi, 0x20);
    r13 = *((rsp - 0x60));
    rcx ^= r15;
    r12 += rsi;
    rcx = rotate_right64 (rcx, 0x18);
    rdx ^= r12;
    r13 ^= r10;
    rdx = rotate_right64 (rdx, 0x18);
    rbx += rcx;
    r13 = rotate_left64 (r13, 0x20);
    r8 ^= rbx;
    r11 += rdx;
    r8 = rotate_right64 (r8, 0x10);
    rsi ^= r11;
    r15 += r8;
    rsi = rotate_right64 (rsi, 0x10);
    rcx ^= r15;
    *((rsp - 0x78)) = r15;
    r15 = *((rsp - 0x70));
    r12 += rsi;
    rdx ^= r12;
    rcx = rotate_left64 (rcx, 1);
    r15 += r13;
    rdx = rotate_left64 (rdx, 1);
    rax ^= r15;
    r10 += *((rsp - 0x10));
    rbp += *((rsp - 0x30));
    rax = rotate_right64 (rax, 0x18);
    rbp += rcx;
    r10 += rax;
    r13 ^= r10;
    r13 = rotate_right64 (r13, 0x10);
    r15 += r13;
    r13 ^= rbp;
    rbp += *((rsp - 0x58));
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r12 += r13;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rcx = rotate_right64 (rcx, 0x18);
    rbp += rcx;
    r13 ^= rbp;
    r13 = rotate_right64 (r13, 0x10);
    *((rsp - 0x60)) = r13;
    rbx += *((rsp + 0x20));
    r12 += r13;
    rbx += rdx;
    rcx ^= r12;
    r13 = *((rsp - 0x68));
    r9 ^= rbx;
    rbx += *((rsp - 0x38));
    rcx = rotate_left64 (rcx, 1);
    r9 = rotate_left64 (r9, 0x20);
    r15 += r9;
    rdx ^= r15;
    rdx = rotate_right64 (rdx, 0x18);
    rbx += rdx;
    r9 ^= rbx;
    r11 += *((rsp - 0x18));
    r10 += *((rsp - 0x48));
    r9 = rotate_right64 (r9, 0x10);
    r11 += rax;
    r10 += r13;
    r15 += r9;
    r8 ^= r11;
    rsi ^= r10;
    r11 += *((rsp - 0x28));
    *((rsp - 0x70)) = r15;
    r8 = rotate_left64 (r8, 0x20);
    rdx ^= r15;
    rsi = rotate_left64 (rsi, 0x20);
    r15 = *((rsp - 0x78));
    r14 += r8;
    r10 += *((rsp - 8));
    rdx = rotate_left64 (rdx, 1);
    rax ^= r14;
    r15 += rsi;
    rax = rotate_right64 (rax, 0x18);
    r13 ^= r15;
    r11 += rax;
    r13 = rotate_right64 (r13, 0x18);
    r8 ^= r11;
    r10 += r13;
    r8 = rotate_right64 (r8, 0x10);
    rsi ^= r10;
    r14 += r8;
    rsi = rotate_right64 (rsi, 0x10);
    rax ^= r14;
    r15 += rsi;
    rax = rotate_left64 (rax, 1);
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += *((rsp - 0x28));
    rbx += *((rsp + 0x18));
    rbp += r13;
    rbx += rcx;
    r11 += *(rsp);
    r9 ^= rbp;
    r8 ^= rbx;
    rbp += *((rsp + 0x20));
    rbx += *((rsp - 0x10));
    r9 = rotate_left64 (r9, 0x20);
    r8 = rotate_left64 (r8, 0x20);
    r11 += rdx;
    r14 += r9;
    r15 += r8;
    rsi ^= r11;
    r13 ^= r14;
    rcx ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    rcx = rotate_right64 (rcx, 0x18);
    rbp += r13;
    rbx += rcx;
    r9 ^= rbp;
    r8 ^= rbx;
    r9 = rotate_right64 (r9, 0x10);
    r8 = rotate_right64 (r8, 0x10);
    r14 += r9;
    r15 += r8;
    r13 ^= r14;
    rcx ^= r15;
    *((rsp - 0x78)) = r15;
    r15 = *((rsp - 0x70));
    r13 = rotate_left64 (r13, 1);
    rcx = rotate_left64 (rcx, 1);
    *((rsp - 0x68)) = r13;
    rsi = rotate_left64 (rsi, 0x20);
    r13 = *((rsp - 0x60));
    r10 += *((rsp - 0x58));
    r12 += rsi;
    r11 += *((rsp - 0x40));
    r10 += rax;
    rdx ^= r12;
    rbp += *((rsp + 8));
    r13 ^= r10;
    r10 += *((rsp - 0x18));
    rdx = rotate_right64 (rdx, 0x18);
    rbp += rcx;
    r13 = rotate_left64 (r13, 0x20);
    r11 += rdx;
    r15 += r13;
    rsi ^= r11;
    rax ^= r15;
    rsi = rotate_right64 (rsi, 0x10);
    rax = rotate_right64 (rax, 0x18);
    r12 += rsi;
    r10 += rax;
    rdx ^= r12;
    r13 ^= r10;
    rdx = rotate_left64 (rdx, 1);
    r13 = rotate_right64 (r13, 0x10);
    r15 += r13;
    r13 ^= rbp;
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r12 += r13;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rcx = rotate_right64 (rcx, 0x18);
    rbp += *((rsp - 0x48));
    rbx += *((rsp + 0x10));
    rbx += rdx;
    r11 += *((rsp - 0x50));
    rbp += rcx;
    r9 ^= rbx;
    r11 += rax;
    rbx += *((rsp - 0x20));
    r13 ^= rbp;
    r9 = rotate_left64 (r9, 0x20);
    r8 ^= r11;
    r11 += *((rsp - 0x38));
    r13 = rotate_right64 (r13, 0x10);
    r15 += r9;
    r8 = rotate_left64 (r8, 0x20);
    r12 += r13;
    *((rsp - 0x60)) = r13;
    rdx ^= r15;
    r14 += r8;
    rcx ^= r12;
    r13 = *((rsp - 0x68));
    rdx = rotate_right64 (rdx, 0x18);
    rax ^= r14;
    rcx = rotate_left64 (rcx, 1);
    rbx += rdx;
    rax = rotate_right64 (rax, 0x18);
    r9 ^= rbx;
    r11 += rax;
    r9 = rotate_right64 (r9, 0x10);
    r8 ^= r11;
    r15 += r9;
    r8 = rotate_right64 (r8, 0x10);
    rdx ^= r15;
    *((rsp - 0x70)) = r15;
    r15 = *((rsp - 0x78));
    rdx = rotate_left64 (rdx, 1);
    r14 += r8;
    r10 += *((rsp - 8));
    r10 += r13;
    rax ^= r14;
    rsi ^= r10;
    r10 += *((rsp - 0x30));
    rbp += *((rsp - 8));
    rax = rotate_left64 (rax, 1);
    rsi = rotate_left64 (rsi, 0x20);
    rbx += *((rsp - 0x18));
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    r10 += r13;
    rsi ^= r10;
    rsi = rotate_right64 (rsi, 0x10);
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += r13;
    r9 ^= rbp;
    rbp += *((rsp - 0x48));
    r9 = rotate_left64 (r9, 0x20);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_right64 (r13, 0x18);
    rbp += r13;
    r9 ^= rbp;
    r9 = rotate_right64 (r9, 0x10);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_left64 (r13, 1);
    rbx += rcx;
    r11 += *((rsp - 0x20));
    r10 += *((rsp - 0x50));
    r8 ^= rbx;
    r11 += rdx;
    rbx += *((rsp - 0x38));
    *((rsp - 0x68)) = r13;
    r8 = rotate_left64 (r8, 0x20);
    rsi ^= r11;
    r11 += *((rsp - 0x28));
    r10 += rax;
    r15 += r8;
    rsi = rotate_left64 (rsi, 0x20);
    r13 = *((rsp - 0x60));
    rcx ^= r15;
    r12 += rsi;
    rcx = rotate_right64 (rcx, 0x18);
    rdx ^= r12;
    r13 ^= r10;
    rdx = rotate_right64 (rdx, 0x18);
    rbx += rcx;
    r13 = rotate_left64 (r13, 0x20);
    r8 ^= rbx;
    r11 += rdx;
    r8 = rotate_right64 (r8, 0x10);
    rsi ^= r11;
    r15 += r8;
    rsi = rotate_right64 (rsi, 0x10);
    *((rsp - 0x78)) = r15;
    rcx ^= r15;
    r15 = *((rsp - 0x70));
    r12 += rsi;
    rdx ^= r12;
    rcx = rotate_left64 (rcx, 1);
    r15 += r13;
    rdx = rotate_left64 (rdx, 1);
    rax ^= r15;
    r10 += *((rsp - 0x30));
    rbp += *((rsp + 0x20));
    rax = rotate_right64 (rax, 0x18);
    rbp += rcx;
    rbx += *((rsp - 0x10));
    r10 += rax;
    rbx += rdx;
    r13 ^= r10;
    r9 ^= rbx;
    rbx += *((rsp + 0x18));
    r13 = rotate_right64 (r13, 0x10);
    r9 = rotate_left64 (r9, 0x20);
    r15 += r13;
    r13 ^= rbp;
    rbp += *(rsp);
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r15 += r9;
    r12 += r13;
    rdx ^= r15;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rdx = rotate_right64 (rdx, 0x18);
    rcx = rotate_right64 (rcx, 0x18);
    rbx += rdx;
    rbp += rcx;
    r13 ^= rbp;
    r13 = rotate_right64 (r13, 0x10);
    r12 += r13;
    *((rsp - 0x60)) = r13;
    r13 = *((rsp - 0x68));
    rcx ^= r12;
    rcx = rotate_left64 (rcx, 1);
    r9 ^= rbx;
    r11 += *((rsp - 0x40));
    r10 += *((rsp + 0x10));
    r9 = rotate_right64 (r9, 0x10);
    r11 += rax;
    r10 += r13;
    r15 += r9;
    r8 ^= r11;
    rsi ^= r10;
    r11 += *((rsp + 8));
    *((rsp - 0x70)) = r15;
    r8 = rotate_left64 (r8, 0x20);
    rdx ^= r15;
    rsi = rotate_left64 (rsi, 0x20);
    r15 = *((rsp - 0x78));
    r14 += r8;
    r10 += *((rsp - 0x58));
    rdx = rotate_left64 (rdx, 1);
    rax ^= r14;
    r15 += rsi;
    rax = rotate_right64 (rax, 0x18);
    r13 ^= r15;
    r11 += rax;
    r13 = rotate_right64 (r13, 0x18);
    r8 ^= r11;
    r10 += r13;
    r8 = rotate_right64 (r8, 0x10);
    rsi ^= r10;
    r14 += r8;
    rsi = rotate_right64 (rsi, 0x10);
    rax ^= r14;
    r15 += rsi;
    rax = rotate_left64 (rax, 1);
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += *((rsp - 0x58));
    rbx += *((rsp - 0x48));
    rbp += r13;
    rbx += rcx;
    r11 += *((rsp - 0x38));
    r9 ^= rbp;
    r8 ^= rbx;
    rbp += *((rsp - 0x50));
    rbx += *((rsp - 0x40));
    r9 = rotate_left64 (r9, 0x20);
    r8 = rotate_left64 (r8, 0x20);
    r11 += rdx;
    r14 += r9;
    r15 += r8;
    rsi ^= r11;
    r13 ^= r14;
    rcx ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    rcx = rotate_right64 (rcx, 0x18);
    rbp += r13;
    rbx += rcx;
    r9 ^= rbp;
    r8 ^= rbx;
    r9 = rotate_right64 (r9, 0x10);
    r8 = rotate_right64 (r8, 0x10);
    r14 += r9;
    r15 += r8;
    r13 ^= r14;
    rcx ^= r15;
    *((rsp - 0x78)) = r15;
    r13 = rotate_left64 (r13, 1);
    rcx = rotate_left64 (rcx, 1);
    *((rsp - 0x68)) = r13;
    rsi = rotate_left64 (rsi, 0x20);
    r11 += *((rsp - 0x30));
    r10 += *((rsp - 0x28));
    r13 = *((rsp - 0x60));
    r12 += rsi;
    r10 += rax;
    r15 = *((rsp - 0x70));
    rdx ^= r12;
    rbp += *((rsp - 0x18));
    r13 ^= r10;
    r10 += *((rsp - 0x20));
    rdx = rotate_right64 (rdx, 0x18);
    rbp += rcx;
    r13 = rotate_left64 (r13, 0x20);
    r11 += rdx;
    r15 += r13;
    rsi ^= r11;
    rax ^= r15;
    rsi = rotate_right64 (rsi, 0x10);
    rax = rotate_right64 (rax, 0x18);
    r12 += rsi;
    r10 += rax;
    rdx ^= r12;
    r13 ^= r10;
    rdx = rotate_left64 (rdx, 1);
    r13 = rotate_right64 (r13, 0x10);
    r15 += r13;
    r13 ^= rbp;
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r15;
    r12 += r13;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rcx = rotate_right64 (rcx, 0x18);
    rbp += *((rsp - 0x10));
    rbx += *((rsp - 8));
    rbx += rdx;
    r11 += *((rsp + 8));
    rbp += rcx;
    r9 ^= rbx;
    r11 += rax;
    rbx += *(rsp);
    r13 ^= rbp;
    r9 = rotate_left64 (r9, 0x20);
    r8 ^= r11;
    r11 += *((rsp + 0x10));
    r13 = rotate_right64 (r13, 0x10);
    r15 += r9;
    r8 = rotate_left64 (r8, 0x20);
    r12 += r13;
    *((rsp - 0x60)) = r13;
    rdx ^= r15;
    r14 += r8;
    r13 = *((rsp - 0x68));
    rcx ^= r12;
    rdx = rotate_right64 (rdx, 0x18);
    rax ^= r14;
    rcx = rotate_left64 (rcx, 1);
    rbx += rdx;
    rax = rotate_right64 (rax, 0x18);
    r9 ^= rbx;
    r11 += rax;
    r9 = rotate_right64 (r9, 0x10);
    r8 ^= r11;
    r15 += r9;
    r8 = rotate_right64 (r8, 0x10);
    rdx ^= r15;
    *((rsp - 0x70)) = r15;
    r15 = *((rsp - 0x78));
    rdx = rotate_left64 (rdx, 1);
    r14 += r8;
    r10 += *((rsp + 0x18));
    rbp += *((rsp + 0x18));
    r10 += r13;
    rax ^= r14;
    rbx += *((rsp - 0x38));
    rsi ^= r10;
    r10 += *((rsp + 0x20));
    rax = rotate_left64 (rax, 1);
    rsi = rotate_left64 (rsi, 0x20);
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_right64 (r13, 0x18);
    r10 += r13;
    rsi ^= r10;
    rsi = rotate_right64 (rsi, 0x10);
    r15 += rsi;
    r13 ^= r15;
    r13 = rotate_left64 (r13, 1);
    rbp += r13;
    r9 ^= rbp;
    rbp += *((rsp - 8));
    r9 = rotate_left64 (r9, 0x20);
    r14 += r9;
    r13 ^= r14;
    r13 = rotate_right64 (r13, 0x18);
    rbp += r13;
    r9 ^= rbp;
    r9 = rotate_right64 (r9, 0x10);
    r14 += r9;
    r13 ^= r14;
    *((rsp - 0x78)) = r14;
    r14 = r13;
    r13 = *((rsp - 0x60));
    r14 = rotate_left64 (r14, 1);
    rbx += rcx;
    r11 += *((rsp - 0x10));
    r10 += *((rsp + 0x10));
    r11 += rdx;
    r8 ^= rbx;
    rbx += *((rsp - 0x18));
    r10 += rax;
    rsi ^= r11;
    r8 = rotate_left64 (r8, 0x20);
    r11 += *((rsp + 0x20));
    r13 ^= r10;
    rsi = rotate_left64 (rsi, 0x20);
    r15 += r8;
    *((rsp - 0x68)) = r14;
    r13 = rotate_left64 (r13, 0x20);
    r12 += rsi;
    rcx ^= r15;
    r14 = *((rsp - 0x70));
    rdx ^= r12;
    rcx = rotate_right64 (rcx, 0x18);
    rdx = rotate_right64 (rdx, 0x18);
    rbx += rcx;
    r14 += r13;
    r11 += rdx;
    r8 ^= rbx;
    rsi ^= r11;
    r8 = rotate_right64 (r8, 0x10);
    rsi = rotate_right64 (rsi, 0x10);
    r15 += r8;
    r12 += rsi;
    rcx ^= r15;
    rdx ^= r12;
    rcx = rotate_left64 (rcx, 1);
    rdx = rotate_left64 (rdx, 1);
    rax ^= r14;
    r10 += *((rsp - 0x28));
    rbp += *((rsp - 0x50));
    rax = rotate_right64 (rax, 0x18);
    rbp += rcx;
    r10 += rax;
    r13 ^= r10;
    r13 = rotate_right64 (r13, 0x10);
    r14 += r13;
    r13 ^= rbp;
    rbp += *((rsp + 8));
    r13 = rotate_left64 (r13, 0x20);
    rax ^= r14;
    r12 += r13;
    rax = rotate_left64 (rax, 1);
    rcx ^= r12;
    rcx = rotate_right64 (rcx, 0x18);
    rbp += rcx;
    r13 ^= rbp;
    *((rsp + 0x28)) = rbp;
    r13 = rotate_right64 (r13, 0x10);
    *((rsp + 0xa0)) = r13;
    rbx += *((rsp - 0x58));
    r12 += r13;
    rbx += rdx;
    *((rsp + 0x78)) = r12;
    r12 ^= rcx;
    rcx = *((rsp - 0x78));
    r9 ^= rbx;
    rbx += *((rsp - 0x48));
    r12 = rotate_left64 (r12, 1);
    r9 = rotate_left64 (r9, 0x20);
    *((rsp + 0x50)) = r12;
    r14 += r9;
    rdx ^= r14;
    rdx = rotate_right64 (rdx, 0x18);
    rbx += rdx;
    *((rsp + 0x30)) = rbx;
    rbx ^= r9;
    r11 += *(rsp);
    r11 += rax;
    rbx = rotate_right64 (rbx, 0x10);
    r8 ^= r11;
    r14 += rbx;
    r11 += *((rsp - 0x20));
    *((rsp + 0x88)) = rbx;
    r8 = rotate_left64 (r8, 0x20);
    *((rsp + 0x80)) = r14;
    r14 ^= rdx;
    rdx = rcx + r8;
    r14 = rotate_left64 (r14, 1);
    rax ^= rdx;
    *((rsp + 0x58)) = r14;
    rax = rotate_right64 (rax, 0x18);
    r14 = r11 + rax;
    *((rsp + 0x38)) = r14;
    r14 ^= r8;
    r14 = rotate_right64 (r14, 0x10);
    *((rsp + 0x90)) = r14;
    r14 += rdx;
    rdx = *((rsp - 0x30));
    rax ^= r14;
    *((rsp + 0x68)) = r14;
    rax = rotate_left64 (rax, 1);
    rdx += r10;
    *((rsp + 0x60)) = rax;
    rax = *((rsp - 0x68));
    rdx += rax;
    rsi ^= rdx;
    rdx += *((rsp - 0x40));
    rsi = rotate_left64 (rsi, 0x20);
    r15 += rsi;
    rax ^= r15;
    r13 = rax;
    r13 = rotate_right64 (r13, 0x18);
    rax = rdx + r13;
    rsi ^= rax;
    *((rsp + 0x40)) = rax;
    eax = 0;
    rsi = rotate_right64 (rsi, 0x10);
    *((rsp + 0x98)) = rsi;
    rsi += r15;
    *((rsp + 0x70)) = rsi;
    rsi ^= r13;
    rsi = rotate_left64 (rsi, 1);
    *((rsp + 0x48)) = rsi;
    while (rax != 8) {
        rbp = *((rsp + rax*8 + 0x28));
        r14 = *((rsp + rax*8 + 0x68));
        rbp ^= r14;
        *((rdi + rax*8)) ^= rbp;
        rax++;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x404c20 */
#include <stdint.h>
 
int64_t fcn_00404c20 (int64_t arg1, int64_t arg2, uint32_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r14 = rdi + 0x60;
    r13 = rdx;
    r12 = rsi;
    rbx = rdi;
    r15 = *((rdi + 0xe0));
    rbp -= r15;
    rdi = r14 + r15;
    if (rbp >= rdx) {
label_0:
        memcpy (rdi, r12, r13);
        *((rbx + 0xe0)) += r13;
        return;
    }
    *((rbx + 0xe0)) = 0;
    r13 = r15 + r13 - 0x80;
    memcpy (rdi, rsi, rbp);
    rax = *((rbx + 0x40));
    rax -= 0xffffffffffffff80;
    *((rbx + 0x40)) = rax;
    al = (rax <= 0x7f) ? 1 : 0;
    rbp += r12;
    eax = (int32_t) al;
    *((rbx + 0x48)) += rax;
    fcn_00403680 (rbx, r14);
    if (r13 <= 0x80) {
        goto label_1;
    }
    r15 = r13 - 0x81;
    r15 >>= 7;
    r12 = r15 + 1;
    r12 <<= 7;
    r12 += rbp;
    do {
        rax = *((rbx + 0x40));
        rax -= 0xffffffffffffff80;
        *((rbx + 0x40)) = rax;
        al = (rax <= 0x7f) ? 1 : 0;
        rbp -= 0xffffffffffffff80;
        eax = (int32_t) al;
        *((rbx + 0x48)) += rax;
        fcn_00403680 (rbx, rbp);
    } while (r12 != rbp);
    r15 = -r15;
    rdi = *((rbx + 0xe0));
    r15 <<= 7;
    r13 = r13 + r15 - 0x80;
    rdi += r14;
    goto label_0;
label_1:
    rdi = *((rbx + 0xe0));
    r12 = rbp;
    rdi += r14;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x404d50 */
#include <stdint.h>
 
int64_t fcn_00404d50 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    *((rdi + 0x40)) = 0;
    r8 = rdi;
    rdi = rdi + 0x48;
    rdx = 0x6a09e667f3bcc908;
    *((rdi + 0xa8)) = 0;
    eax = r8d;
    rdi &= 0xfffffffffffffff8;
    eax -= edi;
    ecx = rax + 0xf8;
    eax = 0;
    ecx >>= 3;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    *(r8) = rdx;
    rax = 0xbb67ae8584caa73b;
    *((r8 + 8)) = rax;
    rax = 0x3c6ef372fe94f82b;
    *((r8 + 0x10)) = rax;
    rax = 0xa54ff53a5f1d36f1;
    *((r8 + 0x18)) = rax;
    rax = 0x510e527fade682d1;
    *((r8 + 0x20)) = rax;
    rax = 0x9b05688c2b3e6c1f;
    *((r8 + 0x28)) = rax;
    rax = 0x1f83d9abfb41bd6b;
    *((r8 + 0x30)) = rax;
    rax = 0x5be0cd19137e2179;
    *((r8 + 0x38)) = rax;
    eax = 0;
    while (rax != 8) {
        rdx = *((r8 + rax*8));
        rdx ^= *((rsi + rax*8));
        *((r8 + rax*8)) = rdx;
        rax++;
    }
    eax = *(rsi);
    *((r8 + 0xe8)) = rax;
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x404e20 */
#include <stdint.h>
 
uint64_t fcn_00404e20 (int64_t arg1, int64_t arg2) {
    int64_t var_1h;
    int64_t var_9h;
    int64_t var_11h;
    int64_t var_12h;
    int64_t var_1ah;
    int64_t var_1eh;
    int64_t var_20h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rax = rsi - 1;
    if (rax <= 0x3f) {
        xmm0 = 0;
        eax = 0;
        *(rsp) = sil;
        *((rsp + 1)) = 0x10100;
        *((rsp + 9)) = 0;
        *((rsp + 0x11)) = 0;
        *((rsp + 0x12)) = 0;
        *((rsp + 0x1a)) = 0;
        *((rsp + 0x1e)) = ax;
        *((rsp + 0x20)) = xmm0;
        *((rsp + 0x30)) = xmm0;
        fcn_00404d50 (rdi, rsp);
        return rax;
    }
    eax = 0xffffffff;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x404e90 */
#include <stdint.h>
 
uint64_t fcn_00404e90 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_1h;
    int64_t var_2h;
    int64_t var_ah;
    int64_t var_12h;
    int64_t var_1ah;
    int64_t var_1eh;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    rax = rsi - 1;
    if (rax > 0x3f) {
        goto label_0;
    }
    rax = rcx - 1;
    if (rax > 0x3f) {
        goto label_0;
    }
    if (rdx == 0) {
        goto label_0;
    }
    eax = 0;
    xmm0 = 0;
    r9 = rcx;
    r10 = rdx;
    *(rsp) = sil;
    *((rsp + 1)) = cl;
    *((rsp + 2)) = 0x101;
    *((rsp + 0xa)) = 0;
    *((rsp + 0x12)) = 0;
    *((rsp + 0x1a)) = 0;
    *((rsp + 0x1e)) = ax;
    *((rsp + 0x20)) = xmm0;
    *((rsp + 0x30)) = xmm0;
    eax = fcn_00404d50 (rdi, rsp);
    if (eax < 0) {
        goto label_1;
    }
    rbx = rsp + 0x40;
    eax = 0;
    ecx = 0x10;
    rdx = r9;
    rdi = rbx;
    rsi = r10;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    ecx = 0x80;
    rdi = rbx;
    memcpy_chk ();
    fcn_00404c20 (rbp, rbx, 0x80);
    eax = memset (rbx, 0, 0x80);
    eax = 0;
    do {
        return rax;
label_1:
        eax = 0xffffffff;
    } while (1);
label_0:
    eax |= 0xffffffff;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x404f80 */
#include <stdint.h>
 
uint32_t fcn_00404f80 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    if (rdx != 0) {
        eax = fcn_00404c20 (rdi, rsi, rdx);
        eax = 0;
        return eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x404fa0 */
#include <stdint.h>
 
int64_t fcn_00404fa0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    xmm0 = 0;
    *(rsp) = xmm0;
    *((rsp + 0x10)) = xmm0;
    *((rsp + 0x20)) = xmm0;
    *((rsp + 0x30)) = xmm0;
    if (rsi == 0) {
        goto label_1;
    }
    if (*((rdi + 0xe8)) > rdx) {
        goto label_1;
    }
    if (*((rdi + 0x50)) != 0) {
        goto label_1;
    }
    rax = *((rdi + 0xe0));
    rdx = *((rdi + 0xe0));
    rdx += *((rdi + 0x40));
    *((rdi + 0x48)) += 0;
    *((rdi + 0x40)) = rdx;
    if (*((rdi + 0xf0)) != 0) {
        goto label_2;
    }
label_0:
    r12 = rdi + 0x60;
    rbx = rdi;
    *((rdi + 0x50)) = 0xffffffffffffffff;
    rdx -= rax;
    memset (r12 + rax, 0, 0x80);
    fcn_00403680 (rbx, r12);
    rcx = rbx;
    rax = rsp;
    rdi = rsp + 0x40;
    do {
        rdx = *(rcx);
        rax += 8;
        rcx += 8;
        rsi = rdx;
        *((rax - 8)) = dl;
        rsi >>= 8;
        *((rax - 7)) = sil;
        rsi = rdx;
        rsi >>= 0x10;
        *((rax - 6)) = sil;
        rsi = rdx;
        rsi >>= 0x18;
        *((rax - 5)) = sil;
        rsi = rdx;
        rsi >>= 0x20;
        *((rax - 4)) = sil;
        rsi = rdx;
        rsi >>= 0x28;
        *((rax - 3)) = sil;
        rsi = rdx;
        rdx >>= 0x38;
        rsi >>= 0x30;
        *((rax - 1)) = dl;
        *((rax - 2)) = sil;
    } while (rax != rdi);
    memcpy (rbp, rsp, *((rbx + 0xe8)));
    eax = memset (rsp, 0, 0x40);
    eax = 0;
    do {
        return rax;
label_2:
        *((rdi + 0x58)) = 0xffffffffffffffff;
        goto label_0;
label_1:
        eax = 0xffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4051d0 */
#include <stdint.h>
 
uint64_t fcn_004051d0 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = rsi;
    r14 = rdx;
    rax = malloc (0x8000);
    if (rax == 0) {
        goto label_2;
    }
    r12 = rax;
    r13d = 0x8000;
    rax = fcn_00404e20 (rsp, r14);
label_0:
    ebx = 0;
    while (rbx != 0x8000) {
        rdi = rbp;
        if (rax == 0) {
            goto label_3;
        }
        eax = feof (rdi);
        if (eax != 0) {
            goto label_4;
        }
        rdx -= rbx;
        rax = fread (r12 + rbx, 1, r13, rbp);
        rbx += rax;
    }
    fcn_00404f80 (rsp, r12, 0x8000);
    goto label_0;
label_3:
    eax = ferror (rdi);
    if (eax != 0) {
        goto label_5;
    }
label_4:
    while (1) {
        ebp = 0;
        fcn_00404fa0 (rsp, r15, r14);
label_5:
        free (r12);
label_1:
        eax = ebp;
        return rax;
        fcn_00404f80 (rsp, r12, rbx);
    }
label_2:
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4052d0 */
#include <stdint.h>
 
uint64_t fcn_004052d0 (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    char * s2;
    uint32_t var_17h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r15 = rsi;
    r13 = rcx;
    *((rsp + 8)) = rdi;
    *((rsp + 0x18)) = rdx;
    rax = strlen (rdi);
    r14 = *(r15);
    *(rsp) = 0xffffffffffffffff;
    if (r14 == 0) {
        goto label_3;
    }
    r12 = rax;
    *((rsp + 0x17)) = 0;
    ebx = 0;
    goto label_1;
label_0:
    rax = *((rsp + 0x18));
    if (rax == 0) {
        goto label_4;
    }
    rdi *= r13;
    rdi += rax;
    eax = memcmp (*(rsp), rbp, r13);
    ecx = 1;
    eax = *((rsp + 0x17));
    if (eax != 0) {
        eax = ecx;
    }
    *((rsp + 0x17)) = al;
    do {
label_2:
        rbx++;
        rbp += r13;
        r14 = *((r15 + rbx*8));
        if (r14 == 0) {
            goto label_5;
        }
label_1:
        eax = strncmp (r14, *((rsp + 8)), r12);
    } while (eax != 0);
    rax = strlen (r14);
    if (rax == r12) {
        goto label_6;
    }
    if (*(rsp) != -1) {
        goto label_0;
    }
    *(rsp) = rbx;
    rbx++;
    rbp += r13;
    r14 = *((r15 + rbx*8));
    if (r14 != 0) {
        goto label_1;
    }
label_5:
    rax = 0xfffffffffffffffe;
    if (*((rsp + 0x17)) == 0) {
        rax = *(rsp);
    }
    *(rsp) = rax;
    do {
label_3:
        rax = *(rsp);
        return rax;
label_4:
        *((rsp + 0x17)) = 1;
        goto label_2;
label_6:
        *(rsp) = rbx;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4053f0 */
#include <stdint.h>
 
uint64_t fcn_004053f0 (int64_t arg1, int64_t arg2, uint32_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    edx = 5;
    r12 = rsi;
    if (rdx == -1) {
        goto label_0;
    }
    rax = dcgettext (0, "ambiguous argument %s for %s");
    rbx = rax;
    do {
        rax = fcn_004073f0 (1, rbp);
        rax = fcn_004070e0 (0, 8, r12);
        r8 = rbp;
        rdx = rbx;
        esi = 0;
        rcx = rax;
        edi = 0;
        eax = 0;
invalid_funccall(); //        void (*0x401a20)() ();
label_0:
        rax = dcgettext (0, "invalid argument %s for %s");
        rbx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x405470 */
#include <stdint.h>
 
uint64_t fcn_00405470 (int64_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    r15 = rdi;
    r14d = 0;
    r13 = rdx;
    edx = 5;
    rbx = stderr;
    rax = dcgettext (0, "Valid arguments are:");
    rdi = rax;
    rsi = rbx;
    ebx = 0;
    fputs_unlocked ();
    r12 = *(r15);
    if (r12 != 0) {
        goto label_1;
    }
    goto label_2;
    do {
label_0:
        rbx++;
        r14 = rbp;
        rbp += r13;
        rax = fcn_00407410 (r12);
        edx = "\n  - %s";
        esi = 1;
        rdi = stderr;
        rcx = rax;
        eax = 0;
        fprintf_chk ();
        r12 = *((r15 + rbx*8));
        if (r12 == 0) {
            goto label_2;
        }
INVALID_JUMP;
    } while (rbx == 0);
    eax = memcmp (r14, rbp, r13);
    if (eax != 0) {
        goto label_0;
    }
    rbx++;
    rbp += r13;
    rax = fcn_00407410 (r12);
    edx = ", %s";
    esi = 1;
    rdi = stderr;
    rcx = rax;
    eax = 0;
    fprintf_chk ();
    r12 = *((r15 + rbx*8));
    if (r12 != 0) {
        goto label_1;
    }
label_2:
    rdi = stderr;
    rax = *((rdi + 0x28));
    if (rax < *((rdi + 0x30))) {
        rdx = rax + 1;
        *((rdi + 0x28)) = rdx;
        *(rax) = 0xa;
        return rax;
    }
    esi = 0xa;
    return overflow ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x405720 */
#include <stdint.h>
 
uint32_t fcn_00405720 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    if (rdi != 0) {
        ebx = esi;
        eax = fileno (rdi);
        ecx = ebx;
        edx = 0;
        esi = 0;
        edi = eax;
invalid_funccall(); //        void (*0x4018c0)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x405750 */
#include <stdint.h>
 
uint64_t fcn_00405750 (int64_t arg2, const char * filename) {
    rsi = arg2;
    rdi = filename;
    rax = fopen (rdi, rsi);
    rbx = rax;
    if (rax == 0) {
        goto label_0;
    }
    eax = fileno (rax);
    while (rax != 0) {
label_0:
        rax = rbx;
        return rax;
        eax = fcn_00407430 (eax, rsi, rdx);
        r12d = eax;
        if (eax < 0) {
            goto label_1;
        }
        eax = fcn_004085e0 (rbx);
        if (eax != 0) {
            goto label_2;
        }
        rsi = rbp;
        edi = r12d;
        rax = fdopen ();
        rbx = rax;
    }
label_2:
    rax = errno_location ();
    ebp = *(rax);
    rbx = rax;
    close (r12d);
    *(rbx) = ebp;
    ebx = 0;
    goto label_0;
label_1:
    rax = errno_location ();
    ebx = 0;
    r12d = *(rax);
    fcn_004085e0 (rbx);
    *(rbp) = r12d;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4057f0 */
#include <stdint.h>
 
uint64_t fcn_004057f0 (char ** arg1) {
    rdi = arg1;
    if (rdi != 0) {
        rbx = rdi;
        rax = strrchr (rdi, 0x2f);
        if (rax != 0) {
            r8 = rax + 1;
            rdx = r8;
            rdx -= rbx;
            if (rdx <= 6) {
                goto label_0;
            }
            rsi = rax - 6;
            edi = "/.libs/";
            ecx = 7;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            dl = (rdx > 6) ? 1 : 0;
            if (dl != 0) {
                goto label_0;
            }
            edi = 0x40ac78;
            ecx = 3;
            rsi = r8;
            rbx = r8;
            __asm ("repe cmpsb byte [rsi], byte [rdi]");
            dl = (dl > 0) ? 1 : 0;
            if (dl != 0) {
                goto label_0;
            }
            rbx = rax + 4;
            *(obj.__progname) = rbx;
        }
label_0:
        *(0x0060e338) = rbx;
        *(obj.program_invocation_name) = rbx;
        return rax;
    }
    fwrite ("A NULL argv[0] was passed through an exec system call.\n", 1, 0x37, *(obj.stderr));
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x405890 */
#include <stdint.h>
 
uint64_t fcn_00405890 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    edx = 5;
    r12d = esi;
    rsi = rdi;
    rax = dcgettext (0, rsi);
    rbx = rax;
    while (1) {
label_0:
        rax = rbx;
        return rax;
        rax = fcn_00409750 ();
        edx = *(rax);
        edx &= 0xffffffdf;
        if (dl != 0x55) {
            goto label_1;
        }
        edx = *((rax + 1));
        edx &= 0xffffffdf;
        if (dl != 0x54) {
            goto label_2;
        }
        edx = *((rax + 2));
        edx &= 0xffffffdf;
        if (dl != 0x46) {
            goto label_2;
        }
        if (*((rax + 3)) != 0x2d) {
            goto label_2;
        }
        if (*((rax + 4)) != 0x38) {
            goto label_2;
        }
        if (*((rax + 5)) != 0) {
            goto label_2;
        }
        eax = 0x40ac7e;
        ebx = 0x40ac89;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
    }
label_1:
    if (dl == 0x47) {
        edx = *((rax + 1));
        edx &= 0xffffffdf;
        if (dl != 0x42) {
            goto label_2;
        }
        if (*((rax + 2)) != 0x31) {
            goto label_2;
        }
        if (*((rax + 3)) != 0x38) {
            goto label_2;
        }
        if (*((rax + 4)) != 0x30) {
            goto label_2;
        }
        if (*((rax + 5)) != 0x33) {
            goto label_2;
        }
        if (*((rax + 6)) != 0x30) {
            goto label_2;
        }
        if (*((rax + 7)) != 0) {
            goto label_2;
        }
        eax = 0x40ac82;
        ebx = 0x40ac85;
        if (*(rbx) != 0x60) {
            rbx = rax;
        }
        goto label_0;
    }
label_2:
    eax = 0x40c50f;
    ebx = 0x40ac7c;
    if (r12d != 9) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x405990 */
#include <stdint.h>
 
uint64_t fcn_00405990 (int64_t arg_e8h_3, uint32_t arg_e8h_2, int64_t arg_e8h, char * arg_e0h, int64_t arg1, char * arg2, char * arg3, size_t * arg4, int64_t arg5, int64_t arg6) {
    size_t * var_8h;
    size_t * var_10h;
    uint32_t var_1fh;
    char * s;
    size_t n;
    size_t * var_30h;
    size_t * var_38h;
    size_t var_40h;
    size_t var_48h;
    void * s2;
    char * var_58h;
    uint32_t var_60h;
    int64_t var_68h;
    uint32_t var_6ch;
    char * var_6dh;
    int64_t var_6eh;
    int64_t var_6fh;
    int64_t var_70h;
    int64_t var_78h;
    wint_t wc;
    mbstate_t * ps;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    do {
        /* [13] -r-x section size 33384 named .text */
        abort ();
label_5:
        r15 = rdi;
        r14 = rsi;
        r13d = r8d;
        *((rsp + 0x20)) = rdx;
        *((rsp + 8)) = rcx;
        *((rsp + 0x68)) = r9d;
        rax = ctype_get_mb_cur_max ();
        ebp &= 2;
        *((rsp + 0x60)) = rax;
        *(rsp + 0x6c) = (ebp != 0) ? 1 : 0;
    } while (r13d > 0xa);
    eax = r13d;
    r11 = *((rsp + 8));
    /* switch table (11 cases) at 0x40ace0 */
label_30:
    *((rsp + 0x1f)) = 1;
    r10d = 0;
    ebx = 0;
    r13d = 2;
    *((rsp + 0x6d)) = 0;
    *((rsp + 0x58)) = 0;
    *((rsp + 0x6c)) = 1;
    *((rsp + 8)) = 0;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x50)) = 0x40c50f;
label_21:
    r9 = r11;
    r12d = 0;
    r11d = r13d;
    do {
label_28:
        r13b = (r9 != r12) ? 1 : 0;
        if (r9 == -1) {
            rax = *((rsp + 0x20));
            r13b = (*((rax + r12)) != 0) ? 1 : 0;
        }
        if (r13b == 0) {
            goto label_47;
        }
        rdi = *((rsp + 0x20));
        al = (r11d != 2) ? 1 : 0;
        al &= *((rsp + 8));
        r8 = rdi + r12;
        *((rsp + 0x10)) = al;
        if (al == 0) {
            goto label_48;
        }
        rax = *((rsp + 0x28));
        if (rax == 0) {
            goto label_49;
        }
        rbp = r12 + rax;
        if (r9 == -1) {
            if (rax <= 1) {
                goto label_50;
            }
            *((rsp + 0x40)) = r11d;
            *((rsp + 0x38)) = r10b;
            *((rsp + 0x30)) = r8;
            rax = strlen (rdi);
            r11d = *((rsp + 0x40));
            r10d = *((rsp + 0x38));
            r8 = *((rsp + 0x30));
            r9 = rax;
        }
label_50:
        if (rbp > r9) {
            goto label_49;
        }
        rdi = r8;
        *((rsp + 0x48)) = r11d;
        *((rsp + 0x40)) = r9;
        *((rsp + 0x38)) = r10b;
        *((rsp + 0x30)) = r8;
        eax = memcmp (rdi, *((rsp + 0x50)), *((rsp + 0x28)));
        r8 = *((rsp + 0x30));
        r10d = *((rsp + 0x38));
        r9 = *((rsp + 0x40));
        r11d = *((rsp + 0x48));
        if (eax != 0) {
            goto label_49;
        }
        if (*((rsp + 0x6c)) != 0) {
            goto label_51;
        }
        ebp = *(r8);
        if (bpl > 0x7e) {
            goto label_52;
        }
        eax = (int32_t) bpl;
        /* switch table (127 cases) at 0x40ad38 */
        *((rsp + 0x10)) = 0;
        al = (r9 != 1) ? 1 : 0;
        if (r9 == -1) {
            rax = *((rsp + 0x20));
            al = (*((rax + 1)) != 0) ? 1 : 0;
        }
        dl = (r11d == 2) ? 1 : 0;
        if (al != 0) {
            goto label_7;
        }
label_17:
        if (r12 != 0) {
            goto label_7;
        }
label_18:
        if (*((rsp + 0x6c)) != 0) {
            if (dl != 0) {
                goto label_53;
            }
        }
label_2:
        eax = *((rsp + 8));
        eax ^= 1;
        eax |= edx;
        eax ^= 1;
        al |= *((rsp + 0x6c));
        if (al == 0) {
            goto label_11;
        }
label_24:
        eax = 0;
label_10:
        if (*((rsp + 0xd0)) == 0) {
            goto label_11;
        }
        edx = ebp;
        rcx = *((rsp + 0xd0));
        dl >>= 5;
        edx = (int32_t) dl;
        edx = *((rcx + rdx*4));
        ecx = ebp;
        edx >>= cl;
        edx &= 1;
        if (edx == 0) {
            goto label_11;
        }
        dl = (r11d == 2) ? 1 : 0;
label_0:
        if (*((rsp + 0x6c)) != 0) {
            goto label_54;
        }
label_4:
        eax = r10d;
        eax ^= 1;
        al &= dl;
        if (al != 0) {
            if (r14 > rbx) {
                *((r15 + rbx)) = 0x27;
            }
            rdx = rbx + 1;
            if (rdx < r14) {
                *((r15 + rbx + 1)) = 0x24;
            }
            rdx = rbx + 2;
            if (rdx < r14) {
                *((r15 + rbx + 2)) = 0x27;
            }
            rbx += 3;
            r10d = eax;
        }
label_9:
        if (r14 > rbx) {
            *((r15 + rbx)) = 0x5c;
        }
        rbx++;
        r12++;
label_1:
        if (rbx < r14) {
            *((r15 + rbx)) = bpl;
        }
        edi = *((rsp + 0x1f));
        rbx++;
        eax = 0;
        if (r13b == 0) {
            edi = eax;
        }
        *((rsp + 0x1f)) = dil;
    } while (1);
label_3:
    if (*((rsp + 0x6c)) != 0) {
        goto label_55;
    }
    if (r14 == 0) {
        goto label_56;
    }
    edx = 0;
    if (*((rsp + 0x58)) != 0) {
        goto label_56;
    }
label_27:
    *((rsp + 0x6d)) = r13b;
    rbx += 3;
    eax = 0;
    r10d = 0;
    *((rsp + 0x58)) = r14;
    r14 = rdx;
label_11:
    dl = (r11d == 2) ? 1 : 0;
    if (*((rsp + 0x10)) != 0) {
        goto label_0;
    }
    eax ^= 1;
    r12++;
    eax &= r10d;
label_16:
    if (al == 0) {
        goto label_1;
    }
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x27;
    }
    rax = rbx + 1;
    if (r14 > rax) {
        *((r15 + rbx + 1)) = 0x27;
    }
    rbx += 2;
    r10d = 0;
    goto label_1;
    *((rsp + 0x10)) = 0;
    if (r11d == 2) {
        goto label_57;
    }
    if (r11d == 5) {
        goto label_58;
    }
    dl = (r11d == 2) ? 1 : 0;
    r13d = 0;
    goto label_2;
    *((rsp + 0x10)) = 0;
    if (r11d == 2) {
        goto label_3;
    }
    *((rsp + 0x6d)) = r13b;
    edx = 0;
    goto label_2;
    *((rsp + 0x10)) = 0;
label_15:
    edx = *((rsp + 8));
    dl &= *((rsp + 0x6c));
    ecx = 0x5c;
    al = (*((rsp + 0x28)) != 0) ? 1 : 0;
    dl &= al;
    if (dl != 0) {
        goto label_59;
    }
label_8:
    if (*((rsp + 8)) != 0) {
        goto label_60;
    }
label_7:
    r13d = 0;
    goto label_2;
label_6:
    edx = 0;
    r13d = 0;
    if (*((rsp + 0x6c)) == 0) {
        goto label_4;
    }
label_54:
    r13d = r11d;
    eax = edx;
    r11 = r9;
label_42:
label_12:
    eax = 4;
    if (*((rsp + 8)) != 0) {
        r13d = eax;
    }
label_43:
    r9d &= 0xfffffffd;
    rax = fcn_00405990 (r15, r14, *((rsp + 0x40)), r11, r13d, *((rsp + 0x88)));
    goto label_5;
    rbx = rax;
label_44:
    rax = rbx;
    return rax;
    goto label_6;
    *((rsp + 0x10)) = 0;
    edx = 0;
    goto label_7;
    *((rsp + 0x10)) = 0;
    ecx = 0x72;
    dl = (r11d == 2) ? 1 : 0;
    goto label_8;
    do {
label_20:
        if (*((rsp + 0x6c)) != 0) {
            goto label_61;
        }
label_34:
        r13d = 0;
        goto label_9;
    } while (1);
label_14:
    if (*((rsp + 0x6c)) != 0) {
        goto label_62;
    }
    *((rsp + 0x10)) = 0;
    eax = r10d;
    dl = (r11d == 2) ? 1 : 0;
    eax ^= 1;
    al &= dl;
    if (al == 0) {
        goto label_63;
    }
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x27;
    }
    rcx = rbx + 1;
    if (r14 > rcx) {
        *((r15 + rbx + 1)) = 0x24;
    }
    rcx = rbx + 2;
    if (r14 > rcx) {
        *((r15 + rbx + 2)) = 0x27;
    }
    rcx = rbx + 3;
    if (r14 <= rcx) {
        goto label_64;
    }
label_26:
    *((r15 + rcx)) = 0x5c;
    r10d = eax;
label_25:
    rbx = rcx + 1;
    if (r11d == 2) {
        goto label_65;
    }
    rax = r12 + 1;
    if (rax < r9) {
        rax = *((rsp + 0x20));
        eax = *((rax + r12 + 1));
        *((rsp + 0x30)) = al;
        eax -= 0x30;
        if (al <= 9) {
            goto label_66;
        }
    }
label_35:
    eax = *((rsp + 8));
    eax ^= 1;
    al |= dl;
    eax = r13d;
    r13d = 0;
    if (al == 0) {
        goto label_10;
    }
    goto label_11;
label_19:
    *((rsp + 0x10)) = 0;
    do {
label_52:
        if (*((rsp + 0x60)) != 1) {
            goto label_67;
        }
        *((rsp + 0x40)) = r11d;
        *((rsp + 0x38)) = r9;
        *((rsp + 0x30)) = r10b;
        rax = ctype_b_loc ();
        edx = (int32_t) bpl;
        r10d = *((rsp + 0x30));
        r9 = *((rsp + 0x38));
        rax = *(rax);
        r11d = *((rsp + 0x40));
        edi = 1;
        eax = *((rax + rdx*2));
        ax &= 0x4000;
        r13b = (ax != 0) ? 1 : 0;
        dl = (ax == 0) ? 1 : 0;
        dl &= *((rsp + 8));
label_37:
        if (dl != 0) {
            goto label_68;
        }
        dl = (r11d == 2) ? 1 : 0;
        goto label_2;
label_48:
        ebp = *(r8);
    } while (bpl > 0x7e);
    eax = (int32_t) bpl;
    /* switch table (127 cases) at 0x40b130 */
    ecx = 0x6e;
label_13:
    eax = *((rsp + 0x6c));
    dl = (r11d == 2) ? 1 : 0;
    al &= dl;
    *((rsp + 0x10)) = al;
    if (al == 0) {
        goto label_8;
    }
label_53:
    r11 = r9;
    r13d = 2;
    goto label_12;
    ecx = 0x74;
    goto label_13;
    ecx = 0x62;
    dl = (r11d == 2) ? 1 : 0;
    goto label_8;
    ecx = 0x61;
    dl = (r11d == 2) ? 1 : 0;
    goto label_8;
    if (*((rsp + 8)) != 0) {
        goto label_14;
    }
    if ((*((rsp + 0x68)) & 1) != 0) {
        goto label_69;
    }
    *((rsp + 0x10)) = 0;
    dl = (r11d == 2) ? 1 : 0;
    r13d = 0;
    ebp = 0;
    goto label_2;
    if (r11d != 2) {
        goto label_15;
    }
    if (*((rsp + 0x6c)) != 0) {
        goto label_55;
    }
    r12++;
    eax = r10d;
    r13d = 0;
    goto label_16;
    dl = (r11d == 2) ? 1 : 0;
    goto label_17;
    dl = (r11d == 2) ? 1 : 0;
    r13d = 0;
    goto label_18;
    dl = (r11d == 2) ? 1 : 0;
    goto label_18;
    ecx = 0x72;
    goto label_13;
    ecx = 0x66;
    dl = (r11d == 2) ? 1 : 0;
    goto label_8;
    ecx = 0x76;
    dl = (r11d == 2) ? 1 : 0;
    goto label_8;
label_49:
    ebp = *(r8);
    if (bpl > 0x7e) {
        goto label_19;
    }
    eax = (int32_t) bpl;
    /* switch table (127 cases) at 0x40b528 */
    eax = 0;
    do {
label_31:
        r13d = *((rsp + 0x10));
        *((rsp + 0x10)) = al;
        eax = 0;
        goto label_10;
        eax = 0;
label_32:
        if (r12 != 0) {
            goto label_70;
        }
        r13d = *((rsp + 0x10));
        edx = 0;
        *((rsp + 0x10)) = al;
        goto label_2;
        eax = 0;
INVALID_JUMP;
    } while (1);
    goto label_6;
    goto label_20;
label_47:
    r13d = r11d;
    r11 = r9;
    dl = (r13d == 2) ? 1 : 0;
    if (rbx == 0) {
        if ((*((rsp + 0x6c)) & dl) != 0) {
            goto label_71;
        }
    }
    eax = *((rsp + 0x6c));
    eax ^= 1;
    dl &= al;
    if (dl == 0) {
        goto label_72;
    }
    if (*((rsp + 0x6d)) == 0) {
        goto label_45;
    }
    if (*((rsp + 0x1f)) != 0) {
        goto label_73;
    }
    al = (r14 == 0) ? 1 : 0;
    dl = (*((rsp + 0x58)) != 0) ? 1 : 0;
    al &= dl;
    if (al == 0) {
        goto label_74;
    }
    r14 = *((rsp + 0x58));
label_46:
    *(r15) = 0x27;
    r13d = 2;
    ebx = 1;
    *((rsp + 0x50)) = 0x40c50f;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x6c)) = 0;
    *((rsp + 0x6d)) = al;
    goto label_21;
label_58:
    if ((*((rsp + 0x68)) & 4) != 0) {
        rax = r12 + 2;
        if (rax >= r9) {
            goto label_39;
        }
        rsi = *((rsp + 0x20));
        if (*((rsi + r12 + 1)) == 0x3f) {
            goto label_75;
        }
    }
label_39:
    edx = 0;
    r13d = 0;
    goto label_2;
label_57:
    if (*((rsp + 0x6c)) != 0) {
        goto label_55;
    }
    r13d = 0;
    eax = 0;
    goto label_11;
label_67:
    *((rsp + 0x88)) = 0;
    if (r9 == -1) {
        *((rsp + 0x40)) = r11d;
        *((rsp + 0x38)) = r10b;
        *((rsp + 0x30)) = r8;
        rax = strlen (*((rsp + 0x20)));
        r11d = *((rsp + 0x40));
        r10d = *((rsp + 0x38));
        r8 = *((rsp + 0x30));
        r9 = rax;
    }
    eax = 0;
    *((rsp + 0x70)) = rbx;
    *((rsp + 0x78)) = r8;
    rbx = rax;
    *((rsp + 0x6e)) = r10b;
    *((rsp + 0x6f)) = bpl;
    *((rsp + 0x40)) = r15;
    *((rsp + 0x48)) = r14;
    *((rsp + 0x30)) = r9;
    *((rsp + 0x38)) = r11d;
    while (*((rsp + 0x38)) != 2) {
label_22:
        eax = iswprint (*((rsp + 0x84)));
        rdi = rsp + 0x88;
        eax = 0;
        if (eax == 0) {
            r13d = eax;
        }
        rbx += r14;
        eax = mbsinit (rdi);
        if (eax != 0) {
            goto label_76;
        }
        rax = *((rsp + 0x20));
        r15 = r12 + rbx;
        rbp = rax + r15;
        rdx -= r15;
        rax = fcn_00409610 (rsp + 0x84, rbp, *((rsp + 0x30)), rsp + 0x88);
        r14 = rax;
        if (rax == 0) {
            goto label_76;
        }
        if (rax == -1) {
            goto label_77;
        }
        if (rax == 0xfffffffffffffffe) {
            goto label_78;
        }
    }
    if (*((rsp + 0x6c)) == 0) {
        goto label_22;
    }
    if (rax == 1) {
        goto label_22;
    }
    rsi = *((rsp + 0x20));
    rax = rsi + r15 + 1;
    rsi += r14;
    rsi += r15;
    goto label_79;
label_23:
    rax++;
    if (rsi == rax) {
        goto label_22;
    }
label_79:
    ecx = *(rax);
    ecx -= 0x5b;
    if (cl > 0x21) {
        goto label_23;
    }
    edx = 1;
    rdx <<= cl;
    rcx = 0x20000002b;
    if ((rdx & rcx) == 0) {
        goto label_23;
    }
    r15 = *((rsp + 0x40));
    r14 = *((rsp + 0x48));
    r13d = 2;
    r11 = *((rsp + 0x30));
    goto label_12;
label_70:
    *((rsp + 0x10)) = al;
    r13d = 0;
    goto label_24;
label_63:
    rcx = rbx;
    if (r14 <= rbx) {
        goto label_25;
    }
    eax = r10d;
    goto label_26;
label_56:
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x27;
    }
    rax = rbx + 1;
    if (r14 > rax) {
        *((r15 + rbx + 1)) = 0x5c;
    }
    rax = rbx + 2;
    if (r14 <= rax) {
        goto label_80;
    }
    rdx = r14;
    *((r15 + rbx + 2)) = 0x27;
    r14 = *((rsp + 0x58));
    goto label_27;
label_69:
    r12++;
    goto label_28;
label_68:
    edx = *((rsp + 8));
    r13d = 0;
label_36:
    rcx = rdi;
    *((rsp + 0x30)) = r13b;
    esi = 0;
    r13d = *((rsp + 0x6c));
    rcx += r12;
    edi = *((rsp + 0x10));
    r8 = *((rsp + 0x20));
    while (dl != 0) {
        al = (r11d == 2) ? 1 : 0;
        if (r13b != 0) {
            goto label_81;
        }
        esi = r10d;
        esi ^= 1;
        al &= sil;
        if (al != 0) {
            if (r14 > rbx) {
                *((r15 + rbx)) = 0x27;
            }
            rsi = rbx + 1;
            if (r14 > rsi) {
                *((r15 + rbx + 1)) = 0x24;
            }
            rsi = rbx + 2;
            if (r14 > rsi) {
                *((r15 + rbx + 2)) = 0x27;
            }
            rbx += 3;
            r10d = eax;
        }
        if (r14 > rbx) {
            *((r15 + rbx)) = 0x5c;
        }
        rax = rbx + 1;
        if (r14 > rax) {
            eax = ebp;
            al >>= 6;
            eax += 0x30;
            *((r15 + rbx + 1)) = al;
        }
        rax = rbx + 2;
        if (r14 > rax) {
            eax = ebp;
            al >>= 3;
            eax &= 7;
            eax += 0x30;
            *((r15 + rbx + 2)) = al;
        }
        ebp &= 7;
        r12++;
        rbx += 3;
        ebp += 0x30;
        if (r12 >= rcx) {
            goto label_82;
        }
        esi = edx;
label_29:
        if (r14 > rbx) {
            *((r15 + rbx)) = bpl;
        }
        ebp = *((r8 + r12));
        rbx++;
    }
    eax = esi;
    eax ^= 1;
    eax &= r10d;
    if (dil != 0) {
        if (r14 > rbx) {
            *((r15 + rbx)) = 0x5c;
        }
        rbx++;
    }
    r12++;
    if (r12 < rcx) {
        if (al == 0) {
            goto label_83;
        }
        if (r14 > rbx) {
            *((r15 + rbx)) = 0x27;
        }
        rax = rbx + 1;
        if (r14 > rax) {
            *((r15 + rbx + 1)) = 0x27;
        }
        rbx += 2;
        edi = 0;
        r10d = 0;
        goto label_29;
    }
    r13d = *((rsp + 0x30));
    goto label_16;
label_81:
    r13d = r11d;
    *((rsp + 8)) = al;
    r11 = r9;
    goto label_12;
label_64:
    rbx += 4;
    r10d = eax;
    r13d = 0;
    goto label_11;
    if (ebp != 0) {
        goto label_30;
    }
    *((rsp + 8)) = 1;
    do {
        if (r14 != 0) {
            goto label_84;
        }
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 1;
        r13d = 2;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x6c)) = 0;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x40c50f;
        goto label_21;
        if (ebp != 0) {
            goto label_85;
        }
        if (r14 == 0) {
            goto label_86;
        }
        *(r15) = 0x22;
        r10d = 0;
        *((rsp + 0x1f)) = 1;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
label_38:
        *((rsp + 0x6c)) = 0;
        ebx = 1;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x40ac7c;
        goto label_21;
        if (r14 != 0) {
            *((rsp + 8)) = r11;
            rax = fcn_00405890 (0x40ac8d, r13d);
            *((rsp + 0xd8)) = rax;
            rax = fcn_00405890 (0x40c50f, r13d);
            r11 = *((rsp + 8));
            *((rsp + 0xe0)) = rax;
        }
        ebx = 0;
        if (ebp == 0) {
            goto label_87;
        }
label_41:
        *((rsp + 0x10)) = r11;
        rax = strlen (*((rsp + 0xe0)));
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        r11 = *((rsp + 0x10));
        *((rsp + 0x28)) = rax;
        rax = *((rsp + 0xe0));
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x50)) = rax;
        *((rsp + 0x58)) = 0;
        *((rsp + 8)) = 1;
        goto label_21;
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 0;
        *((rsp + 8)) = 0;
        *((rsp + 0x28)) = 0;
        *((rsp + 0x50)) = 0;
        goto label_21;
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        r13d = 5;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 1;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x40ac7c;
        goto label_21;
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 0;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 0;
        *((rsp + 0x50)) = 0;
        goto label_21;
        *((rsp + 0x1f)) = 1;
        r10d = 0;
        ebx = 0;
        r13d = 2;
        *((rsp + 0x6d)) = 0;
        *((rsp + 0x58)) = 0;
        *((rsp + 0x6c)) = 1;
        *((rsp + 8)) = 1;
        *((rsp + 0x28)) = 1;
        *((rsp + 0x50)) = 0x40c50f;
        goto label_21;
        eax = *((rsp + 0x10));
        goto label_31;
        eax = *((rsp + 0x10));
        goto label_32;
        eax = *((rsp + 0x10));
        goto label_33;
        edx = 0;
        r13d = 0;
        goto label_4;
        goto label_34;
label_66:
        if (r14 > rbx) {
            *((r15 + rbx)) = 0x30;
        }
        rax = rcx + 2;
        if (r14 > rax) {
            *((r15 + rcx + 2)) = 0x30;
        }
        rbx = rcx + 3;
        goto label_35;
        if (ebp != 0) {
            goto label_88;
        }
        *((rsp + 8)) = 0;
    } while (1);
label_82:
    r13d = *((rsp + 0x30));
    goto label_1;
label_59:
    r12++;
    eax = r10d;
    r13d = 0;
    goto label_16;
label_83:
    edi = 0;
    goto label_29;
label_76:
    rdi = rbx;
    edx = r13d;
    ebp = *((rsp + 0x6f));
    rbx = *((rsp + 0x70));
    r10d = *((rsp + 0x6e));
    r15 = *((rsp + 0x40));
    edx ^= 1;
    r14 = *((rsp + 0x48));
    r9 = *((rsp + 0x30));
    r11d = *((rsp + 0x38));
    dl &= *((rsp + 8));
label_40:
    if (rdi > 1) {
        goto label_36;
    }
    goto label_37;
label_86:
    *((rsp + 0x58)) = 0;
    r10d = 0;
    *((rsp + 0x1f)) = 1;
    *((rsp + 0x6d)) = 0;
    goto label_38;
label_65:
    eax = r13d;
    r13d = 0;
    goto label_11;
label_75:
    ebp = *((rsi + rax));
    if (bpl > 0x3e) {
        goto label_39;
    }
    rsi = 0x7000a38200000000;
    if (((rsi >> rbp) & 1) >= 0) {
        goto label_39;
    }
    if (*((rsp + 0x6c)) != 0) {
        goto label_51;
    }
    if (r14 > rbx) {
        *((r15 + rbx)) = 0x3f;
    }
    rdx = rbx + 1;
    if (r14 > rdx) {
        *((r15 + rbx + 1)) = 0x22;
    }
    rdx = rbx + 2;
    if (r14 > rdx) {
        *((r15 + rbx + 2)) = 0x22;
    }
    rdx = rbx + 3;
    if (r14 > rdx) {
        *((r15 + rbx + 3)) = 0x3f;
    }
    rbx += 4;
    edx = 0;
    r13d = 0;
    r12 = rax;
    goto label_35;
label_77:
    rdi = rbx;
    ebp = *((rsp + 0x6f));
    rbx = *((rsp + 0x70));
    r13d = 0;
    r10d = *((rsp + 0x6e));
    r15 = *((rsp + 0x40));
    r14 = *((rsp + 0x48));
    r9 = *((rsp + 0x30));
    r11d = *((rsp + 0x38));
    edx = *((rsp + 8));
    goto label_40;
label_78:
    r9 = *((rsp + 0x30));
    rsi = r15;
    rcx = rbp;
    rax = rbx;
    rdi = rbx;
    r8 = *((rsp + 0x78));
    r10d = *((rsp + 0x6e));
    ebp = *((rsp + 0x6f));
    rbx = *((rsp + 0x70));
    r15 = *((rsp + 0x40));
    r14 = *((rsp + 0x48));
    r11d = *((rsp + 0x38));
    if (rsi >= r9) {
        goto label_89;
    }
    if (*(rcx) != 0) {
        goto label_90;
    }
    goto label_89;
    do {
        if (*((r8 + rax)) == 0) {
            goto label_91;
        }
label_90:
        rax++;
        rdx = r12 + rax;
    } while (rdx < r9);
label_91:
    rdi = rax;
label_89:
    edx = *((rsp + 8));
    r13d = 0;
    goto label_40;
label_87:
    rax = *((rsp + 0xd8));
    eax = *(rax);
    if (al == 0) {
        goto label_41;
    }
    rdx = *((rsp + 0xd8));
    do {
        if (r14 > rbx) {
            *((r15 + rbx)) = al;
        }
        rbx++;
        eax = *((rdx + rbx));
    } while (al != 0);
    goto label_41;
label_61:
    r13d = r11d;
    eax = 0;
    r11 = r9;
    goto label_42;
label_85:
    *((rsp + 0x1f)) = 1;
    r10d = 0;
    ebx = 0;
    *((rsp + 0x6d)) = 0;
    *((rsp + 0x58)) = 0;
    *((rsp + 0x6c)) = 1;
    *((rsp + 8)) = 1;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x50)) = 0x40ac7c;
    goto label_21;
label_51:
    r13d = r11d;
    r11 = r9;
    goto label_43;
label_72:
    edx = eax;
label_45:
    rax = *((rsp + 0x50));
    if (rax == 0) {
        goto label_92;
    }
    if (dl == 0) {
        goto label_92;
    }
    edx = *(rax);
    if (dl == 0) {
        goto label_92;
    }
    rax -= rbx;
    do {
        if (r14 > rbx) {
            *((r15 + rbx)) = dl;
        }
        rbx++;
        edx = *((rax + rbx));
    } while (dl != 0);
label_92:
    if (r14 <= rbx) {
        goto label_44;
    }
    *((r15 + rbx)) = 0;
    goto label_44;
label_55:
    r13d = r11d;
    r11 = r9;
    goto label_12;
label_62:
    r13d = r11d;
    r11 = r9;
    *(rsp + 8) = (r13d == 2) ? 1 : 0;
    goto label_12;
label_73:
    rax = fcn_00405990 (r15, *((rsp + 0x78)), *((rsp + 0x40)), r11, 5, *((rsp + 0x88)));
    goto label_5;
    rbx = rax;
    goto label_44;
label_74:
    edx = *((rsp + 0x6d));
    goto label_45;
label_71:
    r13d = 2;
    goto label_12;
label_84:
    r10d = 0;
    eax = 0;
    *((rsp + 0x1f)) = 1;
    *((rsp + 0x58)) = 0;
    goto label_46;
label_80:
    rdx = r14;
    r14 = *((rsp + 0x58));
    goto label_27;
label_88:
    *((rsp + 0x1f)) = 1;
    r10d = 0;
    ebx = 0;
    *((rsp + 0x6d)) = 0;
    *((rsp + 0x58)) = 0;
    *((rsp + 0x6c)) = 1;
    *((rsp + 8)) = 0;
    *((rsp + 0x28)) = 1;
    *((rsp + 0x50)) = 0x40c50f;
    goto label_21;
label_60:
    r13d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x406bc0 */
#include <stdint.h>
 
uint64_t fcn_00406bc0 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_8h;
    int64_t var_30h;
    int64_t var_18h;
    int64_t var_24h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    do {
        abort ();
        r15 = (int64_t) edi;
        r14 = rdx;
        *((rsp + 8)) = rsi;
        rax = errno_location ();
        rbx = *(0x0060e298);
        r13 = rax;
        eax = *(rax);
        *((rsp + 0x18)) = eax;
    } while (r15d < 0);
    if (*(0x0060e2b0) > r15d) {
        goto label_0;
    }
    if (r15d == 0x7fffffff) {
        goto label_1;
    }
    r12d = r15 + 1;
    rsi = (int64_t) r12d;
    rsi <<= 4;
    if (rbx == 0x60e2a0) {
        goto label_2;
    }
    rax = fcn_00407a40 (rbx, rsi);
    *(0x0060e298) = rax;
    rbx = rax;
    do {
        rdi = *(0x0060e2b0);
        edx -= edi;
        rdi <<= 4;
        rdx = (int64_t) edx;
        rdi += rbx;
        rdx <<= 4;
        memset (rdi, 0, r12d);
        *(0x0060e2b0) = r12d;
label_0:
        eax = *((rbp + 4));
        r15 <<= 4;
        rbx += r15;
        r15 = rbp + 8;
        eax |= 1;
        r11 = *(rbx);
        r12 = *((rbx + 8));
        *((rsp + 0x24)) = eax;
        rsi = r11;
        *((rsp + 0x30)) = r11;
        rax = fcn_00405990 (r12, rsi, *((rsp + 0x28)), r14, *(rbp), eax);
        r11 = *((rsp + 0x10));
        if (r11 <= rax) {
            rsi = rax + 1;
            *(rbx) = rsi;
            if (r12 != 0x60e340) {
                *((rsp + 0x10)) = rsi;
                free (r12);
                rsi = *((rsp + 0x10));
            }
            *((rsp + 0x10)) = rsi;
            rax = fcn_004079e0 (*((rsp + 0x10)));
            *((rbx + 8)) = rax;
            rdi = rax;
            r12 = rax;
            fcn_00405990 (rdi, *((rsp + 0x30)), *((rsp + 0x28)), r14, *(rbp), *((rsp + 0x3c)));
        }
        eax = *((rsp + 0x18));
        *(r13) = eax;
        rax = r12;
        return rax;
label_2:
        rax = fcn_00407a40 (0, rsi);
        __asm ("movdqa xmm0, xmmword [0x0060e2a0]");
        rbx = rax;
        *(0x0060e298) = rax;
        __asm ("movups xmmword [rax], xmm0");
    } while (1);
label_1:
    return fcn_00407c30 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4070e0 */
#include <stdint.h>
 
int64_t fcn_004070e0 (int64_t arg1, uint32_t arg2, int64_t arg3) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    do {
        abort ();
    } while (esi == 0xa);
    rax = rdx;
    *(rsp) = esi;
    *((rsp + 4)) = 0;
    *((rsp + 8)) = 0;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x28)) = 0;
    *((rsp + 0x30)) = 0;
    fcn_00406bc0 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407260 */
#include <stdint.h>
 
int64_t fcn_00407260 (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    rdi = arg1;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    do {
        rax = imp.__libc_start_main;
        ecx = edx;
        __asm ("movdqa xmm0, xmmword [0x0060e440]");
        __asm ("movdqa xmm1, xmmword [0x0060e450]");
        __asm ("movdqa xmm2, xmmword [0x0060e460]");
        ecx &= 0x1f;
        *((rsp + 0x30)) = rax;
        eax = edx;
        al >>= 5;
        *(rsp) = xmm0;
        eax = (int32_t) al;
        *((rsp + 0x10)) = xmm1;
        r8 = rsp + rax*4 + 8;
        *((rsp + 0x20)) = xmm2;
        edx = *(r8);
        eax = *(r8);
        eax >>= cl;
        eax = ~eax;
        eax &= 1;
        eax <<= cl;
        eax ^= edx;
        *(r8) = eax;
        fcn_00406bc0 (0, rdi, rsi, rsp);
        return rax;
        edx = 0x3a;
        rsi = 0xffffffffffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407290 */
#include <stdint.h>
 
int64_t fcn_00407290 (uint32_t arg2, int64_t arg3) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rsi = arg2;
    rdx = arg3;
    do {
        abort ();
    } while (esi == 0xa);
    rcx = 0x400000000000000;
    rax = rdx;
    *(rsp) = esi;
    *((rsp + 8)) = rcx;
    *((rsp + 4)) = 0;
    *((rsp + 0x10)) = 0;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x20)) = 0;
    *((rsp + 0x28)) = 0;
    *((rsp + 0x30)) = 0;
    fcn_00406bc0 (rdi, rax, 0xffffffffffffffff, rsp);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4073f0 */
#include <stdint.h>
 
void fcn_004073f0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    ecx = 0x60e260;
    rdx = 0xffffffffffffffff;
invalid_funccall(); //    return void (*0x406bc0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407410 */
#include <stdint.h>
 
void fcn_00407410 (int64_t arg1) {
    rdi = arg1;
    rsi = rdi;
    ecx = 0x60e260;
    rdx = 0xffffffffffffffff;
    edi = 0;
invalid_funccall(); //    return void (*0x406bc0)() ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407430 */
#include <stdint.h>
 
uint64_t fcn_00407430 (int64_t arg_70h, int64_t arg1, int64_t arg4) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_38h;
    rdi = arg1;
    rcx = arg4;
    edx = 3;
    esi = 0;
    eax = 0;
    while (1) {
label_2:
        rax = rsp + 0x70;
        *((rsp + 0x30)) = rdx;
        *((rsp + 0x10)) = rax;
        rax = rsp + 0x20;
        *((rsp + 0x38)) = rcx;
        *((rsp + 8)) = 0x10;
        *((rsp + 0x18)) = rax;
        if (esi != 0x406) {
            goto label_4;
        }
        r12d = *((rax + 0x10));
        eax = imp.__libc_start_main;
        *((rsp + 8)) = 0x18;
        edx = r12d;
        if (eax >= 0) {
            eax = 0;
            eax = fcntl ();
            ebx = eax;
            if (eax < 0) {
                goto label_5;
            }
label_1:
            *(0x0060e478) = 1;
label_0:
            eax = ebx;
            return rax;
        }
        eax = 0;
invalid_funccall(); //        eax = void (*0x408660)(uint64_t, uint64_t, uint64_t) (rdi, 0, rdx);
    }
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    if (*(0x0060e478) != 0xffffffff) {
        goto label_0;
    }
label_3:
    eax = 0;
    esi = 1;
    edi = ebx;
    eax = fcntl ();
    if (eax < 0) {
        goto label_6;
    }
    eax |= 1;
    esi = 2;
    edi = ebx;
    edx = eax;
    eax = 0;
    eax = fcntl ();
    if (eax != 0xffffffff) {
        goto label_0;
    }
label_6:
    rax = errno_location ();
    ebx = 0xffffffff;
    r12d = *(rax);
    close (ebx);
    *(rbp) = r12d;
    goto label_0;
label_4:
    rax = *((rsp + 0x18));
    rdx = *((rax + 0x10));
    eax = 0;
    eax = fcntl ();
    ebx = eax;
    return rax;
label_5:
    rax = errno_location ();
    if (*(rax) != 0x16) {
        goto label_1;
    }
    eax = 0;
invalid_funccall(); //    eax = void (*0x408660)(uint64_t, uint64_t, uint64_t) (ebp, 0, r12d);
    goto label_2;
    ebx = eax;
    if (eax < 0) {
        goto label_0;
    }
    *(0x0060e478) = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407440 */
#include <stdint.h>
 
void fcn_00407440 (int64_t arg_20h, int64_t arg_30h, int64_t arg_8h_2, int64_t arg_10h, int64_t arg_8h, int64_t arg_8h_3, int64_t arg_10h_2, int64_t arg_18h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_30h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    eax = abort ();
    r12 = r9;
    rbx = r8;
    if (rsi == 0) {
        goto label_1;
    }
    r9 = rcx;
    r8 = rdx;
    rcx = rsi;
    edx = "%s (%s) %s\n";
    esi = 1;
    eax = 0;
    fprintf_chk ();
    do {
        edx = 5;
        rax = dcgettext (0, 0x40b9cb);
        r8d = 0x7e1;
        edx = "Copyright %s %d Free Software Foundation, Inc.";
        rdi = rbp;
        rcx = rax;
        esi = 1;
        eax = 0;
        fprintf_chk ();
        edx = 5;
        rax = dcgettext (0, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
        rsi = rbp;
        rdi = rax;
        eax = fputs_unlocked ();
        if (r12 > 9) {
            goto label_2;
        }
        /* switch table (10 cases) at 0x40bcb8 */
label_1:
        r8 = rcx;
        esi = 1;
        rcx = rdx;
        eax = 0;
        edx = "%s %s\n";
        fprintf_chk ();
    } while (1);
    r9 = *((rbx + 0x38));
    rax = *((rbx + 0x10));
    edx = 5;
    r8 = *((rbx + 8));
    r13 = *((rbx + 0x30));
    r12 = *((rbx + 0x28));
    r15 = *((rbx + 0x20));
    *((rsp + 0x10)) = r9;
    r14 = *((rbx + 0x18));
    rbx = *(rbx);
    *(rsp) = rax;
    *((rsp + 8)) = r8;
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    do {
        r9 = *((rsp + 0x18));
        rcx = rbx;
        rdx = rax;
        rdi = rbp;
        esi = 1;
        eax = 0;
        r9 = *((rsp + 0x30));
        r8 = *((rsp + 0x38));
        fprintf_chk ();
        return rax;
        r10 = *((rbx + 0x40));
        r9 = *((rbx + 0x38));
        edx = 5;
        rax = *((rbx + 0x10));
        r8 = *((rbx + 8));
        r13 = *((rbx + 0x30));
        r12 = *((rbx + 0x28));
        *((rsp + 0x18)) = r10;
        r15 = *((rbx + 0x20));
        r14 = *((rbx + 0x18));
        *((rsp + 0x10)) = r9;
        *(rsp) = rax;
        rbx = *(rbx);
        *((rsp + 8)) = r8;
label_0:
        dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
        r10 = *((rsp + 0x18));
    } while (1);
    rbx = *(rbx);
    edx = 5;
    rax = dcgettext (0, "Written by %s.\n");
    rdi = rbp;
    esi = 1;
    rcx = rbx;
    rdx = rax;
    eax = 0;
invalid_funccall(); //    void (*0x401ab0)() ();
    r12 = *((rbx + 8));
    edx = 5;
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s and %s.\n");
    r8 = r12;
    rcx = rbx;
    rdx = rax;
    rdi = rbp;
    esi = 1;
    eax = 0;
invalid_funccall(); //    void (*0x401ab0)() ();
    r13 = *((rbx + 0x10));
    r12 = *((rbx + 8));
    edx = 5;
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s, %s, and %s.\n");
    r9 = r13;
    r8 = r12;
    rcx = rbx;
    rdx = rax;
    rdi = rbp;
    esi = 1;
    eax = 0;
invalid_funccall(); //    void (*0x401ab0)() ();
    edx = 5;
    r14 = *((rbx + 0x18));
    r13 = *((rbx + 0x10));
    r12 = *((rbx + 8));
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s, %s, %s,\nand %s.\n");
    do {
        rdx = rax;
        r9 = r13;
        r8 = r12;
        rcx = rbx;
        rdi = rbp;
        esi = 1;
        eax = 0;
        fprintf_chk ();
        return;
        r15 = *((rbx + 0x20));
        edx = 5;
        r14 = *((rbx + 0x18));
        r13 = *((rbx + 0x10));
        r12 = *((rbx + 8));
        rbx = *(rbx);
        dcgettext (0, "Written by %s, %s, %s,\n%s, and %s.\n");
    } while (1);
    r8 = *((rbx + 8));
    r12 = *((rbx + 0x28));
    edx = 5;
    r15 = *((rbx + 0x20));
    r14 = *((rbx + 0x18));
    *(rsp) = r8;
    r13 = *((rbx + 0x10));
    rbx = *(rbx);
    rax = dcgettext (0, "Written by %s, %s, %s,\n%s, %s, and %s.\n");
    r9 = r13;
    do {
        r8 = *((rsp + 0x20));
        rcx = rbx;
        rdx = rax;
        rdi = rbp;
        esi = 1;
        eax = 0;
        fprintf_chk ();
        return;
        r9 = *((rbx + 0x10));
        r13 = *((rbx + 0x30));
        edx = 5;
        r12 = *((rbx + 0x28));
        r15 = *((rbx + 0x20));
        r14 = *((rbx + 0x18));
        r8 = *((rbx + 8));
        *((rsp + 8)) = r9;
        rbx = *(rbx);
        *(rsp) = r8;
        dcgettext (0, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
        r9 = *((rsp + 0x28));
    } while (1);
label_2:
    r10 = *((rbx + 0x40));
    r9 = *((rbx + 0x38));
    edx = 5;
    esi = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    rax = *((rbx + 0x10));
    r8 = *((rbx + 8));
    r13 = *((rbx + 0x30));
    r12 = *((rbx + 0x28));
    *((rsp + 0x18)) = r10;
    r15 = *((rbx + 0x20));
    r14 = *((rbx + 0x18));
    *((rsp + 0x10)) = r9;
    *(rsp) = rax;
    rbx = *(rbx);
    *((rsp + 8)) = r8;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4078a0 */
#include <stdint.h>
 
uint64_t fcn_004078a0 (int64_t arg_b0h, int64_t arg5, int64_t arg6) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_70h;
    int64_t var_90h;
    int64_t var_98h;
    r8 = arg5;
    r9 = arg6;
    r11d = 0;
    rax = rsp + 0xb0;
    *((rsp + 0x90)) = r8;
    r10 = rsp + 0xb0;
    r8d = 0x20;
    *((rsp + 0x10)) = rax;
    rax = rsp + 0x70;
    *((rsp + 0x98)) = r9;
    r9d = 0;
    *((rsp + 8)) = 0x20;
    *((rsp + 0x18)) = rax;
    while (r8d <= 0x2f) {
        eax = r8d;
        r11 = rsp + 0x70;
        r8d += 8;
        rax += r11;
        r11d = 1;
        rax = *(rax);
        *((rsp + r9*8 + 0x20)) = rax;
        if (rax == 0) {
            goto label_1;
        }
label_0:
        r9++;
        if (r9 == 0xa) {
            goto label_1;
        }
    }
    rax = r10;
    r10 += 8;
    rax = *(rax);
    *((rsp + r9*8 + 0x20)) = rax;
    if (rax != 0) {
        goto label_0;
    }
label_1:
    if (r11b != 0) {
        *((rsp + 8)) = r8d;
    }
    fcn_00407440 (rdi, rsi, rdx, rcx, rsp + 0x20, r9);
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4079e0 */
#include <stdint.h>
 
uint64_t fcn_004079e0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = malloc (rdi);
    if (rax == 0) {
        if (rbx != 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    return fcn_00407c30 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407a40 */
#include <stdint.h>
 
uint64_t fcn_00407a40 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rbx = rsi;
    if (rsi == 0) {
        if (rdi != 0) {
            goto label_0;
        }
    }
    rax = realloc (rdi, rbx);
    if (rax == 0) {
        if (rbx != 0) {
            goto label_1;
        }
    }
    return rax;
label_0:
    eax = free (rdi);
    eax = 0;
    return rax;
label_1:
    return fcn_00407c30 ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407be0 */
#include <stdint.h>
 
uint64_t fcn_00407be0 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    rdi = rsi;
    rbx = rsi;
    rax = fcn_004079e0 (rdi);
    rdx = rbx;
    rsi = rbp;
    rdi = rax;
    return memcpy ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407c30 */
#include <stdint.h>
 
uint64_t fcn_00407c30 (void) {
    edx = 5;
    rax = dcgettext (0, "memory exhausted");
    rcx = rax;
    eax = 0;
    error (*(0x0060e250), 0, 0x40ac1c);
    return abort ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407c70 */
#include <stdint.h>
 
uint64_t fcn_00407c70 (int64_t arg_50h, int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg6) {
    int64_t var_8h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r9 = arg6;
    r15 = rcx;
    r14 = rdx;
    edx = esi;
    r13 = r9;
    r12 = rdi;
    ebx = *((rsp + 0x50));
    eax = fcn_004081a0 (rdi, 0, edx, rsp + 8, r8);
    if (eax != 0) {
        goto label_1;
    }
    rbp = *((rsp + 8));
    if (rbp >= r14) {
        if (rbp <= r15) {
            goto label_2;
        }
    }
    rax = errno_location ();
    r14 = rax;
    eax -= eax;
    eax &= 0xffffffd7;
    eax += 0x4b;
    *(r14) = eax;
    do {
label_0:
        rax = fcn_00407410 (r12);
        esi = *(r14);
        rcx = r13;
        edx = "%s: %s";
        r8 = rax;
        eax = 0;
        if (esi == 0x16) {
            esi = eax;
        }
        eax = 1;
        if (ebx == 0) {
            ebx = eax;
        }
        eax = 0;
        error (ebx, rsi, rdx);
        rbp = *((rsp + 8));
label_2:
        rax = rbp;
        return rax;
label_1:
        rax = errno_location ();
        r14 = rax;
        if (ebp == 1) {
            goto label_3;
        }
    } while (ebp != 3);
    *(rax) = 0;
    goto label_0;
label_3:
    *(rax) = 0x4b;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407d40 */
#include <stdint.h>
 
void fcn_00407d40 (int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    fcn_00407c70 (rdi, 0xa, rsi, rdx, rcx, r8);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x407d70 */
#include <stdint.h>
 
uint64_t fcn_00407d70 (int64_t arg1, int64_t arg2, uint32_t arg3, uint32_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    if (edx > 0x24) {
        goto label_13;
    }
    r15 = rsi;
    rax = rsp + 0x18;
    *(rsp) = edx;
    r14 = rcx;
    r13 = r8;
    if (rsi == 0) {
        r15 = rax;
    }
    errno_location ();
    *(rax) = 0;
    r12 = rax;
    ebx = *(rbp);
    rax = ctype_b_loc ();
    edx = *(rsp);
    rsi = *(rax);
    rax = rbp;
    while ((*((rsi + rcx*2 + 1)) & 0x20) != 0) {
        rax++;
        ebx = *(rax);
        ecx = (int32_t) bl;
    }
    if (bl == 0x2d) {
        goto label_1;
    }
    rax = strtoul (rbp, r15, rdx);
    r8 = *(r15);
    rbx = rax;
    if (r8 == rbp) {
        goto label_14;
    }
    eax = *(r12);
    if (eax != 0) {
        goto label_15;
    }
    ebp = 0;
    do {
        if (r13 != 0) {
            r12d = *(r8);
            if (r12b != 0) {
                goto label_16;
            }
        }
label_2:
        *(r14) = rbx;
label_0:
        eax = ebp;
        return rax;
INVALID_JUMP;
    } while (eax == 0x22);
    do {
label_1:
        goto label_0;
label_14:
        *(rsp) = r8;
    } while (r13 == 0);
    r12d = *(rbp);
    if (r12b == 0) {
        goto label_1;
    }
    esi = (int32_t) r12b;
    ebp = 0;
    ebx = 1;
    rax = strchr (r13, rsi);
    r8 = *(rsp);
    if (rax == 0) {
        goto label_1;
    }
label_4:
    edx = r12 - 0x45;
    if (dl <= 0x2f) {
        rax = 0x814400308945;
        *(rsp) = dl;
        if (((rax >> rdx) & 1) >= 0) {
            goto label_17;
        }
        *((rsp + 8)) = r8;
        rax = strchr (r13, 0x30);
        r8 = *((rsp + 8));
        if (rax == 0) {
            goto label_17;
        }
        eax = *((r8 + 1));
        if (al == 0x44) {
            goto label_18;
        }
        if (al == 0x69) {
            goto label_19;
        }
        edx = *(rsp);
        if (al == 0x42) {
            goto label_18;
        }
        /* switch table (67 cases) at 0x40bd98 */
    }
label_17:
    esi = 1;
    edx = 0x400;
label_7:
    r12d -= 0x42;
    if (r12b > 0x35) {
        goto label_20;
    }
    r12d = (int32_t) r12b;
    /* switch table (54 cases) at 0x40bf18 */
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    rax = rbx;
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*r12b overflow 0x35*/) {
        goto label_5;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*r12b overflow 0x35*/) {
        goto label_5;
    }
    rbx = rax;
    do {
label_3:
        rsi = (int64_t) esi;
        eax = ebp;
        r8 += rsi;
        eax |= 2;
        *(r15) = r8;
        if (*(r8) != 0) {
        }
        goto label_2;
        esi = 1;
        edx = 0x400;
        rax = rbx;
        rdx_rax = rax * rdx;
        rbx = rax;
    } while (UNKNOWN_OP /**(r8) !overflow 0*/);
label_5:
    rbx |= 0xffffffffffffffff;
    goto label_3;
label_16:
    esi = (int32_t) r12b;
    *(rsp) = r8;
    rax = strchr (r13, rsi);
    r8 = *(rsp);
    if (rax != 0) {
        goto label_4;
    }
label_20:
    *(r14) = rbx;
    ebp |= 2;
    goto label_0;
    if (rbx < 0) {
        goto label_5;
    }
    rbx += rbx;
    goto label_3;
    esi = 1;
    rax = rbx;
    rax >>= 0x37;
    if (rax != 0) {
        goto label_5;
    }
    rbx <<= 9;
    goto label_3;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 7;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*rbx overflow 0*/) {
            goto label_21;
        }
label_8:
        edi--;
    } while (edi != 0);
label_6:
    ebp |= r9d;
    goto label_3;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 8;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*ebp overflow 0*/) {
            goto label_22;
        }
label_11:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 4;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_23;
        }
label_9:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 5;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_24;
        }
label_12:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 6;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_25;
        }
label_10:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    rax = rbx;
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_26;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_26;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_26;
    }
    rbx = rax;
    eax = 0;
    ebp |= eax;
    goto label_3;
    rax = rbx;
    rax >>= 0x36;
    if (rax != 0) {
        goto label_5;
    }
    rbx <<= 0xa;
    goto label_3;
    esi = 1;
    goto label_3;
label_18:
    esi = 2;
    edx = 0x3e8;
    goto label_7;
label_19:
    esi = 0;
    edx = 0x400;
    sil = (*((r8 + 2)) == 0x42) ? 1 : 0;
    esi = rsi + rsi + 1;
    goto label_7;
label_21:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_8;
label_26:
    eax = 1;
    rbx |= 0xffffffffffffffff;
    ebp |= eax;
    goto label_3;
label_23:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_9;
label_25:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_10;
label_22:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_11;
label_24:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_12;
label_13:
    return assert_fail ("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60, "xstrtoul");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4081a0 */
#include <stdint.h>
 
uint64_t fcn_004081a0 (int64_t arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int64_t arg5) {
    int64_t var_8h;
    int64_t var_18h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    if (edx > 0x24) {
        goto label_13;
    }
    r15 = rsi;
    rax = rsp + 0x18;
    *(rsp) = edx;
    r14 = rcx;
    r13 = r8;
    if (rsi == 0) {
        r15 = rax;
    }
    errno_location ();
    *(rax) = 0;
    r12 = rax;
    ebx = *(rbp);
    rax = ctype_b_loc ();
    edx = *(rsp);
    rsi = *(rax);
    rax = rbp;
    while ((*((rsi + rcx*2 + 1)) & 0x20) != 0) {
        rax++;
        ebx = *(rax);
        ecx = (int32_t) bl;
    }
    if (bl == 0x2d) {
        goto label_1;
    }
    ecx = 0;
    rsi = r15;
    rdi = rbp;
    rax = strtoul_internal ();
    r8 = *(r15);
    rbx = rax;
    if (r8 == rbp) {
        goto label_14;
    }
    eax = *(r12);
    if (eax != 0) {
        goto label_15;
    }
    ebp = 0;
    do {
        if (r13 != 0) {
            r12d = *(r8);
            if (r12b != 0) {
                goto label_16;
            }
        }
label_2:
        *(r14) = rbx;
label_0:
        eax = ebp;
        return rax;
INVALID_JUMP;
    } while (eax == 0x22);
    do {
label_1:
        goto label_0;
label_14:
        *(rsp) = r8;
    } while (r13 == 0);
    r12d = *(rbp);
    if (r12b == 0) {
        goto label_1;
    }
    esi = (int32_t) r12b;
    ebp = 0;
    ebx = 1;
    rax = strchr (r13, rsi);
    r8 = *(rsp);
    if (rax == 0) {
        goto label_1;
    }
label_4:
    edx = r12 - 0x45;
    if (dl <= 0x2f) {
        rax = 0x814400308945;
        *(rsp) = dl;
        if (((rax >> rdx) & 1) >= 0) {
            goto label_17;
        }
        *((rsp + 8)) = r8;
        rax = strchr (r13, 0x30);
        r8 = *((rsp + 8));
        if (rax == 0) {
            goto label_17;
        }
        eax = *((r8 + 1));
        if (al == 0x44) {
            goto label_18;
        }
        if (al == 0x69) {
            goto label_19;
        }
        edx = *(rsp);
        if (al == 0x42) {
            goto label_18;
        }
        /* switch table (67 cases) at 0x40c0d8 */
    }
label_17:
    esi = 1;
    edx = 0x400;
label_7:
    r12d -= 0x42;
    if (r12b > 0x35) {
        goto label_20;
    }
    r12d = (int32_t) r12b;
    /* switch table (54 cases) at 0x40c258 */
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    rax = rbx;
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*r12b overflow 0x35*/) {
        goto label_5;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*r12b overflow 0x35*/) {
        goto label_5;
    }
    rbx = rax;
    do {
label_3:
        rsi = (int64_t) esi;
        eax = ebp;
        r8 += rsi;
        eax |= 2;
        *(r15) = r8;
        if (*(r8) != 0) {
        }
        goto label_2;
        esi = 1;
        edx = 0x400;
        rax = rbx;
        rdx_rax = rax * rdx;
        rbx = rax;
    } while (UNKNOWN_OP /**(r8) !overflow 0*/);
label_5:
    rbx |= 0xffffffffffffffff;
    goto label_3;
label_16:
    esi = (int32_t) r12b;
    *(rsp) = r8;
    rax = strchr (r13, rsi);
    r8 = *(rsp);
    if (rax != 0) {
        goto label_4;
    }
label_20:
    *(r14) = rbx;
    ebp |= 2;
    goto label_0;
    if (rbx < 0) {
        goto label_5;
    }
    rbx += rbx;
    goto label_3;
    esi = 1;
    rax = rbx;
    rax >>= 0x37;
    if (rax != 0) {
        goto label_5;
    }
    rbx <<= 9;
    goto label_3;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 7;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*rbx overflow 0*/) {
            goto label_21;
        }
label_8:
        edi--;
    } while (edi != 0);
label_6:
    ebp |= r9d;
    goto label_3;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 8;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*ebp overflow 0*/) {
            goto label_22;
        }
label_11:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 4;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_23;
        }
label_9:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 5;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_24;
        }
label_12:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    edi = 6;
    r9d = 0;
    do {
        rax = rbx;
        rdx_rax = rax * rcx;
        rbx = rax;
        if (UNKNOWN_OP /*edi overflow 0*/) {
            goto label_25;
        }
label_10:
        edi--;
    } while (edi != 0);
    goto label_6;
    esi = 1;
    edx = 0x400;
    rcx = (int64_t) edx;
    rax = rbx;
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_26;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_26;
    }
    rdx_rax = rax * rcx;
    if (UNKNOWN_OP /*edi overflow 0*/) {
        goto label_26;
    }
    rbx = rax;
    eax = 0;
    ebp |= eax;
    goto label_3;
    rax = rbx;
    rax >>= 0x36;
    if (rax != 0) {
        goto label_5;
    }
    rbx <<= 0xa;
    goto label_3;
    esi = 1;
    goto label_3;
label_18:
    esi = 2;
    edx = 0x3e8;
    goto label_7;
label_19:
    esi = 0;
    edx = 0x400;
    sil = (*((r8 + 2)) == 0x42) ? 1 : 0;
    esi = rsi + rsi + 1;
    goto label_7;
label_21:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_8;
label_26:
    eax = 1;
    rbx |= 0xffffffffffffffff;
    ebp |= eax;
    goto label_3;
label_23:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_9;
label_25:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_10;
label_22:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_11;
label_24:
    r9d = 1;
    rbx |= 0xffffffffffffffff;
    goto label_12;
label_13:
    return assert_fail ("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60, "xstrtoumax");
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4085e0 */
#include <stdint.h>
 
uint64_t fcn_004085e0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    eax = fileno (rdi);
    rdi = rbx;
    if (eax < 0) {
        goto label_1;
    }
    eax = freading ();
    while (rax != -1) {
        eax = fcn_004087a0 (rbx);
        if (eax == 0) {
            goto label_2;
        }
        rax = errno_location ();
        r12d = *(rax);
        fclose (rbx);
        if (r12d != 0) {
            goto label_3;
        }
label_0:
        return rax;
        eax = fileno (rbx);
        esi = 0;
        edx = 1;
        edi = eax;
        rax = lseek ();
    }
label_2:
    rdi = rbx;
label_1:
invalid_funccall(); //    void (*0x4017c0)() ();
label_3:
    *(rbp) = r12d;
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4087a0 */
#include <stdint.h>
 
uint32_t fcn_004087a0 (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    if (rdi != 0) {
        eax = freading ();
        if (eax == 0) {
            goto label_0;
        }
        if ((*(rbx) & 0x100) != 0) {
            goto label_1;
        }
    }
label_0:
    rdi = rbx;
invalid_funccall(); //    void (*0x401980)() ();
label_1:
    fcn_004087e0 (rbx, 0, 1);
    rdi = rbx;
    return fflush ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4087e0 */
#include <stdint.h>
 
int64_t fcn_004087e0 (uint32_t arg1, int64_t arg2, int64_t arg3) {
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rax = *((rdi + 8));
    while (*((rdi + 0x28)) != rax) {
label_0:
invalid_funccall(); //        void (*0x401a40)() ();
        rax = *((rdi + 0x20));
    }
    if (*((rdi + 0x48)) != 0) {
        goto label_0;
    }
    r12d = edx;
    rbx = rdi;
    eax = fileno (rdi);
    edx = r12d;
    rsi = rbp;
    edi = eax;
    rax = lseek ();
    if (rax != -1) {
        *(rbx) &= 0xffffffef;
        *((rbx + 0x90)) = rax;
        eax = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x408840 */
#include <stdint.h>
 
uint64_t fcn_00408840 (int64_t arg1, int64_t arg2) {
    rdi = arg1;
    rsi = arg2;
    r11 = rdi + 8;
    r12d = *((rsi + 0x2c));
    ebp = *(rsi);
    rbx = *((rsi + 0x30));
    r9d = r12d;
    r10d = ebp;
    r8 = rbx;
label_1:
    if (r10d <= r8d) {
        goto label_2;
    }
label_0:
    if (r9d >= r8d) {
        goto label_2;
    }
    r14d = r10d;
    edx = r8d;
    r14d -= r8d;
    edx -= r9d;
    if (r14d <= edx) {
        goto label_3;
    }
    rcx = (int64_t) r9d;
    r10d -= edx;
    edx--;
    rdx += rcx;
    rax = rdi + rcx*8;
    r13 = r11 + rdx*8;
    rdx = (int64_t) r10d;
    rdx -= rcx;
    do {
        rcx = *(rax);
        r14 = *((rax + rdx*8));
        *(rax) = r14;
        *((rax + rdx*8)) = rcx;
        rax += 8;
    } while (r13 != rax);
    if (r10d > r8d) {
        goto label_0;
    }
label_2:
    eax = ebp;
    *((rsi + 0x30)) = ebp;
    eax -= r8d;
    r12d += eax;
    *((rsi + 0x2c)) = r12d;
    r12 = rbx;
    r13 = rbx;
    r14 = rbx;
    r15 = rbx;
    return rax;
label_3:
    rdx = (int64_t) r9d;
    ecx = r14 - 1;
    rcx += rdx;
    rax = rdi + rdx*8;
    r13 = r11 + rcx*8;
    rcx = rbx;
    rcx -= rdx;
    rdx = rcx;
    do {
        rcx = *(rax);
        r15 = *((rax + rdx*8));
        *(rax) = r15;
        *((rax + rdx*8)) = rcx;
        rax += 8;
    } while (rax != r13);
    r9d += r14d;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x408920 */
#include <stdint.h>
 
int64_t fcn_00408920 (int64_t arg_90h, int64_t arg_98h, int64_t arg_a0h, int64_t arg1, int64_t arg2, char * arg3, int64_t arg4, int64_t arg5, int64_t arg6) {
    int64_t var_ch;
    int64_t var_10h;
    void * ptr;
    int64_t var_20h;
    int64_t var_28h;
    char * s;
    int64_t var_38h;
    int64_t c;
    int64_t var_40h;
    int64_t var_44h;
    void * var_48h;
    size_t nmeb;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rax = *((rsp + 0x90));
    *((rsp + 0x40)) = edi;
    *((rsp + 0x28)) = rsi;
    r14 = *((rax + 0x20));
    *((rsp + 0x30)) = rdx;
    *(rsp) = rcx;
    eax = *(r14);
    *((rsp + 0x20)) = r8;
    *((rsp + 0xc)) = r9d;
    *((rsp + 0x3f)) = al;
    if (al == 0x3d) {
        goto label_11;
    }
    if (al == 0) {
        goto label_11;
    }
    do {
        rbp++;
        eax = *(rbp);
        if (al == 0) {
            goto label_12;
        }
    } while (al != 0x3d);
label_12:
    r13 = rbp;
    r13 -= r14;
label_6:
    rbx = *(rsp);
    r12d = 0;
    rax = *(rbx);
    *((rsp + 0x10)) = rax;
    r15 = rax;
    if (rax != 0) {
        goto label_13;
    }
    goto label_14;
    do {
        r12 = (int64_t) r8d;
label_13:
        eax = strncmp (r15, r14, r13);
        if (eax == 0) {
            rax = strlen (r15);
            if (rax == r13) {
                goto label_15;
            }
        }
        rbx += 0x20;
        r15 = *(rbx);
        r8d = r12 + 1;
    } while (r15 != 0);
    rcx = *(rsp);
    *((rsp + 0x4c)) = r8d;
    r9d = 0;
    ebx = 0;
    *((rsp + 0x44)) = 0xffffffff;
    r15 = r9;
    *((rsp + 0x38)) = 0;
    *((rsp + 0x48)) = 0;
    *((rsp + 0x18)) = 0;
    *((rsp + 0x10)) = rbp;
    do {
        eax = strncmp (*((rsp + 0x10)), r14, r13);
        if (eax == 0) {
            if (rbx == 0) {
                goto label_16;
            }
            eax = *((rsp + 0xc));
            if (eax == 0) {
                goto label_17;
            }
label_0:
            r11d = *((rsp + 0x38));
            if (r11d != 0) {
                goto label_1;
            }
            r10d = *((rsp + 0x98));
            if (r10d == 0) {
                goto label_18;
            }
            if (*((rsp + 0x18)) == 0) {
                goto label_19;
            }
label_3:
            rax = *((rsp + 0x18));
            *((rax + r15)) = 1;
        }
label_1:
        rbp += 0x20;
        rdi = *(rbp);
        r15++;
    } while (rdi != 0);
    rbp = *((rsp + 0x10));
    if (*((rsp + 0x18)) != 0) {
        goto label_20;
    }
    r9d = *((rsp + 0x38));
    if (r9d != 0) {
        goto label_20;
    }
    if (rbx == 0) {
label_14:
        eax = *((rsp + 0xc));
        if (eax != 0) {
            rax = *((rsp + 0x90));
            rcx = *((rsp + 0x28));
            rax = *(rax);
            rax = *((rcx + rax*8));
            if (*((rax + 1)) == 0x2d) {
                goto label_21;
            }
            esi = *((rsp + 0x3f));
            rax = strchr (*((rsp + 0x30)), rsi);
            rdx = rax;
            eax = 0xffffffff;
            if (rdx != 0) {
                goto label_5;
            }
        }
label_21:
        ecx = *((rsp + 0x98));
        if (ecx != 0) {
            goto label_22;
        }
label_4:
        rax = *((rsp + 0x90));
        *((rax + 0x20)) = 0;
        *(rax)++;
        *((rax + 8)) = 0;
        eax = 0x3f;
        return rax;
    }
    r12d = *((rsp + 0x44));
label_15:
    rax = *((rsp + 0x90));
    rcx = *((rsp + 0x90));
    edx = *(rax);
    *((rcx + 0x20)) = 0;
    eax = rdx + 1;
    *(rcx) = eax;
    ecx = *((rbx + 8));
    if (*(rbp) != 0) {
        goto label_23;
    }
    if (ecx == 1) {
        goto label_24;
    }
label_2:
    rax = *((rsp + 0x20));
    if (rax != 0) {
        *(rax) = r12d;
    }
    rdx = *((rbx + 0x10));
    eax = *((rbx + 0x18));
    if (rdx != 0) {
        *(rdx) = eax;
        eax = 0;
    }
label_5:
    return rax;
label_17:
    eax = *((rbp + 8));
    if (*((rbx + 8)) != eax) {
        goto label_0;
    }
    rax = *((rbp + 0x10));
    if (*((rbx + 0x10)) != rax) {
        goto label_0;
    }
    eax = *((rbp + 0x18));
    if (*((rbx + 0x18)) != eax) {
        goto label_0;
    }
    goto label_1;
label_23:
    if (ecx == 0) {
        goto label_25;
    }
    rax = *((rsp + 0x90));
    rbp++;
    *((rax + 0x10)) = rbp;
    goto label_2;
label_16:
    *((rsp + 0x44)) = r15d;
    rbx = rbp;
    goto label_1;
label_18:
    *((rsp + 0x38)) = 1;
    if (*((rsp + 0x18)) == 0) {
        goto label_1;
    }
    goto label_3;
label_22:
    rax = *((rsp + 0x28));
    edx = 5;
    rbx = *(rax);
    rax = dcgettext (0, "%s: unrecognized option '%s%s'\n");
    r8 = *((rsp + 0xa0));
    r9 = r14;
    rdi = stderr;
    rdx = rax;
    rcx = rbx;
    esi = 1;
    eax = 0;
    fprintf_chk ();
    goto label_4;
label_20:
    r8d = *((rsp + 0x98));
    if (r8d != 0) {
        edi = *((rsp + 0x38));
        if (edi == 0) {
            goto label_26;
        }
        rax = *((rsp + 0x28));
        edx = 5;
        rbx = *(rax);
        rax = dcgettext (0, "%s: option '%s%s' is ambiguous\n");
        r8 = *((rsp + 0xa0));
        r9 = r14;
        rdi = stderr;
        rdx = rax;
        rcx = rbx;
        esi = 1;
        eax = 0;
        fprintf_chk ();
        rax = *((rsp + 0x90));
        r14 = *((rax + 0x20));
    }
label_9:
    esi = *((rsp + 0x48));
    if (esi != 0) {
        goto label_27;
    }
label_7:
    rax = strlen (r14);
    r14 += rax;
    rax = *((rsp + 0x90));
    *((rax + 0x20)) = r14;
    *(rax)++;
    *((rax + 8)) = 0;
    eax = 0x3f;
    goto label_5;
label_24:
    if (eax >= *((rsp + 0x40))) {
        goto label_28;
    }
    rcx = *((rsp + 0x90));
    edx += 2;
    rax = (int64_t) eax;
    *(rcx) = edx;
    rcx = *((rsp + 0x28));
    rax = *((rcx + rax*8));
    rcx = *((rsp + 0x90));
    *((rcx + 0x10)) = rax;
    goto label_2;
label_11:
    r13d = 0;
    goto label_6;
label_25:
    edx = *((rsp + 0x98));
    while (1) {
        eax = *((rbx + 0x18));
        rcx = *((rsp + 0x90));
        *((rcx + 8)) = eax;
        eax = 0x3f;
        goto label_5;
label_19:
        rdi = *((rsp + 0x4c));
        rax = calloc (rdi, 1);
        *((rsp + 0x18)) = rax;
        if (rax == 0) {
            goto label_29;
        }
        rax = *((rsp + 0x44));
        rcx = *((rsp + 0x18));
        *((rsp + 0x48)) = 1;
        *((rcx + rax)) = 1;
        goto label_3;
        rax = *((rsp + 0x28));
        r12 = *(rbx);
        edx = 5;
        rbp = *(rax);
        rax = dcgettext (0, "%s: option '%s%s' doesn't allow an argument\n");
        r8 = *((rsp + 0xa0));
        r9 = r12;
        rdi = stderr;
        rdx = rax;
        rcx = rbp;
        esi = 1;
        eax = 0;
        fprintf_chk ();
    }
label_27:
    free (*((rsp + 0x18)));
    goto label_7;
label_28:
    eax = *((rsp + 0x98));
    if (eax != 0) {
        goto label_30;
    }
label_10:
    eax = *((rbx + 0x18));
    rcx = *((rsp + 0x90));
    *((rcx + 8)) = eax;
    rax = *((rsp + 0x30));
    al = (*(rax) != 0x3a) ? 1 : 0;
    eax = (int32_t) al;
    eax = rax * 5;
    goto label_5;
label_26:
    rdi = stderr;
    flockfile ();
    rax = *((rsp + 0x90));
    edx = 5;
    rbx = *((rax + 0x20));
    rax = *((rsp + 0x28));
    rbp = *(rax);
    rax = dcgettext (0, "%s: option '%s%s' is ambiguous; possibilities:");
    rdi = stderr;
    r9 = rbx;
    r8 = *((rsp + 0xa0));
    rcx = rbp;
    rdx = rax;
    esi = 1;
    eax = 0;
    fprintf_chk ();
    rax = *((rsp + 0x18));
    rdi = stderr;
    rbx = *(rsp);
    r12 = rax + r12 + 1;
    while (*(rbp) == 0) {
label_8:
        rbp++;
        rbx += 0x20;
        if (r12 == rbp) {
            goto label_31;
        }
    }
    r8 = *(rbx);
    edx = " '%s%s'";
    esi = 1;
    eax = 0;
    rcx = *((rsp + 0xa0));
    fprintf_chk ();
    rdi = stderr;
    goto label_8;
label_31:
    fputc (0xa, rdi);
    rdi = stderr;
    funlockfile ();
    rax = *((rsp + 0x90));
    r14 = *((rax + 0x20));
    goto label_9;
label_30:
    rax = *((rsp + 0x28));
    r12 = *(rbx);
    edx = 5;
    rbp = *(rax);
    rax = dcgettext (0, "%s: option '%s%s' requires an argument\n");
    r8 = *((rsp + 0xa0));
    r9 = r12;
    rdi = stderr;
    rdx = rax;
    rcx = rbp;
    esi = 1;
    eax = 0;
    fprintf_chk ();
    goto label_10;
label_29:
    *((rsp + 0x38)) = 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x408f40 */
#include <stdint.h>
 
uint64_t fcn_00408f40 (int64_t arg_70h, int64_t arg_78h, int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4, int64_t arg5, int64_t arg6) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_28h;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = arg4;
    r8 = arg5;
    r9 = arg6;
    rbx = *((rsp + 0x70));
    *((rsp + 8)) = rcx;
    *((rsp + 0x10)) = r8;
    r13d = *((rbx + 4));
    if (edi <= 0) {
        goto label_16;
    }
    eax = *(rbx);
    r12 = rsi;
    r15 = rdx;
    *((rbx + 0x10)) = 0;
    if (eax == 0) {
        goto label_17;
    }
    esi = *((rbx + 0x18));
    if (esi == 0) {
label_1:
        *((rbx + 0x30)) = eax;
        *((rbx + 0x2c)) = eax;
        *((rbx + 0x20)) = 0;
        eax = *(r15);
        if (al == 0x2d) {
            goto label_18;
        }
        if (al == 0x2b) {
            goto label_19;
        }
        ecx = *((rsp + 0x78));
        edx = 0;
        if (ecx == 0) {
            goto label_20;
        }
label_8:
        *((rbx + 0x28)) = 0;
        goto label_11;
    }
    eax = *(rdx);
    rdx = *((rbx + 0x20));
    ecx = rax - 0x2b;
    ecx &= 0xfd;
    if (ecx != 0) {
        goto label_21;
    }
    eax = *((r15 + 1));
    r15++;
    eax = 0;
    if (al == 0x3a) {
        r13d = eax;
    }
    if (rdx != 0) {
        goto label_22;
    }
    do {
label_0:
        eax = *(rbx);
        if (*((rbx + 0x30)) > eax) {
            *((rbx + 0x30)) = eax;
        }
        if (eax < *((rbx + 0x2c))) {
            *((rbx + 0x2c)) = eax;
        }
        if (*((rbx + 0x28)) == 1) {
            goto label_23;
        }
label_4:
        if (ebp == eax) {
            goto label_24;
        }
        rdx = (int64_t) eax;
        ecx = 3;
        edi = 0x40c521;
        r14 = *((r12 + rdx*8));
        rsi = *((r12 + rdx*8));
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        cl = (ebp > eax) ? 1 : 0;
        if (cl != 0) {
            goto label_25;
        }
        edx = *((rbx + 0x2c));
        ecx = *((rbx + 0x30));
        eax++;
        *(rbx) = eax;
        if (edx == ecx) {
            goto label_26;
        }
        if (eax != ecx) {
            fcn_00408840 (r12, rbx);
            edx = *((rbx + 0x2c));
        }
label_12:
        *((rbx + 0x30)) = ebp;
        *(rbx) = ebp;
        goto label_27;
label_18:
        *((rbx + 0x28)) = 2;
        r15++;
        edx = 0;
label_11:
        *((rbx + 0x18)) = 1;
        eax = *(r15);
label_21:
        eax = 0;
        if (al == 0x3a) {
            r13d = eax;
        }
    } while (rdx == 0);
label_22:
    if (*(rdx) == 0) {
        goto label_0;
    }
label_6:
    r8 = rdx + 1;
    *((rsp + 0x20)) = rdx;
    *((rbx + 0x20)) = r8;
    r14d = *(rdx);
    *((rsp + 0x28)) = r8;
    *((rsp + 0x1c)) = r14b;
    rax = strchr (r15, r14d);
    rdx = *((rsp + 0x20));
    ecx = *((rsp + 0x1c));
    r8 = *((rsp + 0x28));
    if (*((rdx + 1)) == 0) {
        *(rbx)++;
    }
    ecx -= 0x3a;
    if (cl <= 1) {
        goto label_28;
    }
    if (rax == 0) {
        goto label_28;
    }
    ecx = *((rax + 1));
    if (*(rax) == 0x57) {
        goto label_29;
    }
label_7:
    if (cl == 0x3a) {
        goto label_30;
    }
    do {
label_2:
        eax = r14d;
        return rax;
label_25:
        if (*(r14) == 0x2d) {
            goto label_31;
        }
label_5:
        edx = *((rbx + 0x28));
        if (edx == 0) {
            goto label_16;
        }
        eax++;
        *((rbx + 0x10)) = r14;
        r14d = 1;
        *(rbx) = eax;
    } while (1);
label_17:
    *(rbx) = 1;
    eax = 1;
    goto label_1;
label_24:
    ebp = *((rbx + 0x30));
    edx = *((rbx + 0x2c));
label_27:
    if (edx != ebp) {
        *(rbx) = edx;
    }
label_16:
    r14d = 0xffffffff;
    goto label_2;
label_23:
    edx = *((rbx + 0x30));
    if (*((rbx + 0x2c)) == edx) {
        goto label_32;
    }
    if (eax != edx) {
        *((rsp + 0x1c)) = r9d;
        fcn_00408840 (r12, rbx);
        edx = *(rbx);
        r9d = *((rsp + 0x1c));
    }
label_9:
    if (ebp <= edx) {
        goto label_33;
    }
    rax = (int64_t) edx;
    while (*(rcx) != 0x2d) {
label_3:
        edx = rsi + 1;
        rax++;
        *(rbx) = edx;
        if (ebp <= eax) {
            goto label_33;
        }
        rcx = *((r12 + rax*8));
        esi = eax;
        edx = eax;
    }
    if (*((rcx + 1)) == 0) {
        goto label_3;
    }
    eax = *(rbx);
label_10:
    *((rbx + 0x30)) = edx;
    goto label_4;
label_31:
    ecx = *((r14 + 1));
    if (cl == 0) {
        goto label_5;
    }
    if (*((rsp + 8)) == 0) {
        goto label_34;
    }
    if (cl == 0x2d) {
        goto label_35;
    }
    if (r9d == 0) {
        goto label_34;
    }
    if (*((r14 + 2)) == 0) {
        esi = (int32_t) cl;
        *((rsp + 0x1c)) = r9d;
        rax = strchr (r15, rsi);
        r9d = *((rsp + 0x1c));
        if (rax != 0) {
            goto label_34;
        }
    }
    rdx = r14 + 1;
    *((rbx + 0x20)) = rdx;
    eax = fcn_00408920 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), r9);
    r14d = eax;
    if (eax != 0xffffffff) {
        goto label_2;
    }
    rax = *(rbx);
    r14 = *((r12 + rax*8));
label_34:
    rdx = r14 + 1;
    goto label_6;
label_29:
    if (*((rsp + 8)) == 0) {
        goto label_7;
    }
    if (cl != 0x3b) {
        goto label_7;
    }
    if (*((rdx + 1)) == 0) {
        rax = *(rbx);
        if (eax == ebp) {
            goto label_36;
        }
        r8 = *((r12 + rax*8));
    }
    *((rbx + 0x20)) = r8;
    *((rbx + 0x10)) = 0;
label_14:
    eax = fcn_00408920 (ebp, r12, r15, *((rsp + 0x28)), *((rsp + 0x30)), 0);
    r14d = eax;
    goto label_2;
label_20:
    *((rsp + 0x1c)) = r9d;
    rax = getenv ("POSIXLY_CORRECT");
    r9d = *((rsp + 0x1c));
    if (rax == 0) {
        goto label_37;
    }
    rdx = *((rbx + 0x20));
    goto label_8;
label_30:
    edx = *((rdx + 1));
    if (*((rax + 2)) == 0x3a) {
        goto label_38;
    }
    rax = *(rbx);
    if (dl != 0) {
        goto label_39;
    }
    if (ebp == eax) {
        goto label_40;
    }
    edx = rax + 1;
    rax = *((r12 + rax*8));
    *(rbx) = edx;
    *((rbx + 0x10)) = rax;
label_13:
    *((rbx + 0x20)) = 0;
    goto label_2;
label_32:
    if (eax == edx) {
        goto label_9;
    }
    *((rbx + 0x2c)) = eax;
    edx = eax;
    goto label_9;
label_33:
    eax = edx;
    goto label_10;
label_19:
    *((rbx + 0x28)) = 0;
    r15++;
    edx = 0;
    goto label_11;
label_28:
    while (1) {
        *((rbx + 8)) = r14d;
        r14d = 0x3f;
        goto label_2;
label_26:
        *((rbx + 0x2c)) = eax;
        edx = eax;
        goto label_12;
label_39:
        eax++;
        *((rbx + 0x10)) = r8;
        *(rbx) = eax;
        goto label_13;
        rbp = *(r12);
        edx = 5;
        rax = dcgettext (0, "%s: invalid option -- '%c'\n");
        rdi = stderr;
        r8d = r14d;
        esi = 1;
        rdx = rax;
        rcx = rbp;
        eax = 0;
        fprintf_chk ();
    }
label_38:
    if (dl != 0) {
        *((rbx + 0x10)) = r8;
        *(rbx)++;
        goto label_13;
label_37:
        *((rbx + 0x28)) = 1;
        rdx = *((rbx + 0x20));
        goto label_11;
    }
    *((rbx + 0x10)) = 0;
    goto label_13;
label_40:
    while (1) {
        *((rbx + 8)) = r14d;
        r14d = 0;
        r14b = (*(r15) != 0x3a) ? 1 : 0;
        r14d = r14 * 5;
        goto label_13;
label_35:
        rdx = r14 + 2;
        *((rbx + 0x20)) = rdx;
        goto label_14;
label_36:
        if (r13d != 0) {
            goto label_41;
        }
label_15:
        *((rbx + 8)) = r14d;
        r14d = 0;
        r14b = (*(r15) != 0x3a) ? 1 : 0;
        r14d = r14 * 5;
        goto label_2;
        rbp = *(r12);
        edx = 5;
        rax = dcgettext (0, "%s: option requires an argument -- '%c'\n");
        rdi = stderr;
        r8d = r14d;
        esi = 1;
        rdx = rax;
        rcx = rbp;
        eax = 0;
        fprintf_chk ();
    }
label_41:
    rbp = *(r12);
    edx = 5;
    rax = dcgettext (0, "%s: option requires an argument -- '%c'\n");
    rdi = stderr;
    r8d = r14d;
    esi = 1;
    rdx = rax;
    rcx = rbp;
    eax = 0;
    fprintf_chk ();
    goto label_15;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x409510 */
#include <stdint.h>
 
int32_t fcn_00409510 (int64_t arg_10h) {
    eax = *(0x0060e2bc);
    *(0x0060e480) = eax;
    eax = *(0x0060e2b8);
    *(0x0060e484) = eax;
    eax = *((rsp + 0x10));
    fcn_00408f40 (rdi, rsi, rdx, rcx, r8, r9);
    edx = imp.__libc_start_main;
    *(0x0060e2bc) = edx;
    rdx = imp.__libc_start_main;
    *(0x0060e4c0) = rdx;
    edx = imp.__libc_start_main;
    *(0x0060e2b4) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x409590 */
#include <stdint.h>
 
void fcn_00409590 (void) {
    r9d = 0;
    fcn_00409510 (rdi);
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x409610 */
#include <stdint.h>
 
uint64_t fcn_00409610 (wint_t arg1, int64_t arg2, size_t * arg3, mbstate_t * ps) {
    int64_t var_ch;
    rdi = arg1;
    rsi = arg2;
    rdx = arg3;
    rcx = ps;
    if (rsi == 0) {
        goto label_1;
    }
    rbx = 0xfffffffffffffffe;
    if (rdx == 0) {
        goto label_0;
    }
    r12 = rdi;
    while (1) {
        rax = mbrtowc (r12, rbp, rdx, rcx);
        rbx = rax;
        if (rax > 0xfffffffffffffffd) {
            goto label_2;
        }
label_0:
        rax = rbx;
        return rax;
label_1:
        edx = 1;
        r12 = rsp + 0xc;
    }
label_2:
    al = fcn_004096f0 (0);
    if (al != 0) {
        goto label_0;
    }
    eax = *(rbp);
    ebx = 1;
    *(r12) = eax;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x409690 */
#include <stdint.h>
 
uint64_t fcn_00409690 (int64_t arg1) {
    rdi = arg1;
    rax = fpending ();
    ebx = *(rbp);
    r12 = rax;
    ebx &= 0x20;
    eax = fcn_004085e0 (rbp);
    if (ebx != 0) {
        goto label_1;
    }
    if (eax == 0) {
        goto label_0;
    }
    if (r12 != 0) {
        goto label_2;
    }
    rax = errno_location ();
    al = (*(rax) != 9) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    do {
label_0:
        return rax;
label_1:
        if (eax != 0) {
            goto label_2;
        }
        errno_location ();
        *(rax) = 0;
        eax = 0xffffffff;
    } while (1);
label_2:
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x4096f0 */
#include <stdint.h>
 
uint64_t fcn_004096f0 (int32_t category) {
    rdi = category;
    rax = setlocale (rdi, 0);
    rdx = rax;
    eax = 1;
    if (rdx != 0) {
        ecx = 2;
        edi = 0x40c544;
        rsi = rdx;
        __asm ("repe cmpsb byte [rsi], byte [rdi]");
        cl = (rdx > 0) ? 1 : 0;
        eax = 0;
        if (cl != 0) {
            goto label_0;
        }
    }
    return rax;
label_0:
    edi = "POSIX";
    ecx = 6;
    rsi = rdx;
    __asm ("repe cmpsb byte [rsi], byte [rdi]");
    al = (cl > 0) ? 1 : 0;
    al = (al != 0) ? 1 : 0;
    return rax;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x409750 */
#include <stdint.h>
 
uint64_t fcn_00409750 (void) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_60h;
    rax = nl_langinfo (0xe);
    r15 = imp.__libc_start_main;
    rbx = rax;
    eax = 0x40c53f;
    if (rax == 0) {
        rbx = rax;
    }
    if (r15 == 0) {
        goto label_15;
    }
label_1:
    ebp = *(r15);
    if (bpl != 0) {
        goto label_16;
    }
    goto label_17;
    do {
label_0:
        strlen (r15);
        rbp = r15 + rax + 1;
        strlen (rbp);
        r15 = rbp + rax + 1;
        ebp = *(r15);
        if (bpl == 0) {
            goto label_17;
        }
label_16:
        eax = strcmp (rbx, r15);
        if (eax == 0) {
            goto label_18;
        }
    } while (bpl != 0x2a);
    if (*((r15 + 1)) != 0) {
        goto label_0;
    }
label_18:
    strlen (r15);
    rbx = r15 + rax + 1;
label_17:
    eax = "ASCII";
    if (*(rbx) == 0) {
        rbx = rax;
    }
    rax = rbx;
    return rax;
label_15:
    rax = getenv ("CHARSETALIASDIR");
    r13 = rax;
    if (rax == 0) {
        goto label_19;
    }
    if (*(rax) == 0) {
        goto label_19;
    }
    rax = strlen (rax);
    r12 = rax;
    r14 = rax;
    if (rax != 0) {
        goto label_20;
    }
label_13:
    rax = malloc (0xe);
    if (rax != 0) {
        goto label_21;
    }
    do {
        r15d = 0x40c53f;
label_2:
        *(0x0060e4b8) = r15;
        goto label_1;
label_19:
        r12d = 0x65;
        r14d = 0x64;
        r13d = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
label_14:
        rax = malloc (0x73);
    } while (rax == 0);
    memcpy (rbp, r13, r14);
    *((rbp + r14)) = 0x2f;
    do {
        r12 += rbp;
        rax = 0x2e74657372616863;
        *(r12) = rax;
        eax = 0x73;
        *((r12 + 0xc)) = ax;
        eax = 0;
        *((r12 + 8)) = 0x61696c61;
        eax = open (rbp, 0, rdx);
        r12d = eax;
        if (eax >= 0) {
            goto label_22;
        }
label_6:
        r15d = 0x40c53f;
label_7:
        free (rbp);
        goto label_2;
label_21:
        eax = memcpy (rbp, r13, r14);
    } while (1);
label_22:
    esi = 0x409ee0;
    edi = eax;
    r15d = 0;
    rax = fdopen ();
    *((rsp + 8)) = 0;
    r13 = rax;
    if (rax == 0) {
        goto label_23;
    }
    rax = rbx;
    r12 = rsp + 0x60;
    r14 = rsp + 0x20;
    rbx = r13;
    r13 = rax;
    do {
label_3:
        rax = *((rbx + 8));
        if (rax >= *((rbx + 0x10))) {
            goto label_24;
        }
label_4:
        rdx = rax + 1;
        *((rbx + 8)) = rdx;
        edi = *(rax);
label_5:
        eax = rdi - 9;
    } while (eax <= 1);
    if (edi == 0x20) {
        goto label_3;
    }
    if (edi == 0x23) {
        goto label_25;
    }
    eax = ungetc (rdi, rbx);
    eax = 0;
    rcx = r12;
    rdx = r14;
    eax = fscanf (rbx, "%50s %50s");
    if (eax <= 1) {
        goto label_12;
    }
    rcx = r14;
    do {
        edx = *(rcx);
        rcx += 4;
        eax = rdx - 0x1010101;
        edx = ~edx;
        eax &= edx;
        eax &= 0x80808080;
    } while (eax == 0);
    edx = eax;
    edx >>= 0x10;
    if ((eax & 0x8080) == 0) {
        eax = edx;
    }
    rdx = rcx + 2;
    if ((eax & 0x8080) == 0) {
        rcx = rdx;
    }
    edx = eax;
    dl += al;
    rdx = r12;
    rcx -= 3;
    rcx -= r14;
    do {
        esi = *(rdx);
        rdx += 4;
        eax = rsi - 0x1010101;
        esi = ~esi;
        eax &= esi;
        eax &= 0x80808080;
    } while (eax == 0);
    esi = eax;
    *((rsp + 0x10)) = rcx;
    esi >>= 0x10;
    if ((eax & 0x8080) == 0) {
        eax = esi;
    }
    rsi = rdx + 2;
    if ((eax & 0x8080) == 0) {
        rdx = rsi;
    }
    esi = eax;
    sil += al;
    rdx -= 3;
    rdx -= r12;
    rax = rcx + rdx;
    *((rsp + 0x18)) = rdx;
    if (*((rsp + 8)) != 0) {
        goto label_26;
    }
    rcx = rax + 2;
    *((rsp + 8)) = rcx;
    rax = malloc (rax + 3);
    rcx = *((rsp + 0x10));
    rdx = *((rsp + 0x18));
label_9:
    if (rax == 0) {
        goto label_27;
    }
    rdi = *((rsp + 8));
    rsi = 0xfffffffffffffffe;
    rsi -= rcx;
    rcx++;
    rdi -= rdx;
    rsi += rdi;
    rsi += rax;
    if (ecx >= 8) {
        goto label_28;
    }
    if ((cl & 4) != 0) {
        goto label_29;
    }
    if (ecx != 0) {
        r9d = *(r14);
        *(rsi) = r9b;
        if ((cl & 2) != 0) {
            goto label_30;
        }
    }
label_10:
    rdx++;
    rcx = rax + rdi - 1;
    if (edx >= 8) {
        goto label_31;
    }
    if ((dl & 4) != 0) {
        goto label_32;
    }
    if (edx != 0) {
        esi = *(r12);
        *(rcx) = sil;
        if ((dl & 2) != 0) {
            goto label_33;
        }
    }
label_11:
    r15 = rax;
    rax = *((rbx + 8));
    if (rax < *((rbx + 0x10))) {
        goto label_4;
    }
label_24:
    rdi = rbx;
    eax = uflow ();
    edi = eax;
    if (eax != 0xffffffff) {
        goto label_5;
    }
label_12:
    rax = r13;
    r13 = rbx;
    rbx = rax;
    fcn_004085e0 (rbx);
    rax = *((rsp + 8));
    if (rax == 0) {
        goto label_6;
    }
    *((r15 + rax)) = 0;
    goto label_7;
    do {
        rdx = rax + 1;
        *((rbx + 8)) = rdx;
        eax = *(rax);
        edx = 1;
label_8:
        if (eax == 0xa) {
            goto label_34;
        }
        if (dl == 0) {
            goto label_34;
        }
label_25:
        rax = *((rbx + 8));
    } while (rax < *((rbx + 0x10)));
    rdi = rbx;
    eax = uflow ();
    dl = (eax != 0xffffffff) ? 1 : 0;
    goto label_8;
label_26:
    rax += *((rsp + 8));
    rcx = rax + 2;
    *((rsp + 8)) = rcx;
    eax = realloc (r15, rax + 3);
    rdx = *((rsp + 0x18));
    rcx = *((rsp + 0x10));
    goto label_9;
label_28:
    r9 = *(r14);
    *(rsi) = r9;
    r9d = ecx;
    r10 = *((r14 + r9 - 8));
    *((rsi + r9 - 8)) = r10;
    r9 = rsi + 8;
    r10 = r14;
    r9 &= 0xfffffffffffffff8;
    rsi -= r9;
    ecx += esi;
    r10 -= rsi;
    ecx &= 0xfffffff8;
    if (ecx < 8) {
        goto label_10;
    }
    ecx &= 0xfffffff8;
    esi = 0;
    do {
        r8d = esi;
        esi += 8;
        r11 = *((r10 + r8));
        *((r9 + r8)) = r11;
    } while (esi < ecx);
    goto label_10;
label_31:
    rsi = *(r12);
    r9 = r12;
    *(rcx) = rsi;
    esi = edx;
    rdi = *((r12 + rsi - 8));
    *((rcx + rsi - 8)) = rdi;
    rdi = rcx + 8;
    rdi &= 0xfffffffffffffff8;
    rcx -= rdi;
    edx += ecx;
    r9 -= rcx;
    edx &= 0xfffffff8;
    if (edx < 8) {
        goto label_11;
    }
    edx &= 0xfffffff8;
    ecx = 0;
    do {
        esi = ecx;
        ecx += 8;
        r8 = *((r9 + rsi));
        *((rdi + rsi)) = r8;
    } while (ecx < edx);
    goto label_11;
label_34:
    if (eax == 0xffffffff) {
        goto label_12;
    }
    goto label_3;
label_20:
    if (*((r13 + rax - 1)) == 0x2f) {
        rdi = rax + 0xe;
        goto label_13;
label_23:
        close (r12d);
        goto label_6;
label_29:
        r9d = *(r14);
        *(rsi) = r9d;
        r9d = *((r14 + rcx - 4));
        *((rsi + rcx - 4)) = r9d;
        goto label_10;
label_32:
        esi = *(r12);
        *(rcx) = esi;
        esi = *((r12 + rdx - 4));
        *((rcx + rdx - 4)) = esi;
        goto label_11;
label_27:
        rax = r13;
        r13 = rbx;
        r15d = 0x40c53f;
        rbx = rax;
        free (r15);
        fcn_004085e0 (r13);
        goto label_7;
label_30:
        r9d = *((r14 + rcx - 2));
        *((rsi + rcx - 2)) = r9w;
        goto label_10;
label_33:
        esi = edx;
        edx = *((r12 + rsi - 2));
        *((rcx + rsi - 2)) = dx;
        goto label_11;
    }
    rdi = rax + 0xf;
    r12++;
    goto label_14;
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x409d30 */
#include <stdint.h>
 
int64_t fcn_00409d30 (void) {
    rax = 0x60e228;
    edx = 0;
    if (rax != 0) {
        rdx = *(rax);
    }
    esi = 0;
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* ./dataset/coreutils_strip_8.2/coreutils_strip-8.29_gcc-8.2.0_x86_64_O2_b2sum.elf @ 0x409d48 */
#include <stdint.h>
 
void fcn_00409d48 (int64_t arg3) {
    rdx = arg3;
    ebx = segment.GNU_RELRO;
    do {
        rax = *(rbx);
        if (rax == -1) {
            goto label_0;
        }
invalid_funccall(); //        void (*rax)() ();
        rbx -= 8;
    } while (1);
INVALID_JUMP;
}
