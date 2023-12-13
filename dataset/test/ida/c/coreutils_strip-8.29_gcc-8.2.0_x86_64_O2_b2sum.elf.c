__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  unsigned int v3; // r14d
  const char *v4; // r13
  int v6; // ebx
  int v7; // eax
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  char *v12; // rax
  char v13; // dl
  const char *v14; // rsi
  char *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  char *v18; // rax
  FILE *v19; // r13
  __int64 v20; // r12
  __ssize_t v21; // rax
  char *v22; // r15
  char v23; // dl
  __ssize_t v24; // r10
  __int64 v25; // rbx
  char *v26; // r8
  __int64 v27; // rbx
  char *v28; // r11
  char v29; // bp
  char *const *v30; // rsi
  __int64 v31; // rax
  __ssize_t v32; // r10
  char *v33; // r11
  unsigned __int64 v34; // rax
  char v35; // al
  char *v36; // rax
  __int64 v37; // rsi
  const unsigned __int16 *v38; // rdi
  __int64 i; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rax
  char *v43; // r8
  char v44; // dl
  const char *v45; // rbx
  _BOOL8 v46; // rbp
  char *v47; // rax
  unsigned int v48; // eax
  char *v49; // rdx
  char *v50; // r8
  char *v51; // rcx
  char *IO_write_ptr; // rax
  const char *v53; // rsi
  char *v54; // rax
  int v55; // ebx
  char v56; // al
  __int64 v57; // rbx
  char *v58; // rax
  unsigned __int64 v59; // rdx
  const __int32_t **v60; // rax
  const __int32_t *v61; // rdi
  char *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v66; // rbx
  __ssize_t v67; // r10
  char *const *v68; // r11
  const char *v69; // r10
  const char *v70; // rbx
  int *v71; // rax
  __int64 v72; // r8
  unsigned int v73; // ebx
  char *v74; // rax
  unsigned __int64 v75; // rbp
  __int64 v76; // rdx
  char *v77; // rax
  char *v78; // rax
  char *v79; // rax
  __int64 v80; // rcx
  char *v81; // rdx
  __int64 v82; // rbp
  char *v83; // rax
  __int64 v84; // rbx
  char *v85; // rax
  char v86; // dl
  __int64 v87; // rax
  const char *v88; // rdx
  char v89; // al
  char *v90; // r8
  char v91; // al
  __int64 v92; // rbp
  char *v93; // rax
  char *v94; // rbx
  int *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  char *v99; // rax
  char *v100; // rax
  char *v101; // rax
  char *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rbx
  char *v105; // rax
  __int64 v106; // rbx
  char *v107; // rax
  char *v108; // [rsp+8h] [rbp-150h]
  char *v109; // [rsp+8h] [rbp-150h]
  unsigned __int64 v110; // [rsp+8h] [rbp-150h]
  const char **v111; // [rsp+10h] [rbp-148h]
  char *s; // [rsp+18h] [rbp-140h]
  __ssize_t v113; // [rsp+20h] [rbp-138h]
  char *v114; // [rsp+20h] [rbp-138h]
  unsigned __int8 v115; // [rsp+20h] [rbp-138h]
  char *v116; // [rsp+20h] [rbp-138h]
  __ssize_t v117; // [rsp+28h] [rbp-130h]
  unsigned __int64 v118; // [rsp+28h] [rbp-130h]
  __ssize_t v119; // [rsp+28h] [rbp-130h]
  __ssize_t v120; // [rsp+28h] [rbp-130h]
  __ssize_t v121; // [rsp+28h] [rbp-130h]
  unsigned __int64 v122; // [rsp+30h] [rbp-128h]
  char v123; // [rsp+3Bh] [rbp-11Dh]
  int v124; // [rsp+3Ch] [rbp-11Ch]
  unsigned __int64 v125; // [rsp+40h] [rbp-118h]
  char **v126; // [rsp+48h] [rbp-110h]
  unsigned __int64 v127; // [rsp+50h] [rbp-108h]
  char v128; // [rsp+58h] [rbp-100h]
  char v129; // [rsp+59h] [rbp-FFh]
  char v130; // [rsp+5Ah] [rbp-FEh]
  unsigned __int8 v131; // [rsp+5Bh] [rbp-FDh]
  int v132; // [rsp+5Ch] [rbp-FCh]
  char *lineptr; // [rsp+68h] [rbp-F0h] BYREF
  size_t n; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v135; // [rsp+78h] [rbp-E0h] BYREF
  char v136[80]; // [rsp+80h] [rbp-D8h] BYREF
  char v137[136]; // [rsp+D0h] [rbp-88h] BYREF

  v3 = 0;
  v4 = "";
  v6 = -1;
  sub_4057F0(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_409D30(sub_405670);
  setvbuf(stdout, 0LL, 1, 0LL);
  v123 = 0;
  while ( 1 )
  {
    v7 = sub_409590(a1, a2, "l:bctw", &off_40AA00, 0LL);
    if ( v7 == -1 )
      break;
    if ( v7 == 116 )
    {
      v6 = 0;
    }
    else if ( v7 <= 116 )
    {
      if ( v7 == 98 )
        goto LABEL_16;
      if ( v7 <= 98 )
        goto LABEL_20;
      if ( v7 == 99 )
      {
        v3 = 1;
      }
      else
      {
        if ( v7 != 108 )
          goto LABEL_45;
        v8 = dcgettext(0LL, "invalid length", 5);
        v9 = sub_407D40(qword_60E4C0, 0LL, -1LL, "", v8, 0LL);
        v4 = (const char *)qword_60E4C0;
        qword_60E2F8 = v9;
        if ( (v9 & 7) != 0 )
        {
          v10 = sub_407410(qword_60E4C0);
          v11 = dcgettext(0LL, "invalid length: %s", 5);
          error(0, 0, v11, v10);
          v12 = dcgettext(0LL, "length is not a multiple of 8", 5);
          error(1, 0, v12);
LABEL_20:
          if ( v7 == -131 )
          {
            sub_4078A0(
              (_DWORD)stdout,
              (unsigned int)"b2sum",
              (unsigned int)&unk_409E16,
              (_DWORD)off_60E240,
              (unsigned int)"Padraig Brady",
              (unsigned int)"Samuel Neves",
              0);
            exit(0);
          }
          if ( v7 == -130 )
            sub_403280(0);
LABEL_45:
          sub_403280(1);
        }
      }
    }
    else if ( v7 == 129 )
    {
      byte_60E308 = 1;
      byte_60E307 = 0;
      byte_60E305 = 0;
    }
    else if ( v7 <= 129 )
    {
      if ( v7 == 119 )
      {
        byte_60E308 = 0;
        byte_60E307 = 1;
        byte_60E305 = 0;
      }
      else
      {
        if ( v7 != 128 )
          goto LABEL_45;
        byte_60E306 = 1;
      }
    }
    else if ( v7 == 131 )
    {
      byte_60E304 = 1;
    }
    else if ( v7 >= 131 )
    {
      if ( v7 != 132 )
        goto LABEL_45;
      v123 = 1;
LABEL_16:
      v6 = 1;
    }
    else
    {
      byte_60E308 = 0;
      byte_60E307 = 0;
      byte_60E305 = 1;
    }
  }
  qword_60E318 = 3LL;
  if ( (unsigned __int64)qword_60E2F8 > 0x200 )
  {
    v104 = sub_407410(v4);
    v105 = dcgettext(0LL, "invalid length: %s", 5);
    error(0, 0, v105, v104);
    v106 = sub_407410((&off_40ABB0)[dword_60E300]);
    v107 = dcgettext(0LL, "maximum digest length for %s is %lu bits", 5);
    error(1, 0, v107, v106, 512LL);
    start();
  }
  v13 = v123 & (v6 == 0);
  if ( !qword_60E2F8 && !(_BYTE)v3 )
  {
    qword_60E2F8 = 512LL;
    qword_60E310 = 128LL;
    if ( !v13 )
    {
      if ( byte_60E306 )
        goto LABEL_250;
      if ( byte_60E308 )
        goto LABEL_223;
      goto LABEL_49;
    }
LABEL_249:
    v14 = "--tag does not support --text mode";
    goto LABEL_44;
  }
  qword_60E310 = (unsigned __int64)qword_60E2F8 >> 2;
  if ( v13 )
    goto LABEL_249;
  if ( (_BYTE)v3 )
  {
    v14 = "the --tag option is meaningless when verifying checksums";
    if ( v123 )
      goto LABEL_44;
  }
  if ( v6 >= 0 )
  {
    v14 = "the --binary and --text options are meaningless when verifying checksums";
    if ( (_BYTE)v3 )
      goto LABEL_44;
  }
  if ( byte_60E306 )
  {
    if ( (_BYTE)v3 )
      goto LABEL_41;
LABEL_250:
    v14 = "the --ignore-missing option is meaningful only when verifying checksums";
LABEL_44:
    v15 = dcgettext(0LL, v14, 5);
    error(0, 0, v15);
    goto LABEL_45;
  }
  if ( byte_60E308 )
  {
    if ( !(_BYTE)v3 )
    {
LABEL_223:
      v14 = "the --status option is meaningful only when verifying checksums";
      goto LABEL_44;
    }
LABEL_41:
    if ( !byte_60E307 )
    {
LABEL_42:
      if ( byte_60E304 )
      {
        v14 = "the --strict option is meaningful only when verifying checksums";
        if ( !(_BYTE)v3 )
          goto LABEL_44;
      }
    }
    goto LABEL_51;
  }
LABEL_49:
  if ( !byte_60E307 )
  {
    if ( byte_60E305 == 1 )
    {
      v14 = "the --quiet option is meaningful only when verifying checksums";
      if ( !(_BYTE)v3 )
        goto LABEL_44;
    }
    goto LABEL_42;
  }
  v14 = "the --warn option is meaningful only when verifying checksums";
  if ( !(_BYTE)v3 )
    goto LABEL_44;
LABEL_51:
  if ( v6 == -1 )
    v6 = 0;
  v126 = &a2[a1];
  v16 = dword_60E2BC;
  if ( dword_60E2BC == a1 )
    *v126++ = "-";
  v111 = (const char **)&a2[v16];
  if ( v126 <= (char **)v111 )
  {
    v129 = 1;
    goto LABEL_157;
  }
  v129 = 1;
  v17 = v6 == 0 ? 0xFFFFFFF6 : 0;
  v132 = v17 + 42;
  v131 = v17 + 42;
LABEL_57:
  s = (char *)*v111;
  if ( (_BYTE)v3 )
  {
    v124 = strcmp(*v111, "-");
    if ( v124 )
    {
      v19 = (FILE *)sub_405750(s, "r");
      if ( !v19 )
        goto LABEL_175;
    }
    else
    {
      byte_60E320 = 1;
      v18 = dcgettext(0LL, "standard input", 5);
      v19 = stdin;
      s = v18;
    }
    lineptr = 0LL;
    v20 = 1LL;
    n = 0LL;
    v130 = 0;
    v128 = 0;
    v127 = 0LL;
    v125 = 0LL;
    v122 = 0LL;
    while ( 1 )
    {
      v21 = __getdelim(&lineptr, &n, 10, v19);
      if ( v21 <= 0 )
        goto LABEL_121;
      v22 = lineptr;
      v23 = *lineptr;
      if ( *lineptr == 35 )
        goto LABEL_90;
      v24 = v21;
      if ( lineptr[v21 - 1] == 10 )
      {
        v24 = v21 - 1;
        lineptr[v21 - 1] = 0;
        v22 = lineptr;
        v23 = *lineptr;
      }
      v25 = 0LL;
      if ( v23 == 9 || v23 == 32 )
      {
        do
        {
          do
            v23 = v22[++v25];
          while ( v23 == 32 );
        }
        while ( v23 == 9 );
      }
      LOBYTE(v108) = 0;
      if ( v23 == 92 )
      {
        LOBYTE(v108) = v3;
        ++v25;
      }
      v26 = &v22[v25];
      if ( !memcmp(&v22[v25], "BLAKE2", 6uLL) )
        break;
      while ( 2 )
      {
        v117 = v24;
        v114 = v26;
        if ( v24 - v25 < qword_60E318 + (unsigned __int64)(*v26 == 92) )
          goto LABEL_88;
        qword_60E310 = 0LL;
        v37 = 0LL;
        v38 = *__ctype_b_loc();
        for ( i = 0LL; (v38[(unsigned __int8)v114[i]] & 0x1000) != 0; ++i )
          v37 = v3;
        if ( !(_BYTE)v37 )
          goto LABEL_88;
        qword_60E310 = i;
        if ( (unsigned __int64)(i - 2) > 0x7E )
          goto LABEL_88;
        if ( (i & 1) != 0 )
          goto LABEL_88;
        v40 = i + v25;
        qword_60E2F8 = 4 * i;
        v41 = (unsigned __int8)v22[v40];
        if ( (_BYTE)v41 != 32 && (_BYTE)v41 != 9 )
          goto LABEL_88;
        v22[v40] = 0;
        if ( !(unsigned __int8)sub_402F30(v114, v37, v41) )
          goto LABEL_88;
        v42 = v40 + 1;
        v43 = v114;
        if ( v117 - (v40 + 1) != 1 && ((v44 = v22[v40 + 1], v44 == 32) || v44 == 42) )
        {
          if ( dword_60E230 != 1 )
          {
            dword_60E230 = 0;
            v42 = v40 + 2;
          }
        }
        else
        {
          if ( !dword_60E230 )
            goto LABEL_88;
          dword_60E230 = 1;
        }
        v45 = &v22[v42];
        if ( (_BYTE)v108 )
        {
          LOBYTE(v108) = (_BYTE)v114;
          v103 = sub_402F90(&v22[v42], v117 - v42);
          v43 = v114;
          v91 = v103 != 0;
LABEL_213:
          if ( !v91 )
            goto LABEL_88;
        }
        if ( !v124 && !strcmp(v45, "-") )
          goto LABEL_88;
        LODWORD(v46) = 0;
        if ( !byte_60E308 )
        {
          v109 = v43;
          v47 = strchr(v45, 10);
          v43 = v109;
          v46 = v47 != 0LL;
        }
        v108 = v43;
        v48 = sub_4030D0(v45, v137, &v135);
        v50 = v108;
        v51 = (char *)v48;
        if ( !(_BYTE)v48 )
        {
          ++v125;
          if ( byte_60E308 )
            goto LABEL_120;
          if ( v46 )
          {
            IO_write_ptr = stdout->_IO_write_ptr;
            if ( IO_write_ptr >= stdout->_IO_write_end )
            {
              __overflow(stdout, 92);
            }
            else
            {
              v49 = IO_write_ptr + 1;
              stdout->_IO_write_ptr = IO_write_ptr + 1;
              *IO_write_ptr = 92;
            }
          }
          sub_403020(v45, v46, v49, v51, v50);
          v53 = "FAILED open or read";
          goto LABEL_119;
        }
        if ( byte_60E306 && (_BYTE)v135 )
          goto LABEL_120;
        v59 = (unsigned __int64)qword_60E310 >> 1;
        if ( !((unsigned __int64)qword_60E310 >> 1) )
        {
          v22 = 0LL;
          goto LABEL_196;
        }
        v118 = (unsigned __int64)qword_60E310 >> 1;
        v22 = 0LL;
        v115 = v48;
        v60 = __ctype_tolower_loc();
        v50 = v108;
        v51 = (char *)v115;
        v61 = *v60;
        v59 = v118;
        do
        {
          if ( v61[(unsigned __int8)v108[2 * (_QWORD)v22]] != byte_40A9E0[((unsigned __int8)v137[(_QWORD)v22] >> 4) & 0xF]
            || v61[(unsigned __int8)v108[2 * (_QWORD)v22 + 1]] != byte_40A9E0[v137[(_QWORD)v22] & 0xF] )
          {
            ++v127;
            if ( byte_60E308 )
              goto LABEL_120;
            if ( v46 )
            {
LABEL_146:
              v62 = stdout->_IO_write_ptr;
              if ( v62 >= stdout->_IO_write_end )
              {
                v110 = v59;
                __overflow(stdout, 92);
                v59 = v110;
              }
              else
              {
                v51 = v62 + 1;
                stdout->_IO_write_ptr = v62 + 1;
                *v62 = 92;
              }
            }
            v108 = (char *)v59;
            sub_403020(v45, v46, v59, v51, v50);
            if ( v108 == v22 )
            {
LABEL_218:
              if ( byte_60E305 )
                goto LABEL_120;
              v53 = "OK";
            }
            else
            {
              v53 = "FAILED";
            }
LABEL_119:
            v54 = dcgettext(0LL, v53, 5);
            __printf_chk(1LL, ": %s\n", v54);
            goto LABEL_120;
          }
          ++v22;
        }
        while ( (char *)v118 != v22 );
        v22 = (char *)v118;
LABEL_196:
        v130 = byte_60E308;
        if ( !byte_60E308 )
        {
          v130 = byte_60E305;
          if ( !byte_60E305 )
          {
            if ( v46 )
            {
              v130 = (char)v51;
              goto LABEL_146;
            }
            LOBYTE(v108) = (_BYTE)v51;
            sub_403020(v45, 0LL, v59, v51, v50);
            v130 = (char)v108;
            goto LABEL_218;
          }
        }
LABEL_120:
        v128 = v3;
        if ( (v19->_flags & 0x30) != 0 )
        {
LABEL_121:
          free(lineptr);
          v55 = v19->_flags & 0x20;
          if ( v55 )
          {
            v84 = sub_407290(0LL, 3LL, s);
            v85 = dcgettext(0LL, "%s: read error", 5);
            error(0, 0, v85, v84);
            v56 = 0;
            goto LABEL_136;
          }
          if ( v124 && (unsigned int)sub_4085E0(v19) )
          {
LABEL_175:
            v70 = (const char *)sub_407290(0LL, 3LL, s);
            v71 = __errno_location();
            error(0, *v71, "%s", v70);
            v56 = 0;
            goto LABEL_136;
          }
          if ( v128 )
          {
            if ( byte_60E308 )
              goto LABEL_176;
            if ( v122 )
            {
              v101 = dcngettext(
                       0LL,
                       "WARNING: %lu line is improperly formatted",
                       "WARNING: %lu lines are improperly formatted",
                       v122,
                       5);
              error(0, 0, v101, v122);
            }
            if ( v125 )
            {
              v100 = dcngettext(
                       0LL,
                       "WARNING: %lu listed file could not be read",
                       "WARNING: %lu listed files could not be read",
                       v125,
                       5);
              error(0, 0, v100, v125);
            }
            if ( v127 )
            {
              v99 = dcngettext(
                      0LL,
                      "WARNING: %lu computed checksum did NOT match",
                      "WARNING: %lu computed checksums did NOT match",
                      v127,
                      5);
              error(0, 0, v99, v127);
            }
            if ( !byte_60E306 )
            {
LABEL_176:
              if ( v130 )
                goto LABEL_133;
            }
            else if ( v130 )
            {
LABEL_133:
              if ( !(v127 | v125) )
                LOBYTE(v55) = (v122 == 0) | byte_60E304 ^ 1;
            }
            else
            {
              v92 = sub_407290(0LL, 3LL, s);
              v93 = dcgettext(0LL, "%s: no file was verified", 5);
              error(0, 0, v93, v92);
            }
          }
          else
          {
            v82 = sub_407290(0LL, 3LL, s);
            v83 = dcgettext(0LL, "%s: no properly formatted %s checksum lines found", 5);
            error(0, 0, v83, v82, "BLAKE2");
          }
          v56 = v55 & 1;
LABEL_136:
          v129 &= v56;
          goto LABEL_156;
        }
LABEL_91:
        if ( !++v20 )
        {
          v25 = sub_407290(0LL, 3LL, s);
          v36 = dcgettext(0LL, "%s: too many checksum lines", 5);
          error(1, 0, v36, v25);
          continue;
        }
        break;
      }
    }
    v27 = v25 + 6;
    v28 = &v22[v27];
    v29 = v22[v27];
    if ( v29 )
    {
      if ( v29 != 9 && v29 != 32 )
      {
        while ( 1 )
        {
          if ( v29 == 45 )
            goto LABEL_81;
          if ( v29 == 40 )
            break;
          v29 = v22[++v27];
          v28 = &v22[v27];
          if ( !v29 )
            goto LABEL_81;
          if ( v29 == 32 || v29 == 9 )
            goto LABEL_150;
        }
        *v28 = 0;
        v30 = &::s;
        v120 = v24;
        v116 = v28;
        v64 = sub_4052D0(v26, &::s, 0LL, 0LL);
        v33 = v116;
        v32 = v120;
        if ( v64 < 0 )
        {
LABEL_88:
          ++v122;
          if ( byte_60E307 )
          {
            v57 = sub_407290(0LL, 3LL, s);
            v58 = dcgettext(0LL, "%s: %lu: improperly formatted %s checksum line", 5);
            error(0, 0, v58, v57, v20, "BLAKE2");
          }
LABEL_90:
          if ( (v19->_flags & 0x30) != 0 )
            goto LABEL_121;
          goto LABEL_91;
        }
        dword_60E300 = v64;
        *v116 = 40;
        goto LABEL_84;
      }
LABEL_150:
      *v28 = 0;
      v30 = &::s;
      v119 = v24;
      v63 = sub_4052D0(v26, &::s, 0LL, 0LL);
      if ( v63 < 0 )
        goto LABEL_88;
      dword_60E300 = v63;
      v32 = v119;
      ++v27;
    }
    else
    {
LABEL_81:
      *v28 = 0;
      v30 = &::s;
      v113 = v24;
      v31 = sub_4052D0(v26, &::s, 0LL, 0LL);
      v32 = v113;
      if ( v31 < 0 )
        goto LABEL_88;
      dword_60E300 = v31;
      ++v27;
    }
    v33 = &v22[v27];
    if ( v29 == 45 )
    {
      v30 = 0LL;
      v121 = v32;
      if ( (unsigned int)sub_407D70(&v22[v27]) || v135 - 1 > 0x1FF || (v135 & 7) != 0 )
        goto LABEL_88;
      qword_60E2F8 = v135;
      v32 = v121;
      v33 = &v22[v27];
      while ( (unsigned int)(v22[v27] - 48) <= 9 )
        v33 = &v22[++v27];
      v34 = v135 >> 2;
LABEL_85:
      qword_60E310 = v34;
      v35 = *v33;
      if ( *v33 == 32 )
        v35 = v22[++v27];
      if ( v35 != 40 )
        goto LABEL_88;
      v66 = v27 + 1;
      v67 = v32 - v66;
      if ( !v67 )
        goto LABEL_88;
      v45 = &v22[v66];
      v68 = (char *const *)(v67 - 1);
      if ( v67 != 1 )
      {
        if ( v45[v67 - 1] == 41 )
        {
LABEL_202:
          v69 = (char *)v68 + (_QWORD)v45;
LABEL_203:
          if ( (_BYTE)v108 )
          {
            v30 = v68;
            if ( !sub_402F90(v45, v68) )
              goto LABEL_88;
          }
          *v69 = 0;
          v86 = *((_BYTE *)v68 + (_QWORD)v45 + 1);
          v87 = (__int64)v68 + 1;
          if ( v86 == 9 || v86 == 32 )
          {
            do
            {
              do
                v86 = v45[++v87];
              while ( v86 == 32 );
            }
            while ( v86 == 9 );
          }
          if ( v86 != 61 )
            goto LABEL_88;
          v88 = &v45[v87 + 1];
          do
          {
            do
            {
              v89 = *v88;
              v90 = (char *)v88++;
            }
            while ( v89 == 32 );
          }
          while ( v89 == 9 );
          v108 = v90;
          v91 = sub_402F30(v90, v30, v88);
          v43 = v108;
          goto LABEL_213;
        }
        while ( 1 )
        {
          v68 = (char *const *)((char *)v68 - 1);
          if ( !v68 )
            break;
          if ( *((_BYTE *)v68 + (_QWORD)v45) == 41 )
            goto LABEL_202;
        }
      }
      if ( *v45 != 41 )
        goto LABEL_88;
      v69 = v45;
      v68 = 0LL;
      goto LABEL_203;
    }
LABEL_84:
    qword_60E2F8 = 512LL;
    v34 = 128LL;
    goto LABEL_85;
  }
  if ( !(unsigned __int8)sub_4030D0(s, v136, v137) )
  {
    v129 = 0;
    goto LABEL_156;
  }
  if ( strchr(s, 92) )
  {
LABEL_179:
    if ( v123 )
    {
      v102 = stdout->_IO_write_ptr;
      v73 = 1;
      if ( stdout->_IO_write_end <= v102 )
      {
        __overflow(stdout, 92);
      }
      else
      {
        stdout->_IO_write_ptr = v102 + 1;
        *v102 = 92;
      }
      goto LABEL_228;
    }
    v73 = 1;
    v74 = stdout->_IO_write_ptr;
    if ( v74 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 92);
    }
    else
    {
      stdout->_IO_write_ptr = v74 + 1;
      *v74 = 92;
    }
LABEL_182:
    if ( !((unsigned __int64)qword_60E310 >> 1) )
    {
LABEL_188:
      v78 = stdout->_IO_write_ptr;
      if ( v78 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 32);
      }
      else
      {
        stdout->_IO_write_ptr = v78 + 1;
        *v78 = 32;
      }
      v79 = stdout->_IO_write_ptr;
      if ( v79 >= stdout->_IO_write_end )
      {
        __overflow(stdout, v132);
      }
      else
      {
        v80 = v131;
        v81 = v79 + 1;
        stdout->_IO_write_ptr = v79 + 1;
        *v79 = v131;
      }
      sub_403020(s, v73, v81, v80, v72);
      goto LABEL_186;
    }
LABEL_183:
    v75 = 0LL;
    do
    {
      v76 = (unsigned __int8)v136[v75++];
      __printf_chk(1LL, "%02x", v76);
    }
    while ( (unsigned __int64)qword_60E310 >> 1 > v75 );
    goto LABEL_185;
  }
  while ( 1 )
  {
    if ( strchr(s, 10) )
      goto LABEL_179;
    v73 = 0;
    if ( !v123 )
      goto LABEL_182;
LABEL_228:
    fputs_unlocked((&::s)[dword_60E300], stdout);
    if ( (unsigned __int64)qword_60E2F8 <= 0x1FF )
      __printf_chk(1LL, "-%lu", qword_60E2F8);
    fwrite_unlocked(" (", 1uLL, 2uLL, stdout);
    sub_403020(s, v73, v96, v97, v98);
    fwrite_unlocked(") = ", 1uLL, 4uLL, stdout);
    if ( (unsigned __int64)qword_60E310 >> 1 )
      goto LABEL_183;
LABEL_185:
    if ( !v123 )
      goto LABEL_188;
LABEL_186:
    v77 = stdout->_IO_write_ptr;
    if ( v77 >= stdout->_IO_write_end )
    {
      __overflow(stdout, 10);
    }
    else
    {
      stdout->_IO_write_ptr = v77 + 1;
      *v77 = 10;
    }
LABEL_156:
    if ( v126 > (char **)++v111 )
      goto LABEL_57;
LABEL_157:
    if ( !byte_60E320 || (unsigned int)sub_4085E0(stdin) != -1 )
      return (unsigned __int8)v129 ^ 1u;
    v94 = dcgettext(0LL, "standard input", 5);
    v95 = __errno_location();
    error(1, *v95, v94);
  }
}

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v4, &retaddr, init, fini, a3, &v5);
  __halt();
}

__int64 *sub_402E7B()
{
  return &program_invocation_short_name;
}

__int64 sub_402E9A()
{
  return 0LL;
}

__int64 *sub_402ED1()
{
  __int64 *result; // rax

  if ( !byte_60E2E8 )
  {
    while ( qword_60E2F0 < (unsigned __int64)(&qword_60DE48 - qword_60DE40 - 1) )
      ((void (*)(void))qword_60DE40[++qword_60E2F0])();
    result = sub_402E7B();
    byte_60E2E8 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_402F28()
{
  return sub_402E9A();
}

bool __fastcall sub_402F30(_BYTE *a1)
{
  unsigned __int64 v2; // rbp
  const unsigned __int16 *v3; // rcx
  unsigned __int64 v4; // rax

  v2 = qword_60E310;
  if ( !qword_60E310 )
    return *a1 == 0;
  v3 = *__ctype_b_loc();
  LODWORD(v4) = 0;
  while ( (v3[(unsigned __int8)*a1] & 0x1000) != 0 )
  {
    ++a1;
    v4 = (unsigned int)(v4 + 1);
    if ( v4 >= v2 )
      return *a1 == 0;
  }
  return 0;
}

__int64 __fastcall sub_402F90(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v2; // rax
  unsigned __int64 v3; // rdx
  char v4; // cl
  char v5; // cl
  _BYTE *v7; // r9

  v2 = (_BYTE *)(a1 + 1);
  v3 = 0LL;
  if ( a2 )
  {
    do
    {
      v4 = *(_BYTE *)(a1 + v3);
      if ( !v4 )
        return 0LL;
      if ( v4 == 92 )
      {
        if ( a2 - 1 == v3 )
          return 0LL;
        ++v3;
        v5 = *(_BYTE *)(a1 + v3);
        if ( v5 == 92 )
        {
          v7 = v2;
          *(v2 - 1) = 92;
        }
        else
        {
          if ( v5 != 110 )
            return 0LL;
          v7 = v2;
          *(v2 - 1) = 10;
        }
      }
      else
      {
        *(v2 - 1) = v4;
        v7 = v2;
      }
      ++v3;
      ++v2;
    }
    while ( a2 > v3 );
    if ( (unsigned __int64)v7 < a1 + a2 )
      *v7 = 0;
  }
  return a1;
}

void __fastcall sub_403020(const char *a1, char a2)
{
  const char *v2; // rbx
  char *IO_write_ptr; // rax
  int v4; // esi

  v2 = a1;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = *(unsigned __int8 *)v2;
      if ( !(_BYTE)v4 )
        break;
      if ( (_BYTE)v4 == 10 )
      {
        fwrite_unlocked(&unk_409D84, 1uLL, 2uLL, stdout);
      }
      else if ( (_BYTE)v4 == 92 )
      {
        fwrite_unlocked(&unk_409D87, 1uLL, 2uLL, stdout);
      }
      else
      {
        IO_write_ptr = stdout->_IO_write_ptr;
        if ( IO_write_ptr >= stdout->_IO_write_end )
        {
          __overflow(stdout, v4);
        }
        else
        {
          stdout->_IO_write_ptr = IO_write_ptr + 1;
          *IO_write_ptr = v4;
        }
      }
      ++v2;
    }
  }
  else
  {
    fputs_unlocked(a1, stdout);
  }
}

__int64 __fastcall sub_4030D0(const char *a1, __int64 a2, _BYTE *a3)
{
  FILE *v3; // rbx
  unsigned int v4; // r12d
  __int64 v7; // rax
  const char *v8; // rbx
  int *v9; // rax
  const char *v10; // rbp
  int *v11; // rax
  int *v12; // rax
  int *v13; // rbx
  const char *v14; // rax

  *a3 = 0;
  if ( !strcmp(a1, "-") )
  {
    v3 = stdin;
    byte_60E320 = 1;
    sub_405720(stdin, 2LL);
    if ( !(unsigned int)sub_4051D0(v3) )
      return 1;
LABEL_9:
    v4 = 0;
    v10 = (const char *)sub_407290(0LL, 3LL, a1);
    v11 = __errno_location();
    error(0, *v11, "%s", v10);
    if ( stdin != v3 )
      sub_4085E0(v3);
    return v4;
  }
  v7 = sub_405750(a1, 4234976LL);
  v3 = (FILE *)v7;
  if ( v7 )
  {
    sub_405720(v7, 2LL);
    if ( !(unsigned int)sub_4051D0(v3) )
    {
      if ( (unsigned int)sub_4085E0(v3) )
      {
        v4 = 0;
        v8 = (const char *)sub_407290(0LL, 3LL, a1);
        v9 = __errno_location();
        error(0, *v9, "%s", v8);
        return v4;
      }
      return 1;
    }
    goto LABEL_9;
  }
  v12 = __errno_location();
  v4 = (unsigned __int8)byte_60E306;
  v13 = v12;
  if ( byte_60E306 && *v12 == 2 )
  {
    *a3 = 1;
  }
  else
  {
    v4 = 0;
    v14 = (const char *)sub_407290(0LL, 3LL, a1);
    error(0, *v13, "%s", v14);
  }
  return v4;
}

void __fastcall __noreturn sub_403280(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbp
  char *v5; // rax
  FILE *v6; // rbp
  char *v7; // rax
  char *v8; // rax
  FILE *v9; // rbp
  char *v10; // rax
  FILE *v11; // rbp
  char *v12; // rax
  FILE *v13; // rbp
  char *v14; // rax
  FILE *v15; // rbp
  char *v16; // rax
  FILE *v17; // rbp
  char *v18; // rax
  FILE *v19; // rbp
  char *v20; // rax
  char *v21; // rax
  __int64 *v22; // rax
  char *v23; // rbp
  char *v24; // rax
  char *v25; // rax
  const char *v26; // r12
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  __int64 v33[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_60E338;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\nPrint or check %s (%d-bit) checksums.\n", 5);
  __printf_chk(1LL, v3, v1, "BLAKE2", 512LL);
  v4 = stdout;
  v5 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\n  -b, --binary         read in binary mode\n", 5);
  fputs_unlocked(v7, v6);
  v8 = dcgettext(0LL, "  -c, --check          read %s sums from the FILEs and check them\n", 5);
  __printf_chk(1LL, v8, "BLAKE2");
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "  -l, --length         digest length in bits; must not exceed the maximum for\n"
          "                       the blake2 algorithm and must be a multiple of 8\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(0LL, "      --tag            create a BSD-style checksum\n", 5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(0LL, "  -t, --text           read in text mode (default)\n", 5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "\n"
          "The following five options are useful only when verifying checksums:\n"
          "      --ignore-missing  don't fail or report status for missing files\n"
          "      --quiet          don't print OK for each successfully verified file\n"
          "      --status         don't output anything, status code shows success\n"
          "      --strict         exit non-zero for improperly formatted checksum lines\n"
          "  -w, --warn           warn about improperly formatted checksum lines\n"
          "\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v20, v19);
  v21 = dcgettext(
          0LL,
          "\n"
          "The sums are computed as described in %s.  When checking, the input\n"
          "should be a former output of this program.  The default mode is to print a\n"
          "line with checksum, a space, a character indicating input mode ('*' for binary,\n"
          "' ' for text or where binary is insignificant), and name for each FILE.\n",
          5);
  __printf_chk(1LL, v21, "RFC 7693");
  v33[0] = (__int64)"[";
  v22 = v33;
  v33[1] = (__int64)"test invocation";
  v33[2] = (__int64)"coreutils";
  v33[3] = (__int64)"Multi-call invocation";
  v33[4] = (__int64)"sha224sum";
  v33[5] = (__int64)"sha2 utilities";
  v33[6] = (__int64)"sha256sum";
  v33[7] = (__int64)"sha2 utilities";
  v33[8] = (__int64)"sha384sum";
  v33[9] = (__int64)"sha2 utilities";
  v33[10] = (__int64)"sha512sum";
  v33[11] = (__int64)"sha2 utilities";
  v33[12] = 0LL;
  v33[13] = 0LL;
  do
    v22 += 2;
  while ( *v22 && strcmp("b2sum", (const char *)*v22) );
  v23 = (char *)v22[1];
  if ( v23 )
  {
    v24 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v24, &unk_409E16, "https://www.gnu.org/software/coreutils/");
    v25 = setlocale(5, 0LL);
    if ( !v25 || !strncmp(v25, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v29 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v29, &unk_409E16, "https://www.gnu.org/software/coreutils/");
    v30 = setlocale(5, 0LL);
    if ( !v30 || !strncmp(v30, "en_", 3uLL) )
    {
      v23 = "b2sum";
      v31 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v26 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v31, "https://www.gnu.org/software/coreutils/", "b2sum");
LABEL_12:
      v28 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v28, v23, v26);
LABEL_3:
      exit(status);
    }
    v23 = "b2sum";
  }
  v32 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v32, "b2sum");
LABEL_10:
  v26 = "Multi-call invocation" + 10;
  v27 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v27, "https://www.gnu.org/software/coreutils/", "b2sum");
  if ( v23 != "b2sum" )
    v26 = "";
  goto LABEL_12;
}

__int64 __fastcall sub_403680(_QWORD *a1, __int64 a2)
{
  __int64 i; // rax
  __int64 j; // rax
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r10
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r11
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r10
  __int64 v31; // rdx
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rbp
  __int64 v40; // r11
  __int64 v41; // r9
  __int64 v42; // r13
  __int64 v43; // r8
  __int64 v44; // r12
  __int64 v45; // r13
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // r11
  __int64 v51; // rcx
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // r14
  __int64 v56; // r10
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // r15
  __int64 v60; // r13
  __int64 v61; // r10
  __int64 v62; // rsi
  __int64 v63; // r15
  __int64 v64; // r13
  __int64 v65; // rbp
  __int64 v66; // r9
  __int64 v67; // r14
  __int64 v68; // r13
  __int64 v69; // rbp
  __int64 v70; // r9
  __int64 v71; // r14
  __int64 v72; // rbx
  __int64 v73; // r11
  __int64 v74; // r8
  __int64 v75; // r10
  __int64 v76; // r15
  __int64 v77; // rsi
  __int64 v78; // r12
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rbx
  __int64 v82; // r13
  __int64 v83; // r11
  __int64 v84; // r8
  __int64 v85; // rsi
  __int64 v86; // r12
  __int64 v87; // rcx
  __int64 v88; // r15
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rbp
  __int64 v92; // r10
  __int64 v93; // rbx
  __int64 v94; // r13
  __int64 v95; // r9
  __int64 v96; // r15
  __int64 v97; // r13
  __int64 v98; // rax
  __int64 v99; // r15
  __int64 v100; // r12
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rbx
  __int64 v105; // rbp
  __int64 v106; // r13
  __int64 v107; // r12
  __int64 v108; // rcx
  __int64 v109; // r9
  __int64 v110; // r11
  __int64 v111; // r10
  __int64 v112; // r8
  __int64 v113; // rsi
  __int64 v114; // r14
  __int64 v115; // rdx
  __int64 v116; // r15
  __int64 v117; // rax
  __int64 v118; // r11
  __int64 v119; // r13
  __int64 v120; // r10
  __int64 v121; // r8
  __int64 v122; // r14
  __int64 v123; // rsi
  __int64 v124; // r15
  __int64 v125; // rax
  __int64 v126; // r13
  __int64 v127; // rbp
  __int64 v128; // rbx
  __int64 v129; // r9
  __int64 v130; // r8
  __int64 v131; // r14
  __int64 v132; // r15
  __int64 v133; // r13
  __int64 v134; // rcx
  __int64 v135; // rbp
  __int64 v136; // rbx
  __int64 v137; // r9
  __int64 v138; // r8
  __int64 v139; // r14
  __int64 v140; // rcx
  __int64 v141; // r11
  __int64 v142; // rsi
  __int64 v143; // r10
  __int64 v144; // r12
  __int64 v145; // rbp
  __int64 v146; // r13
  __int64 v147; // rdx
  __int64 v148; // r15
  __int64 v149; // r11
  __int64 v150; // rax
  __int64 v151; // rsi
  __int64 v152; // r10
  __int64 v153; // r12
  __int64 v154; // r13
  __int64 v155; // rdx
  __int64 v156; // r15
  __int64 v157; // r13
  __int64 v158; // r12
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rbx
  __int64 v162; // rbp
  __int64 v163; // r11
  __int64 v164; // r9
  __int64 v165; // r13
  __int64 v166; // r15
  __int64 v167; // r8
  __int64 v168; // r12
  __int64 v169; // r14
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rbx
  __int64 v173; // rax
  __int64 v174; // r11
  __int64 v175; // r9
  __int64 v176; // r8
  __int64 v177; // rdx
  __int64 v178; // r14
  __int64 v179; // r10
  __int64 v180; // rax
  __int64 v181; // rsi
  __int64 v182; // r15
  __int64 v183; // r13
  __int64 v184; // r10
  __int64 v185; // rsi
  __int64 v186; // r15
  __int64 v187; // r13
  __int64 v188; // rbp
  __int64 v189; // r9
  __int64 v190; // r14
  __int64 v191; // r13
  __int64 v192; // rbp
  __int64 v193; // r9
  __int64 v194; // r14
  __int64 v195; // rbx
  __int64 v196; // r11
  __int64 v197; // r8
  __int64 v198; // r10
  __int64 v199; // r15
  __int64 v200; // rsi
  __int64 v201; // r12
  __int64 v202; // rcx
  __int64 v203; // rdx
  __int64 v204; // rbx
  __int64 v205; // r13
  __int64 v206; // r11
  __int64 v207; // r8
  __int64 v208; // rsi
  __int64 v209; // r12
  __int64 v210; // rcx
  __int64 v211; // r15
  __int64 v212; // rdx
  __int64 v213; // rax
  __int64 v214; // rbp
  __int64 v215; // r10
  __int64 v216; // r13
  __int64 v217; // r15
  __int64 v218; // r13
  __int64 v219; // r12
  __int64 v220; // rax
  __int64 v221; // rcx
  __int64 v222; // rbp
  __int64 v223; // r12
  __int64 v224; // rbx
  __int64 v225; // rcx
  __int64 v226; // r9
  __int64 v227; // r15
  __int64 v228; // rdx
  __int64 v229; // rbx
  __int64 v230; // r9
  __int64 v231; // r11
  __int64 v232; // r10
  __int64 v233; // r8
  __int64 v234; // rsi
  __int64 v235; // r14
  __int64 v236; // rdx
  __int64 v237; // r15
  __int64 v238; // rax
  __int64 v239; // r11
  __int64 v240; // r13
  __int64 v241; // r10
  __int64 v242; // r8
  __int64 v243; // r14
  __int64 v244; // rsi
  __int64 v245; // r15
  __int64 v246; // rax
  __int64 v247; // r13
  __int64 v248; // rbp
  __int64 v249; // rbx
  __int64 v250; // r9
  __int64 v251; // r8
  __int64 v252; // r11
  __int64 v253; // r14
  __int64 v254; // r15
  __int64 v255; // r13
  __int64 v256; // rcx
  __int64 v257; // rbp
  __int64 v258; // rbx
  __int64 v259; // r9
  __int64 v260; // r8
  __int64 v261; // r14
  __int64 v262; // rcx
  __int64 v263; // rsi
  __int64 v264; // r12
  __int64 v265; // r10
  __int64 v266; // rdx
  __int64 v267; // rbp
  __int64 v268; // r13
  __int64 v269; // r11
  __int64 v270; // r15
  __int64 v271; // rsi
  __int64 v272; // rax
  __int64 v273; // r12
  __int64 v274; // r10
  __int64 v275; // rdx
  __int64 v276; // r13
  __int64 v277; // r15
  __int64 v278; // r13
  __int64 v279; // r12
  __int64 v280; // rax
  __int64 v281; // rcx
  __int64 v282; // rbx
  __int64 v283; // rbp
  __int64 v284; // r11
  __int64 v285; // r9
  __int64 v286; // r13
  __int64 v287; // r15
  __int64 v288; // r8
  __int64 v289; // r12
  __int64 v290; // r14
  __int64 v291; // rdx
  __int64 v292; // rcx
  __int64 v293; // rbx
  __int64 v294; // rax
  __int64 v295; // r11
  __int64 v296; // r9
  __int64 v297; // r8
  __int64 v298; // rdx
  __int64 v299; // r14
  __int64 v300; // r10
  __int64 v301; // rax
  __int64 v302; // rsi
  __int64 v303; // r15
  __int64 v304; // r13
  __int64 v305; // r10
  __int64 v306; // rsi
  __int64 v307; // r15
  __int64 v308; // r13
  __int64 v309; // rbp
  __int64 v310; // r9
  __int64 v311; // r14
  __int64 v312; // r13
  __int64 v313; // rbp
  __int64 v314; // r9
  __int64 v315; // r14
  __int64 v316; // rbx
  __int64 v317; // r11
  __int64 v318; // r8
  __int64 v319; // r15
  __int64 v320; // rsi
  __int64 v321; // r10
  __int64 v322; // r12
  __int64 v323; // rcx
  __int64 v324; // r13
  __int64 v325; // rbx
  __int64 v326; // rdx
  __int64 v327; // r11
  __int64 v328; // r8
  __int64 v329; // rsi
  __int64 v330; // r12
  __int64 v331; // rcx
  __int64 v332; // r15
  __int64 v333; // rdx
  __int64 v334; // rax
  __int64 v335; // rbp
  __int64 v336; // r10
  __int64 v337; // rbx
  __int64 v338; // r13
  __int64 v339; // r9
  __int64 v340; // r15
  __int64 v341; // r13
  __int64 v342; // rax
  __int64 v343; // r15
  __int64 v344; // r12
  __int64 v345; // rax
  __int64 v346; // rdx
  __int64 v347; // rcx
  __int64 v348; // rbx
  __int64 v349; // rbp
  __int64 v350; // r13
  __int64 v351; // r12
  __int64 v352; // rcx
  __int64 v353; // r9
  __int64 v354; // r11
  __int64 v355; // r10
  __int64 v356; // r8
  __int64 v357; // rsi
  __int64 v358; // r14
  __int64 v359; // rdx
  __int64 v360; // r15
  __int64 v361; // rax
  __int64 v362; // r11
  __int64 v363; // r13
  __int64 v364; // r10
  __int64 v365; // r8
  __int64 v366; // r14
  __int64 v367; // rsi
  __int64 v368; // r15
  __int64 v369; // rax
  __int64 v370; // r13
  __int64 v371; // rbp
  __int64 v372; // rbx
  __int64 v373; // r9
  __int64 v374; // r8
  __int64 v375; // r11
  __int64 v376; // r14
  __int64 v377; // r15
  __int64 v378; // r13
  __int64 v379; // rcx
  __int64 v380; // rbp
  __int64 v381; // rbx
  __int64 v382; // r9
  __int64 v383; // r8
  __int64 v384; // r14
  __int64 v385; // rcx
  __int64 v386; // rsi
  __int64 v387; // r12
  __int64 v388; // r10
  __int64 v389; // rdx
  __int64 v390; // rbp
  __int64 v391; // r13
  __int64 v392; // r11
  __int64 v393; // r15
  __int64 v394; // rsi
  __int64 v395; // rax
  __int64 v396; // r12
  __int64 v397; // r10
  __int64 v398; // rdx
  __int64 v399; // r13
  __int64 v400; // r15
  __int64 v401; // r13
  __int64 v402; // r12
  __int64 v403; // rax
  __int64 v404; // rcx
  __int64 v405; // rbx
  __int64 v406; // rbp
  __int64 v407; // r11
  __int64 v408; // r9
  __int64 v409; // r13
  __int64 v410; // r15
  __int64 v411; // r8
  __int64 v412; // r12
  __int64 v413; // r14
  __int64 v414; // rdx
  __int64 v415; // rcx
  __int64 v416; // rbx
  __int64 v417; // rax
  __int64 v418; // r11
  __int64 v419; // r9
  __int64 v420; // r8
  __int64 v421; // rdx
  __int64 v422; // r14
  __int64 v423; // r10
  __int64 v424; // rax
  __int64 v425; // rsi
  __int64 v426; // r15
  __int64 v427; // r13
  __int64 v428; // r10
  __int64 v429; // rsi
  __int64 v430; // r15
  __int64 v431; // r13
  __int64 v432; // rbp
  __int64 v433; // r9
  __int64 v434; // r14
  __int64 v435; // r13
  __int64 v436; // rbp
  __int64 v437; // r9
  __int64 v438; // r14
  __int64 v439; // rbx
  __int64 v440; // r11
  __int64 v441; // r8
  __int64 v442; // r10
  __int64 v443; // r15
  __int64 v444; // rsi
  __int64 v445; // r12
  __int64 v446; // rcx
  __int64 v447; // rdx
  __int64 v448; // rbx
  __int64 v449; // r13
  __int64 v450; // r11
  __int64 v451; // r8
  __int64 v452; // rsi
  __int64 v453; // r12
  __int64 v454; // rcx
  __int64 v455; // r15
  __int64 v456; // rdx
  __int64 v457; // rax
  __int64 v458; // rbp
  __int64 v459; // r10
  __int64 v460; // r13
  __int64 v461; // r15
  __int64 v462; // r13
  __int64 v463; // r12
  __int64 v464; // rax
  __int64 v465; // rcx
  __int64 v466; // rbp
  __int64 v467; // r12
  __int64 v468; // rbx
  __int64 v469; // rcx
  __int64 v470; // r9
  __int64 v471; // r15
  __int64 v472; // rdx
  __int64 v473; // rbx
  __int64 v474; // r9
  __int64 v475; // r11
  __int64 v476; // r10
  __int64 v477; // r8
  __int64 v478; // rsi
  __int64 v479; // r14
  __int64 v480; // rdx
  __int64 v481; // r15
  __int64 v482; // rax
  __int64 v483; // r11
  __int64 v484; // r13
  __int64 v485; // r10
  __int64 v486; // r8
  __int64 v487; // r14
  __int64 v488; // rsi
  __int64 v489; // r15
  __int64 v490; // rax
  __int64 v491; // r13
  __int64 v492; // rbp
  __int64 v493; // rbx
  __int64 v494; // r9
  __int64 v495; // r8
  __int64 v496; // r11
  __int64 v497; // r14
  __int64 v498; // r15
  __int64 v499; // r13
  __int64 v500; // rcx
  __int64 v501; // rbp
  __int64 v502; // rbx
  __int64 v503; // r9
  __int64 v504; // r8
  __int64 v505; // r14
  __int64 v506; // rcx
  __int64 v507; // rsi
  __int64 v508; // r12
  __int64 v509; // r10
  __int64 v510; // rdx
  __int64 v511; // rbp
  __int64 v512; // r13
  __int64 v513; // r11
  __int64 v514; // r15
  __int64 v515; // rsi
  __int64 v516; // rax
  __int64 v517; // r12
  __int64 v518; // r10
  __int64 v519; // rdx
  __int64 v520; // r13
  __int64 v521; // r15
  __int64 v522; // r13
  __int64 v523; // r12
  __int64 v524; // rax
  __int64 v525; // rcx
  __int64 v526; // rbx
  __int64 v527; // rbp
  __int64 v528; // r11
  __int64 v529; // r9
  __int64 v530; // r13
  __int64 v531; // r15
  __int64 v532; // r8
  __int64 v533; // r12
  __int64 v534; // r14
  __int64 v535; // rdx
  __int64 v536; // rcx
  __int64 v537; // rbx
  __int64 v538; // rax
  __int64 v539; // r11
  __int64 v540; // r9
  __int64 v541; // r8
  __int64 v542; // rdx
  __int64 v543; // r14
  __int64 v544; // r10
  __int64 v545; // rax
  __int64 v546; // rsi
  __int64 v547; // r15
  __int64 v548; // r13
  __int64 v549; // r10
  __int64 v550; // rsi
  __int64 v551; // r15
  __int64 v552; // r13
  __int64 v553; // rbp
  __int64 v554; // r9
  __int64 v555; // r14
  __int64 v556; // r13
  __int64 v557; // rbp
  __int64 v558; // r9
  __int64 v559; // r14
  __int64 v560; // rbx
  __int64 v561; // r11
  __int64 v562; // r8
  __int64 v563; // r10
  __int64 v564; // r15
  __int64 v565; // rsi
  __int64 v566; // r12
  __int64 v567; // rcx
  __int64 v568; // rdx
  __int64 v569; // rbx
  __int64 v570; // r13
  __int64 v571; // r11
  __int64 v572; // r8
  __int64 v573; // rsi
  __int64 v574; // r12
  __int64 v575; // rcx
  __int64 v576; // r15
  __int64 v577; // rdx
  __int64 v578; // rax
  __int64 v579; // rbp
  __int64 v580; // r10
  __int64 v581; // rbx
  __int64 v582; // r13
  __int64 v583; // r9
  __int64 v584; // r15
  __int64 v585; // r13
  __int64 v586; // rax
  __int64 v587; // r15
  __int64 v588; // r12
  __int64 v589; // rax
  __int64 v590; // rdx
  __int64 v591; // rcx
  __int64 v592; // rbx
  __int64 v593; // rbp
  __int64 v594; // r13
  __int64 v595; // r12
  __int64 v596; // rcx
  __int64 v597; // r9
  __int64 v598; // r11
  __int64 v599; // r10
  __int64 v600; // r8
  __int64 v601; // rsi
  __int64 v602; // r14
  __int64 v603; // rdx
  __int64 v604; // r15
  __int64 v605; // rax
  __int64 v606; // r11
  __int64 v607; // r13
  __int64 v608; // r10
  __int64 v609; // r8
  __int64 v610; // r14
  __int64 v611; // rsi
  __int64 v612; // r15
  __int64 v613; // rax
  __int64 v614; // r13
  __int64 v615; // rbp
  __int64 v616; // rbx
  __int64 v617; // r9
  __int64 v618; // r8
  __int64 v619; // r11
  __int64 v620; // r14
  __int64 v621; // r15
  __int64 v622; // r13
  __int64 v623; // rcx
  __int64 v624; // rbp
  __int64 v625; // rbx
  __int64 v626; // r9
  __int64 v627; // r8
  __int64 v628; // r14
  __int64 v629; // rcx
  __int64 v630; // rsi
  __int64 v631; // r12
  __int64 v632; // r10
  __int64 v633; // rdx
  __int64 v634; // rbp
  __int64 v635; // r13
  __int64 v636; // r11
  __int64 v637; // r15
  __int64 v638; // rsi
  __int64 v639; // rax
  __int64 v640; // r12
  __int64 v641; // r10
  __int64 v642; // rdx
  __int64 v643; // r13
  __int64 v644; // r15
  __int64 v645; // r13
  __int64 v646; // r12
  __int64 v647; // rax
  __int64 v648; // rcx
  __int64 v649; // rbx
  __int64 v650; // rbp
  __int64 v651; // r11
  __int64 v652; // r9
  __int64 v653; // r13
  __int64 v654; // r15
  __int64 v655; // r8
  __int64 v656; // r12
  __int64 v657; // r14
  __int64 v658; // rdx
  __int64 v659; // rcx
  __int64 v660; // rbx
  __int64 v661; // rax
  __int64 v662; // r11
  __int64 v663; // r9
  __int64 v664; // r8
  __int64 v665; // rdx
  __int64 v666; // r14
  __int64 v667; // r10
  __int64 v668; // rax
  __int64 v669; // rsi
  __int64 v670; // r15
  __int64 v671; // r13
  __int64 v672; // r10
  __int64 v673; // rsi
  __int64 v674; // r15
  __int64 v675; // r13
  __int64 v676; // rbp
  __int64 v677; // r9
  __int64 v678; // r14
  __int64 v679; // r13
  __int64 v680; // rbp
  __int64 v681; // r9
  __int64 v682; // rbx
  __int64 v683; // r11
  __int64 v684; // r10
  __int64 v685; // r8
  __int64 v686; // rsi
  __int64 v687; // r15
  __int64 v688; // r13
  __int64 v689; // r12
  __int64 v690; // rcx
  __int64 v691; // rdx
  __int64 v692; // rbx
  __int64 v693; // r14
  __int64 v694; // r11
  __int64 v695; // r8
  __int64 v696; // rsi
  __int64 v697; // r15
  __int64 v698; // r12
  __int64 v699; // rcx
  __int64 v700; // rdx
  __int64 v701; // rax
  __int64 v702; // rbp
  __int64 v703; // r10
  __int64 v704; // r13
  __int64 v705; // r14
  __int64 v706; // r13
  __int64 v707; // r12
  __int64 v708; // rax
  __int64 v709; // rcx
  __int64 v710; // rbp
  __int64 v711; // rbx
  __int64 v712; // r9
  __int64 v713; // r14
  __int64 v714; // rdx
  __int64 v715; // r11
  __int64 v716; // r8
  __int64 v717; // rax
  __int64 v718; // r14
  __int64 v719; // rdx
  __int64 v720; // rsi
  __int64 v721; // r15
  __int64 v722; // r13
  __int64 result; // rax
  __int64 v724; // [rsp+0h] [rbp-158h]
  __int64 v725; // [rsp+0h] [rbp-158h]
  __int64 v726; // [rsp+0h] [rbp-158h]
  __int64 v727; // [rsp+0h] [rbp-158h]
  __int64 v728; // [rsp+0h] [rbp-158h]
  __int64 v729; // [rsp+0h] [rbp-158h]
  __int64 v730; // [rsp+0h] [rbp-158h]
  __int64 v731; // [rsp+0h] [rbp-158h]
  __int64 v732; // [rsp+0h] [rbp-158h]
  __int64 v733; // [rsp+0h] [rbp-158h]
  __int64 v734; // [rsp+0h] [rbp-158h]
  __int64 v735; // [rsp+0h] [rbp-158h]
  __int64 v736; // [rsp+8h] [rbp-150h]
  __int64 v737; // [rsp+8h] [rbp-150h]
  __int64 v738; // [rsp+8h] [rbp-150h]
  __int64 v739; // [rsp+8h] [rbp-150h]
  __int64 v740; // [rsp+8h] [rbp-150h]
  __int64 v741; // [rsp+8h] [rbp-150h]
  __int64 v742; // [rsp+8h] [rbp-150h]
  __int64 v743; // [rsp+8h] [rbp-150h]
  __int64 v744; // [rsp+8h] [rbp-150h]
  __int64 v745; // [rsp+8h] [rbp-150h]
  __int64 v746; // [rsp+8h] [rbp-150h]
  __int64 v747; // [rsp+10h] [rbp-148h]
  __int64 v748; // [rsp+10h] [rbp-148h]
  __int64 v749; // [rsp+10h] [rbp-148h]
  __int64 v750; // [rsp+10h] [rbp-148h]
  __int64 v751; // [rsp+10h] [rbp-148h]
  __int64 v752; // [rsp+10h] [rbp-148h]
  __int64 v753; // [rsp+10h] [rbp-148h]
  __int64 v754; // [rsp+10h] [rbp-148h]
  __int64 v755; // [rsp+10h] [rbp-148h]
  __int64 v756; // [rsp+10h] [rbp-148h]
  __int64 v757; // [rsp+10h] [rbp-148h]
  __int64 v758; // [rsp+10h] [rbp-148h]
  __int64 v759; // [rsp+18h] [rbp-140h]
  __int64 v760; // [rsp+18h] [rbp-140h]
  __int64 v761; // [rsp+18h] [rbp-140h]
  __int64 v762; // [rsp+18h] [rbp-140h]
  __int64 v763; // [rsp+18h] [rbp-140h]
  __int64 v764; // [rsp+18h] [rbp-140h]
  __int64 v765; // [rsp+18h] [rbp-140h]
  __int64 v766; // [rsp+18h] [rbp-140h]
  __int64 v767; // [rsp+18h] [rbp-140h]
  __int64 v768; // [rsp+18h] [rbp-140h]
  __int64 v769; // [rsp+18h] [rbp-140h]
  __int64 v770; // [rsp+20h] [rbp-138h]
  __int64 v771; // [rsp+28h] [rbp-130h]
  __int64 v772; // [rsp+30h] [rbp-128h]
  __int64 v773; // [rsp+38h] [rbp-120h]
  __int64 v774; // [rsp+40h] [rbp-118h]
  __int64 v775; // [rsp+48h] [rbp-110h]
  __int64 v776; // [rsp+50h] [rbp-108h]
  __int64 v777; // [rsp+58h] [rbp-100h]
  __int64 v778; // [rsp+60h] [rbp-F8h]
  __int64 v779; // [rsp+68h] [rbp-F0h]
  __int64 v780; // [rsp+70h] [rbp-E8h]
  __int64 v781; // [rsp+78h] [rbp-E0h]
  __int64 v782; // [rsp+80h] [rbp-D8h]
  __int64 v783; // [rsp+88h] [rbp-D0h]
  __int64 v784; // [rsp+90h] [rbp-C8h]
  __int64 v785; // [rsp+98h] [rbp-C0h]
  __int64 v786; // [rsp+A0h] [rbp-B8h]
  __int64 v787; // [rsp+A8h] [rbp-B0h]
  __int64 v788; // [rsp+B0h] [rbp-A8h]
  __int64 v789; // [rsp+B8h] [rbp-A0h]
  __int64 v790; // [rsp+C0h] [rbp-98h]
  __int64 v791; // [rsp+C8h] [rbp-90h]
  __int64 v792; // [rsp+D0h] [rbp-88h]
  __int64 v793; // [rsp+D8h] [rbp-80h]
  __int64 v794[4]; // [rsp+E0h] [rbp-78h]
  __int64 v795; // [rsp+100h] [rbp-58h]
  __int64 v796; // [rsp+108h] [rbp-50h]
  __int64 v797; // [rsp+110h] [rbp-48h]
  __int64 v798; // [rsp+118h] [rbp-40h]

  for ( i = 0LL; i != 16; ++i )
    *(&v770 + i) = *(_QWORD *)(a2 + 8 * i);
  for ( j = 0LL; j != 8; ++j )
    *(&v786 + j) = a1[j];
  v4 = v770 + v790 + v786;
  v5 = v772 + v791 + v787;
  v6 = __ROL8__(v4 ^ a1[8] ^ 0x510E527FADE682D1LL, 32);
  v7 = v6 + 0x6A09E667F3BCC908LL;
  v8 = v774 + v792 + v788;
  v9 = __ROL8__(v5 ^ a1[9] ^ 0x9B05688C2B3E6C1FLL, 32);
  v10 = v9 - 0x4498517A7B3558C5LL;
  v11 = __ROR8__((v6 + 0x6A09E667F3BCC908LL) ^ v790, 24);
  v12 = v11 + v771 + v4;
  v13 = __ROR8__((v9 - 0x4498517A7B3558C5LL) ^ v791, 24);
  v14 = v13 + v773 + v5;
  v15 = __ROR8__(v12 ^ v6, 16);
  v16 = v15 + v7;
  v17 = __ROR8__(v14 ^ v9, 16);
  v724 = v10 + v17;
  v18 = __ROL8__((v10 + v17) ^ v13, 1);
  v747 = __ROL8__(v16 ^ v11, 1);
  v19 = __ROL8__(v8 ^ a1[10] ^ 0x1F83D9ABFB41BD6BLL, 32);
  v20 = v776 + v793 + v789;
  v21 = v19 + 0x3C6EF372FE94F82BLL;
  v22 = v18 + v778 + v12;
  v23 = __ROR8__((v19 + 0x3C6EF372FE94F82BLL) ^ v792, 24);
  v24 = v23 + v775 + v8;
  v25 = __ROL8__(v20 ^ a1[11] ^ 0x5BE0CD19137E2179LL, 32);
  v26 = v25 - 0x5AB00AC5A0E2C90FLL;
  v27 = __ROR8__(v24 ^ v19, 16);
  v28 = v27 + v21;
  v29 = __ROR8__((v25 - 0x5AB00AC5A0E2C90FLL) ^ v793, 24);
  v30 = v29 + v777 + v20;
  v31 = __ROL8__(v28 ^ v23, 1);
  v32 = __ROR8__(v30 ^ v25, 16);
  v33 = v32 + v26;
  v34 = __ROL8__(v22 ^ v32, 32);
  v35 = v34 + v28;
  v36 = __ROL8__(v33 ^ v29, 1);
  v37 = __ROR8__(v35 ^ v18, 24);
  v38 = v31 + v780 + v14;
  v39 = v37 + v779 + v22;
  v40 = v36 + v782 + v24;
  v41 = __ROL8__(v38 ^ v15, 32);
  v42 = __ROR8__(v39 ^ v34, 16);
  v43 = __ROL8__(v40 ^ v17, 32);
  v44 = v42 + v35;
  v759 = v42;
  v45 = v33 + v41;
  v46 = v43 + v16;
  v47 = __ROR8__((v33 + v41) ^ v31, 24);
  v48 = __ROR8__(v46 ^ v36, 24);
  v49 = v47 + v781 + v38;
  v50 = v48 + v783 + v40;
  v51 = __ROL8__(v44 ^ v37, 1);
  v52 = __ROR8__(v49 ^ v41, 16);
  v53 = __ROR8__(v50 ^ v43, 16);
  v736 = v45 + v52;
  v54 = __ROL8__((v45 + v52) ^ v47, 1);
  v55 = v53 + v46;
  v56 = v747 + v784 + v30;
  v57 = __ROL8__(v55 ^ v48, 1);
  v58 = __ROL8__(v56 ^ v27, 32);
  v59 = v58 + v724;
  v60 = __ROR8__((v58 + v724) ^ v747, 24);
  v61 = v60 + v785 + v56;
  v62 = __ROR8__(v61 ^ v58, 16);
  v63 = v62 + v59;
  v64 = __ROL8__(v63 ^ v60, 1);
  v65 = v64 + v784 + v39;
  v66 = __ROL8__(v65 ^ v52, 32);
  v67 = v66 + v55;
  v68 = __ROR8__(v67 ^ v64, 24);
  v69 = v68 + v780 + v65;
  v70 = __ROR8__(v69 ^ v66, 16);
  v71 = v70 + v67;
  v72 = v51 + v774 + v49;
  v73 = v54 + v779 + v50;
  v748 = __ROL8__(v71 ^ v68, 1);
  v74 = __ROL8__(v72 ^ v53, 32);
  v75 = v57 + v783 + v61;
  v76 = v74 + v63;
  v77 = __ROL8__(v73 ^ v62, 32);
  v78 = v77 + v44;
  v79 = __ROR8__(v76 ^ v51, 24);
  v80 = __ROR8__(v78 ^ v54, 24);
  v81 = v79 + v778 + v72;
  v82 = __ROL8__(v75 ^ v759, 32);
  v83 = v80 + v785 + v73;
  v84 = __ROR8__(v81 ^ v74, 16);
  v85 = __ROR8__(v83 ^ v77, 16);
  v725 = v84 + v76;
  v86 = v85 + v78;
  v87 = __ROL8__((v84 + v76) ^ v79, 1);
  v88 = v82 + v736;
  v89 = __ROL8__(v86 ^ v80, 1);
  v90 = __ROR8__((v82 + v736) ^ v57, 24);
  v91 = v87 + v771 + v69;
  v92 = v90 + v776 + v75;
  v93 = v89 + v770 + v81;
  v94 = __ROR8__(v92 ^ v82, 16);
  v95 = __ROL8__(v93 ^ v70, 32);
  v96 = v94 + v88;
  v97 = __ROL8__(v91 ^ v94, 32);
  v98 = v96 ^ v90;
  v99 = v95 + v96;
  v100 = v97 + v86;
  v101 = __ROL8__(v98, 1);
  v102 = __ROR8__(v99 ^ v89, 24);
  v103 = __ROR8__(v100 ^ v87, 24);
  v104 = v102 + v772 + v93;
  v105 = v103 + v782 + v91;
  v106 = __ROR8__(v105 ^ v97, 16);
  v107 = v106 + v100;
  v760 = v106;
  v108 = __ROL8__(v107 ^ v103, 1);
  v109 = __ROR8__(v104 ^ v95, 16);
  v110 = v101 + v781 + v83;
  v111 = v748 + v775 + v92;
  v737 = v109 + v99;
  v112 = __ROL8__(v110 ^ v84, 32);
  v113 = __ROL8__(v111 ^ v85, 32);
  v114 = v112 + v71;
  v115 = __ROL8__((v109 + v99) ^ v102, 1);
  v116 = v113 + v725;
  v117 = __ROR8__(v114 ^ v101, 24);
  v118 = v117 + v777 + v110;
  v119 = __ROR8__((v113 + v725) ^ v748, 24);
  v120 = v119 + v773 + v111;
  v121 = __ROR8__(v118 ^ v112, 16);
  v122 = v121 + v114;
  v123 = __ROR8__(v120 ^ v113, 16);
  v124 = v123 + v116;
  v125 = __ROL8__(v122 ^ v117, 1);
  v126 = __ROL8__(v124 ^ v119, 1);
  v127 = v126 + v781 + v105;
  v128 = v108 + v782 + v104;
  v129 = __ROL8__(v127 ^ v109, 32);
  v130 = __ROL8__(v128 ^ v121, 32);
  v131 = v129 + v122;
  v132 = v130 + v124;
  v133 = __ROR8__(v131 ^ v126, 24);
  v134 = __ROR8__(v132 ^ v108, 24);
  v135 = v133 + v778 + v127;
  v136 = v134 + v770 + v128;
  v137 = __ROR8__(v135 ^ v129, 16);
  v138 = __ROR8__(v136 ^ v130, 16);
  v139 = v137 + v131;
  v726 = v138 + v132;
  v140 = __ROL8__((v138 + v132) ^ v134, 1);
  v749 = __ROL8__(v139 ^ v133, 1);
  v141 = v115 + v775 + v118;
  v142 = __ROL8__(v141 ^ v123, 32);
  v143 = v125 + v785 + v120;
  v144 = v142 + v107;
  v145 = v140 + v780 + v135;
  v146 = __ROL8__(v143 ^ v760, 32);
  v147 = __ROR8__(v144 ^ v115, 24);
  v148 = v146 + v737;
  v149 = v147 + v772 + v141;
  v150 = __ROR8__((v146 + v737) ^ v125, 24);
  v151 = __ROR8__(v149 ^ v142, 16);
  v152 = v150 + v783 + v143;
  v153 = v151 + v144;
  v154 = __ROR8__(v152 ^ v146, 16);
  v155 = __ROL8__(v153 ^ v147, 1);
  v156 = v154 + v148;
  v157 = __ROL8__(v145 ^ v154, 32);
  v158 = v157 + v153;
  v159 = __ROL8__(v156 ^ v150, 1);
  v160 = __ROR8__(v158 ^ v140, 24);
  v161 = v155 + v773 + v136;
  v162 = v160 + v784 + v145;
  v163 = v159 + v777 + v149;
  v164 = __ROL8__(v161 ^ v137, 32);
  v165 = __ROR8__(v162 ^ v157, 16);
  v166 = v164 + v156;
  v167 = __ROL8__(v163 ^ v138, 32);
  v168 = v165 + v158;
  v761 = v165;
  v169 = v167 + v139;
  v170 = __ROR8__(v166 ^ v155, 24);
  v171 = __ROL8__(v168 ^ v160, 1);
  v172 = v170 + v776 + v161;
  v173 = __ROR8__(v169 ^ v159, 24);
  v174 = v173 + v771 + v163;
  v175 = __ROR8__(v172 ^ v164, 16);
  v176 = __ROR8__(v174 ^ v167, 16);
  v738 = v175 + v166;
  v177 = __ROL8__((v175 + v166) ^ v170, 1);
  v178 = v176 + v169;
  v179 = v749 + v779 + v152;
  v180 = __ROL8__(v178 ^ v173, 1);
  v181 = __ROL8__(v179 ^ v151, 32);
  v182 = v181 + v726;
  v183 = __ROR8__((v181 + v726) ^ v749, 24);
  v184 = v183 + v774 + v179;
  v185 = __ROR8__(v184 ^ v181, 16);
  v186 = v185 + v182;
  v187 = __ROL8__(v186 ^ v183, 1);
  v188 = v187 + v777 + v162;
  v189 = __ROL8__(v188 ^ v175, 32);
  v190 = v189 + v178;
  v191 = __ROR8__(v190 ^ v187, 24);
  v192 = v191 + v779 + v188;
  v193 = __ROR8__(v192 ^ v189, 16);
  v194 = v193 + v190;
  v195 = v171 + v773 + v172;
  v196 = v177 + v783 + v174;
  v750 = __ROL8__(v194 ^ v191, 1);
  v197 = __ROL8__(v195 ^ v176, 32);
  v198 = v180 + v781 + v184;
  v199 = v197 + v186;
  v200 = __ROL8__(v196 ^ v185, 32);
  v201 = v200 + v168;
  v202 = __ROR8__(v199 ^ v171, 24);
  v203 = __ROR8__(v201 ^ v177, 24);
  v204 = v202 + v771 + v195;
  v205 = __ROL8__(v198 ^ v761, 32);
  v206 = v203 + v782 + v196;
  v207 = __ROR8__(v204 ^ v197, 16);
  v208 = __ROR8__(v206 ^ v200, 16);
  v727 = v207 + v199;
  v209 = v208 + v201;
  v210 = __ROL8__((v207 + v199) ^ v202, 1);
  v211 = v205 + v738;
  v212 = __ROL8__(v209 ^ v203, 1);
  v213 = __ROR8__((v205 + v738) ^ v180, 24);
  v214 = v210 + v772 + v192;
  v215 = v213 + v784 + v198;
  v216 = __ROR8__(v215 ^ v205, 16);
  v217 = v216 + v211;
  v218 = __ROL8__(v214 ^ v216, 32);
  v219 = v218 + v209;
  v220 = __ROL8__(v217 ^ v213, 1);
  v221 = __ROR8__(v219 ^ v210, 24);
  v222 = v221 + v776 + v214;
  v762 = __ROR8__(v222 ^ v218, 16);
  v223 = v762 + v219;
  v224 = v212 + v775 + v204;
  v225 = __ROL8__(v223 ^ v221, 1);
  v226 = __ROL8__(v224 ^ v193, 32);
  v227 = v226 + v217;
  v228 = __ROR8__(v227 ^ v212, 24);
  v229 = v228 + v780 + v224;
  v230 = __ROR8__(v229 ^ v226, 16);
  v231 = v220 + v774 + v206;
  v232 = v750 + v785 + v215;
  v739 = v230 + v227;
  v233 = __ROL8__(v231 ^ v207, 32);
  v234 = __ROL8__(v232 ^ v208, 32);
  v235 = v233 + v194;
  v236 = __ROL8__((v230 + v227) ^ v228, 1);
  v237 = v234 + v727;
  v238 = __ROR8__(v235 ^ v220, 24);
  v239 = v238 + v770 + v231;
  v240 = __ROR8__((v234 + v727) ^ v750, 24);
  v241 = v240 + v778 + v232;
  v242 = __ROR8__(v239 ^ v233, 16);
  v243 = v242 + v235;
  v244 = __ROR8__(v241 ^ v234, 16);
  v245 = v244 + v237;
  v246 = __ROL8__(v243 ^ v238, 1);
  v247 = __ROL8__(v245 ^ v240, 1);
  v248 = v247 + v779 + v222;
  v249 = v225 + v775 + v229;
  v250 = __ROL8__(v248 ^ v230, 32);
  v251 = __ROL8__(v249 ^ v242, 32);
  v252 = v236 + v772 + v239;
  v253 = v250 + v243;
  v254 = v251 + v245;
  v255 = __ROR8__(v253 ^ v247, 24);
  v256 = __ROR8__(v254 ^ v225, 24);
  v257 = v255 + v770 + v248;
  v258 = v256 + v777 + v249;
  v259 = __ROR8__(v257 ^ v250, 16);
  v260 = __ROR8__(v258 ^ v251, 16);
  v261 = v259 + v253;
  v728 = v260 + v254;
  v262 = __ROL8__((v260 + v254) ^ v256, 1);
  v751 = __ROL8__(v261 ^ v255, 1);
  v263 = __ROL8__(v252 ^ v244, 32);
  v264 = v263 + v223;
  v265 = v246 + v780 + v241;
  v266 = __ROR8__(v264 ^ v236, 24);
  v267 = v262 + v784 + v257;
  v268 = __ROL8__(v265 ^ v762, 32);
  v269 = v266 + v774 + v252;
  v270 = v268 + v739;
  v271 = __ROR8__(v269 ^ v263, 16);
  v272 = __ROR8__((v268 + v739) ^ v246, 24);
  v273 = v271 + v264;
  v274 = v272 + v785 + v265;
  v275 = __ROL8__(v273 ^ v266, 1);
  v276 = __ROR8__(v274 ^ v268, 16);
  v277 = v276 + v270;
  v278 = __ROL8__(v267 ^ v276, 32);
  v279 = v278 + v273;
  v280 = __ROL8__(v277 ^ v272, 1);
  v281 = __ROR8__(v279 ^ v262, 24);
  v282 = v275 + v781 + v258;
  v283 = v281 + v771 + v267;
  v284 = v280 + v776 + v269;
  v285 = __ROL8__(v282 ^ v259, 32);
  v286 = __ROR8__(v283 ^ v278, 16);
  v287 = v285 + v277;
  v288 = __ROL8__(v284 ^ v260, 32);
  v289 = v286 + v279;
  v763 = v286;
  v290 = v288 + v261;
  v291 = __ROR8__(v287 ^ v275, 24);
  v292 = __ROL8__(v289 ^ v281, 1);
  v293 = v291 + v782 + v282;
  v294 = __ROR8__(v290 ^ v280, 24);
  v295 = v294 + v778 + v284;
  v296 = __ROR8__(v293 ^ v285, 16);
  v297 = __ROR8__(v295 ^ v288, 16);
  v740 = v296 + v287;
  v298 = __ROL8__((v296 + v287) ^ v291, 1);
  v299 = v297 + v290;
  v300 = v751 + v773 + v274;
  v301 = __ROL8__(v299 ^ v294, 1);
  v302 = __ROL8__(v300 ^ v271, 32);
  v303 = v302 + v728;
  v304 = __ROR8__((v302 + v728) ^ v751, 24);
  v305 = v304 + v783 + v300;
  v306 = __ROR8__(v305 ^ v302, 16);
  v307 = v306 + v303;
  v308 = __ROL8__(v307 ^ v304, 1);
  v309 = v308 + v772 + v283;
  v310 = __ROL8__(v309 ^ v296, 32);
  v311 = v310 + v299;
  v312 = __ROR8__(v311 ^ v308, 24);
  v313 = v312 + v782 + v309;
  v314 = __ROR8__(v313 ^ v310, 16);
  v315 = v314 + v311;
  v316 = v292 + v776 + v293;
  v317 = v298 + v770 + v295;
  v752 = __ROL8__(v315 ^ v312, 1);
  v318 = __ROL8__(v316 ^ v297, 32);
  v319 = v318 + v307;
  v320 = __ROL8__(v317 ^ v306, 32);
  v321 = v301 + v778 + v305;
  v322 = v320 + v289;
  v323 = __ROR8__(v319 ^ v292, 24);
  v324 = __ROL8__(v321 ^ v763, 32);
  v325 = v323 + v780 + v316;
  v326 = __ROR8__(v322 ^ v298, 24);
  v327 = v326 + v781 + v317;
  v328 = __ROR8__(v325 ^ v318, 16);
  v329 = __ROR8__(v327 ^ v320, 16);
  v729 = v328 + v319;
  v330 = v329 + v322;
  v331 = __ROL8__((v328 + v319) ^ v323, 1);
  v332 = v324 + v740;
  v333 = __ROL8__(v330 ^ v326, 1);
  v334 = __ROR8__((v324 + v740) ^ v301, 24);
  v335 = v331 + v774 + v313;
  v336 = v334 + v773 + v321;
  v337 = v333 + v777 + v325;
  v338 = __ROR8__(v336 ^ v324, 16);
  v339 = __ROL8__(v337 ^ v314, 32);
  v340 = v338 + v332;
  v341 = __ROL8__(v335 ^ v338, 32);
  v342 = v340 ^ v334;
  v343 = v339 + v340;
  v344 = v341 + v330;
  v345 = __ROL8__(v342, 1);
  v346 = __ROR8__(v343 ^ v333, 24);
  v347 = __ROR8__(v344 ^ v331, 24);
  v348 = v346 + v775 + v337;
  v349 = v347 + v783 + v335;
  v350 = __ROR8__(v349 ^ v341, 16);
  v351 = v350 + v344;
  v764 = v350;
  v352 = __ROL8__(v351 ^ v347, 1);
  v353 = __ROR8__(v348 ^ v339, 16);
  v354 = v345 + v785 + v327;
  v355 = v752 + v771 + v336;
  v741 = v353 + v343;
  v356 = __ROL8__(v354 ^ v328, 32);
  v357 = __ROL8__(v355 ^ v329, 32);
  v358 = v356 + v315;
  v359 = __ROL8__((v353 + v343) ^ v346, 1);
  v360 = v357 + v729;
  v361 = __ROR8__(v358 ^ v345, 24);
  v362 = v361 + v784 + v354;
  v363 = __ROR8__((v357 + v729) ^ v752, 24);
  v364 = v363 + v779 + v355;
  v365 = __ROR8__(v362 ^ v356, 16);
  v366 = v365 + v358;
  v367 = __ROR8__(v364 ^ v357, 16);
  v368 = v367 + v360;
  v369 = __ROL8__(v366 ^ v361, 1);
  v370 = __ROL8__(v368 ^ v363, 1);
  v371 = v370 + v782 + v349;
  v372 = v352 + v771 + v348;
  v373 = __ROL8__(v371 ^ v353, 32);
  v374 = __ROL8__(v372 ^ v365, 32);
  v375 = v359 + v784 + v362;
  v376 = v373 + v366;
  v377 = v374 + v368;
  v378 = __ROR8__(v376 ^ v370, 24);
  v379 = __ROR8__(v377 ^ v352, 24);
  v380 = v378 + v775 + v371;
  v381 = v379 + v785 + v372;
  v382 = __ROR8__(v380 ^ v373, 16);
  v383 = __ROR8__(v381 ^ v374, 16);
  v384 = v382 + v376;
  v730 = v383 + v377;
  v385 = __ROL8__((v383 + v377) ^ v379, 1);
  v753 = __ROL8__(v384 ^ v378, 1);
  v386 = __ROL8__(v375 ^ v367, 32);
  v387 = v386 + v351;
  v388 = v369 + v774 + v364;
  v389 = __ROR8__(v387 ^ v359, 24);
  v390 = v385 + v770 + v380;
  v391 = __ROL8__(v388 ^ v764, 32);
  v392 = v389 + v783 + v375;
  v393 = v391 + v741;
  v394 = __ROR8__(v392 ^ v386, 16);
  v395 = __ROR8__((v391 + v741) ^ v369, 24);
  v396 = v394 + v387;
  v397 = v395 + v780 + v388;
  v398 = __ROL8__(v396 ^ v389, 1);
  v399 = __ROR8__(v397 ^ v391, 16);
  v400 = v399 + v393;
  v401 = __ROL8__(v390 ^ v399, 32);
  v402 = v401 + v396;
  v403 = __ROL8__(v400 ^ v395, 1);
  v404 = __ROR8__(v402 ^ v385, 24);
  v405 = v398 + v776 + v381;
  v406 = v404 + v777 + v390;
  v407 = v403 + v779 + v392;
  v408 = __ROL8__(v405 ^ v382, 32);
  v409 = __ROR8__(v406 ^ v401, 16);
  v410 = v408 + v400;
  v411 = __ROL8__(v407 ^ v383, 32);
  v412 = v409 + v402;
  v765 = v409;
  v413 = v411 + v384;
  v414 = __ROR8__(v410 ^ v398, 24);
  v415 = __ROL8__(v412 ^ v404, 1);
  v416 = v414 + v773 + v405;
  v417 = __ROR8__(v413 ^ v403, 24);
  v418 = v417 + v772 + v407;
  v419 = __ROR8__(v416 ^ v408, 16);
  v420 = __ROR8__(v418 ^ v411, 16);
  v742 = v419 + v410;
  v421 = __ROL8__((v419 + v410) ^ v414, 1);
  v422 = v420 + v413;
  v423 = v753 + v778 + v397;
  v424 = __ROL8__(v422 ^ v417, 1);
  v425 = __ROL8__(v423 ^ v394, 32);
  v426 = v425 + v730;
  v427 = __ROR8__((v425 + v730) ^ v753, 24);
  v428 = v427 + v781 + v423;
  v429 = __ROR8__(v428 ^ v425, 16);
  v430 = v429 + v426;
  v431 = __ROL8__(v430 ^ v427, 1);
  v432 = v431 + v783 + v406;
  v433 = __ROL8__(v432 ^ v419, 32);
  v434 = v433 + v422;
  v435 = __ROR8__(v434 ^ v431, 24);
  v436 = v435 + v781 + v432;
  v437 = __ROR8__(v436 ^ v433, 16);
  v438 = v437 + v434;
  v439 = v415 + v777 + v416;
  v440 = v421 + v782 + v418;
  v754 = __ROL8__(v438 ^ v435, 1);
  v441 = __ROL8__(v439 ^ v420, 32);
  v442 = v424 + v773 + v428;
  v443 = v441 + v430;
  v444 = __ROL8__(v440 ^ v429, 32);
  v445 = v444 + v412;
  v446 = __ROR8__(v443 ^ v415, 24);
  v447 = __ROR8__(v445 ^ v421, 24);
  v448 = v446 + v784 + v439;
  v449 = __ROL8__(v442 ^ v765, 32);
  v450 = v447 + v771 + v440;
  v451 = __ROR8__(v448 ^ v441, 16);
  v452 = __ROR8__(v450 ^ v444, 16);
  v731 = v451 + v443;
  v453 = v452 + v445;
  v454 = __ROL8__((v451 + v443) ^ v446, 1);
  v455 = v449 + v742;
  v456 = __ROL8__(v453 ^ v447, 1);
  v457 = __ROR8__((v449 + v742) ^ v424, 24);
  v458 = v454 + v775 + v436;
  v459 = v457 + v779 + v442;
  v460 = __ROR8__(v459 ^ v449, 16);
  v461 = v460 + v455;
  v462 = __ROL8__(v458 ^ v460, 32);
  v463 = v462 + v453;
  v464 = __ROL8__(v461 ^ v457, 1);
  v465 = __ROR8__(v463 ^ v454, 24);
  v466 = v465 + v770 + v458;
  v766 = __ROR8__(v466 ^ v462, 16);
  v467 = v766 + v463;
  v468 = v456 + v785 + v448;
  v469 = __ROL8__(v467 ^ v465, 1);
  v470 = __ROL8__(v468 ^ v437, 32);
  v471 = v470 + v461;
  v472 = __ROR8__(v471 ^ v456, 24);
  v473 = v472 + v774 + v468;
  v474 = __ROR8__(v473 ^ v470, 16);
  v475 = v464 + v778 + v450;
  v476 = v754 + v772 + v459;
  v743 = v474 + v471;
  v477 = __ROL8__(v475 ^ v451, 32);
  v478 = __ROL8__(v476 ^ v452, 32);
  v479 = v477 + v438;
  v480 = __ROL8__((v474 + v471) ^ v472, 1);
  v481 = v478 + v731;
  v482 = __ROR8__(v479 ^ v464, 24);
  v483 = v482 + v776 + v475;
  v484 = __ROR8__((v478 + v731) ^ v754, 24);
  v485 = v484 + v780 + v476;
  v486 = __ROR8__(v483 ^ v477, 16);
  v487 = v486 + v479;
  v488 = __ROR8__(v485 ^ v478, 16);
  v489 = v488 + v481;
  v490 = __ROL8__(v487 ^ v482, 1);
  v491 = __ROL8__(v489 ^ v484, 1);
  v492 = v491 + v776 + v466;
  v493 = v469 + v784 + v473;
  v494 = __ROL8__(v492 ^ v474, 32);
  v495 = __ROL8__(v493 ^ v486, 32);
  v496 = v480 + v781 + v483;
  v497 = v494 + v487;
  v498 = v495 + v489;
  v499 = __ROR8__(v497 ^ v491, 24);
  v500 = __ROR8__(v498 ^ v469, 24);
  v501 = v499 + v785 + v492;
  v502 = v500 + v779 + v493;
  v503 = __ROR8__(v501 ^ v494, 16);
  v504 = __ROR8__(v502 ^ v495, 16);
  v505 = v503 + v497;
  v732 = v504 + v498;
  v506 = __ROL8__((v504 + v498) ^ v500, 1);
  v755 = __ROL8__(v505 ^ v499, 1);
  v507 = __ROL8__(v496 ^ v488, 32);
  v508 = v507 + v467;
  v509 = v490 + v770 + v485;
  v510 = __ROR8__(v508 ^ v480, 24);
  v511 = v506 + v782 + v501;
  v512 = __ROL8__(v509 ^ v766, 32);
  v513 = v510 + v773 + v496;
  v514 = v512 + v743;
  v515 = __ROR8__(v513 ^ v507, 16);
  v516 = __ROR8__((v512 + v743) ^ v490, 24);
  v517 = v515 + v508;
  v518 = v516 + v778 + v509;
  v519 = __ROL8__(v517 ^ v510, 1);
  v520 = __ROR8__(v518 ^ v512, 16);
  v521 = v520 + v514;
  v522 = __ROL8__(v511 ^ v520, 32);
  v523 = v522 + v517;
  v524 = __ROL8__(v521 ^ v516, 1);
  v525 = __ROR8__(v523 ^ v506, 24);
  v526 = v519 + v783 + v502;
  v527 = v525 + v772 + v511;
  v528 = v524 + v771 + v513;
  v529 = __ROL8__(v526 ^ v503, 32);
  v530 = __ROR8__(v527 ^ v522, 16);
  v531 = v529 + v521;
  v532 = __ROL8__(v528 ^ v504, 32);
  v533 = v530 + v523;
  v767 = v530;
  v534 = v532 + v505;
  v535 = __ROR8__(v531 ^ v519, 24);
  v536 = __ROL8__(v533 ^ v525, 1);
  v537 = v535 + v777 + v526;
  v538 = __ROR8__(v534 ^ v524, 24);
  v539 = v538 + v774 + v528;
  v540 = __ROR8__(v537 ^ v529, 16);
  v541 = __ROR8__(v539 ^ v532, 16);
  v744 = v540 + v531;
  v542 = __ROL8__((v540 + v531) ^ v535, 1);
  v543 = v541 + v534;
  v544 = v755 + v780 + v518;
  v545 = __ROL8__(v543 ^ v538, 1);
  v546 = __ROL8__(v544 ^ v515, 32);
  v547 = v546 + v732;
  v548 = __ROR8__((v546 + v732) ^ v755, 24);
  v549 = v548 + v775 + v544;
  v550 = __ROR8__(v549 ^ v546, 16);
  v551 = v550 + v547;
  v552 = __ROL8__(v551 ^ v548, 1);
  v553 = v552 + v780 + v527;
  v554 = __ROL8__(v553 ^ v540, 32);
  v555 = v554 + v543;
  v556 = __ROR8__(v555 ^ v552, 24);
  v557 = v556 + v772 + v553;
  v558 = __ROR8__(v557 ^ v554, 16);
  v559 = v558 + v555;
  v560 = v536 + v778 + v537;
  v561 = v542 + v777 + v539;
  v756 = __ROL8__(v559 ^ v556, 1);
  v562 = __ROL8__(v560 ^ v541, 32);
  v563 = v545 + v771 + v549;
  v564 = v562 + v551;
  v565 = __ROL8__(v561 ^ v550, 32);
  v566 = v565 + v533;
  v567 = __ROR8__(v564 ^ v536, 24);
  v568 = __ROR8__(v566 ^ v542, 24);
  v569 = v567 + v774 + v560;
  v570 = __ROL8__(v563 ^ v767, 32);
  v571 = v568 + v776 + v561;
  v572 = __ROR8__(v569 ^ v562, 16);
  v573 = __ROR8__(v571 ^ v565, 16);
  v733 = v572 + v564;
  v574 = v573 + v566;
  v575 = __ROL8__((v572 + v564) ^ v567, 1);
  v576 = v570 + v744;
  v577 = __ROL8__(v574 ^ v568, 1);
  v578 = __ROR8__((v570 + v744) ^ v545, 24);
  v579 = v575 + v785 + v557;
  v580 = v578 + v775 + v563;
  v581 = v577 + v779 + v569;
  v582 = __ROR8__(v580 ^ v570, 16);
  v583 = __ROL8__(v581 ^ v558, 32);
  v584 = v582 + v576;
  v585 = __ROL8__(v579 ^ v582, 32);
  v586 = v584 ^ v578;
  v587 = v583 + v584;
  v588 = v585 + v574;
  v589 = __ROL8__(v586, 1);
  v590 = __ROR8__(v587 ^ v577, 24);
  v591 = __ROR8__(v588 ^ v575, 24);
  v592 = v590 + v784 + v581;
  v593 = v591 + v781 + v579;
  v594 = __ROR8__(v593 ^ v585, 16);
  v595 = v594 + v588;
  v768 = v594;
  v596 = __ROL8__(v595 ^ v591, 1);
  v597 = __ROR8__(v592 ^ v583, 16);
  v598 = v589 + v773 + v571;
  v599 = v756 + v783 + v580;
  v745 = v597 + v587;
  v600 = __ROL8__(v598 ^ v572, 32);
  v601 = __ROL8__(v599 ^ v573, 32);
  v602 = v600 + v559;
  v603 = __ROL8__((v597 + v587) ^ v590, 1);
  v604 = v601 + v733;
  v605 = __ROR8__(v602 ^ v589, 24);
  v606 = v605 + v782 + v598;
  v607 = __ROR8__((v601 + v733) ^ v756, 24);
  v608 = v607 + v770 + v599;
  v609 = __ROR8__(v606 ^ v600, 16);
  v610 = v609 + v602;
  v611 = __ROR8__(v608 ^ v601, 16);
  v612 = v611 + v604;
  v613 = __ROL8__(v610 ^ v605, 1);
  v614 = __ROL8__(v612 ^ v607, 1);
  v615 = v614 + v770 + v593;
  v616 = v596 + v772 + v592;
  v617 = __ROL8__(v615 ^ v597, 32);
  v618 = __ROL8__(v616 ^ v609, 32);
  v619 = v603 + v774 + v606;
  v620 = v617 + v610;
  v621 = v618 + v612;
  v622 = __ROR8__(v620 ^ v614, 24);
  v623 = __ROR8__(v621 ^ v596, 24);
  v624 = v622 + v771 + v615;
  v625 = v623 + v773 + v616;
  v626 = __ROR8__(v624 ^ v617, 16);
  v627 = __ROR8__(v625 ^ v618, 16);
  v628 = v626 + v620;
  v734 = v627 + v621;
  v629 = __ROL8__((v627 + v621) ^ v623, 1);
  v757 = __ROL8__(v628 ^ v622, 1);
  v630 = __ROL8__(v619 ^ v611, 32);
  v631 = v630 + v595;
  v632 = v613 + v776 + v608;
  v633 = __ROR8__(v631 ^ v603, 24);
  v634 = v629 + v778 + v624;
  v635 = __ROL8__(v632 ^ v768, 32);
  v636 = v633 + v775 + v619;
  v637 = v635 + v745;
  v638 = __ROR8__(v636 ^ v630, 16);
  v639 = __ROR8__((v635 + v745) ^ v613, 24);
  v640 = v638 + v631;
  v641 = v639 + v777 + v632;
  v642 = __ROL8__(v640 ^ v633, 1);
  v643 = __ROR8__(v641 ^ v635, 16);
  v644 = v643 + v637;
  v645 = __ROL8__(v634 ^ v643, 32);
  v646 = v645 + v640;
  v647 = __ROL8__(v644 ^ v639, 1);
  v648 = __ROR8__(v646 ^ v629, 24);
  v649 = v642 + v780 + v625;
  v650 = v648 + v779 + v634;
  v651 = v647 + v782 + v636;
  v652 = __ROL8__(v649 ^ v626, 32);
  v653 = __ROR8__(v650 ^ v645, 16);
  v654 = v652 + v644;
  v655 = __ROL8__(v651 ^ v627, 32);
  v656 = v653 + v646;
  v769 = v653;
  v657 = v655 + v628;
  v658 = __ROR8__(v654 ^ v642, 24);
  v659 = __ROL8__(v656 ^ v648, 1);
  v660 = v658 + v781 + v649;
  v661 = __ROR8__(v657 ^ v647, 24);
  v662 = v661 + v783 + v651;
  v663 = __ROR8__(v660 ^ v652, 16);
  v664 = __ROR8__(v662 ^ v655, 16);
  v746 = v663 + v654;
  v665 = __ROL8__((v663 + v654) ^ v658, 1);
  v666 = v664 + v657;
  v667 = v757 + v784 + v641;
  v668 = __ROL8__(v666 ^ v661, 1);
  v669 = __ROL8__(v667 ^ v638, 32);
  v670 = v669 + v734;
  v671 = __ROR8__((v669 + v734) ^ v757, 24);
  v672 = v671 + v785 + v667;
  v673 = __ROR8__(v672 ^ v669, 16);
  v674 = v673 + v670;
  v675 = __ROL8__(v674 ^ v671, 1);
  v676 = v675 + v784 + v650;
  v677 = __ROL8__(v676 ^ v663, 32);
  v678 = v677 + v666;
  v679 = __ROR8__(v678 ^ v675, 24);
  v680 = v679 + v780 + v676;
  v681 = __ROR8__(v680 ^ v677, 16);
  v735 = v681 + v678;
  v682 = v659 + v774 + v660;
  v683 = v665 + v779 + v662;
  v684 = v668 + v783 + v672;
  v685 = __ROL8__(v682 ^ v664, 32);
  v686 = __ROL8__(v683 ^ v673, 32);
  v687 = v685 + v674;
  v758 = __ROL8__((v681 + v678) ^ v679, 1);
  v688 = __ROL8__(v684 ^ v769, 32);
  v689 = v686 + v656;
  v690 = __ROR8__(v687 ^ v659, 24);
  v691 = __ROR8__(v689 ^ v665, 24);
  v692 = v690 + v778 + v682;
  v693 = v688 + v746;
  v694 = v691 + v785 + v683;
  v695 = __ROR8__(v692 ^ v685, 16);
  v696 = __ROR8__(v694 ^ v686, 16);
  v697 = v695 + v687;
  v698 = v696 + v689;
  v699 = __ROL8__(v697 ^ v690, 1);
  v700 = __ROL8__(v698 ^ v691, 1);
  v701 = __ROR8__((v688 + v746) ^ v668, 24);
  v702 = v699 + v771 + v680;
  v703 = v701 + v776 + v684;
  v704 = __ROR8__(v703 ^ v688, 16);
  v705 = v704 + v693;
  v706 = __ROL8__(v702 ^ v704, 32);
  v707 = v706 + v698;
  v708 = __ROL8__(v705 ^ v701, 1);
  v709 = __ROR8__(v707 ^ v699, 24);
  v710 = v709 + v782 + v702;
  v786 = v710;
  v798 = __ROR8__(v710 ^ v706, 16);
  v711 = v700 + v770 + v692;
  v794[2] = v798 + v707;
  v712 = __ROL8__(v711 ^ v681, 32);
  v791 = __ROL8__(v709 ^ (v798 + v707), 1);
  v713 = v712 + v705;
  v714 = __ROR8__(v713 ^ v700, 24);
  v787 = v714 + v772 + v711;
  v715 = v708 + v781 + v694;
  v795 = __ROR8__(v712 ^ v787, 16);
  v716 = __ROL8__(v715 ^ v695, 32);
  v794[3] = v795 + v713;
  v792 = __ROL8__(v714 ^ (v795 + v713), 1);
  v717 = __ROR8__((v735 + v716) ^ v708, 24);
  v788 = v777 + v715 + v717;
  v796 = __ROR8__(v716 ^ v788, 16);
  v718 = v735 + v716 + v796;
  v794[0] = v718;
  v793 = __ROL8__(v718 ^ v717, 1);
  v719 = v758 + v703 + v775;
  v720 = __ROL8__(v719 ^ v696, 32);
  v721 = v720 + v697;
  v722 = __ROR8__(v721 ^ v758, 24);
  v789 = v773 + v719 + v722;
  result = 0LL;
  v797 = __ROR8__(v789 ^ v720, 16);
  v794[1] = v721 + v797;
  v790 = __ROL8__(v722 ^ (v721 + v797), 1);
  while ( 1 )
  {
    a1[result++] ^= v718 ^ v710;
    if ( result == 8 )
      break;
    v710 = *(&v786 + result);
    v718 = v794[result];
  }
  return result;
}

void *__fastcall sub_404C20(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  size_t v4; // r13
  char *v5; // r12
  __int64 v7; // r15
  char *v8; // rdi
  void *result; // rax
  unsigned __int64 v10; // rax
  char *v11; // rbp
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  unsigned __int64 v14; // rax

  v3 = (__int64)(a1 + 12);
  v4 = a3;
  v5 = a2;
  v7 = a1[28];
  v8 = (char *)a1 + v7 + 96;
  if ( 128 - v7 < a3 )
  {
    a1[28] = 0LL;
    v4 = v7 + a3 - 128;
    memcpy(v8, a2, 128 - v7);
    v10 = a1[8] + 128LL;
    a1[8] = v10;
    v11 = &a2[128 - v7];
    a1[9] += v10 <= 0x7F;
    sub_403680(a1, v3);
    if ( v4 <= 0x80 )
    {
      v5 = &a2[128 - v7];
      v8 = (char *)(v3 + a1[28]);
    }
    else
    {
      v12 = (v4 - 129) >> 7;
      v5 = &v11[128 * v12 + 128];
      do
      {
        v13 = (__int64)v11;
        v14 = a1[8] + 128LL;
        a1[8] = v14;
        v11 += 128;
        a1[9] += v14 <= 0x7F;
        sub_403680(a1, v13);
      }
      while ( v5 != v11 );
      v4 = v4 - (v12 << 7) - 128;
      v8 = (char *)(v3 + a1[28]);
    }
  }
  result = memcpy(v8, v5, v4);
  a1[28] += v4;
  return result;
}

__int64 __fastcall sub_404D50(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 i; // rax

  a1[8] = 0LL;
  v3 = (unsigned __int64)(a1 + 9);
  v4 = 0x6A09E667F3BCC908LL;
  *(_QWORD *)(v3 + 168) = 0LL;
  memset((void *)(v3 & 0xFFFFFFFFFFFFFFF8LL), 0, 8 * (((unsigned int)a1 - (v3 & 0xFFFFFFF8) + 248) >> 3));
  *a1 = 0x6A09E667F3BCC908LL;
  a1[1] = 0xBB67AE8584CAA73BLL;
  a1[2] = 0x3C6EF372FE94F82BLL;
  a1[3] = 0xA54FF53A5F1D36F1LL;
  a1[4] = 0x510E527FADE682D1LL;
  a1[5] = 0x9B05688C2B3E6C1FLL;
  a1[6] = 0x1F83D9ABFB41BD6BLL;
  a1[7] = 0x5BE0CD19137E2179LL;
  for ( i = 0LL; ; v4 = a1[i] )
  {
    a1[i] = *(_QWORD *)&a2[8 * i] ^ v4;
    if ( ++i == 8 )
      break;
  }
  a1[29] = *a2;
  return 0LL;
}

__int64 __fastcall sub_404E20(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v3; // [rsp+0h] [rbp-48h] BYREF
  __int64 v4; // [rsp+1h] [rbp-47h]
  __int64 v5; // [rsp+9h] [rbp-3Fh]
  char v6; // [rsp+11h] [rbp-37h]
  __int64 v7; // [rsp+12h] [rbp-36h]
  int v8; // [rsp+1Ah] [rbp-2Eh]
  __int16 v9; // [rsp+1Eh] [rbp-2Ah]
  __int128 v10; // [rsp+20h] [rbp-28h]
  __int128 v11; // [rsp+30h] [rbp-18h]

  if ( (unsigned __int64)(a2 - 1) > 0x3F )
    return 0xFFFFFFFFLL;
  v3 = a2;
  v4 = 65792LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  return sub_404D50(a1, &v3);
}

__int64 __fastcall sub_404E90(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int8 v7[2]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+2h] [rbp-D6h]
  __int64 v9; // [rsp+Ah] [rbp-CEh]
  __int64 v10; // [rsp+12h] [rbp-C6h]
  int v11; // [rsp+1Ah] [rbp-BEh]
  __int16 v12; // [rsp+1Eh] [rbp-BAh]
  __int128 v13; // [rsp+20h] [rbp-B8h]
  __int128 v14; // [rsp+30h] [rbp-A8h]
  char s[152]; // [rsp+40h] [rbp-98h] BYREF

  if ( (unsigned __int64)(a2 - 1) > 0x3F || (unsigned __int64)(a4 - 1) > 0x3F || !a3 )
    return 0xFFFFFFFFLL;
  v7[0] = a2;
  v7[1] = a4;
  v8 = 257LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( (int)sub_404D50(a1, v7) < 0 )
    return 0xFFFFFFFFLL;
  memset(s, 0, 0x80uLL);
  __memcpy_chk(s, v5, v4, 128LL);
  sub_404C20(a1, s, 0x80uLL);
  off_60E238(s, 0LL, 128LL);
  return 0LL;
}

__int64 __fastcall sub_404F80(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  if ( a3 )
    sub_404C20(a1, a2, a3);
  return 0LL;
}

__int64 __fastcall sub_404FA0(__int64 a1, void *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  bool v5; // zf
  __int64 *v6; // rcx
  char *v7; // rax
  __int64 v8; // rdx
  __int128 v10[4]; // [rsp+0h] [rbp-58h] BYREF
  char v11; // [rsp+40h] [rbp-18h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( !a2 || *(_QWORD *)(a1 + 232) > a3 || *(_QWORD *)(a1 + 80) )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 224);
  v4 = *(_QWORD *)(a1 + 64) + v3;
  *(_QWORD *)(a1 + 72) += __CFADD__(*(_QWORD *)(a1 + 64), v3);
  v5 = *(_BYTE *)(a1 + 240) == 0;
  *(_QWORD *)(a1 + 64) = v4;
  if ( !v5 )
    *(_QWORD *)(a1 + 88) = -1LL;
  *(_QWORD *)(a1 + 80) = -1LL;
  memset((void *)(a1 + 96 + v3), 0, 128 - v3);
  sub_403680((_QWORD *)a1, a1 + 96);
  v6 = (__int64 *)a1;
  v7 = (char *)v10;
  do
  {
    v8 = *v6;
    v7 += 8;
    ++v6;
    *((_QWORD *)v7 - 1) = v8;
  }
  while ( v7 != &v11 );
  memcpy(a2, v10, *(_QWORD *)(a1 + 232));
  off_60E238(v10, 0LL, 64LL);
  return 0LL;
}

__int64 __fastcall sub_4051D0(FILE *stream, void *a2, unsigned __int64 a3)
{
  char *v5; // rax
  char *v6; // r12
  unsigned __int64 v7; // rbx
  FILE *v8; // rdi
  size_t v9; // rax
  unsigned int v10; // ebp
  _QWORD v12[39]; // [rsp+0h] [rbp-138h] BYREF

  v5 = (char *)malloc(0x8000uLL);
  if ( v5 )
  {
    v6 = v5;
    sub_404E20(v12, a3);
LABEL_3:
    v7 = 0LL;
    while ( 1 )
    {
      v9 = fread(&v6[v7], 1uLL, 0x8000 - v7, stream);
      v7 += v9;
      if ( v7 == 0x8000 )
      {
        sub_404F80(v12, v6, 0x8000uLL);
        goto LABEL_3;
      }
      v8 = stream;
      if ( !v9 )
        break;
      if ( feof(stream) )
        goto LABEL_9;
    }
    v10 = -1;
    if ( ferror(v8) )
      goto LABEL_12;
LABEL_9:
    if ( v7 )
      sub_404F80(v12, v6, v7);
    v10 = 0;
    sub_404FA0((__int64)v12, a2, a3);
LABEL_12:
    free(v6);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v10;
}

void __noreturn sub_4052C0()
{
  sub_403280(1);
}

__int64 __fastcall sub_4052D0(const char *a1, const char **a2, char *a3, size_t a4)
{
  char *v5; // rbp
  size_t v6; // rax
  const char *v7; // r14
  size_t v8; // r12
  __int64 v9; // rbx
  bool v10; // zf
  char v11; // al
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-58h]
  char v15; // [rsp+17h] [rbp-41h]

  v5 = a3;
  v6 = strlen(a1);
  v7 = *a2;
  v14 = -1LL;
  if ( !*a2 )
    return v14;
  v8 = v6;
  v15 = 0;
  v9 = 0LL;
  do
  {
    while ( strncmp(v7, a1, v8) )
    {
LABEL_7:
      ++v9;
      v5 += a4;
      v7 = a2[v9];
      if ( !v7 )
        goto LABEL_12;
    }
    if ( strlen(v7) == v8 )
      return v9;
    if ( v14 != -1 )
    {
      if ( a3 )
      {
        v10 = memcmp(&a3[a4 * v14], v5, a4) == 0;
        v11 = v15;
        if ( !v10 )
          v11 = 1;
        v15 = v11;
      }
      else
      {
        v15 = 1;
      }
      goto LABEL_7;
    }
    v14 = v9++;
    v5 += a4;
    v7 = a2[v9];
  }
  while ( v7 );
LABEL_12:
  v12 = -2LL;
  if ( !v15 )
    return v14;
  return v12;
}

void __fastcall sub_4053F0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_4073F0(1LL, a1);
  v5 = sub_4070E0(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_405470(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  const char *v11; // rax
  const char *v12; // rax
  char *IO_write_ptr; // rax

  v3 = 0LL;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = v6;
  v9 = 0LL;
  fputs_unlocked(v7, v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( !v9 || memcmp(v3, a2, a3) )
    {
      ++v9;
      v3 = a2;
      a2 += a3;
      v11 = (const char *)sub_407410(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = (const char *)sub_407410(i);
    __fprintf_chk(stderr, 1LL, ", %s", v12);
  }
LABEL_7:
  IO_write_ptr = stderr->_IO_write_ptr;
  if ( IO_write_ptr >= stderr->_IO_write_end )
  {
    LODWORD(IO_write_ptr) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = 10;
  }
  return (int)IO_write_ptr;
}

__int64 __fastcall sub_405590(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_4052D0(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_4053F0(a1, (__int64)a2, result);
    sub_405470((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_405600(void *s1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // r14
  __int64 *v6; // rbx

  v4 = *a2;
  if ( *a2 )
  {
    v6 = a2 + 1;
    do
    {
      if ( !memcmp(s1, a3, a4) )
        break;
      v4 = *v6;
      a3 += a4;
      ++v6;
    }
    while ( v4 );
  }
  return v4;
}

__int64 sub_405670()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_409690(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60E328 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60E330 )
      {
        v5 = (const char *)sub_407260();
        error(0, *v1, "%s: %s", v5, v4);
      }
      else
      {
        error(0, *v1, "%s", v3);
      }
LABEL_8:
      _exit(status);
    }
  }
  result = sub_409690(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

void __fastcall sub_405720(FILE *a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

FILE *__fastcall sub_405750(const char *a1, const char *a2)
{
  FILE *v2; // rax
  FILE *v3; // rbx
  unsigned int v4; // eax
  int v6; // r12d
  int *v7; // rax
  int v8; // ebp
  int *v9; // rbx
  int *v10; // rax
  FILE *v11; // rdi
  int v12; // r12d
  int *v13; // rbp

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( v4 <= 2 )
    {
      v6 = sub_407430(v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_4085E0(v11);
        *v13 = v12;
      }
      else if ( (unsigned int)sub_4085E0(v3) || (v3 = fdopen(v6, a2)) == 0LL )
      {
        v7 = __errno_location();
        v8 = *v7;
        v9 = v7;
        close(v6);
        *v9 = v8;
        return 0LL;
      }
    }
  }
  return v3;
}

char *__fastcall sub_4057F0(const char *a1)
{
  __int64 v1; // rbx
  char *result; // rax

  if ( !a1 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 1uLL, 0x37uLL, stderr);
    abort();
  }
  v1 = (__int64)a1;
  result = strrchr(a1, 47);
  if ( result )
  {
    if ( result + 1 - a1 > 6 && !memcmp(result - 6, "/.libs/", 7uLL) )
    {
      v1 = (__int64)(result + 1);
      if ( !memcmp(result + 1, "lt-", 3uLL) )
      {
        v1 = (__int64)(result + 4);
        program_invocation_short_name = (__int64)(result + 4);
      }
    }
  }
  qword_60E338 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_405890(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_409750();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40AC89;
      if ( !v5 )
        return (char *)&unk_40AC7E;
      return v2;
    }
  }
  else if ( (*v4 & 0xDF) == 71
         && (v4[1] & 0xDF) == 66
         && v4[2] == 49
         && v4[3] == 56
         && v4[4] == 48
         && v4[5] == 51
         && v4[6] == 48
         && !v4[7] )
  {
    v5 = *v2 == 96;
    v2 = (char *)&unk_40AC85;
    if ( !v5 )
      return (char *)&unk_40AC82;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_405990(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // ebp
  unsigned __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // r11d
  _BYTE *v19; // r8
  size_t v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbp
  bool v23; // al
  unsigned __int8 v24; // dl
  const unsigned __int16 **v25; // rax
  int v26; // eax
  char v27; // di
  unsigned __int64 v28; // rdx
  char v29; // cl
  int v30; // r13d
  unsigned __int8 v31; // al
  bool v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // edx
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // r13d
  bool v40; // dl
  bool v41; // dl
  bool v42; // al
  size_t v43; // rax
  const unsigned __int16 **v44; // rbx
  char *v45; // r15
  const unsigned __int16 **v46; // r14
  char *v47; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // di
  char *v51; // rax
  size_t v52; // rax
  __int64 v53; // rsi
  char *v54; // rsi
  _BYTE *v55; // rcx
  char i; // al
  char v57; // dl
  char *v58; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  char v63; // [rsp+1Fh] [rbp-A9h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE *v66; // [rsp+30h] [rbp-98h]
  unsigned __int8 v67; // [rsp+30h] [rbp-98h]
  _BYTE *v68; // [rsp+30h] [rbp-98h]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int8 v70; // [rsp+38h] [rbp-90h]
  unsigned __int8 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  char v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+40h] [rbp-88h]
  unsigned __int64 v76; // [rsp+40h] [rbp-88h]
  int v77; // [rsp+40h] [rbp-88h]
  int v78; // [rsp+40h] [rbp-88h]
  _BYTE *v79; // [rsp+40h] [rbp-88h]
  int v80; // [rsp+48h] [rbp-80h]
  unsigned __int64 v81; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  unsigned __int64 v83; // [rsp+58h] [rbp-70h]
  size_t mb_cur_max; // [rsp+60h] [rbp-68h]
  bool v86; // [rsp+6Ch] [rbp-5Ch]
  char v87; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v88; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h]
  _BYTE *v90; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+88h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v12 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v86 = v12 != 0;
  v13 = a4;
  switch ( a5 )
  {
    case 0:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v60 = 0;
        goto LABEL_216;
      }
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 2;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        a5 = 2;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v60 = 1;
LABEL_216:
      if ( a2 )
      {
        v14 = 0;
        v42 = 0;
        v63 = 1;
        v83 = 0LL;
        goto LABEL_142;
      }
      v63 = 1;
      v14 = 0;
      v15 = 1LL;
      a5 = 2;
      v83 = 0LL;
      v87 = 0;
      v86 = 0;
      n = 1LL;
      s2 = "'";
LABEL_3:
      v16 = v13;
      v17 = 0LL;
      v18 = a5;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(a5) = v16 != v17;
        if ( v16 == -1LL )
          LOBYTE(a5) = *(_BYTE *)(a3 + v17) != 0;
        if ( !(_BYTE)a5 )
        {
          v39 = v18;
          v13 = v16;
          v40 = v39 == 2;
          if ( !v15 && v40 && v86 )
          {
            v30 = 2;
            goto LABEL_72;
          }
          v41 = !v86 && v40;
          if ( v41 )
          {
            if ( v87 )
            {
              if ( v63 )
                return sub_405990((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "'";
                n = 1LL;
                v86 = 0;
                v87 = v42;
                goto LABEL_3;
              }
              v41 = v87;
            }
          }
          else
          {
            v41 = !v86;
          }
          if ( s2 )
          {
            if ( v41 )
            {
              v57 = *s2;
              if ( *s2 )
              {
                v58 = &s2[-v15];
                do
                {
                  if ( v10 > v15 )
                    v9[v15] = v57;
                  v57 = v58[++v15];
                }
                while ( v57 );
              }
            }
          }
          if ( v10 > v15 )
            v9[v15] = 0;
          return v15;
        }
        v19 = (_BYTE *)(a3 + v17);
        v61 = v60 & (v18 != 2);
        if ( !v61 )
          break;
        if ( n )
        {
          if ( v16 == -1LL && n > 1 )
          {
            v75 = v18;
            v70 = v14;
            v20 = strlen((const char *)a3);
            v18 = v75;
            v14 = v70;
            v19 = (_BYTE *)(a3 + v17);
            v16 = v20;
          }
          if ( v17 + n <= v16 )
          {
            v80 = v18;
            v76 = v16;
            v71 = v14;
            v66 = v19;
            v21 = memcmp(v19, s2, n);
            v19 = v66;
            v14 = v71;
            v16 = v76;
            v18 = v80;
            if ( !v21 )
            {
              if ( !v86 )
              {
                LOBYTE(v22) = *v66;
                switch ( *v66 )
                {
                  case 0:
                    goto LABEL_87;
                  case 7:
                    LOBYTE(v22) = 97;
                    goto LABEL_83;
                  case 8:
                    v24 = 0;
                    a5 = 0;
                    LOBYTE(v22) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_76;
                  case 0xA:
                    goto LABEL_68;
                  case 0xB:
                    goto LABEL_84;
                  case 0xC:
                    goto LABEL_81;
                  case 0xD:
                    goto LABEL_80;
                  case 0x20:
                    v37 = v61;
                    goto LABEL_132;
                  case 0x21:
                  case 0x22:
                  case 0x24:
                  case 0x26:
                  case 0x28:
                  case 0x29:
                  case 0x2A:
                  case 0x3B:
                  case 0x3C:
                  case 0x3D:
                  case 0x3E:
                  case 0x5B:
                  case 0x5E:
                  case 0x60:
                  case 0x7C:
                    goto LABEL_78;
                  case 0x23:
                  case 0x7E:
                    v38 = v61;
                    goto LABEL_129;
                  case 0x25:
                  case 0x2B:
                  case 0x2C:
                  case 0x2D:
                  case 0x2E:
                  case 0x2F:
                  case 0x30:
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x35:
                  case 0x36:
                  case 0x37:
                  case 0x38:
                  case 0x39:
                  case 0x3A:
                  case 0x41:
                  case 0x42:
                  case 0x43:
                  case 0x44:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x48:
                  case 0x49:
                  case 0x4A:
                  case 0x4B:
                  case 0x4C:
                  case 0x4D:
                  case 0x4E:
                  case 0x4F:
                  case 0x50:
                  case 0x51:
                  case 0x52:
                  case 0x53:
                  case 0x54:
                  case 0x55:
                  case 0x56:
                  case 0x57:
                  case 0x58:
                  case 0x59:
                  case 0x5A:
                  case 0x5D:
                  case 0x5F:
                  case 0x61:
                  case 0x62:
                  case 0x63:
                  case 0x64:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                  case 0x68:
                  case 0x69:
                  case 0x6A:
                  case 0x6B:
                  case 0x6C:
                  case 0x6D:
                  case 0x6E:
                  case 0x6F:
                  case 0x70:
                  case 0x71:
                  case 0x72:
                  case 0x73:
                  case 0x74:
                  case 0x75:
                  case 0x76:
                  case 0x77:
                  case 0x78:
                  case 0x79:
                  case 0x7A:
                    v37 = v61;
                    goto LABEL_127;
                  case 0x27:
                    goto LABEL_62;
                  case 0x3F:
                    goto LABEL_58;
                  case 0x5C:
                    goto LABEL_65;
                  case 0x7B:
                  case 0x7D:
                    goto LABEL_17;
                  default:
                    goto LABEL_102;
                }
              }
LABEL_277:
              v30 = v18;
              LODWORD(v13) = v16;
              return sub_405990((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
            }
          }
        }
        LOBYTE(v22) = *v19;
        switch ( *v19 )
        {
          case 0:
            goto LABEL_85;
          case 7:
            LOBYTE(v22) = 97;
            goto LABEL_82;
          case 8:
            LOBYTE(v22) = 98;
            goto LABEL_69;
          case 9:
LABEL_76:
            LOBYTE(v22) = 116;
            goto LABEL_69;
          case 0xA:
LABEL_68:
            LOBYTE(v22) = 110;
LABEL_69:
            v24 = 0;
            a5 = 0;
            if ( v86 )
              goto LABEL_70;
            goto LABEL_29;
          case 0xB:
LABEL_84:
            LOBYTE(v22) = 118;
            goto LABEL_82;
          case 0xC:
LABEL_81:
            LOBYTE(v22) = 102;
LABEL_82:
            if ( v86 )
            {
              v30 = v18;
              v31 = 0;
              LODWORD(v13) = v16;
              goto LABEL_71;
            }
LABEL_83:
            a5 = 0;
            goto LABEL_37;
          case 0xD:
            v61 = 0;
LABEL_80:
            LOBYTE(v22) = 13;
            v29 = 114;
            v24 = v18 == 2;
            goto LABEL_66;
          case 0x20:
            v37 = 0;
LABEL_132:
            LOBYTE(v22) = 32;
            goto LABEL_127;
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x5B:
          case 0x5E:
          case 0x60:
          case 0x7C:
            v61 = 0;
LABEL_78:
            v24 = 0;
            goto LABEL_67;
          case 0x23:
          case 0x7E:
            v38 = 0;
LABEL_129:
            if ( !v17 )
            {
              a5 = v61;
              v24 = 0;
              v61 = v38;
              goto LABEL_23;
            }
            v61 = v38;
            a5 = 0;
            break;
          case 0x25:
          case 0x2B:
          case 0x2C:
          case 0x2D:
          case 0x2E:
          case 0x2F:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3A:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4B:
          case 0x4C:
          case 0x4D:
          case 0x4E:
          case 0x4F:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5A:
          case 0x5D:
          case 0x5F:
          case 0x61:
          case 0x62:
          case 0x63:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6B:
          case 0x6C:
          case 0x6D:
          case 0x6E:
          case 0x6F:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7A:
            v37 = 0;
LABEL_127:
            a5 = v61;
            v61 = v37;
            LOBYTE(v25) = 0;
            goto LABEL_25;
          case 0x27:
            v61 = 0;
            goto LABEL_62;
          case 0x3F:
            v61 = 0;
            goto LABEL_58;
          case 0x5C:
            v61 = 0;
            goto LABEL_65;
          case 0x7B:
          case 0x7D:
            v61 = 0;
            goto LABEL_17;
          default:
            v61 = 0;
            goto LABEL_102;
        }
LABEL_24:
        LOBYTE(v25) = 0;
LABEL_25:
        if ( a7 && ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v22 >> 5)) >> v22) & 1) != 0 )
        {
          v24 = v18 == 2;
LABEL_28:
          if ( v86 )
          {
LABEL_70:
            v30 = v18;
            v31 = v24;
            LODWORD(v13) = v16;
LABEL_71:
            v60 &= v31;
            goto LABEL_72;
          }
LABEL_29:
          v26 = v14 ^ 1;
          if ( (v24 & ((unsigned __int8)v14 ^ 1)) != 0 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v15 + 1 < v10 )
              v9[v15 + 1] = 36;
            if ( v15 + 2 < v10 )
              v9[v15 + 2] = 39;
            v15 += 3LL;
            LOBYTE(v26) = v24 & (v14 ^ 1);
            v14 = v26;
          }
LABEL_37:
          if ( v10 > v15 )
            v9[v15] = 92;
          ++v15;
          ++v17;
          goto LABEL_40;
        }
LABEL_49:
        v24 = v18 == 2;
        if ( v61 )
          goto LABEL_28;
        ++v17;
        LOBYTE(v25) = v14 & ((unsigned __int8)v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v25 )
        {
          if ( v10 > v15 )
            v9[v15] = 39;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 39;
          v15 += 2LL;
          v14 = 0;
        }
LABEL_40:
        if ( v15 < v10 )
          v9[v15] = v22;
        v27 = v63;
        ++v15;
        if ( !(_BYTE)a5 )
          v27 = 0;
        v63 = v27;
      }
      LOBYTE(v22) = *v19;
      switch ( *v19 )
      {
        case 0:
          if ( !v60 )
          {
            if ( (a6 & 1) == 0 )
            {
              v61 = 0;
              v24 = v18 == 2;
              a5 = 0;
              LOBYTE(v22) = 0;
              goto LABEL_23;
            }
            ++v17;
            goto LABEL_4;
          }
LABEL_85:
          if ( v86 )
          {
            v30 = v18;
            LODWORD(v13) = v16;
            v60 = v30 == 2;
            goto LABEL_72;
          }
          v61 = 0;
LABEL_87:
          v33 = v18 == 2;
          LODWORD(v25) = v14 ^ 1;
          LOBYTE(v25) = (v18 == 2) & (v14 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 36;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v34 = v15 + 3;
            if ( v10 <= v15 + 3 )
            {
              v15 += 4LL;
              v14 = (int)v25;
              a5 = 0;
              LOBYTE(v22) = 48;
              goto LABEL_49;
            }
            goto LABEL_95;
          }
          v34 = v15;
          if ( v10 > v15 )
          {
            LODWORD(v25) = v14;
LABEL_95:
            v9[v34] = 92;
            v14 = (int)v25;
          }
          v15 = v34 + 1;
          if ( v18 == 2 )
          {
            LOBYTE(v25) = a5;
            LOBYTE(v22) = 48;
            a5 = 0;
            goto LABEL_49;
          }
          LOBYTE(v22) = 48;
          if ( v17 + 1 < v16 && (unsigned __int8)(*(_BYTE *)(a3 + v17 + 1) - 48) <= 9u )
          {
            if ( v10 > v15 )
              v9[v15] = 48;
            if ( v10 > v34 + 2 )
              v9[v34 + 2] = 48;
            v15 = v34 + 3;
            LOBYTE(v22) = 48;
          }
LABEL_99:
          LOBYTE(v25) = a5;
          a5 = 0;
          if ( v33 | v60 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v22) = 7;
          v29 = 97;
          v24 = v18 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v22) = 8;
          v29 = 98;
          v24 = v18 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v22) = 9;
          v29 = 116;
          goto LABEL_108;
        case 0xA:
          LOBYTE(v22) = 10;
          v29 = 110;
          goto LABEL_108;
        case 0xB:
          LOBYTE(v22) = 11;
          v29 = 118;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xC:
          LOBYTE(v22) = 12;
          v29 = 102;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xD:
          LOBYTE(v22) = 13;
          v29 = 114;
LABEL_108:
          v24 = v18 == 2;
          v61 = v18 == 2 && v86;
          if ( v61 )
            goto LABEL_109;
          goto LABEL_66;
        case 0x20:
          LOBYTE(v22) = 32;
          v24 = v18 == 2;
          goto LABEL_21;
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x5B:
        case 0x5E:
        case 0x60:
        case 0x7C:
          v24 = v18 == 2;
          a5 = 0;
          goto LABEL_21;
        case 0x23:
        case 0x7E:
          v24 = v18 == 2;
          goto LABEL_20;
        case 0x25:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5A:
        case 0x5D:
        case 0x5F:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6C:
        case 0x6D:
        case 0x6E:
        case 0x6F:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7A:
          goto LABEL_105;
        case 0x27:
LABEL_62:
          if ( v18 != 2 )
          {
            v87 = a5;
            v24 = 0;
            LOBYTE(v22) = 39;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_288;
          if ( !v10 || (v28 = 0LL, v83) )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 92;
            v28 = v10;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v10 = v83;
          }
          v87 = a5;
          v15 += 3LL;
          LOBYTE(v25) = 0;
          v14 = 0;
          v83 = v10;
          LOBYTE(v22) = 39;
          v10 = v28;
          goto LABEL_49;
        case 0x3F:
LABEL_58:
          if ( v18 == 2 )
          {
            if ( v86 )
            {
LABEL_288:
              v30 = 2;
              LODWORD(v13) = v16;
              goto LABEL_72;
            }
            a5 = 0;
            LOBYTE(v25) = 0;
            LOBYTE(v22) = 63;
            goto LABEL_49;
          }
          if ( v18 != 5 )
          {
            LOBYTE(v22) = 63;
            v24 = v18 == 2;
            a5 = 0;
            goto LABEL_23;
          }
          if ( (a6 & 4) == 0
            || v17 + 2 >= v16
            || *(_BYTE *)(a3 + v17 + 1) != 63
            || (v22 = *(unsigned __int8 *)(a3 + v17 + 2), (unsigned __int8)v22 > 0x3Eu)
            || (v53 = 0x7000A38200000000LL, !_bittest64(&v53, v22)) )
          {
            v24 = 0;
            a5 = 0;
            LOBYTE(v22) = 63;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_277;
          if ( v10 > v15 )
            v9[v15] = 63;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 34;
          if ( v10 > v15 + 2 )
            v9[v15 + 2] = 34;
          if ( v10 > v15 + 3 )
            v9[v15 + 3] = 63;
          v15 += 4LL;
          v33 = 0;
          LOBYTE(a5) = 0;
          v17 += 2LL;
          goto LABEL_99;
        case 0x5C:
          if ( v18 == 2 )
          {
            if ( v86 )
              goto LABEL_288;
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            LOBYTE(v22) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LOBYTE(v22) = 92;
          v29 = 92;
          v24 = (n != 0) & v86 & v60;
          if ( v24 )
          {
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v60 )
          {
LABEL_67:
            a5 = 0;
            goto LABEL_23;
          }
          LOBYTE(v22) = v29;
          a5 = 0;
          goto LABEL_28;
        case 0x7B:
        case 0x7D:
LABEL_17:
          v23 = v16 != 1;
          if ( v16 == -1LL )
            v23 = *(_BYTE *)(a3 + 1) != 0;
          v24 = v18 == 2;
          if ( v23 )
            goto LABEL_67;
LABEL_20:
          if ( v17 )
            goto LABEL_67;
LABEL_21:
          if ( !v86 || !v24 )
            goto LABEL_23;
LABEL_109:
          LODWORD(v13) = v16;
          v30 = 2;
          goto LABEL_72;
        default:
LABEL_102:
          if ( mb_cur_max == 1 )
          {
            v77 = v18;
            v72 = v16;
            v67 = v14;
            v25 = __ctype_b_loc();
            v14 = v67;
            v16 = v72;
            v18 = v77;
            v35 = 1LL;
            LODWORD(v25) = (*v25)[(unsigned __int8)v22];
            LOWORD(v25) = (unsigned __int16)v25 & 0x4000;
            LOBYTE(a5) = (_WORD)v25 != 0;
            LOBYTE(v36) = v60 & ((_WORD)v25 == 0);
LABEL_104:
            if ( (_BYTE)v36 )
            {
              v36 = v60;
              LOBYTE(a5) = 0;
LABEL_178:
              v48 = 0;
              v49 = v17 + v35;
              v50 = v61;
              while ( 1 )
              {
                if ( (_BYTE)v36 )
                {
                  if ( v86 )
                  {
                    v30 = v18;
                    v60 = v18 == 2;
                    LODWORD(v13) = v16;
                    goto LABEL_72;
                  }
                  LOBYTE(v25) = (v14 ^ 1) & (v18 == 2);
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 36;
                    if ( v10 > v15 + 2 )
                      v9[v15 + 2] = 39;
                    v15 += 3LL;
                    v14 = (int)v25;
                  }
                  if ( v10 > v15 )
                    v9[v15] = 92;
                  if ( v10 > v15 + 1 )
                    v9[v15 + 1] = ((unsigned __int8)v22 >> 6) + 48;
                  LODWORD(v25) = v15 + 2;
                  if ( v10 > v15 + 2 )
                  {
                    LODWORD(v25) = (((unsigned __int8)v22 >> 3) & 7) + 48;
                    v9[v15 + 2] = (_BYTE)v25;
                  }
                  ++v17;
                  v15 += 3LL;
                  LOBYTE(v22) = (v22 & 7) + 48;
                  if ( v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_40;
                  }
                  v48 = v36;
                }
                else
                {
                  LODWORD(v25) = v14 & (v48 ^ 1);
                  if ( v50 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 92;
                    ++v15;
                  }
                  if ( ++v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_51;
                  }
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    LODWORD(v25) = v15 + 1;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 39;
                    v15 += 2LL;
                    v50 = 0;
                    v14 = 0;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                if ( v10 > v15 )
                  v9[v15] = v22;
                LOBYTE(v22) = *(_BYTE *)(a3 + v17);
                ++v15;
              }
            }
LABEL_105:
            v24 = v18 == 2;
LABEL_23:
            LOBYTE(v25) = v86 | (v24 | v60 ^ 1) ^ 1;
            if ( !(_BYTE)v25 )
              goto LABEL_49;
            goto LABEL_24;
          }
          ps = 0LL;
          if ( v16 == -1LL )
          {
            v78 = v18;
            v73 = v14;
            v68 = v19;
            v43 = strlen((const char *)a3);
            v18 = v78;
            LOBYTE(v14) = v73;
            v19 = v68;
            v16 = v43;
          }
          v89 = v15;
          v90 = v19;
          v44 = 0LL;
          v88 = v14;
          v79 = v9;
          v81 = v10;
          v69 = v16;
          v74 = v18;
          break;
      }
      while ( 2 )
      {
        v45 = (char *)v44 + v17;
        v25 = (const unsigned __int16 **)sub_409610((wchar_t *)&wc, (char *)v44 + v17 + a3);
        v46 = v25;
        if ( !v25 )
        {
LABEL_245:
          v35 = (unsigned __int64)v44;
          v15 = v89;
          v14 = v88;
          v9 = v79;
          v36 = a5 ^ 1;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          LOBYTE(v36) = v60 & (a5 ^ 1);
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-1LL )
        {
          v35 = (unsigned __int64)v44;
          v15 = v89;
          a5 = 0;
          v14 = v88;
          v9 = v79;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          v36 = v60;
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-2LL )
        {
          v16 = v69;
          v54 = (char *)v44 + v17;
          v55 = (char *)v44 + v17 + a3;
          v25 = v44;
          v35 = (unsigned __int64)v44;
          v14 = v88;
          v15 = v89;
          v9 = v79;
          v10 = v81;
          v18 = v74;
          if ( (unsigned __int64)v54 < v69 && *v55 )
          {
            do
              v25 = (const unsigned __int16 **)((char *)v25 + 1);
            while ( (unsigned __int64)v25 + v17 < v69 && *((_BYTE *)v25 + (_QWORD)v90) );
            v35 = (unsigned __int64)v25;
          }
          v36 = v60;
          a5 = 0;
LABEL_246:
          if ( v35 > 1 )
            goto LABEL_178;
          goto LABEL_104;
        }
        if ( v74 != 2 || !v86 || v25 == (const unsigned __int16 **)1 )
        {
LABEL_152:
          if ( !iswprint(wc) )
            a5 = 0;
          v44 = (const unsigned __int16 **)((char *)v44 + (_QWORD)v46);
          LODWORD(v25) = mbsinit(&ps);
          if ( (_DWORD)v25 )
            goto LABEL_245;
          continue;
        }
        break;
      }
      v47 = &v45[a3 + 1];
      while ( (unsigned __int8)(*v47 - 91) > 0x21u || ((1LL << (*v47 - 91)) & 0x20000002BLL) == 0 )
      {
        if ( (char *)v46 + a3 + (_QWORD)v45 == ++v47 )
          goto LABEL_152;
      }
      LODWORD(v9) = (_DWORD)v79;
      LODWORD(v10) = v81;
      v30 = 2;
      LODWORD(v13) = v69;
LABEL_72:
      if ( v60 )
        v30 = 4;
      return sub_405990((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
    case 5:
      if ( v12 )
      {
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v14 = 0;
          v63 = 1;
          v87 = 0;
          v83 = 0LL;
        }
        else
        {
          v83 = 0LL;
          v14 = 0;
          v63 = 1;
          v87 = 0;
        }
        v86 = 0;
        v15 = 1LL;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 5;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_405890("`", a5);
        v51 = sub_405890("'", a5);
        v13 = a4;
        a9 = v51;
      }
      v15 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v15] )
        {
          if ( a2 > v15 )
            a1[v15] = i;
          ++v15;
        }
      }
      v62 = v13;
      v52 = strlen(a9);
      v63 = 1;
      v14 = 0;
      v13 = v62;
      n = v52;
      v87 = 0;
      s2 = a9;
      v83 = 0LL;
      v60 = 1;
      goto LABEL_3;
    default:
      abort();
  }
}

unsigned __int64 __fastcall sub_405990(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // ebp
  unsigned __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // r11d
  _BYTE *v19; // r8
  size_t v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbp
  bool v23; // al
  unsigned __int8 v24; // dl
  const unsigned __int16 **v25; // rax
  int v26; // eax
  char v27; // di
  unsigned __int64 v28; // rdx
  char v29; // cl
  int v30; // r13d
  unsigned __int8 v31; // al
  bool v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // edx
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // r13d
  bool v40; // dl
  bool v41; // dl
  bool v42; // al
  size_t v43; // rax
  const unsigned __int16 **v44; // rbx
  char *v45; // r15
  const unsigned __int16 **v46; // r14
  char *v47; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // di
  char *v51; // rax
  size_t v52; // rax
  __int64 v53; // rsi
  char *v54; // rsi
  _BYTE *v55; // rcx
  char i; // al
  char v57; // dl
  char *v58; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  char v63; // [rsp+1Fh] [rbp-A9h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE *v66; // [rsp+30h] [rbp-98h]
  unsigned __int8 v67; // [rsp+30h] [rbp-98h]
  _BYTE *v68; // [rsp+30h] [rbp-98h]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int8 v70; // [rsp+38h] [rbp-90h]
  unsigned __int8 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  char v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+40h] [rbp-88h]
  unsigned __int64 v76; // [rsp+40h] [rbp-88h]
  int v77; // [rsp+40h] [rbp-88h]
  int v78; // [rsp+40h] [rbp-88h]
  _BYTE *v79; // [rsp+40h] [rbp-88h]
  int v80; // [rsp+48h] [rbp-80h]
  unsigned __int64 v81; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  unsigned __int64 v83; // [rsp+58h] [rbp-70h]
  size_t mb_cur_max; // [rsp+60h] [rbp-68h]
  bool v86; // [rsp+6Ch] [rbp-5Ch]
  char v87; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v88; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h]
  _BYTE *v90; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+88h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v12 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v86 = v12 != 0;
  v13 = a4;
  switch ( a5 )
  {
    case 0:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v60 = 0;
        goto LABEL_216;
      }
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 2;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        a5 = 2;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v60 = 1;
LABEL_216:
      if ( a2 )
      {
        v14 = 0;
        v42 = 0;
        v63 = 1;
        v83 = 0LL;
        goto LABEL_142;
      }
      v63 = 1;
      v14 = 0;
      v15 = 1LL;
      a5 = 2;
      v83 = 0LL;
      v87 = 0;
      v86 = 0;
      n = 1LL;
      s2 = "'";
LABEL_3:
      v16 = v13;
      v17 = 0LL;
      v18 = a5;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(a5) = v16 != v17;
        if ( v16 == -1LL )
          LOBYTE(a5) = *(_BYTE *)(a3 + v17) != 0;
        if ( !(_BYTE)a5 )
        {
          v39 = v18;
          v13 = v16;
          v40 = v39 == 2;
          if ( !v15 && v40 && v86 )
          {
            v30 = 2;
            goto LABEL_72;
          }
          v41 = !v86 && v40;
          if ( v41 )
          {
            if ( v87 )
            {
              if ( v63 )
                return sub_405990((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "'";
                n = 1LL;
                v86 = 0;
                v87 = v42;
                goto LABEL_3;
              }
              v41 = v87;
            }
          }
          else
          {
            v41 = !v86;
          }
          if ( s2 )
          {
            if ( v41 )
            {
              v57 = *s2;
              if ( *s2 )
              {
                v58 = &s2[-v15];
                do
                {
                  if ( v10 > v15 )
                    v9[v15] = v57;
                  v57 = v58[++v15];
                }
                while ( v57 );
              }
            }
          }
          if ( v10 > v15 )
            v9[v15] = 0;
          return v15;
        }
        v19 = (_BYTE *)(a3 + v17);
        v61 = v60 & (v18 != 2);
        if ( !v61 )
          break;
        if ( n )
        {
          if ( v16 == -1LL && n > 1 )
          {
            v75 = v18;
            v70 = v14;
            v20 = strlen((const char *)a3);
            v18 = v75;
            v14 = v70;
            v19 = (_BYTE *)(a3 + v17);
            v16 = v20;
          }
          if ( v17 + n <= v16 )
          {
            v80 = v18;
            v76 = v16;
            v71 = v14;
            v66 = v19;
            v21 = memcmp(v19, s2, n);
            v19 = v66;
            v14 = v71;
            v16 = v76;
            v18 = v80;
            if ( !v21 )
            {
              if ( !v86 )
              {
                LOBYTE(v22) = *v66;
                switch ( *v66 )
                {
                  case 0:
                    goto LABEL_87;
                  case 7:
                    LOBYTE(v22) = 97;
                    goto LABEL_83;
                  case 8:
                    v24 = 0;
                    a5 = 0;
                    LOBYTE(v22) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_76;
                  case 0xA:
                    goto LABEL_68;
                  case 0xB:
                    goto LABEL_84;
                  case 0xC:
                    goto LABEL_81;
                  case 0xD:
                    goto LABEL_80;
                  case 0x20:
                    v37 = v61;
                    goto LABEL_132;
                  case 0x21:
                  case 0x22:
                  case 0x24:
                  case 0x26:
                  case 0x28:
                  case 0x29:
                  case 0x2A:
                  case 0x3B:
                  case 0x3C:
                  case 0x3D:
                  case 0x3E:
                  case 0x5B:
                  case 0x5E:
                  case 0x60:
                  case 0x7C:
                    goto LABEL_78;
                  case 0x23:
                  case 0x7E:
                    v38 = v61;
                    goto LABEL_129;
                  case 0x25:
                  case 0x2B:
                  case 0x2C:
                  case 0x2D:
                  case 0x2E:
                  case 0x2F:
                  case 0x30:
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x35:
                  case 0x36:
                  case 0x37:
                  case 0x38:
                  case 0x39:
                  case 0x3A:
                  case 0x41:
                  case 0x42:
                  case 0x43:
                  case 0x44:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x48:
                  case 0x49:
                  case 0x4A:
                  case 0x4B:
                  case 0x4C:
                  case 0x4D:
                  case 0x4E:
                  case 0x4F:
                  case 0x50:
                  case 0x51:
                  case 0x52:
                  case 0x53:
                  case 0x54:
                  case 0x55:
                  case 0x56:
                  case 0x57:
                  case 0x58:
                  case 0x59:
                  case 0x5A:
                  case 0x5D:
                  case 0x5F:
                  case 0x61:
                  case 0x62:
                  case 0x63:
                  case 0x64:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                  case 0x68:
                  case 0x69:
                  case 0x6A:
                  case 0x6B:
                  case 0x6C:
                  case 0x6D:
                  case 0x6E:
                  case 0x6F:
                  case 0x70:
                  case 0x71:
                  case 0x72:
                  case 0x73:
                  case 0x74:
                  case 0x75:
                  case 0x76:
                  case 0x77:
                  case 0x78:
                  case 0x79:
                  case 0x7A:
                    v37 = v61;
                    goto LABEL_127;
                  case 0x27:
                    goto LABEL_62;
                  case 0x3F:
                    goto LABEL_58;
                  case 0x5C:
                    goto LABEL_65;
                  case 0x7B:
                  case 0x7D:
                    goto LABEL_17;
                  default:
                    goto LABEL_102;
                }
              }
LABEL_277:
              v30 = v18;
              LODWORD(v13) = v16;
              return sub_405990((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
            }
          }
        }
        LOBYTE(v22) = *v19;
        switch ( *v19 )
        {
          case 0:
            goto LABEL_85;
          case 7:
            LOBYTE(v22) = 97;
            goto LABEL_82;
          case 8:
            LOBYTE(v22) = 98;
            goto LABEL_69;
          case 9:
LABEL_76:
            LOBYTE(v22) = 116;
            goto LABEL_69;
          case 0xA:
LABEL_68:
            LOBYTE(v22) = 110;
LABEL_69:
            v24 = 0;
            a5 = 0;
            if ( v86 )
              goto LABEL_70;
            goto LABEL_29;
          case 0xB:
LABEL_84:
            LOBYTE(v22) = 118;
            goto LABEL_82;
          case 0xC:
LABEL_81:
            LOBYTE(v22) = 102;
LABEL_82:
            if ( v86 )
            {
              v30 = v18;
              v31 = 0;
              LODWORD(v13) = v16;
              goto LABEL_71;
            }
LABEL_83:
            a5 = 0;
            goto LABEL_37;
          case 0xD:
            v61 = 0;
LABEL_80:
            LOBYTE(v22) = 13;
            v29 = 114;
            v24 = v18 == 2;
            goto LABEL_66;
          case 0x20:
            v37 = 0;
LABEL_132:
            LOBYTE(v22) = 32;
            goto LABEL_127;
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x5B:
          case 0x5E:
          case 0x60:
          case 0x7C:
            v61 = 0;
LABEL_78:
            v24 = 0;
            goto LABEL_67;
          case 0x23:
          case 0x7E:
            v38 = 0;
LABEL_129:
            if ( !v17 )
            {
              a5 = v61;
              v24 = 0;
              v61 = v38;
              goto LABEL_23;
            }
            v61 = v38;
            a5 = 0;
            break;
          case 0x25:
          case 0x2B:
          case 0x2C:
          case 0x2D:
          case 0x2E:
          case 0x2F:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3A:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4B:
          case 0x4C:
          case 0x4D:
          case 0x4E:
          case 0x4F:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5A:
          case 0x5D:
          case 0x5F:
          case 0x61:
          case 0x62:
          case 0x63:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6B:
          case 0x6C:
          case 0x6D:
          case 0x6E:
          case 0x6F:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7A:
            v37 = 0;
LABEL_127:
            a5 = v61;
            v61 = v37;
            LOBYTE(v25) = 0;
            goto LABEL_25;
          case 0x27:
            v61 = 0;
            goto LABEL_62;
          case 0x3F:
            v61 = 0;
            goto LABEL_58;
          case 0x5C:
            v61 = 0;
            goto LABEL_65;
          case 0x7B:
          case 0x7D:
            v61 = 0;
            goto LABEL_17;
          default:
            v61 = 0;
            goto LABEL_102;
        }
LABEL_24:
        LOBYTE(v25) = 0;
LABEL_25:
        if ( a7 && ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v22 >> 5)) >> v22) & 1) != 0 )
        {
          v24 = v18 == 2;
LABEL_28:
          if ( v86 )
          {
LABEL_70:
            v30 = v18;
            v31 = v24;
            LODWORD(v13) = v16;
LABEL_71:
            v60 &= v31;
            goto LABEL_72;
          }
LABEL_29:
          v26 = v14 ^ 1;
          if ( (v24 & ((unsigned __int8)v14 ^ 1)) != 0 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v15 + 1 < v10 )
              v9[v15 + 1] = 36;
            if ( v15 + 2 < v10 )
              v9[v15 + 2] = 39;
            v15 += 3LL;
            LOBYTE(v26) = v24 & (v14 ^ 1);
            v14 = v26;
          }
LABEL_37:
          if ( v10 > v15 )
            v9[v15] = 92;
          ++v15;
          ++v17;
          goto LABEL_40;
        }
LABEL_49:
        v24 = v18 == 2;
        if ( v61 )
          goto LABEL_28;
        ++v17;
        LOBYTE(v25) = v14 & ((unsigned __int8)v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v25 )
        {
          if ( v10 > v15 )
            v9[v15] = 39;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 39;
          v15 += 2LL;
          v14 = 0;
        }
LABEL_40:
        if ( v15 < v10 )
          v9[v15] = v22;
        v27 = v63;
        ++v15;
        if ( !(_BYTE)a5 )
          v27 = 0;
        v63 = v27;
      }
      LOBYTE(v22) = *v19;
      switch ( *v19 )
      {
        case 0:
          if ( !v60 )
          {
            if ( (a6 & 1) == 0 )
            {
              v61 = 0;
              v24 = v18 == 2;
              a5 = 0;
              LOBYTE(v22) = 0;
              goto LABEL_23;
            }
            ++v17;
            goto LABEL_4;
          }
LABEL_85:
          if ( v86 )
          {
            v30 = v18;
            LODWORD(v13) = v16;
            v60 = v30 == 2;
            goto LABEL_72;
          }
          v61 = 0;
LABEL_87:
          v33 = v18 == 2;
          LODWORD(v25) = v14 ^ 1;
          LOBYTE(v25) = (v18 == 2) & (v14 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 36;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v34 = v15 + 3;
            if ( v10 <= v15 + 3 )
            {
              v15 += 4LL;
              v14 = (int)v25;
              a5 = 0;
              LOBYTE(v22) = 48;
              goto LABEL_49;
            }
            goto LABEL_95;
          }
          v34 = v15;
          if ( v10 > v15 )
          {
            LODWORD(v25) = v14;
LABEL_95:
            v9[v34] = 92;
            v14 = (int)v25;
          }
          v15 = v34 + 1;
          if ( v18 == 2 )
          {
            LOBYTE(v25) = a5;
            LOBYTE(v22) = 48;
            a5 = 0;
            goto LABEL_49;
          }
          LOBYTE(v22) = 48;
          if ( v17 + 1 < v16 && (unsigned __int8)(*(_BYTE *)(a3 + v17 + 1) - 48) <= 9u )
          {
            if ( v10 > v15 )
              v9[v15] = 48;
            if ( v10 > v34 + 2 )
              v9[v34 + 2] = 48;
            v15 = v34 + 3;
            LOBYTE(v22) = 48;
          }
LABEL_99:
          LOBYTE(v25) = a5;
          a5 = 0;
          if ( v33 | v60 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v22) = 7;
          v29 = 97;
          v24 = v18 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v22) = 8;
          v29 = 98;
          v24 = v18 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v22) = 9;
          v29 = 116;
          goto LABEL_108;
        case 0xA:
          LOBYTE(v22) = 10;
          v29 = 110;
          goto LABEL_108;
        case 0xB:
          LOBYTE(v22) = 11;
          v29 = 118;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xC:
          LOBYTE(v22) = 12;
          v29 = 102;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xD:
          LOBYTE(v22) = 13;
          v29 = 114;
LABEL_108:
          v24 = v18 == 2;
          v61 = v18 == 2 && v86;
          if ( v61 )
            goto LABEL_109;
          goto LABEL_66;
        case 0x20:
          LOBYTE(v22) = 32;
          v24 = v18 == 2;
          goto LABEL_21;
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x5B:
        case 0x5E:
        case 0x60:
        case 0x7C:
          v24 = v18 == 2;
          a5 = 0;
          goto LABEL_21;
        case 0x23:
        case 0x7E:
          v24 = v18 == 2;
          goto LABEL_20;
        case 0x25:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5A:
        case 0x5D:
        case 0x5F:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6C:
        case 0x6D:
        case 0x6E:
        case 0x6F:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7A:
          goto LABEL_105;
        case 0x27:
LABEL_62:
          if ( v18 != 2 )
          {
            v87 = a5;
            v24 = 0;
            LOBYTE(v22) = 39;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_288;
          if ( !v10 || (v28 = 0LL, v83) )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 92;
            v28 = v10;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v10 = v83;
          }
          v87 = a5;
          v15 += 3LL;
          LOBYTE(v25) = 0;
          v14 = 0;
          v83 = v10;
          LOBYTE(v22) = 39;
          v10 = v28;
          goto LABEL_49;
        case 0x3F:
LABEL_58:
          if ( v18 == 2 )
          {
            if ( v86 )
            {
LABEL_288:
              v30 = 2;
              LODWORD(v13) = v16;
              goto LABEL_72;
            }
            a5 = 0;
            LOBYTE(v25) = 0;
            LOBYTE(v22) = 63;
            goto LABEL_49;
          }
          if ( v18 != 5 )
          {
            LOBYTE(v22) = 63;
            v24 = v18 == 2;
            a5 = 0;
            goto LABEL_23;
          }
          if ( (a6 & 4) == 0
            || v17 + 2 >= v16
            || *(_BYTE *)(a3 + v17 + 1) != 63
            || (v22 = *(unsigned __int8 *)(a3 + v17 + 2), (unsigned __int8)v22 > 0x3Eu)
            || (v53 = 0x7000A38200000000LL, !_bittest64(&v53, v22)) )
          {
            v24 = 0;
            a5 = 0;
            LOBYTE(v22) = 63;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_277;
          if ( v10 > v15 )
            v9[v15] = 63;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 34;
          if ( v10 > v15 + 2 )
            v9[v15 + 2] = 34;
          if ( v10 > v15 + 3 )
            v9[v15 + 3] = 63;
          v15 += 4LL;
          v33 = 0;
          LOBYTE(a5) = 0;
          v17 += 2LL;
          goto LABEL_99;
        case 0x5C:
          if ( v18 == 2 )
          {
            if ( v86 )
              goto LABEL_288;
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            LOBYTE(v22) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LOBYTE(v22) = 92;
          v29 = 92;
          v24 = (n != 0) & v86 & v60;
          if ( v24 )
          {
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v60 )
          {
LABEL_67:
            a5 = 0;
            goto LABEL_23;
          }
          LOBYTE(v22) = v29;
          a5 = 0;
          goto LABEL_28;
        case 0x7B:
        case 0x7D:
LABEL_17:
          v23 = v16 != 1;
          if ( v16 == -1LL )
            v23 = *(_BYTE *)(a3 + 1) != 0;
          v24 = v18 == 2;
          if ( v23 )
            goto LABEL_67;
LABEL_20:
          if ( v17 )
            goto LABEL_67;
LABEL_21:
          if ( !v86 || !v24 )
            goto LABEL_23;
LABEL_109:
          LODWORD(v13) = v16;
          v30 = 2;
          goto LABEL_72;
        default:
LABEL_102:
          if ( mb_cur_max == 1 )
          {
            v77 = v18;
            v72 = v16;
            v67 = v14;
            v25 = __ctype_b_loc();
            v14 = v67;
            v16 = v72;
            v18 = v77;
            v35 = 1LL;
            LODWORD(v25) = (*v25)[(unsigned __int8)v22];
            LOWORD(v25) = (unsigned __int16)v25 & 0x4000;
            LOBYTE(a5) = (_WORD)v25 != 0;
            LOBYTE(v36) = v60 & ((_WORD)v25 == 0);
LABEL_104:
            if ( (_BYTE)v36 )
            {
              v36 = v60;
              LOBYTE(a5) = 0;
LABEL_178:
              v48 = 0;
              v49 = v17 + v35;
              v50 = v61;
              while ( 1 )
              {
                if ( (_BYTE)v36 )
                {
                  if ( v86 )
                  {
                    v30 = v18;
                    v60 = v18 == 2;
                    LODWORD(v13) = v16;
                    goto LABEL_72;
                  }
                  LOBYTE(v25) = (v14 ^ 1) & (v18 == 2);
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 36;
                    if ( v10 > v15 + 2 )
                      v9[v15 + 2] = 39;
                    v15 += 3LL;
                    v14 = (int)v25;
                  }
                  if ( v10 > v15 )
                    v9[v15] = 92;
                  if ( v10 > v15 + 1 )
                    v9[v15 + 1] = ((unsigned __int8)v22 >> 6) + 48;
                  LODWORD(v25) = v15 + 2;
                  if ( v10 > v15 + 2 )
                  {
                    LODWORD(v25) = (((unsigned __int8)v22 >> 3) & 7) + 48;
                    v9[v15 + 2] = (_BYTE)v25;
                  }
                  ++v17;
                  v15 += 3LL;
                  LOBYTE(v22) = (v22 & 7) + 48;
                  if ( v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_40;
                  }
                  v48 = v36;
                }
                else
                {
                  LODWORD(v25) = v14 & (v48 ^ 1);
                  if ( v50 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 92;
                    ++v15;
                  }
                  if ( ++v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_51;
                  }
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    LODWORD(v25) = v15 + 1;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 39;
                    v15 += 2LL;
                    v50 = 0;
                    v14 = 0;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                if ( v10 > v15 )
                  v9[v15] = v22;
                LOBYTE(v22) = *(_BYTE *)(a3 + v17);
                ++v15;
              }
            }
LABEL_105:
            v24 = v18 == 2;
LABEL_23:
            LOBYTE(v25) = v86 | (v24 | v60 ^ 1) ^ 1;
            if ( !(_BYTE)v25 )
              goto LABEL_49;
            goto LABEL_24;
          }
          ps = 0LL;
          if ( v16 == -1LL )
          {
            v78 = v18;
            v73 = v14;
            v68 = v19;
            v43 = strlen((const char *)a3);
            v18 = v78;
            LOBYTE(v14) = v73;
            v19 = v68;
            v16 = v43;
          }
          v89 = v15;
          v90 = v19;
          v44 = 0LL;
          v88 = v14;
          v79 = v9;
          v81 = v10;
          v69 = v16;
          v74 = v18;
          break;
      }
      while ( 2 )
      {
        v45 = (char *)v44 + v17;
        v25 = (const unsigned __int16 **)sub_409610((wchar_t *)&wc, (char *)v44 + v17 + a3);
        v46 = v25;
        if ( !v25 )
        {
LABEL_245:
          v35 = (unsigned __int64)v44;
          v15 = v89;
          v14 = v88;
          v9 = v79;
          v36 = a5 ^ 1;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          LOBYTE(v36) = v60 & (a5 ^ 1);
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-1LL )
        {
          v35 = (unsigned __int64)v44;
          v15 = v89;
          a5 = 0;
          v14 = v88;
          v9 = v79;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          v36 = v60;
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-2LL )
        {
          v16 = v69;
          v54 = (char *)v44 + v17;
          v55 = (char *)v44 + v17 + a3;
          v25 = v44;
          v35 = (unsigned __int64)v44;
          v14 = v88;
          v15 = v89;
          v9 = v79;
          v10 = v81;
          v18 = v74;
          if ( (unsigned __int64)v54 < v69 && *v55 )
          {
            do
              v25 = (const unsigned __int16 **)((char *)v25 + 1);
            while ( (unsigned __int64)v25 + v17 < v69 && *((_BYTE *)v25 + (_QWORD)v90) );
            v35 = (unsigned __int64)v25;
          }
          v36 = v60;
          a5 = 0;
LABEL_246:
          if ( v35 > 1 )
            goto LABEL_178;
          goto LABEL_104;
        }
        if ( v74 != 2 || !v86 || v25 == (const unsigned __int16 **)1 )
        {
LABEL_152:
          if ( !iswprint(wc) )
            a5 = 0;
          v44 = (const unsigned __int16 **)((char *)v44 + (_QWORD)v46);
          LODWORD(v25) = mbsinit(&ps);
          if ( (_DWORD)v25 )
            goto LABEL_245;
          continue;
        }
        break;
      }
      v47 = &v45[a3 + 1];
      while ( (unsigned __int8)(*v47 - 91) > 0x21u || ((1LL << (*v47 - 91)) & 0x20000002BLL) == 0 )
      {
        if ( (char *)v46 + a3 + (_QWORD)v45 == ++v47 )
          goto LABEL_152;
      }
      LODWORD(v9) = (_DWORD)v79;
      LODWORD(v10) = v81;
      v30 = 2;
      LODWORD(v13) = v69;
LABEL_72:
      if ( v60 )
        v30 = 4;
      return sub_405990((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
    case 5:
      if ( v12 )
      {
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v14 = 0;
          v63 = 1;
          v87 = 0;
          v83 = 0LL;
        }
        else
        {
          v83 = 0LL;
          v14 = 0;
          v63 = 1;
          v87 = 0;
        }
        v86 = 0;
        v15 = 1LL;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 5;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_405890("`", a5);
        v51 = sub_405890("'", a5);
        v13 = a4;
        a9 = v51;
      }
      v15 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v15] )
        {
          if ( a2 > v15 )
            a1[v15] = i;
          ++v15;
        }
      }
      v62 = v13;
      v52 = strlen(a9);
      v63 = 1;
      v14 = 0;
      v13 = v62;
      n = v52;
      v87 = 0;
      s2 = a9;
      v83 = 0LL;
      v60 = 1;
      goto LABEL_3;
    default:
      abort();
  }
}

_BYTE *__fastcall sub_406BC0(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // r8d
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_407C30();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_60E2A0 )
    {
      v7 = (__m128i *)sub_407A40(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60E2A0);
    }
    else
    {
      ptr = (void *)sub_407A40(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_60E2B0], 0, 16LL * (a1 + 1 - dword_60E2B0));
    dword_60E2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_405990(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60E340 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4079E0(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_405990(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_406BC0(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // r8d
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_60E2B0 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_407C30();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_60E2A0 )
    {
      v7 = (__m128i *)sub_407A40(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_60E2A0);
    }
    else
    {
      ptr = (void *)sub_407A40(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_60E2B0], 0, 16LL * (a1 + 1 - dword_60E2B0));
    dword_60E2B0 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_405990(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_60E340 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_4079E0(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_405990(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_406D60(__int128 *a1)
{
  __int128 *v1; // rbx
  int *v2; // rax
  int v3; // r12d
  int *v4; // rbp
  __int64 result; // rax

  v1 = a1;
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  if ( !a1 )
    v1 = &xmmword_60E440;
  result = sub_407BE0(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_406E50(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_60E440;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_405990(
             a1,
             a2,
             a3,
             a4,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_406ED0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_60E440;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_405990(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_4079E0(v11 + 1);
  sub_405990(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_406FD0()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_60E2B0 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_60E2B0 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_60E340 )
  {
    free(v4);
    *(_QWORD *)&xmmword_60E2A0 = 256LL;
    *((_QWORD *)&xmmword_60E2A0 + 1) = &unk_60E340;
  }
  if ( v0 != &xmmword_60E2A0 )
  {
    free(v0);
    ptr = &xmmword_60E2A0;
  }
  dword_60E2B0 = 1;
}

_BYTE *__fastcall sub_4070E0(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v4[1] = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_406BC0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4070E0(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v4[1] = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_406BC0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407150(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int v5[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5[0] = a2;
  v5[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_406BC0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_407150(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int v5[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5[0] = a2;
  v5[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_406BC0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_4071E0(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_60E470;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E440);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E450);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E460);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_406BC0(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_407260(__int64 a1)
{
  return sub_4071E0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_407290(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v5 = 0x400000000000000LL;
  v4[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_406BC0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407290(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v5 = 0x400000000000000LL;
  v4[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_406BC0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_407300(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E440);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E450);
  si128 = _mm_load_si128((const __m128i *)&xmmword_60E460);
  v8 = qword_60E470;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_406BC0(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_4073F0(int a1, __int64 a2)
{
  return sub_406BC0(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60E260);
}

_BYTE *__fastcall sub_407410(__int64 a1)
{
  return sub_406BC0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60E260);
}

__int64 __fastcall sub_407430(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  return sub_408660(a1, 0, 3, a4, a5, a6, a7);
}

__int64 __fastcall sub_407440(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_407440(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_407840(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
{
  __int64 i; // r9
  __int64 *v6; // r10
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 *v9; // r10
  __int64 v10; // rax
  __int64 v12[11]; // [rsp+0h] [rbp-58h] BYREF

  for ( i = 0LL; i != 10; ++i )
  {
    v8 = *a5;
    if ( (unsigned int)*a5 <= 0x2F )
    {
      v6 = (__int64 *)(*((_QWORD *)a5 + 2) + v8);
      *a5 = v8 + 8;
      v7 = *v6;
      v12[i] = *v6;
      if ( !v7 )
        return sub_407440(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_407440(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_4078A0(
        FILE *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  char *v7; // r10
  unsigned int v8; // r8d
  __int64 i; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v15[17]; // [rsp+20h] [rbp-88h] BYREF

  v15[14] = a5;
  v7 = &a7;
  v8 = 32;
  v15[15] = a6;
  for ( i = 0LL; i != 10; ++i )
  {
    if ( v8 <= 0x2F )
    {
      v10 = v8;
      v8 += 8;
      v11 = *(__int64 *)((char *)&v15[10] + v10);
      v15[i] = v11;
      if ( !v11 )
        return sub_407440(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_407440(a1, a2, a3, a4, v15, i);
}

int sub_407960()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_409E16, "https://www.gnu.org/software/coreutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_4079E0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_407C30();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_407A30(size_t a1)
{
  return sub_4079E0(a1);
}

void *__fastcall sub_407A40(void *a1, size_t a2)
{
  void *result; // rax

  if ( !a2 && a1 )
  {
    free(a1);
    return 0LL;
  }
  else
  {
    result = realloc(a1, a2);
    if ( !result )
    {
      if ( a2 )
        sub_407C30();
    }
  }
  return result;
}

void *__fastcall sub_407B90(size_t n)
{
  void *v1; // rax

  v1 = sub_4079E0(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_407BB0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_407C30(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_407BE0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_4079E0(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_407C10(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_407BE0(src, v1 + 1);
}

void __noreturn sub_407C30()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_407C70(
        char *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // rbp
  int *v13; // r14
  _BYTE *v14; // rax
  int v15; // esi
  int v17; // ebp
  int *v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v10 = a7;
  v11 = sub_4081A0(a1);
  if ( v11 )
  {
    v17 = v11;
    v18 = __errno_location();
    v13 = v18;
    if ( v17 == 1 )
    {
      *v18 = 75;
    }
    else if ( v17 == 3 )
    {
      *v18 = 0;
    }
  }
  else
  {
    v12 = v19;
    if ( v19 >= a3 && v19 <= a4 )
      return v12;
    v13 = __errno_location();
    *v13 = v19 < 0x40000000 ? 34 : 75;
  }
  v14 = sub_407410((__int64)a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", a6, v14);
  return v19;
}

unsigned __int64 __fastcall sub_407D40(
        char *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  return sub_407C70(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_407D70(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **p_endptr; // r15
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // r12d
  char *v17; // rax
  char *v18; // r8
  __int64 v19; // rax
  char *v20; // rax
  char v21; // al
  int v22; // esi
  unsigned __int64 v23; // rdx
  char *v24; // r8
  unsigned __int64 v25; // kr30_8
  char *v26; // rax
  int v27; // edi
  int v28; // r9d
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoul");
  p_endptr = a2;
  if ( !a2 )
    p_endptr = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( (v11[v10] & 0x2000) != 0 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = strtoul(nptr, p_endptr, a3);
  if ( *p_endptr == nptr )
  {
    basea = *p_endptr;
    if ( a5 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(a5, (char)v15);
        v18 = basea;
        if ( v17 )
          goto LABEL_20;
      }
    }
    return 4;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( a5 )
  {
    v15 = (unsigned __int8)**p_endptr;
    if ( (_BYTE)v15 )
    {
      baseb = *p_endptr;
      v26 = strchr(a5, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_40:
        *a4 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 0x814400308945LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(a5, 48), v18 = v37, !v20) )
      {
LABEL_27:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_28;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_28:
          switch ( (char)v15 )
          {
            case 'B':
              if ( (unsigned __int64)v13 >> 54 )
                goto LABEL_38;
              v13 <<= 10;
              break;
            case 'E':
              goto LABEL_71;
            case 'G':
            case 'g':
              goto LABEL_77;
            case 'K':
            case 'k':
              goto LABEL_37;
            case 'M':
            case 'm':
              goto LABEL_30;
            case 'P':
              goto LABEL_65;
            case 'T':
            case 't':
              goto LABEL_59;
            case 'Y':
              goto LABEL_53;
            case 'Z':
              goto LABEL_47;
            case 'b':
              goto LABEL_44;
            case 'c':
              break;
            case 'w':
              if ( v13 < 0 )
                goto LABEL_38;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_40;
          }
LABEL_33:
          v24 = &v18[v22];
          *p_endptr = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (char)v15 )
          {
            case 'E':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_71:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 'F':
            case 'H':
            case 'I':
            case 'J':
            case 'L':
            case 'N':
            case 'O':
            case 'Q':
            case 'R':
            case 'S':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case '[':
            case '\\':
            case ']':
            case '^':
            case '_':
            case '`':
            case 'a':
            case 'd':
            case 'e':
            case 'f':
            case 'h':
            case 'i':
            case 'j':
            case 'l':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
              goto LABEL_40;
            case 'G':
            case 'g':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_77:
              if ( is_mul_ok((int)v23, v13)
                && is_mul_ok((int)v23, (int)v23 * v13)
                && is_mul_ok((int)v23, (int)v23 * (int)v23 * v13) )
              {
                v13 *= (int)v23 * (int)v23 * (__int64)(int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              goto LABEL_33;
            case 'K':
            case 'k':
              v22 = 1;
              v23 = 1024LL;
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_33;
              goto LABEL_38;
            case 'M':
            case 'm':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_30:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_38;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 'P':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_65:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 'T':
            case 't':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_59:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 'Y':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_53:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_51;
            case 'Z':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_47:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_51:
              v14 |= v28;
              break;
            case 'b':
              v22 = 1;
LABEL_44:
              if ( (unsigned __int64)v13 >> 55 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 'c':
              v22 = 1;
              goto LABEL_33;
            default:
              goto LABEL_27;
          }
          goto LABEL_33;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *a4 = v13;
  return v14;
}

__int64 __fastcall sub_4081A0(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **p_endptr; // r15
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // r12d
  char *v17; // rax
  char *v18; // r8
  __int64 v19; // rax
  char *v20; // rax
  char v21; // al
  int v22; // esi
  unsigned __int64 v23; // rdx
  char *v24; // r8
  unsigned __int64 v25; // kr30_8
  char *v26; // rax
  int v27; // edi
  int v28; // r9d
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  p_endptr = a2;
  if ( !a2 )
    p_endptr = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( (v11[v10] & 0x2000) != 0 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = __strtoul_internal(nptr, p_endptr, a3, 0);
  if ( *p_endptr == nptr )
  {
    basea = *p_endptr;
    if ( a5 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(a5, (char)v15);
        v18 = basea;
        if ( v17 )
          goto LABEL_20;
      }
    }
    return 4;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( a5 )
  {
    v15 = (unsigned __int8)**p_endptr;
    if ( (_BYTE)v15 )
    {
      baseb = *p_endptr;
      v26 = strchr(a5, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_40:
        *a4 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 0x814400308945LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(a5, 48), v18 = v37, !v20) )
      {
LABEL_27:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_28;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_28:
          switch ( (char)v15 )
          {
            case 'B':
              if ( (unsigned __int64)v13 >> 54 )
                goto LABEL_38;
              v13 <<= 10;
              break;
            case 'E':
              goto LABEL_71;
            case 'G':
            case 'g':
              goto LABEL_77;
            case 'K':
            case 'k':
              goto LABEL_37;
            case 'M':
            case 'm':
              goto LABEL_30;
            case 'P':
              goto LABEL_65;
            case 'T':
            case 't':
              goto LABEL_59;
            case 'Y':
              goto LABEL_53;
            case 'Z':
              goto LABEL_47;
            case 'b':
              goto LABEL_44;
            case 'c':
              break;
            case 'w':
              if ( v13 < 0 )
                goto LABEL_38;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_40;
          }
LABEL_33:
          v24 = &v18[v22];
          *p_endptr = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (char)v15 )
          {
            case 'E':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_71:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 'F':
            case 'H':
            case 'I':
            case 'J':
            case 'L':
            case 'N':
            case 'O':
            case 'Q':
            case 'R':
            case 'S':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case '[':
            case '\\':
            case ']':
            case '^':
            case '_':
            case '`':
            case 'a':
            case 'd':
            case 'e':
            case 'f':
            case 'h':
            case 'i':
            case 'j':
            case 'l':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
              goto LABEL_40;
            case 'G':
            case 'g':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_77:
              if ( is_mul_ok((int)v23, v13)
                && is_mul_ok((int)v23, (int)v23 * v13)
                && is_mul_ok((int)v23, (int)v23 * (int)v23 * v13) )
              {
                v13 *= (int)v23 * (int)v23 * (__int64)(int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              goto LABEL_33;
            case 'K':
            case 'k':
              v22 = 1;
              v23 = 1024LL;
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_33;
              goto LABEL_38;
            case 'M':
            case 'm':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_30:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_38;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 'P':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_65:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 'T':
            case 't':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_59:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 'Y':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_53:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_51;
            case 'Z':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_47:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_51:
              v14 |= v28;
              break;
            case 'b':
              v22 = 1;
LABEL_44:
              if ( (unsigned __int64)v13 >> 55 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 'c':
              v22 = 1;
              goto LABEL_33;
            default:
              goto LABEL_27;
          }
          goto LABEL_33;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *a4 = v13;
  return v14;
}

int __fastcall sub_4085E0(FILE *stream)
{
  int *v1; // rax
  int v2; // r12d
  int *v3; // rbp
  int result; // eax
  int v5; // eax

  if ( fileno(stream) < 0 )
    return fclose(stream);
  if ( __freading(stream) )
  {
    v5 = fileno(stream);
    if ( lseek(v5, 0LL, 1) == -1 )
      return fclose(stream);
  }
  if ( !(unsigned int)sub_4087A0(stream) )
    return fclose(stream);
  v1 = __errno_location();
  v2 = *v1;
  v3 = v1;
  result = fclose(stream);
  if ( v2 )
  {
    *v3 = v2;
    return -1;
  }
  return result;
}

__int64 __fastcall sub_408660(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v8; // eax
  int *v9; // rax
  int v10; // edi
  int v11; // r12d
  int *v12; // rbp
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+30h] [rbp-38h]

  v16 = a3;
  if ( a2 == 1030 )
  {
    if ( dword_60E478 < 0 )
    {
      v6 = sub_408660(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_60E478 == -1 )
      {
LABEL_8:
        v8 = fcntl(v6, 1);
        if ( v8 < 0 || fcntl(v6, 2, v8 | 1u) == -1 )
        {
          v9 = __errno_location();
          v10 = v6;
          v6 = -1;
          v11 = *v9;
          v12 = v9;
          close(v10);
          *v12 = v11;
        }
      }
    }
    else
    {
      v6 = fcntl(a1, 1030, (unsigned int)a3);
      if ( v6 < 0 && *__errno_location() == 22 )
      {
        v6 = sub_408660(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_60E478 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_60E478 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_4087A0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_4087E0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_4087E0(FILE *a1, __off_t a2, int a3)
{
  __off_t v3; // rax
  int v5; // eax

  if ( a1->_IO_read_end == a1->_IO_read_ptr && a1->_IO_write_ptr == a1->_IO_write_base && !a1->_IO_save_base )
  {
    v5 = fileno(a1);
    v3 = lseek(v5, a2, a3);
    if ( v3 != -1 )
    {
      a1->_flags &= ~0x10u;
      a1->_offset = v3;
      LODWORD(v3) = 0;
    }
  }
  else
  {
    LODWORD(v3) = fseeko(a1, a2, a3);
  }
  return v3;
}

__int64 __fastcall sub_408840(__int64 a1, int *a2)
{
  __int64 v2; // r11
  int v3; // r12d
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // r10d
  int v8; // r8d
  int v9; // r14d
  int v10; // edx
  __int64 *v11; // rax
  __int64 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx

  v2 = a1 + 8;
  v3 = a2[11];
  v4 = *a2;
  v5 = a2[12];
  v6 = v3;
  v7 = *a2;
  v8 = a2[12];
LABEL_2:
  if ( v7 > v8 )
  {
    while ( v6 < v8 )
    {
      v9 = v7 - v8;
      v10 = v8 - v6;
      if ( v7 - v8 <= v8 - v6 )
      {
        v16 = (__int64 *)(a1 + 8LL * v6);
        v17 = v5 - v6;
        do
        {
          v18 = *v16;
          *v16 = v16[v17];
          v16[v17] = v18;
          ++v16;
        }
        while ( v16 != (__int64 *)(v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v9 - 1))) );
        v6 += v9;
        goto LABEL_2;
      }
      v7 -= v10;
      v11 = (__int64 *)(a1 + 8LL * v6);
      v12 = (__int64 *)(v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v10 - 1)));
      v13 = v7 - (__int64)v6;
      do
      {
        v14 = *v11;
        *v11 = v11[v13];
        v11[v13] = v14;
        ++v11;
      }
      while ( v12 != v11 );
      if ( v7 <= v8 )
        break;
    }
  }
  a2[12] = v4;
  result = (unsigned int)(v4 - v8);
  a2[11] = result + v3;
  return result;
}

__int64 __fastcall sub_408920(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        const char *a9)
{
  const char *v9; // r14
  char *v10; // rbp
  size_t v11; // r13
  char **v12; // rbx
  __int64 v13; // r12
  const char *v14; // r15
  const char *v15; // rdi
  __int64 v16; // r15
  char **v17; // rbp
  char *v18; // rdx
  __int64 result; // rax
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  char *v23; // rdx
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // rbx
  char *v27; // rax
  const char *v28; // r12
  __int64 v29; // rbp
  char *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rbp
  char *v33; // rax
  FILE *v34; // rdi
  const char **v35; // rbx
  _BYTE *v36; // rbp
  __int64 v37; // r12
  const char *v38; // r12
  __int64 v39; // rbp
  char *v40; // rax
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v48; // [rsp+38h] [rbp-50h]
  char v49; // [rsp+3Fh] [rbp-49h]
  int v51; // [rsp+44h] [rbp-44h]
  int v52; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v49 = *v9;
  if ( *v9 == 61 || !*v9 )
  {
    v11 = 0LL;
  }
  else
  {
    do
      ++v10;
    while ( *v10 && *v10 != 61 );
    v11 = v10 - v9;
  }
  v12 = a4;
  v13 = 0LL;
  s1 = *a4;
  v14 = *a4;
  if ( !*a4 )
  {
LABEL_24:
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v49), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24, a9, v9);
      }
      *((_QWORD *)a7 + 4) = 0LL;
      ++*a7;
      a7[2] = 0;
      return 63LL;
    }
    return result;
  }
  while ( 1 )
  {
    if ( !strncmp(v14, v9, v11) && strlen(v14) == v11 )
      goto LABEL_31;
    v12 += 4;
    v14 = *v12;
    if ( !*v12 )
      break;
    v13 = (int)v13 + 1;
  }
  v12 = 0LL;
  v51 = -1;
  v15 = s1;
  v16 = 0LL;
  v48 = 0;
  v52 = 0;
  ptr = 0LL;
  s1a = v10;
  v17 = a4;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (a6
         || *((_DWORD *)v12 + 2) != *((_DWORD *)v17 + 2)
         || v12[2] != v17[2]
         || *((_DWORD *)v12 + 6) != *((_DWORD *)v17 + 6))
        && !v48 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v52 = 1;
            ptr[v51] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v48 = 1;
        }
        else
        {
          v48 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v51 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v48 )
  {
    if ( a8 )
    {
      if ( v48 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26, a9, v9);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v31 = *((_QWORD *)a7 + 4);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32, a9, v31);
        v34 = stderr;
        v35 = (const char **)a4;
        v36 = ptr;
        v37 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v36 )
          {
            __fprintf_chk(v34, 1LL, " '%s%s'", a9, *v35);
            v34 = stderr;
          }
          ++v36;
          v35 += 4;
        }
        while ( (_BYTE *)v37 != v36 );
        fputc(10, v34);
        funlockfile(stderr);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v52 )
      free(ptr);
    *((_QWORD *)a7 + 4) = &v9[strlen(v9)];
    ++*a7;
    a7[2] = 0;
    return 63LL;
  }
  else
  {
    if ( !v12 )
      goto LABEL_24;
    LODWORD(v13) = v51;
LABEL_31:
    v20 = *a7;
    *((_QWORD *)a7 + 4) = 0LL;
    v21 = v20 + 1;
    *a7 = v20 + 1;
    v22 = *((_DWORD *)v12 + 2);
    if ( *v10 )
    {
      if ( v22 )
      {
        *((_QWORD *)a7 + 2) = v10 + 1;
        goto LABEL_33;
      }
      if ( a8 )
      {
        v28 = *v12;
        v29 = *a2;
        v30 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v30, v29, a9, v28);
      }
      a7[2] = *((_DWORD *)v12 + 6);
      return 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= a1 )
      {
        if ( a8 )
        {
          v38 = *v12;
          v39 = *a2;
          v40 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v40, v39, a9, v38);
        }
        a7[2] = *((_DWORD *)v12 + 6);
        return 5 * (unsigned int)(*a3 != 58) + 58;
      }
      else
      {
        *a7 = v20 + 2;
        *((_QWORD *)a7 + 2) = a2[v21];
LABEL_33:
        if ( a5 )
          *a5 = v13;
        v23 = v12[2];
        result = *((unsigned int *)v12 + 6);
        if ( v23 )
        {
          *(_DWORD *)v23 = result;
          return 0LL;
        }
      }
    }
  }
  return result;
}

__int64 __fastcall sub_408F40(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
{
  int v8; // r13d
  int v9; // eax
  int v10; // ebp
  const char *v12; // r15
  _BYTE *v13; // rdx
  char v14; // al
  char v15; // al
  int v16; // eax
  __int64 v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // r14d
  char *v22; // rax
  __int64 v23; // r8
  char v24; // cl
  int v26; // edx
  __int64 v27; // rax
  _BYTE *v28; // rcx
  int v29; // esi
  char v30; // cl
  char *v31; // rax
  __int64 v32; // rax
  char *v34; // rax
  char v35; // dl
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rbp
  char *v40; // rax
  __int64 v41; // rbp
  char *v42; // rax
  __int64 v43; // rbp
  char *v44; // rax
  char v47; // [rsp+1Ch] [rbp-4Ch]
  int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+1Ch] [rbp-4Ch]
  int v50; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v51; // [rsp+20h] [rbp-48h]
  _BYTE *v52; // [rsp+28h] [rbp-40h]

  v8 = a7[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  v9 = *a7;
  v10 = a1;
  v12 = a3;
  *((_QWORD *)a7 + 2) = 0LL;
  if ( !v9 )
  {
    *a7 = 1;
    v9 = 1;
LABEL_4:
    a7[12] = v9;
    a7[11] = v9;
    *((_QWORD *)a7 + 4) = 0LL;
    if ( *a3 == 45 )
    {
      a7[10] = 2;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else if ( *a3 == 43 )
    {
      a7[10] = 0;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
      if ( !a8 )
      {
        v50 = a6;
        v34 = getenv("POSIXLY_CORRECT");
        a6 = v50;
        if ( !v34 )
        {
          a7[10] = 1;
          v13 = (_BYTE *)*((_QWORD *)a7 + 4);
          goto LABEL_24;
        }
        v13 = (_BYTE *)*((_QWORD *)a7 + 4);
      }
      a7[10] = 0;
    }
LABEL_24:
    a7[6] = 1;
    v14 = *v12;
    goto LABEL_25;
  }
  if ( !a7[6] )
    goto LABEL_4;
  v14 = *a3;
  v13 = (_BYTE *)*((_QWORD *)a7 + 4);
  if ( ((v14 - 43) & 0xFD) == 0 )
  {
    v15 = *++v12;
    if ( v15 == 58 )
      v8 = 0;
    if ( !v13 )
      goto LABEL_12;
    goto LABEL_28;
  }
LABEL_25:
  if ( v14 == 58 )
    v8 = 0;
  if ( !v13 )
    goto LABEL_12;
LABEL_28:
  if ( !*v13 )
  {
LABEL_12:
    v16 = *a7;
    if ( a7[12] > *a7 )
      a7[12] = v16;
    if ( v16 < a7[11] )
      a7[11] = v16;
    if ( a7[10] == 1 )
    {
      v26 = a7[12];
      if ( a7[11] == v26 )
      {
        if ( v16 != v26 )
        {
          a7[11] = v16;
          v26 = v16;
        }
      }
      else if ( v16 != v26 )
      {
        v48 = a6;
        sub_408840((__int64)a2, a7);
        v26 = *a7;
        a6 = v48;
      }
      if ( a1 <= v26 )
      {
LABEL_79:
        v16 = v26;
      }
      else
      {
        v27 = v26;
        while ( 1 )
        {
          v28 = (_BYTE *)a2[v27];
          v29 = v27;
          v26 = v27;
          if ( *v28 == 45 )
          {
            if ( v28[1] )
              break;
          }
          v26 = ++v27;
          *a7 = v29 + 1;
          if ( a1 <= (int)v27 )
            goto LABEL_79;
        }
        v16 = *a7;
      }
      a7[12] = v26;
    }
    if ( a1 == v16 )
    {
      v10 = a7[12];
      v18 = a7[11];
LABEL_41:
      if ( v18 != v10 )
        *a7 = v18;
      return (unsigned int)-1;
    }
    v17 = a2[v16];
    if ( !strcmp((const char *)v17, "--") )
    {
      v18 = a7[11];
      v19 = a7[12];
      v20 = v16 + 1;
      *a7 = v20;
      if ( v18 == v19 )
      {
        a7[11] = v20;
        v18 = v20;
      }
      else if ( v20 != v19 )
      {
        sub_408840((__int64)a2, a7);
        v18 = a7[11];
      }
      a7[12] = a1;
      *a7 = a1;
      goto LABEL_41;
    }
    if ( *(_BYTE *)v17 == 45 )
    {
      v30 = *(_BYTE *)(v17 + 1);
      if ( v30 )
      {
        if ( a4 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_408920(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_408920(a1, a2, v12, a4, a5, a6, a7, v8, "-");
              if ( v21 != -1 )
                return v21;
              v17 = a2[*a7];
            }
          }
        }
        v13 = (_BYTE *)(v17 + 1);
        goto LABEL_29;
      }
    }
    if ( a7[10] )
    {
      *((_QWORD *)a7 + 2) = v17;
      v21 = 1;
      *a7 = v16 + 1;
      return v21;
    }
    return (unsigned int)-1;
  }
LABEL_29:
  v51 = v13;
  *((_QWORD *)a7 + 4) = v13 + 1;
  v21 = (char)*v13;
  v52 = v13 + 1;
  v47 = *v13;
  v22 = strchr(v12, v21);
  v23 = (__int64)v52;
  if ( !v51[1] )
    ++*a7;
  if ( (unsigned __int8)(v47 - 58) > 1u && v22 )
  {
    v24 = v22[1];
    if ( *v22 == 87 && a4 && v24 == 59 )
    {
      if ( v51[1] )
      {
LABEL_68:
        *((_QWORD *)a7 + 4) = v23;
        *((_QWORD *)a7 + 2) = 0LL;
        return (unsigned int)sub_408920(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != a1 )
      {
        v23 = a2[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v43 = *a2;
        v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v44, v43, v21);
      }
      a7[2] = v21;
      return 5 * (unsigned int)(*v12 != 58) + 58;
    }
    else if ( v24 == 58 )
    {
      v35 = v51[1];
      if ( v22[2] == 58 )
      {
        if ( v35 )
        {
          *((_QWORD *)a7 + 2) = v52;
          ++*a7;
        }
        else
        {
          *((_QWORD *)a7 + 2) = 0LL;
        }
      }
      else
      {
        v36 = *a7;
        if ( v35 )
        {
          *((_QWORD *)a7 + 2) = v52;
          *a7 = v36 + 1;
        }
        else if ( a1 == (_DWORD)v36 )
        {
          if ( v8 )
          {
            v41 = *a2;
            v42 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v42, v41, v21);
          }
          a7[2] = v21;
          v21 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v37 = v36 + 1;
          v38 = a2[v36];
          *a7 = v37;
          *((_QWORD *)a7 + 2) = v38;
        }
      }
      *((_QWORD *)a7 + 4) = 0LL;
    }
  }
  else
  {
    if ( v8 )
    {
      v39 = *a2;
      v40 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v40, v39, v21);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_409510(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60E480 = dword_60E2BC;
  dword_60E484 = dword_60E2B8;
  result = sub_408F40(a1, a2, a3, a4, a5, a6, &dword_60E480, a7);
  dword_60E2BC = dword_60E480;
  qword_60E4C0 = qword_60E490;
  dword_60E2B4 = dword_60E488;
  return result;
}

__int64 __fastcall sub_409570(int a1, __int64 *a2, const char *a3)
{
  return sub_409510(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_409590(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_409510(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_4095B0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408F40(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_4095D0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_409510(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_4095F0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408F40(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_409610(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  const char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( !s )
  {
    a3 = 1LL;
    v6 = "%s: invalid option -- '%c'\n" + 27;
LABEL_7:
    v5 = (wchar_t *)&v8;
    goto LABEL_4;
  }
  v4 = -2LL;
  if ( !a3 )
    return v4;
  v5 = pwc;
  v6 = s;
  if ( !pwc )
    goto LABEL_7;
LABEL_4:
  v4 = mbrtowc(v5, v6, a3, a4);
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_4096F0(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

int __fastcall sub_409690(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_4085E0(stream);
  if ( v2 )
  {
    if ( !result )
    {
      *__errno_location() = 0;
      return -1;
    }
    return -1;
  }
  if ( !result )
    return result;
  if ( v1 )
    return -1;
  return -(*__errno_location() != 9);
}

bool __fastcall sub_4096F0(int a1)
{
  char *v1; // rdx
  bool result; // al

  v1 = setlocale(a1, 0LL);
  result = 1;
  if ( v1 )
  {
    result = 0;
    if ( strcmp(v1, "C") )
      return strcmp(v1, "POSIX") != 0;
  }
  return result;
}

const char *sub_409750()
{
  char *v0; // rax
  char *v1; // r15
  const char *v2; // rbx
  char v3; // bp
  const char *v4; // rbp
  char *v6; // rax
  const char *v7; // r13
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // r14
  size_t v11; // rdi
  char *v12; // rax
  char *v13; // rbp
  size_t v14; // rdi
  char *v15; // rax
  int v16; // eax
  int v17; // r12d
  FILE *v18; // r13
  const char *v19; // rax
  FILE *v20; // rbx
  const char *v21; // r13
  char *IO_read_ptr; // rax
  int v23; // edi
  char *v24; // kr00_8
  int *v25; // rdx
  int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rdx
  signed __int64 v29; // rax
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  signed __int64 v35; // rdi
  char *v36; // rsi
  unsigned int v37; // edx
  char *v38; // rcx
  FILE *v39; // rdi
  int v40; // eax
  bool v41; // dl
  char *v42; // rax
  signed __int64 v43; // rax
  unsigned __int64 v44; // r9
  char *v45; // rsi
  char *v46; // r10
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // esi
  __int64 v50; // r8
  unsigned __int64 v51; // rdi
  char *v52; // rcx
  char *v53; // r9
  unsigned int v54; // edx
  unsigned int v55; // edx
  unsigned int v56; // ecx
  __int64 v57; // rsi
  const char *v58; // rax
  char *v59; // rdi
  FILE *v60; // r13
  signed __int64 v61; // [rsp+8h] [rbp-D0h]
  __int64 v62; // [rsp+18h] [rbp-C0h]
  char v63[64]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v64[15]; // [rsp+60h] [rbp-78h] BYREF

  v0 = nl_langinfo(14);
  v1 = qword_60E4B8;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_60E4B8 )
  {
    v6 = getenv("CHARSETALIASDIR");
    v7 = v6;
    if ( v6 && *v6 )
    {
      v8 = strlen(v6);
      v9 = v8;
      v10 = v8;
      if ( !v8 )
      {
        v11 = 14LL;
LABEL_18:
        v12 = (char *)malloc(v11);
        v13 = v12;
        if ( !v12 )
        {
LABEL_19:
          v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_20:
          qword_60E4B8 = v1;
          goto LABEL_4;
        }
        memcpy(v12, v7, v10);
LABEL_24:
        strcpy(&v13[v9], "charset.alias");
        v16 = open(v13, 0);
        v17 = v16;
        if ( v16 >= 0 )
        {
          v1 = 0LL;
          v61 = 0LL;
          v18 = fdopen(v16, "r");
          if ( v18 )
          {
            v19 = v2;
            v20 = v18;
            v21 = v19;
LABEL_30:
            IO_read_ptr = v20->_IO_read_ptr;
            if ( IO_read_ptr < v20->_IO_read_end )
            {
LABEL_31:
              v20->_IO_read_ptr = IO_read_ptr + 1;
              v23 = (unsigned __int8)*IO_read_ptr;
              goto LABEL_32;
            }
            while ( 1 )
            {
              v23 = __uflow(v20);
              if ( v23 == -1 )
                break;
LABEL_32:
              if ( (unsigned int)(v23 - 9) <= 1 || v23 == 32 )
                goto LABEL_30;
              if ( v23 == 35 )
              {
                do
                {
                  v42 = v20->_IO_read_ptr;
                  if ( v42 < v20->_IO_read_end )
                  {
                    v20->_IO_read_ptr = v42 + 1;
                    v40 = (unsigned __int8)*v42;
                    v41 = 1;
                  }
                  else
                  {
                    v40 = __uflow(v20);
                    v41 = v40 != -1;
                  }
                }
                while ( v40 != 10 && v41 );
                if ( v40 == -1 )
                  break;
                goto LABEL_30;
              }
              ungetc(v23, v20);
              if ( fscanf(v20, "%50s %50s", v63, v64) <= 1 )
                break;
              v24 = &v63[strlen(v63)];
              v25 = (int *)v64;
              do
              {
                v26 = *v25++;
                v27 = ~v26 & (v26 - 16843009) & 0x80808080;
              }
              while ( !v27 );
              if ( (~v26 & (v26 - 16843009) & 0x8080) == 0 )
              {
                v27 >>= 16;
                v25 = (int *)((char *)v25 + 2);
              }
              v28 = (char *)v25 - __CFADD__((_BYTE)v27, (_BYTE)v27) - 3 - (char *)v64;
              v29 = v24 - v63 + v28;
              v62 = v28;
              if ( v61 )
              {
                v43 = v61 + v29;
                v61 = v43 + 2;
                v30 = (char *)realloc(v1, v43 + 3);
                v32 = v62;
                v31 = v24 - v63;
              }
              else
              {
                v61 = v29 + 2;
                v30 = (char *)malloc(v29 + 3);
                v31 = v24 - v63;
                v32 = v62;
              }
              if ( !v30 )
              {
                v58 = v21;
                v59 = v1;
                v60 = v20;
                v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
                v2 = v58;
                free(v59);
                sub_4085E0(v60);
                goto LABEL_26;
              }
              v33 = -2 - v31;
              v34 = v31 + 1;
              v35 = v61 - v32;
              v36 = &v30[v61 - v32 + v33];
              if ( v34 >= 8 )
              {
                *(_QWORD *)v36 = *(_QWORD *)v63;
                *(_QWORD *)&v36[v34 - 8] = *(_QWORD *)&v63[v34 - 8];
                v44 = (unsigned __int64)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v45 = &v36[-v44];
                v46 = (char *)(v63 - v45);
                v47 = ((_DWORD)v45 + v34) & 0xFFFFFFF8;
                if ( v47 >= 8 )
                {
                  v48 = v47 & 0xFFFFFFF8;
                  v49 = 0;
                  do
                  {
                    v50 = v49;
                    v49 += 8;
                    *(_QWORD *)(v44 + v50) = *(_QWORD *)&v46[v50];
                  }
                  while ( v49 < v48 );
                }
              }
              else if ( (v34 & 4) != 0 )
              {
                *(_DWORD *)v36 = *(_DWORD *)v63;
                *(_DWORD *)&v36[v34 - 4] = *(_DWORD *)&v63[v34 - 4];
              }
              else if ( v34 )
              {
                *v36 = v63[0];
                if ( (v34 & 2) != 0 )
                  *(_WORD *)&v36[v34 - 2] = *(_WORD *)&v63[v34 - 2];
              }
              v37 = v32 + 1;
              v38 = &v30[v35 - 1];
              if ( v37 >= 8 )
              {
                *(_QWORD *)v38 = v64[0];
                *(_QWORD *)&v38[v37 - 8] = *(_QWORD *)&v63[v37 + 56];
                v51 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v52 = &v38[-v51];
                v53 = (char *)((char *)v64 - v52);
                v54 = ((_DWORD)v52 + v37) & 0xFFFFFFF8;
                if ( v54 >= 8 )
                {
                  v55 = v54 & 0xFFFFFFF8;
                  v56 = 0;
                  do
                  {
                    v57 = v56;
                    v56 += 8;
                    *(_QWORD *)(v51 + v57) = *(_QWORD *)&v53[v57];
                  }
                  while ( v56 < v55 );
                }
              }
              else if ( (v37 & 4) != 0 )
              {
                *(_DWORD *)v38 = v64[0];
                *(_DWORD *)&v38[v37 - 4] = *(_DWORD *)&v63[v37 + 60];
              }
              else if ( v37 )
              {
                *v38 = v64[0];
                if ( (v37 & 2) != 0 )
                  *(_WORD *)&v38[v37 - 2] = *(_WORD *)&v63[v37 + 62];
              }
              v1 = v30;
              IO_read_ptr = v20->_IO_read_ptr;
              if ( IO_read_ptr < v20->_IO_read_end )
                goto LABEL_31;
            }
            v39 = v20;
            v2 = v21;
            sub_4085E0(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_26:
        free(v13);
        goto LABEL_20;
      }
      if ( v7[v8 - 1] == 47 )
      {
        v11 = v8 + 14;
        goto LABEL_18;
      }
      v14 = v8 + 15;
      v9 = v8 + 1;
    }
    else
    {
      v14 = 115LL;
      v9 = 101LL;
      v10 = 100LL;
      v7 = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
    }
    v15 = (char *)malloc(v14);
    v13 = v15;
    if ( !v15 )
      goto LABEL_19;
    memcpy(v15, v7, v10);
    v13[v10] = 47;
    goto LABEL_24;
  }
LABEL_4:
  v3 = *v1;
  if ( *v1 )
  {
    while ( strcmp(v2, v1) && (v3 != 42 || v1[1]) )
    {
      v4 = &v1[strlen(v1) + 1];
      v1 = (char *)&v4[strlen(v4) + 1];
      v3 = *v1;
      if ( !*v1 )
        goto LABEL_11;
    }
    v2 = &v1[strlen(v1) + 1];
  }
LABEL_11:
  if ( !*v2 )
    return "ASCII";
  return v2;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_409D30(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_60E228 )
    v1 = (void *)qword_60E228;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409D48(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_60DE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
