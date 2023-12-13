
void switchD_004059e0::caseD_b(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401b05(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401b0a(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401b0f(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00401b14(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void switchD_004074ca::caseD_0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00401b20(int param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  ushort **ppuVar9;
  ulong uVar10;
  __int32_t **pp_Var11;
  long lVar12;
  FILE *__stream;
  undefined8 uVar13;
  int *piVar14;
  byte extraout_DL;
  byte *pbVar15;
  undefined8 uVar16;
  ulong uVar17;
  byte bVar18;
  char *pcVar19;
  char *pcVar20;
  byte *in_R10;
  byte *pbVar21;
  byte bVar22;
  byte *pbVar23;
  byte *pbVar24;
  bool bVar25;
  bool bVar26;
  byte bVar27;
  undefined auVar28 [16];
  undefined8 uStack_158;
  byte *local_150;
  char **local_148;
  char *local_140;
  byte *local_138;
  byte *local_130;
  long local_128;
  byte local_11d;
  int local_11c;
  ulong local_118;
  char **local_110;
  ulong local_108;
  byte local_100;
  byte local_ff;
  byte local_fe;
  char local_fd;
  int local_fc;
  byte *local_f0;
  size_t local_e8;
  byte local_e0;
  undefined7 uStack_df;
  undefined local_d8 [80];
  byte local_88 [88];
  
  bVar27 = 0;
  bVar22 = 0;
  uVar16 = 0xffffffff;
  FUN_004057f0(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  FUN_00409d30(FUN_00405670);
  setvbuf(stdout,(char *)0x0,1,0);
  local_11d = 0;
  pcVar19 = "";
  while( true ) {
    iVar6 = (int)uVar16;
    pcVar20 = (char *)0x0;
    iVar5 = FUN_00409590(param_1,param_2,"l:bctw",&PTR_s_length_0040aa00);
    if (iVar5 == -1) break;
    if (iVar5 == 0x74) {
      uVar16 = 0;
    }
    else if (iVar5 < 0x75) {
      if (iVar5 == 0x62) {
LAB_00401c30:
        uVar16 = 1;
      }
      else {
        if (iVar5 < 99) {
LAB_00401ce0:
          if (iVar5 == -0x83) {
            FUN_004078a0(stdout,"b2sum","GNU coreutils",PTR_DAT_0060e240,"Padraig Brady",
                         "Samuel Neves",0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          if (iVar5 == -0x82) {
            iVar5 = FUN_00403280(0);
            goto LAB_00401d58;
          }
          goto LAB_00401e6f;
        }
        if (iVar5 == 99) {
          bVar22 = 1;
        }
        else {
          if (iVar5 != 0x6c) goto LAB_00401e6f;
          pcVar20 = (char *)dcgettext(0,"invalid length",5);
          DAT_0060e2f8 = FUN_00407d40(DAT_0060e4c0,0,0xffffffffffffffff,"",pcVar20,0);
          pcVar19 = DAT_0060e4c0;
          if ((DAT_0060e2f8 & 7) != 0) {
            uVar16 = FUN_00407410(DAT_0060e4c0);
            uVar13 = dcgettext(0,"invalid length: %s",5);
            error(0,0,uVar13,uVar16);
            uVar13 = dcgettext(0,"length is not a multiple of 8",5);
            iVar5 = error(1,0,uVar13);
            goto LAB_00401ce0;
          }
        }
      }
    }
    else if (iVar5 == 0x81) {
      DAT_0060e308 = 1;
      DAT_0060e307 = '\0';
      DAT_0060e305 = 0;
    }
    else if (iVar5 < 0x82) {
      if (iVar5 == 0x77) {
        DAT_0060e308 = 0;
        DAT_0060e307 = '\x01';
        DAT_0060e305 = 0;
      }
      else {
LAB_00401d58:
        if (iVar5 != 0x80) goto LAB_00401e6f;
        DAT_0060e306 = '\x01';
      }
    }
    else if (iVar5 == 0x83) {
      DAT_0060e304 = 1;
    }
    else {
      if (0x82 < iVar5) {
        if (iVar5 == 0x84) {
          local_11d = 1;
          goto LAB_00401c30;
        }
        goto LAB_00401e6f;
      }
      DAT_0060e308 = 0;
      DAT_0060e307 = '\0';
      DAT_0060e305 = 1;
    }
  }
  _DAT_0060e318 = 3;
  if (0x200 < DAT_0060e2f8) {
    uVar16 = FUN_00407410(pcVar19);
    uVar13 = dcgettext(0,"invalid length: %s",5);
    error(0,0,uVar13,uVar16);
    uVar16 = FUN_00407410((&PTR_s_blake2b_0040abb0)[DAT_0060e300]);
    uVar13 = dcgettext(0,"maximum digest length for %s is %lu bits",5);
    auVar28 = error(1,0,uVar13,uVar16,0x200);
    uVar16 = uStack_158;
    uStack_158 = SUB168(auVar28,0);
    (*(code *)PTR___libc_start_main_0060dff0)
              (FUN_00401b20,uVar16,&local_150,FUN_00409cc0,FUN_00409d20,SUB168(auVar28 >> 0x40,0),
               &uStack_158);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar4 = iVar6 == 0 & local_11d;
  if ((DAT_0060e2f8 == 0) && (bVar22 == 0)) goto LAB_00401e79;
  DAT_0060e310 = DAT_0060e2f8 >> 2;
  if (bVar4 != 0) goto LAB_00402db8;
  if ((bVar22 != 0) &&
     (pcVar19 = "the --tag option is meaningless when verifying checksums", local_11d != 0))
  goto LAB_00401e5a;
  if ((-1 < iVar6) &&
     (pcVar19 = "the --binary and --text options are meaningless when verifying checksums",
     bVar22 != 0)) goto LAB_00401e5a;
  if (DAT_0060e306 == '\0') {
    if (DAT_0060e308 == 0) goto LAB_00401eb1;
    if (bVar22 == 0) goto LAB_00402aa1;
  }
  else if (bVar22 == 0) goto LAB_00402dc7;
  if (DAT_0060e307 == '\0') goto LAB_00401e3e;
LAB_00401ecd:
  if (iVar6 == -1) {
    iVar6 = 0;
  }
  local_110 = (char **)(param_2 + param_1);
  lVar7 = (long)DAT_0060e2bc;
  if (DAT_0060e2bc == param_1) {
    *local_110 = "-";
    local_110 = local_110 + 1;
  }
  local_148 = (char **)(param_2 + lVar7);
  if (local_110 <= local_148) {
    local_ff = 1;
    goto LAB_0040265e;
  }
  local_ff = 1;
  local_fc = (-(uint)(iVar6 == 0) & 0xfffffff6) + 0x2a;
  local_fd = (char)local_fc;
  do {
    local_140 = *local_148;
    if (bVar22 == 0) {
      cVar3 = FUN_004030d0(local_140,local_d8,local_88);
      if (cVar3 != '\0') {
        pcVar19 = strchr(local_140,0x5c);
        if (pcVar19 == (char *)0x0) goto LAB_00402aef;
        goto LAB_004027c3;
      }
      local_ff = 0;
    }
    else {
      local_11c = strcmp(local_140,"-");
      if (local_11c == 0) {
        DAT_0060e320 = '\x01';
        local_140 = (char *)dcgettext(0,"standard input",5);
        __stream = stdin;
LAB_00401f80:
        local_f0 = (byte *)0x0;
        pbVar21 = (byte *)0x1;
        local_e8 = 0;
        local_fe = 0;
        local_100 = 0;
        local_108 = 0;
        local_118 = 0;
        local_128 = 0;
LAB_00401fc0:
        pbVar8 = (byte *)__getdelim((char **)&local_f0,&local_e8,10,__stream);
        pbVar24 = local_f0;
        pbVar15 = local_150;
        if (0 < (long)pbVar8) {
          bVar4 = *local_f0;
          if (bVar4 == 0x23) goto LAB_00402146;
          in_R10 = pbVar8;
          if ((local_f0 + -1)[(long)pbVar8] == 10) {
            in_R10 = pbVar8 + -1;
            local_f0[(long)in_R10] = 0;
            bVar4 = *local_f0;
          }
          uVar17 = 0;
          if ((bVar4 == 9) || (bVar4 == 0x20)) {
            do {
              do {
                uVar17 = uVar17 + 1;
                bVar4 = local_f0[uVar17];
              } while (bVar4 == 0x20);
            } while (bVar4 == 9);
          }
          local_150 = (byte *)((ulong)local_150 & 0xffffffffffffff00);
          bVar25 = bVar4 < 0x5c;
          bVar26 = bVar4 == 0x5c;
          if (bVar26) {
            local_150 = (byte *)((ulong)pbVar15 & 0xffffffffffffff00 | (ulong)bVar22);
            bVar25 = 0xfffffffffffffffe < uVar17;
            uVar17 = uVar17 + 1;
            bVar26 = uVar17 == 0;
          }
          pcVar20 = (char *)(local_f0 + uVar17);
          lVar7 = 6;
          pbVar15 = (byte *)pcVar20;
          pbVar8 = (byte *)"BLAKE2";
          do {
            if (lVar7 == 0) break;
            lVar7 = lVar7 + -1;
            bVar25 = *pbVar15 < *pbVar8;
            bVar26 = *pbVar15 == *pbVar8;
            pbVar15 = pbVar15 + (ulong)bVar27 * -2 + 1;
            pbVar8 = pbVar8 + (ulong)bVar27 * -2 + 1;
          } while (bVar26);
          if ((!bVar25 && !bVar26) != bVar25) goto LAB_00402198;
          lVar7 = uVar17 + 6;
          local_138 = local_f0 + lVar7;
          bVar4 = *local_138;
          if (bVar4 == 0) {
LAB_004020c6:
            *local_138 = 0;
            local_138 = in_R10;
            lVar12 = FUN_004052d0(pcVar20,&PTR_s_BLAKE2b_0040aba0,0,0);
            in_R10 = local_138;
            if (lVar12 < 0) goto LAB_00402133;
            DAT_0060e300 = (uint)lVar12;
            in_R10 = local_138;
LAB_004020f4:
            lVar7 = lVar7 + 1;
            pbVar15 = pbVar24 + lVar7;
            if (bVar4 != 0x2d) goto LAB_00402102;
            pcVar20 = (char *)0x0;
            local_138 = pbVar15;
            local_130 = in_R10;
            iVar6 = FUN_00407d70(pbVar15,0,0,&local_e0);
            if (((iVar6 != 0) || (uVar17 = CONCAT71(uStack_df,local_e0), 0x1ff < uVar17 - 1)) ||
               (pbVar15 = local_138, (local_e0 & 7) != 0)) goto LAB_00402133;
            while ((int)(char)pbVar24[lVar7] - 0x30U < 10) {
              lVar7 = lVar7 + 1;
              pbVar15 = pbVar24 + lVar7;
            }
            DAT_0060e310 = uVar17 >> 2;
            in_R10 = local_130;
            DAT_0060e2f8 = uVar17;
          }
          else {
            if ((bVar4 != 9) && (bVar4 != 0x20)) {
              do {
                if (bVar4 == 0x2d) goto LAB_004020c6;
                if (bVar4 == 0x28) {
                  *local_138 = 0;
                  local_130 = in_R10;
                  lVar12 = FUN_004052d0(pcVar20,&PTR_s_BLAKE2b_0040aba0,0,0);
                  in_R10 = local_130;
                  if (lVar12 < 0) goto LAB_00402133;
                  DAT_0060e300 = (uint)lVar12;
                  goto LAB_00402618;
                }
                lVar7 = lVar7 + 1;
                bVar4 = local_f0[lVar7];
                local_138 = local_f0 + lVar7;
                if (bVar4 == 0) goto LAB_004020c6;
              } while ((bVar4 != 0x20) && (bVar4 != 9));
            }
            *local_138 = 0;
            local_130 = in_R10;
            lVar12 = FUN_004052d0(pcVar20,&PTR_s_BLAKE2b_0040aba0,0,0);
            if (lVar12 < 0) goto LAB_00402133;
            DAT_0060e300 = (uint)lVar12;
            in_R10 = local_130;
            if (bVar4 != 0x28) goto LAB_004020f4;
LAB_00402618:
            *local_138 = 0x28;
            in_R10 = local_130;
            pbVar15 = local_138;
LAB_00402102:
            DAT_0060e2f8 = 0x200;
            DAT_0060e310 = 0x80;
          }
          bVar4 = *pbVar15;
          if (bVar4 == 0x20) {
            bVar4 = pbVar24[lVar7 + 1];
            lVar7 = lVar7 + 1;
          }
          if (bVar4 == 0x28) {
            in_R10 = in_R10 + -(lVar7 + 1);
            if (in_R10 != (byte *)0x0) {
              pbVar8 = pbVar24 + lVar7 + 1;
              pbVar15 = in_R10 + -1;
              if (pbVar15 == (byte *)0x0) {
LAB_00402739:
                if (*pbVar8 != 0x29) goto LAB_00402133;
                pbVar15 = (byte *)0x0;
                in_R10 = pbVar8;
              }
              else {
                bVar4 = (pbVar8 + -1)[(long)in_R10];
                while (bVar4 != 0x29) {
                  pbVar15 = pbVar15 + -1;
                  if (pbVar15 == (byte *)0x0) goto LAB_00402739;
                  bVar4 = pbVar8[(long)pbVar15];
                }
                in_R10 = pbVar8 + (long)pbVar15;
              }
              if (((byte)local_150 == '\0') || (lVar7 = FUN_00402f90(pbVar8,pbVar15), lVar7 != 0)) {
                *in_R10 = 0;
                bVar4 = (pbVar8 + 1)[(long)pbVar15];
                pbVar15 = pbVar15 + 1;
                if ((bVar4 == 9) || (bVar4 == 0x20)) {
                  do {
                    do {
                      pbVar15 = pbVar15 + 1;
                      bVar4 = pbVar8[(long)pbVar15];
                    } while (bVar4 == 0x20);
                  } while (bVar4 == 9);
                }
                if (bVar4 == 0x3d) {
                  pbVar15 = pbVar8 + 1 + (long)pbVar15;
                  do {
                    do {
                      local_150 = pbVar15;
                      pbVar15 = local_150 + 1;
                    } while (*local_150 == 0x20);
                  } while (*local_150 == 9);
                  cVar3 = FUN_00402f30(local_150);
                  goto LAB_004029f4;
                }
              }
            }
          }
LAB_00402133:
          do {
            local_128 = local_128 + 1;
            if (DAT_0060e307 != '\0') {
              uVar16 = FUN_00407290(0,3,local_140);
              uVar13 = dcgettext(0,"%s: %lu: improperly formatted %s checksum line",5);
              pcVar20 = (char *)pbVar21;
              error(0,0,uVar13,uVar16,pbVar21,"BLAKE2");
            }
LAB_00402146:
            bVar4 = *(byte *)&__stream->_flags;
            while( true ) {
              if ((bVar4 & 0x30) != 0) goto LAB_004023ab;
              pbVar21 = pbVar21 + 1;
              if (pbVar21 != (byte *)0x0) goto LAB_00401fc0;
              uVar17 = FUN_00407290(0,3,local_140);
              uVar16 = dcgettext(0,"%s: too many checksum lines",5);
              error(1,0,uVar16,uVar17);
LAB_00402198:
              local_138 = (byte *)pcVar20;
              local_130 = in_R10;
              if ((long)in_R10 - uVar17 < (ulong)(*pcVar20 == 0x5c) + _DAT_0060e318) break;
              DAT_0060e310 = 0;
              ppuVar9 = __ctype_b_loc();
              uVar2 = 0;
              bVar4 = 0;
              do {
                bVar18 = bVar4;
                uVar10 = uVar2;
                uVar2 = uVar10 + 1;
                bVar4 = bVar22;
              } while ((*(byte *)((long)*ppuVar9 + (ulong)local_138[uVar10] * 2 + 1) & 0x10) != 0);
              pcVar20 = (char *)local_138;
              in_R10 = local_130;
              if (((bVar18 == 0) || (DAT_0060e310 = uVar10, 0x7e < uVar10 - 2)) ||
                 ((uVar10 & 1) != 0)) break;
              lVar7 = uVar17 + uVar10;
              DAT_0060e2f8 = uVar10 * 4;
              bVar4 = pbVar24[lVar7];
              if ((bVar4 != 0x20) && (bVar4 != 9)) break;
              pbVar24[lVar7] = 0;
              cVar3 = FUN_00402f30();
              if (cVar3 == '\0') break;
              lVar12 = lVar7 + 1;
              pcVar20 = (char *)local_138;
              in_R10 = local_130;
              if (((long)local_130 - lVar12 == 1) ||
                 ((pbVar24[lVar7 + 1] != 0x20 && (pbVar24[lVar7 + 1] != 0x2a)))) {
                if (DAT_0060e230 == 0) break;
                DAT_0060e230 = 1;
              }
              else if (DAT_0060e230 != 1) {
                DAT_0060e230 = 0;
                lVar12 = lVar7 + 2;
              }
              pbVar8 = pbVar24 + lVar12;
              if ((byte)local_150 != '\0') {
                local_150 = local_138;
                lVar7 = FUN_00402f90(pbVar8,(long)local_130 - lVar12);
                cVar3 = lVar7 != 0;
LAB_004029f4:
                pcVar20 = (char *)local_150;
                if (cVar3 == '\0') break;
              }
              bVar25 = false;
              bVar26 = local_11c == 0;
              if (bVar26) {
                lVar7 = 2;
                pbVar15 = pbVar8;
                pbVar23 = &DAT_0040c522;
                do {
                  if (lVar7 == 0) break;
                  lVar7 = lVar7 + -1;
                  bVar25 = *pbVar15 < *pbVar23;
                  bVar26 = *pbVar15 == *pbVar23;
                  pbVar15 = pbVar15 + (ulong)bVar27 * -2 + 1;
                  pbVar23 = pbVar23 + (ulong)bVar27 * -2 + 1;
                } while (bVar26);
                if ((!bVar25 && !bVar26) == bVar25) break;
              }
              bVar25 = false;
              local_150 = (byte *)pcVar20;
              if (DAT_0060e308 == 0) {
                pcVar19 = strchr((char *)pbVar8,10);
                bVar25 = pcVar19 != (char *)0x0;
              }
              local_138._0_1_ = FUN_004030d0(pbVar8,local_88,&local_e0);
              pcVar20 = (char *)local_150;
              if ((byte)local_138 == 0) {
                local_118 = local_118 + 1;
                if (DAT_0060e308 == 0) {
                  if (bVar25 != false) {
                    pcVar19 = stdout->_IO_write_ptr;
                    if (pcVar19 < stdout->_IO_write_end) {
                      stdout->_IO_write_ptr = pcVar19 + 1;
                      *pcVar19 = '\\';
                    }
                    else {
                      __overflow(stdout,0x5c);
                    }
                  }
                  FUN_00403020(pbVar8,bVar25);
                  pcVar19 = "FAILED open or read";
LAB_00402380:
                  uVar16 = dcgettext(0,pcVar19,5);
                  __printf_chk(1,": %s\n",uVar16);
                }
              }
              else if ((DAT_0060e306 == '\0') || (local_e0 == 0)) {
                pbVar15 = (byte *)(DAT_0060e310 >> 1);
                if (pbVar15 == (byte *)0x0) {
                  pbVar24 = (byte *)0x0;
                }
                else {
                  pbVar23 = (byte *)0x0;
                  local_138 = (byte *)((ulong)local_138 & 0xffffffffffffff00 |
                                      (ulong)(byte)local_138);
                  local_130 = pbVar15;
                  pp_Var11 = __ctype_tolower_loc();
                  do {
                    pbVar15 = local_130;
                    if (((*pp_Var11)[local_150[(long)pbVar23 * 2]] !=
                         (int)"0123456789abcdef"[local_88[(long)pbVar23] >> 4]) ||
                       ((*pp_Var11)[local_150[(long)pbVar23 * 2 + 1]] !=
                        (int)"0123456789abcdef"[local_88[(long)pbVar23] & 0xf])) {
                      local_108 = local_108 + 1;
                      pcVar20 = (char *)local_150;
                      pbVar24 = pbVar23;
                      if (DAT_0060e308 != 0) goto LAB_0040239b;
                      local_138._0_1_ = local_fe;
                      if (bVar25 != false) goto LAB_0040254d;
                      goto LAB_0040256d;
                    }
                    pbVar23 = pbVar23 + 1;
                    pbVar24 = local_130;
                  } while (local_130 != pbVar23);
                }
                pcVar20 = (char *)local_150;
                local_fe = DAT_0060e308;
                if ((DAT_0060e308 == 0) && (local_fe = DAT_0060e305, DAT_0060e305 == 0)) {
                  if (bVar25 == false) {
                    local_150 = (byte *)((ulong)local_150 & 0xffffffffffffff00 |
                                        (ulong)(byte)local_138);
                    FUN_00403020(pbVar8,0);
                    local_fe = (byte)local_150;
                  }
                  else {
LAB_0040254d:
                    local_fe = (byte)local_138;
                    pcVar19 = stdout->_IO_write_ptr;
                    if (pcVar19 < stdout->_IO_write_end) {
                      stdout->_IO_write_ptr = pcVar19 + 1;
                      *pcVar19 = '\\';
                    }
                    else {
                      local_150 = pbVar15;
                      __overflow(stdout,0x5c);
                      pbVar15 = local_150;
                    }
LAB_0040256d:
                    local_150 = pbVar15;
                    FUN_00403020(pbVar8,bVar25);
                    if (local_150 != pbVar24) {
                      pcVar19 = "FAILED";
                      goto LAB_00402380;
                    }
                  }
                  if (DAT_0060e305 == 0) {
                    pcVar19 = "OK";
                    goto LAB_00402380;
                  }
                }
              }
LAB_0040239b:
              bVar4 = *(byte *)&__stream->_flags;
              local_100 = bVar22;
            }
          } while( true );
        }
LAB_004023ab:
        free(local_f0);
        bVar4 = 0;
        if ((__stream->_flags & 0x20U) == 0) {
          if ((local_11c != 0) && (iVar6 = FUN_004085e0(__stream), iVar6 != 0)) goto LAB_00402768;
          lVar7 = local_128;
          if (local_100 == 0) {
            uVar16 = FUN_00407290(0,3,local_140);
            uVar13 = dcgettext(0,"%s: no properly formatted %s checksum lines found",5);
            pcVar20 = "BLAKE2";
            error(0,0,uVar13,uVar16);
          }
          else {
            if (DAT_0060e308 == 0) {
              if (local_128 != 0) {
                pcVar20 = (char *)0x5;
                uVar16 = dcngettext(0,"WARNING: %lu line is improperly formatted",
                                    "WARNING: %lu lines are improperly formatted",local_128);
                error(0,0,uVar16,lVar7);
              }
              uVar17 = local_118;
              if (local_118 != 0) {
                pcVar20 = (char *)0x5;
                uVar16 = dcngettext(0,"WARNING: %lu listed file could not be read",
                                    "WARNING: %lu listed files could not be read",local_118);
                error(0,0,uVar16,uVar17);
              }
              uVar17 = local_108;
              if (local_108 != 0) {
                pcVar20 = (char *)0x5;
                uVar16 = dcngettext(0,"WARNING: %lu computed checksum did NOT match",
                                    "WARNING: %lu computed checksums did NOT match",local_108);
                error(0,0,uVar16,uVar17);
              }
              if (DAT_0060e306 == '\0') goto LAB_0040279b;
              if (local_fe == 0) {
                uVar16 = FUN_00407290(0,3,local_140);
                uVar13 = dcgettext(0,"%s: no file was verified",5);
                error(0,0,uVar13,uVar16);
                goto LAB_00402445;
              }
            }
            else {
LAB_0040279b:
              if (local_fe == 0) goto LAB_00402445;
            }
            if ((local_118 | local_108) == 0) {
              bVar4 = DAT_0060e304 ^ 1 | local_128 == 0;
            }
          }
LAB_00402445:
          bVar4 = bVar4 & 1;
        }
        else {
          uVar16 = FUN_00407290(0,3,local_140);
          uVar13 = dcgettext(0,"%s: read error",5);
          error(0,0,uVar13,uVar16);
          bVar4 = 0;
        }
      }
      else {
        __stream = (FILE *)FUN_00405750(local_140,"r");
        if (__stream != (FILE *)0x0) goto LAB_00401f80;
LAB_00402768:
        uVar16 = FUN_00407290(0,3,local_140);
        piVar14 = __errno_location();
        error(0,*piVar14,&DAT_0040ac1c,uVar16);
        bVar4 = 0;
      }
      local_ff = local_ff & bVar4;
    }
    while (local_148 = local_148 + 1, local_110 <= local_148) {
LAB_0040265e:
      if ((DAT_0060e320 == '\0') || (iVar6 = FUN_004085e0(stdin), iVar6 != -1)) {
        return local_ff ^ 1;
      }
      uVar16 = dcgettext(0,"standard input",5);
      piVar14 = __errno_location();
      error(1,*piVar14,uVar16);
LAB_00402aef:
      pcVar19 = strchr(local_140,10);
      if (pcVar19 == (char *)0x0) {
        uVar16 = 0;
        bVar4 = 0;
        if (local_11d == 0) goto LAB_004027f3;
LAB_00402b16:
        fputs_unlocked((&PTR_s_BLAKE2b_0040aba0)[DAT_0060e300],stdout);
        if (DAT_0060e2f8 < 0x200) {
          __printf_chk(1,&DAT_00409efb);
          fwrite_unlocked(&DAT_00409f00,1,2,stdout);
          FUN_00403020(local_140,uVar16);
          fwrite_unlocked(&DAT_00409f03,1,4,stdout);
          if ((local_11d == 0) && (bVar4 != 0)) goto LAB_004027d3;
        }
        else {
          fwrite_unlocked(&DAT_00409f00,1,2,stdout);
          FUN_00403020(local_140,uVar16);
          fwrite_unlocked(&DAT_00409f03,1,4,stdout);
        }
        if (DAT_0060e310 >> 1 != 0) goto LAB_004027ff;
LAB_00402834:
        if (local_11d == 0) goto LAB_00402860;
      }
      else {
LAB_004027c3:
        if (local_11d != 0) {
          pcVar19 = stdout->_IO_write_ptr;
          if (stdout->_IO_write_end < pcVar19 || stdout->_IO_write_end == pcVar19) {
            uVar16 = 1;
            __overflow(stdout,0x5c);
            bVar4 = local_11d;
          }
          else {
            uVar16 = 1;
            stdout->_IO_write_ptr = pcVar19 + 1;
            *pcVar19 = '\\';
            bVar4 = local_11d;
          }
          goto LAB_00402b16;
        }
        uVar16 = 1;
LAB_004027d3:
        pcVar19 = stdout->_IO_write_ptr;
        if (pcVar19 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar19 + 1;
          *pcVar19 = '\\';
        }
        else {
          __overflow(stdout,0x5c);
        }
LAB_004027f3:
        if (DAT_0060e310 >> 1 != 0) {
LAB_004027ff:
          uVar17 = 0;
          do {
            puVar1 = local_d8 + uVar17;
            uVar17 = uVar17 + 1;
            __printf_chk(1,&DAT_00409f08,*puVar1);
          } while (uVar17 < DAT_0060e310 >> 1);
          goto LAB_00402834;
        }
LAB_00402860:
        pcVar19 = stdout->_IO_write_ptr;
        if (pcVar19 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar19 + 1;
          *pcVar19 = ' ';
        }
        else {
          __overflow(stdout,0x20);
        }
        pcVar19 = stdout->_IO_write_ptr;
        if (pcVar19 < stdout->_IO_write_end) {
          stdout->_IO_write_ptr = pcVar19 + 1;
          *pcVar19 = local_fd;
        }
        else {
          __overflow(stdout,local_fc);
        }
        FUN_00403020(local_140,uVar16);
      }
      pcVar19 = stdout->_IO_write_ptr;
      if (pcVar19 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = pcVar19 + 1;
        *pcVar19 = '\n';
      }
      else {
        __overflow(stdout,10);
      }
    }
  } while( true );
LAB_00401e6f:
  FUN_00403280(1);
  bVar4 = extraout_DL;
LAB_00401e79:
  DAT_0060e2f8 = 0x200;
  DAT_0060e310 = 0x80;
  if (bVar4 == 0) {
    if (DAT_0060e306 == '\0') {
      if (DAT_0060e308 == 0) {
LAB_00401eb1:
        iVar6 = (int)uVar16;
        if (DAT_0060e307 == '\0') {
          if ((DAT_0060e305 == 1) &&
             (pcVar19 = "the --quiet option is meaningful only when verifying checksums",
             bVar22 == 0)) goto LAB_00401e5a;
LAB_00401e3e:
          iVar6 = (int)uVar16;
          if (DAT_0060e304 == 0) goto LAB_00401ecd;
          pcVar19 = "the --strict option is meaningful only when verifying checksums";
        }
        else {
          pcVar19 = "the --warn option is meaningful only when verifying checksums";
        }
        if (bVar22 != 0) goto LAB_00401ecd;
      }
      else {
LAB_00402aa1:
        pcVar19 = "the --status option is meaningful only when verifying checksums";
      }
    }
    else {
LAB_00402dc7:
      pcVar19 = "the --ignore-missing option is meaningful only when verifying checksums";
    }
  }
  else {
LAB_00402db8:
    pcVar19 = "--tag does not support --text mode";
  }
LAB_00401e5a:
  uVar13 = dcgettext(0,pcVar19,5);
  error(0,0,uVar13);
  goto LAB_00401e6f;
}


void FUN_00402e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0060dff0)
            (FUN_00401b20,unaff_retaddr,&stack0x00000008,FUN_00409cc0,FUN_00409d20,param_3,auStack_8
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00402e88) */
/* WARNING: Removing unreachable block (ram,0x00402e92) */

void FUN_00402e7b(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402ec9) */

void FUN_00402e9a(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402f06) */

void FUN_00402ed1(void)

{
  if (DAT_0060e2e8 != '\0') {
    return;
  }
  FUN_00402e7b();
  DAT_0060e2e8 = 1;
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402ec9) */

void thunk_FUN_00402e9a(void)

{
  return;
}


ulong FUN_00402f30(byte *param_1)

{
  ulong uVar1;
  ulong in_RAX;
  ushort **ppuVar2;
  
  uVar1 = DAT_0060e310;
  if (DAT_0060e310 != 0) {
    ppuVar2 = __ctype_b_loc();
    in_RAX = 0;
    do {
      if ((*(byte *)((long)*ppuVar2 + (ulong)*param_1 * 2 + 1) & 0x10) == 0) {
        return 0;
      }
      in_RAX = (ulong)((int)in_RAX + 1);
      param_1 = param_1 + 1;
    } while (in_RAX < uVar1);
  }
  return in_RAX & 0xffffffffffffff00 | (ulong)(*param_1 == 0);
}


long FUN_00402f90(long param_1,ulong param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar4 = 0;
  puVar2 = (undefined *)(param_1 + 1);
  if (param_2 != 0) {
    do {
      puVar3 = puVar2;
      cVar1 = *(char *)(param_1 + uVar4);
      if (cVar1 == '\0') {
        return 0;
      }
      if (cVar1 == '\\') {
        if (param_2 - 1 == uVar4) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        if (*(char *)(param_1 + uVar4) == '\\') {
          puVar3[-1] = 0x5c;
        }
        else {
          if (*(char *)(param_1 + uVar4) != 'n') {
            return 0;
          }
          puVar3[-1] = 10;
        }
      }
      else {
        puVar3[-1] = cVar1;
      }
      uVar4 = uVar4 + 1;
      puVar2 = puVar3 + 1;
    } while (uVar4 < param_2);
    if (puVar3 < (undefined *)(param_2 + param_1)) {
      *puVar3 = 0;
    }
  }
  return param_1;
}


void FUN_00403020(byte *param_1,char param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2 == '\0') {
    fputs_unlocked((char *)param_1,stdout);
    return;
  }
  while( true ) {
    bVar1 = *param_1;
    if (bVar1 == 0) break;
    if (bVar1 == 10) {
      fwrite_unlocked(&DAT_00409d84,1,2,stdout);
    }
    else if (bVar1 == 0x5c) {
      fwrite_unlocked(&DAT_00409d87,1,2,stdout);
    }
    else {
      pbVar2 = (byte *)stdout->_IO_write_ptr;
      if (pbVar2 < stdout->_IO_write_end) {
        stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = bVar1;
      }
      else {
        __overflow(stdout,(uint)bVar1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}


char FUN_004030d0(byte *param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  
  lVar5 = 2;
  bVar8 = &stack0xffffffffffffffe0 < &DAT_00000008;
  bVar9 = &stack0x00000000 == (undefined *)0x28;
  pbVar6 = param_1;
  pbVar7 = &DAT_0040c522;
  do {
    if (lVar5 == 0) break;
    lVar5 = lVar5 + -1;
    bVar8 = *pbVar6 < *pbVar7;
    bVar9 = *pbVar6 == *pbVar7;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while (bVar9);
  *param_3 = 0;
  lVar5 = stdin;
  if ((!bVar8 && !bVar9) == bVar8) {
    DAT_0060e320 = 1;
    FUN_00405720(stdin,2);
    iVar2 = FUN_004051d0(lVar5,param_2,DAT_0060e2f8 >> 3);
    if (iVar2 != 0) {
LAB_004031d8:
      uVar3 = FUN_00407290(0,3,param_1);
      piVar4 = __errno_location();
      error(0,*piVar4,&DAT_0040ac1c,uVar3);
      if (stdin == lVar5) {
        return '\0';
      }
      FUN_004085e0(lVar5);
      return '\0';
    }
  }
  else {
    lVar5 = FUN_00405750(param_1,"r");
    if (lVar5 == 0) {
      piVar4 = __errno_location();
      cVar1 = DAT_0060e306;
      if ((DAT_0060e306 != '\0') && (*piVar4 == 2)) {
        *param_3 = 1;
        return cVar1;
      }
      uVar3 = FUN_00407290(0,3,param_1);
      error(0,*piVar4,&DAT_0040ac1c,uVar3);
      return '\0';
    }
    FUN_00405720(lVar5,2);
    iVar2 = FUN_004051d0(lVar5,param_2,DAT_0060e2f8 >> 3);
    if (iVar2 != 0) goto LAB_004031d8;
    iVar2 = FUN_004085e0(lVar5);
    if (iVar2 != 0) {
      uVar3 = FUN_00407290(0,3,param_1);
      piVar4 = __errno_location();
      error(0,*piVar4,&DAT_0040ac1c,uVar3);
      return '\0';
    }
  }
  return '\x01';
}


void FUN_00403280(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  byte **ppbVar6;
  char *pcVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  byte *local_88;
  char *local_80;
  byte *local_78 [5];
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte **ppbVar7;
  
  uVar5 = DAT_0060e338;
  bVar14 = 0;
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(stderr,1,uVar3,uVar5);
    goto LAB_004032bf;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\nPrint or check %s (%d-bit) checksums.\n",5);
  __printf_chk(1,uVar3,uVar5,"BLAKE2",0x200);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"\n  -b, --binary         read in binary mode\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,"  -c, --check          read %s sums from the FILEs and check them\n",5);
  __printf_chk(1,uVar5,"BLAKE2");
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -l, --length         digest length in bits; must not exceed the maximum for\n                       the blake2 algorithm and must be a multiple of 8\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --tag            create a BSD-style checksum\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"  -t, --text           read in text mode (default)\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe following five options are useful only when verifying checksums:\n      --ignore-missing  don\'t fail or report status for missing files\n      --quiet          don\'t print OK for each successfully verified file\n      --status         don\'t output anything, status code shows success\n      --strict         exit non-zero for improperly formatted checksum lines\n  -w, --warn           warn about improperly formatted checksum lines\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --help     display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = stdout;
  pcVar4 = (char *)dcgettext(0,"      --version  output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nThe sums are computed as described in %s.  When checking, the input\nshould be a former output of this program.  The default mode is to print a\nline with checksum, a space, a character indicating input mode (\'*\' for binary,\n\' \' for text or where binary is insignificant), and name for each FILE.\n"
                    ,5);
  __printf_chk(1,uVar5,"RFC 7693");
  local_88 = &DAT_00409da0;
  local_80 = "test invocation";
  local_78[0] = (byte *)0x409e1a;
  local_78[1] = (byte *)0x409db2;
  local_78[2] = (byte *)0x409dc8;
  local_78[3] = (byte *)0x409dd2;
  local_78[4] = (byte *)0x409de1;
  local_50 = "sha2 utilities";
  local_48 = "sha384sum";
  local_40 = "sha2 utilities";
  local_38 = "sha512sum";
  local_30 = "sha2 utilities";
  local_28 = 0;
  local_20 = 0;
  ppbVar6 = &local_88;
  do {
    ppbVar7 = ppbVar6;
    ppbVar6 = ppbVar7 + 2;
    pbVar11 = *ppbVar6;
    bVar12 = false;
    bVar13 = pbVar11 == (byte *)0x0;
    if (bVar13) break;
    lVar9 = 6;
    pbVar10 = (byte *)"b2sum";
    do {
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
      bVar12 = *pbVar10 < *pbVar11;
      bVar13 = *pbVar10 == *pbVar11;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
      pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
  } while ((!bVar12 && !bVar13) != bVar12);
  pcVar4 = (char *)ppbVar7[3];
  if ((byte *)pcVar4 == (byte *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
      iVar2 = strncmp(pcVar4,"en_",3);
      if (iVar2 != 0) {
        pcVar4 = "b2sum";
        goto LAB_0040364b;
      }
    }
    pcVar4 = "b2sum";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    pcVar8 = " invocation";
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","b2sum");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(1,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar8 = setlocale(5,(char *)0x0);
    if (pcVar8 != (char *)0x0) {
      iVar2 = strncmp(pcVar8,"en_",3);
      if (iVar2 != 0) {
LAB_0040364b:
        uVar5 = dcgettext(0,"Report %s translation bugs to <https://translationproject.org/team/>\n"
                          ,5);
        __printf_chk(1,uVar5,"b2sum");
      }
    }
    pcVar8 = " invocation";
    uVar5 = dcgettext(0,"Full documentation at: <%s%s>\n",5);
    __printf_chk(1,uVar5,"https://www.gnu.org/software/coreutils/","b2sum");
    if (pcVar4 != "b2sum") {
      pcVar8 = "";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(1,uVar5,pcVar4,pcVar8);
LAB_004032bf:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}


void FUN_00403680(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long local_138 [16];
  ulong local_b8 [8];
  ulong local_78 [9];
  
  lVar2 = 0;
  do {
    local_138[lVar2] = *(long *)(param_2 + lVar2 * 8);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    local_b8[lVar2] = *(ulong *)(param_1 + lVar2 * 8);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  uVar5 = local_b8[0] + local_b8[4] + local_138[0];
  uVar3 = local_b8[1] + local_b8[5] + local_138[2];
  uVar9 = *(ulong *)(param_1 + 0x40) ^ uVar5 ^ 0x510e527fade682d1;
  uVar10 = uVar9 << 0x20 | uVar9 >> 0x20;
  uVar6 = *(ulong *)(param_1 + 0x48) ^ uVar3 ^ 0x9b05688c2b3e6c1f;
  uVar9 = uVar10 + 0x6a09e667f3bcc908;
  uVar12 = local_b8[2] + local_b8[6] + local_138[4];
  uVar7 = uVar6 << 0x20 | uVar6 >> 0x20;
  uVar6 = local_b8[4] ^ uVar9;
  local_78[1] = uVar7 + 0xbb67ae8584caa73b;
  uVar13 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar6 = local_b8[5] ^ local_78[1];
  uVar5 = uVar5 + local_138[1] + uVar13;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar10 = uVar10 ^ uVar5;
  uVar4 = uVar3 + local_138[3] + uVar6;
  uVar11 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar7 = uVar7 ^ uVar4;
  uVar9 = uVar9 + uVar11;
  uVar8 = uVar7 >> 0x10 | uVar7 << 0x30;
  uVar13 = uVar13 ^ uVar9;
  local_78[1] = local_78[1] + uVar8;
  uVar14 = uVar13 << 1 | (ulong)((long)uVar13 < 0);
  uVar6 = uVar6 ^ local_78[1];
  uVar3 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar6 = *(ulong *)(param_1 + 0x50) ^ uVar12 ^ 0x1f83d9abfb41bd6b;
  uVar10 = uVar6 << 0x20 | uVar6 >> 0x20;
  uVar13 = local_b8[3] + local_b8[7] + local_138[6];
  local_78[2] = uVar10 + 0x3c6ef372fe94f82b;
  uVar7 = uVar5 + local_138[8] + uVar3;
  uVar6 = local_b8[6] ^ local_78[2];
  uVar5 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar6 = *(ulong *)(param_1 + 0x58) ^ uVar13 ^ 0x5be0cd19137e2179;
  uVar12 = uVar12 + local_138[5] + uVar5;
  uVar15 = uVar6 << 0x20 | uVar6 >> 0x20;
  uVar10 = uVar10 ^ uVar12;
  local_78[3] = uVar15 + 0xa54ff53a5f1d36f1;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar6 = local_b8[7] ^ local_78[3];
  local_78[2] = local_78[2] + uVar10;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar5 = uVar5 ^ local_78[2];
  uVar13 = uVar13 + local_138[7] + uVar6;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar15 = uVar15 ^ uVar13;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[3] = local_78[3] + uVar15;
  uVar15 = uVar15 ^ uVar7;
  uVar15 = uVar15 << 0x20 | uVar15 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[2] = local_78[2] + uVar15;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar4 = uVar4 + local_138[10] + uVar5;
  uVar7 = uVar7 + local_138[9] + uVar3;
  uVar11 = uVar11 ^ uVar4;
  uVar12 = uVar12 + local_138[12] + uVar6;
  uVar15 = uVar15 ^ uVar7;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar8 = uVar8 ^ uVar12;
  uVar16 = uVar15 >> 0x10 | uVar15 << 0x30;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  local_78[2] = local_78[2] + uVar16;
  local_78[3] = local_78[3] + uVar11;
  uVar9 = uVar9 + uVar8;
  uVar5 = uVar5 ^ local_78[3];
  uVar6 = uVar6 ^ uVar9;
  uVar3 = uVar3 ^ local_78[2];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar4 = uVar4 + local_138[11] + uVar5;
  uVar12 = uVar12 + local_138[13] + uVar6;
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar11 = uVar11 ^ uVar4;
  uVar8 = uVar8 ^ uVar12;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  local_78[3] = local_78[3] + uVar11;
  uVar5 = uVar5 ^ local_78[3];
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar9 = uVar9 + uVar8;
  uVar13 = uVar13 + local_138[14] + uVar14;
  uVar6 = uVar6 ^ uVar9;
  uVar10 = uVar10 ^ uVar13;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  local_78[1] = local_78[1] + uVar10;
  uVar14 = uVar14 ^ local_78[1];
  uVar15 = uVar14 >> 0x18 | uVar14 << 0x28;
  uVar13 = uVar13 + local_138[15] + uVar15;
  uVar10 = uVar10 ^ uVar13;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  local_78[1] = local_78[1] + uVar10;
  uVar15 = uVar15 ^ local_78[1];
  uVar15 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar7 = uVar7 + local_138[14] + uVar15;
  uVar11 = uVar11 ^ uVar7;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar9 = uVar9 + uVar11;
  uVar15 = uVar15 ^ uVar9;
  uVar15 = uVar15 >> 0x18 | uVar15 << 0x28;
  uVar7 = uVar7 + local_138[10] + uVar15;
  uVar11 = uVar11 ^ uVar7;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar9 = uVar9 + uVar11;
  uVar15 = uVar15 ^ uVar9;
  uVar14 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar4 = uVar4 + local_138[4] + uVar3;
  uVar8 = uVar8 ^ uVar4;
  uVar12 = uVar12 + local_138[9] + uVar5;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar10 = uVar10 ^ uVar12;
  uVar13 = uVar13 + local_138[13] + uVar6;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar3 = uVar3 ^ local_78[1];
  local_78[2] = local_78[2] + uVar10;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar5 = uVar5 ^ local_78[2];
  uVar16 = uVar16 ^ uVar13;
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar4 = uVar4 + local_138[8] + uVar3;
  uVar15 = uVar16 << 0x20 | uVar16 >> 0x20;
  uVar8 = uVar8 ^ uVar4;
  uVar12 = uVar12 + local_138[15] + uVar5;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar10 = uVar10 ^ uVar12;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar3 = uVar3 ^ local_78[1];
  local_78[2] = local_78[2] + uVar10;
  uVar5 = uVar5 ^ local_78[2];
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  local_78[3] = local_78[3] + uVar15;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar6 = uVar6 ^ local_78[3];
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar7 = uVar7 + local_138[1] + uVar3;
  uVar13 = uVar13 + local_138[6] + uVar6;
  uVar4 = uVar4 + local_138[0] + uVar5;
  uVar15 = uVar15 ^ uVar13;
  uVar11 = uVar11 ^ uVar4;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x30;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  local_78[3] = local_78[3] + uVar15;
  uVar15 = uVar15 ^ uVar7;
  uVar15 = uVar15 << 0x20 | uVar15 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[3] = local_78[3] + uVar11;
  local_78[2] = local_78[2] + uVar15;
  uVar5 = uVar5 ^ local_78[3];
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar4 = uVar4 + local_138[2] + uVar5;
  uVar7 = uVar7 + local_138[12] + uVar3;
  uVar15 = uVar15 ^ uVar7;
  uVar16 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[2] = local_78[2] + uVar16;
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar11 = uVar11 ^ uVar4;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar12 = uVar12 + local_138[11] + uVar6;
  uVar13 = uVar13 + local_138[5] + uVar14;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 ^ uVar12;
  uVar10 = uVar10 ^ uVar13;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar5 = uVar5 ^ local_78[3];
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar9 = uVar9 + uVar8;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar6 = uVar6 ^ uVar9;
  local_78[1] = local_78[1] + uVar10;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar14 = uVar14 ^ local_78[1];
  uVar12 = uVar12 + local_138[7] + uVar6;
  uVar15 = uVar14 >> 0x18 | uVar14 << 0x28;
  uVar8 = uVar8 ^ uVar12;
  uVar13 = uVar13 + local_138[3] + uVar15;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar10 = uVar10 ^ uVar13;
  uVar9 = uVar9 + uVar8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar6 = uVar6 ^ uVar9;
  local_78[1] = local_78[1] + uVar10;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar15 = uVar15 ^ local_78[1];
  uVar15 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar7 = uVar7 + local_138[11] + uVar15;
  uVar4 = uVar4 + local_138[12] + uVar3;
  uVar11 = uVar11 ^ uVar7;
  uVar8 = uVar8 ^ uVar4;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar9 = uVar9 + uVar11;
  local_78[1] = local_78[1] + uVar8;
  uVar15 = uVar15 ^ uVar9;
  uVar3 = uVar3 ^ local_78[1];
  uVar15 = uVar15 >> 0x18 | uVar15 << 0x28;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar7 = uVar7 + local_138[8] + uVar15;
  uVar4 = uVar4 + local_138[0] + uVar3;
  uVar11 = uVar11 ^ uVar7;
  uVar8 = uVar8 ^ uVar4;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar9 = uVar9 + uVar11;
  local_78[1] = local_78[1] + uVar8;
  uVar15 = uVar15 ^ uVar9;
  uVar3 = uVar3 ^ local_78[1];
  uVar14 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar12 = uVar12 + local_138[5] + uVar5;
  uVar10 = uVar10 ^ uVar12;
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar13 = uVar13 + local_138[15] + uVar6;
  local_78[2] = local_78[2] + uVar10;
  uVar16 = uVar16 ^ uVar13;
  uVar5 = uVar5 ^ local_78[2];
  uVar7 = uVar7 + local_138[10] + uVar3;
  uVar15 = uVar16 << 0x20 | uVar16 >> 0x20;
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  local_78[3] = local_78[3] + uVar15;
  uVar12 = uVar12 + local_138[2] + uVar5;
  uVar6 = uVar6 ^ local_78[3];
  uVar10 = uVar10 ^ uVar12;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar13 = uVar13 + local_138[13] + uVar6;
  local_78[2] = local_78[2] + uVar10;
  uVar15 = uVar15 ^ uVar13;
  uVar5 = uVar5 ^ local_78[2];
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x30;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  local_78[3] = local_78[3] + uVar15;
  uVar15 = uVar15 ^ uVar7;
  uVar15 = uVar15 << 0x20 | uVar15 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[2] = local_78[2] + uVar15;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar4 = uVar4 + local_138[3] + uVar5;
  uVar7 = uVar7 + local_138[14] + uVar3;
  uVar11 = uVar11 ^ uVar4;
  uVar12 = uVar12 + local_138[7] + uVar6;
  uVar15 = uVar15 ^ uVar7;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar8 = uVar8 ^ uVar12;
  uVar16 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  local_78[2] = local_78[2] + uVar16;
  uVar5 = uVar5 ^ local_78[3];
  uVar9 = uVar9 + uVar8;
  uVar3 = uVar3 ^ local_78[2];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar6 = uVar6 ^ uVar9;
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar4 = uVar4 + local_138[6] + uVar5;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar11 = uVar11 ^ uVar4;
  uVar12 = uVar12 + local_138[1] + uVar6;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar8 = uVar8 ^ uVar12;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar5 = uVar5 ^ local_78[3];
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar9 = uVar9 + uVar8;
  uVar13 = uVar13 + local_138[9] + uVar14;
  uVar6 = uVar6 ^ uVar9;
  uVar10 = uVar10 ^ uVar13;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  local_78[1] = local_78[1] + uVar10;
  uVar14 = uVar14 ^ local_78[1];
  uVar15 = uVar14 >> 0x18 | uVar14 << 0x28;
  uVar13 = uVar13 + local_138[4] + uVar15;
  uVar10 = uVar10 ^ uVar13;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  local_78[1] = local_78[1] + uVar10;
  uVar15 = uVar15 ^ local_78[1];
  uVar15 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar7 = uVar7 + local_138[7] + uVar15;
  uVar11 = uVar11 ^ uVar7;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar9 = uVar9 + uVar11;
  uVar15 = uVar15 ^ uVar9;
  uVar15 = uVar15 >> 0x18 | uVar15 << 0x28;
  uVar7 = uVar7 + local_138[9] + uVar15;
  uVar11 = uVar11 ^ uVar7;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar9 = uVar9 + uVar11;
  uVar15 = uVar15 ^ uVar9;
  uVar14 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar4 = uVar4 + local_138[3] + uVar3;
  uVar8 = uVar8 ^ uVar4;
  uVar12 = uVar12 + local_138[13] + uVar5;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar10 = uVar10 ^ uVar12;
  uVar13 = uVar13 + local_138[11] + uVar6;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar3 = uVar3 ^ local_78[1];
  local_78[2] = local_78[2] + uVar10;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar5 = uVar5 ^ local_78[2];
  uVar16 = uVar16 ^ uVar13;
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar4 = uVar4 + local_138[1] + uVar3;
  uVar15 = uVar16 << 0x20 | uVar16 >> 0x20;
  uVar8 = uVar8 ^ uVar4;
  uVar12 = uVar12 + local_138[12] + uVar5;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar10 = uVar10 ^ uVar12;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar3 = uVar3 ^ local_78[1];
  local_78[2] = local_78[2] + uVar10;
  uVar5 = uVar5 ^ local_78[2];
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  local_78[3] = local_78[3] + uVar15;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar6 = uVar6 ^ local_78[3];
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar7 = uVar7 + local_138[2] + uVar3;
  uVar13 = uVar13 + local_138[14] + uVar6;
  uVar15 = uVar15 ^ uVar13;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[3] = local_78[3] + uVar15;
  uVar15 = uVar15 ^ uVar7;
  uVar15 = uVar15 << 0x20 | uVar15 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[2] = local_78[2] + uVar15;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar7 = uVar7 + local_138[6] + uVar3;
  uVar15 = uVar15 ^ uVar7;
  uVar16 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[2] = local_78[2] + uVar16;
  uVar4 = uVar4 + local_138[5] + uVar5;
  uVar3 = uVar3 ^ local_78[2];
  uVar11 = uVar11 ^ uVar4;
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  local_78[3] = local_78[3] + uVar11;
  uVar5 = uVar5 ^ local_78[3];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar4 = uVar4 + local_138[10] + uVar5;
  uVar11 = uVar11 ^ uVar4;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar12 = uVar12 + local_138[4] + uVar6;
  uVar13 = uVar13 + local_138[15] + uVar14;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 ^ uVar12;
  uVar10 = uVar10 ^ uVar13;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar5 = uVar5 ^ local_78[3];
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar9 = uVar9 + uVar8;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar6 = uVar6 ^ uVar9;
  local_78[1] = local_78[1] + uVar10;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar14 = uVar14 ^ local_78[1];
  uVar12 = uVar12 + local_138[0] + uVar6;
  uVar15 = uVar14 >> 0x18 | uVar14 << 0x28;
  uVar8 = uVar8 ^ uVar12;
  uVar13 = uVar13 + local_138[8] + uVar15;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar10 = uVar10 ^ uVar13;
  uVar9 = uVar9 + uVar8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar6 = uVar6 ^ uVar9;
  local_78[1] = local_78[1] + uVar10;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar15 = uVar15 ^ local_78[1];
  uVar15 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar7 = uVar7 + local_138[9] + uVar15;
  uVar4 = uVar4 + local_138[5] + uVar3;
  uVar11 = uVar11 ^ uVar7;
  uVar8 = uVar8 ^ uVar4;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar12 = uVar12 + local_138[2] + uVar5;
  uVar9 = uVar9 + uVar11;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 ^ uVar12;
  uVar15 = uVar15 ^ uVar9;
  uVar3 = uVar3 ^ local_78[1];
  uVar15 = uVar15 >> 0x18 | uVar15 << 0x28;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar7 = uVar7 + local_138[0] + uVar15;
  uVar4 = uVar4 + local_138[7] + uVar3;
  uVar11 = uVar11 ^ uVar7;
  uVar8 = uVar8 ^ uVar4;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar9 = uVar9 + uVar11;
  local_78[1] = local_78[1] + uVar8;
  uVar15 = uVar15 ^ uVar9;
  uVar3 = uVar3 ^ local_78[1];
  uVar14 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  local_78[2] = local_78[2] + uVar10;
  uVar13 = uVar13 + local_138[10] + uVar6;
  uVar5 = uVar5 ^ local_78[2];
  uVar16 = uVar16 ^ uVar13;
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar7 = uVar7 + local_138[14] + uVar3;
  uVar15 = uVar16 << 0x20 | uVar16 >> 0x20;
  uVar12 = uVar12 + local_138[4] + uVar5;
  local_78[3] = local_78[3] + uVar15;
  uVar10 = uVar10 ^ uVar12;
  uVar6 = uVar6 ^ local_78[3];
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  local_78[2] = local_78[2] + uVar10;
  uVar13 = uVar13 + local_138[15] + uVar6;
  uVar5 = uVar5 ^ local_78[2];
  uVar15 = uVar15 ^ uVar13;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[3] = local_78[3] + uVar15;
  uVar15 = uVar15 ^ uVar7;
  uVar15 = uVar15 << 0x20 | uVar15 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[2] = local_78[2] + uVar15;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar4 = uVar4 + local_138[11] + uVar5;
  uVar7 = uVar7 + local_138[1] + uVar3;
  uVar11 = uVar11 ^ uVar4;
  uVar12 = uVar12 + local_138[6] + uVar6;
  uVar15 = uVar15 ^ uVar7;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar8 = uVar8 ^ uVar12;
  uVar16 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  local_78[2] = local_78[2] + uVar16;
  uVar5 = uVar5 ^ local_78[3];
  uVar9 = uVar9 + uVar8;
  uVar3 = uVar3 ^ local_78[2];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar6 = uVar6 ^ uVar9;
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar4 = uVar4 + local_138[12] + uVar5;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar11 = uVar11 ^ uVar4;
  uVar12 = uVar12 + local_138[8] + uVar6;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar8 = uVar8 ^ uVar12;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar5 = uVar5 ^ local_78[3];
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar9 = uVar9 + uVar8;
  uVar13 = uVar13 + local_138[3] + uVar14;
  uVar6 = uVar6 ^ uVar9;
  uVar10 = uVar10 ^ uVar13;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  local_78[1] = local_78[1] + uVar10;
  uVar14 = uVar14 ^ local_78[1];
  uVar15 = uVar14 >> 0x18 | uVar14 << 0x28;
  uVar13 = uVar13 + local_138[13] + uVar15;
  uVar10 = uVar10 ^ uVar13;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  local_78[1] = local_78[1] + uVar10;
  uVar15 = uVar15 ^ local_78[1];
  uVar15 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar7 = uVar7 + local_138[2] + uVar15;
  uVar11 = uVar11 ^ uVar7;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar9 = uVar9 + uVar11;
  uVar15 = uVar15 ^ uVar9;
  uVar15 = uVar15 >> 0x18 | uVar15 << 0x28;
  uVar7 = uVar7 + local_138[12] + uVar15;
  uVar11 = uVar11 ^ uVar7;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar9 = uVar9 + uVar11;
  uVar15 = uVar15 ^ uVar9;
  uVar14 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar4 = uVar4 + local_138[6] + uVar3;
  uVar8 = uVar8 ^ uVar4;
  uVar12 = uVar12 + local_138[0] + uVar5;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar10 = uVar10 ^ uVar12;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar13 = uVar13 + local_138[8] + uVar6;
  uVar3 = uVar3 ^ local_78[1];
  local_78[2] = local_78[2] + uVar10;
  uVar16 = uVar16 ^ uVar13;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar5 = uVar5 ^ local_78[2];
  uVar15 = uVar16 << 0x20 | uVar16 >> 0x20;
  uVar4 = uVar4 + local_138[10] + uVar3;
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar8 = uVar8 ^ uVar4;
  uVar12 = uVar12 + local_138[11] + uVar5;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar10 = uVar10 ^ uVar12;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar3 = uVar3 ^ local_78[1];
  local_78[2] = local_78[2] + uVar10;
  uVar5 = uVar5 ^ local_78[2];
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  local_78[3] = local_78[3] + uVar15;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar6 = uVar6 ^ local_78[3];
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar7 = uVar7 + local_138[4] + uVar3;
  uVar13 = uVar13 + local_138[3] + uVar6;
  uVar4 = uVar4 + local_138[7] + uVar5;
  uVar15 = uVar15 ^ uVar13;
  uVar11 = uVar11 ^ uVar4;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x30;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  local_78[3] = local_78[3] + uVar15;
  uVar15 = uVar15 ^ uVar7;
  uVar15 = uVar15 << 0x20 | uVar15 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[3] = local_78[3] + uVar11;
  local_78[2] = local_78[2] + uVar15;
  uVar5 = uVar5 ^ local_78[3];
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar4 = uVar4 + local_138[5] + uVar5;
  uVar7 = uVar7 + local_138[13] + uVar3;
  uVar15 = uVar15 ^ uVar7;
  uVar16 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[2] = local_78[2] + uVar16;
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar11 = uVar11 ^ uVar4;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar12 = uVar12 + local_138[15] + uVar6;
  uVar13 = uVar13 + local_138[1] + uVar14;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 ^ uVar12;
  uVar10 = uVar10 ^ uVar13;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar5 = uVar5 ^ local_78[3];
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar9 = uVar9 + uVar8;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar6 = uVar6 ^ uVar9;
  local_78[1] = local_78[1] + uVar10;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar14 = uVar14 ^ local_78[1];
  uVar12 = uVar12 + local_138[14] + uVar6;
  uVar15 = uVar14 >> 0x18 | uVar14 << 0x28;
  uVar8 = uVar8 ^ uVar12;
  uVar13 = uVar13 + local_138[9] + uVar15;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar10 = uVar10 ^ uVar13;
  uVar9 = uVar9 + uVar8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar6 = uVar6 ^ uVar9;
  local_78[1] = local_78[1] + uVar10;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar15 = uVar15 ^ local_78[1];
  uVar15 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar7 = uVar7 + local_138[12] + uVar15;
  uVar4 = uVar4 + local_138[1] + uVar3;
  uVar11 = uVar11 ^ uVar7;
  uVar8 = uVar8 ^ uVar4;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar12 = uVar12 + local_138[14] + uVar5;
  uVar9 = uVar9 + uVar11;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 ^ uVar12;
  uVar15 = uVar15 ^ uVar9;
  uVar3 = uVar3 ^ local_78[1];
  uVar15 = uVar15 >> 0x18 | uVar15 << 0x28;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar7 = uVar7 + local_138[5] + uVar15;
  uVar4 = uVar4 + local_138[15] + uVar3;
  uVar11 = uVar11 ^ uVar7;
  uVar8 = uVar8 ^ uVar4;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar9 = uVar9 + uVar11;
  local_78[1] = local_78[1] + uVar8;
  uVar15 = uVar15 ^ uVar9;
  uVar3 = uVar3 ^ local_78[1];
  uVar14 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  local_78[2] = local_78[2] + uVar10;
  uVar13 = uVar13 + local_138[4] + uVar6;
  uVar5 = uVar5 ^ local_78[2];
  uVar16 = uVar16 ^ uVar13;
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar7 = uVar7 + local_138[0] + uVar3;
  uVar15 = uVar16 << 0x20 | uVar16 >> 0x20;
  uVar12 = uVar12 + local_138[13] + uVar5;
  local_78[3] = local_78[3] + uVar15;
  uVar10 = uVar10 ^ uVar12;
  uVar6 = uVar6 ^ local_78[3];
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  local_78[2] = local_78[2] + uVar10;
  uVar13 = uVar13 + local_138[10] + uVar6;
  uVar5 = uVar5 ^ local_78[2];
  uVar15 = uVar15 ^ uVar13;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[3] = local_78[3] + uVar15;
  uVar15 = uVar15 ^ uVar7;
  uVar15 = uVar15 << 0x20 | uVar15 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[2] = local_78[2] + uVar15;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar4 = uVar4 + local_138[6] + uVar5;
  uVar7 = uVar7 + local_138[7] + uVar3;
  uVar11 = uVar11 ^ uVar4;
  uVar12 = uVar12 + local_138[9] + uVar6;
  uVar15 = uVar15 ^ uVar7;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar8 = uVar8 ^ uVar12;
  uVar16 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  local_78[2] = local_78[2] + uVar16;
  uVar5 = uVar5 ^ local_78[3];
  uVar9 = uVar9 + uVar8;
  uVar3 = uVar3 ^ local_78[2];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar6 = uVar6 ^ uVar9;
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar4 = uVar4 + local_138[3] + uVar5;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar11 = uVar11 ^ uVar4;
  uVar12 = uVar12 + local_138[2] + uVar6;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar8 = uVar8 ^ uVar12;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar5 = uVar5 ^ local_78[3];
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar9 = uVar9 + uVar8;
  uVar13 = uVar13 + local_138[8] + uVar14;
  uVar6 = uVar6 ^ uVar9;
  uVar10 = uVar10 ^ uVar13;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  local_78[1] = local_78[1] + uVar10;
  uVar14 = uVar14 ^ local_78[1];
  uVar15 = uVar14 >> 0x18 | uVar14 << 0x28;
  uVar13 = uVar13 + local_138[11] + uVar15;
  uVar10 = uVar10 ^ uVar13;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  local_78[1] = local_78[1] + uVar10;
  uVar15 = uVar15 ^ local_78[1];
  uVar15 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar7 = uVar7 + local_138[13] + uVar15;
  uVar11 = uVar11 ^ uVar7;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar9 = uVar9 + uVar11;
  uVar15 = uVar15 ^ uVar9;
  uVar15 = uVar15 >> 0x18 | uVar15 << 0x28;
  uVar7 = uVar7 + local_138[11] + uVar15;
  uVar11 = uVar11 ^ uVar7;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar9 = uVar9 + uVar11;
  uVar15 = uVar15 ^ uVar9;
  uVar14 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar4 = uVar4 + local_138[7] + uVar3;
  uVar8 = uVar8 ^ uVar4;
  uVar12 = uVar12 + local_138[12] + uVar5;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar10 = uVar10 ^ uVar12;
  uVar13 = uVar13 + local_138[3] + uVar6;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar3 = uVar3 ^ local_78[1];
  local_78[2] = local_78[2] + uVar10;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar5 = uVar5 ^ local_78[2];
  uVar16 = uVar16 ^ uVar13;
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar4 = uVar4 + local_138[14] + uVar3;
  uVar15 = uVar16 << 0x20 | uVar16 >> 0x20;
  uVar8 = uVar8 ^ uVar4;
  uVar12 = uVar12 + local_138[1] + uVar5;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar10 = uVar10 ^ uVar12;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar3 = uVar3 ^ local_78[1];
  local_78[2] = local_78[2] + uVar10;
  uVar5 = uVar5 ^ local_78[2];
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  local_78[3] = local_78[3] + uVar15;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar6 = uVar6 ^ local_78[3];
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar7 = uVar7 + local_138[5] + uVar3;
  uVar13 = uVar13 + local_138[9] + uVar6;
  uVar15 = uVar15 ^ uVar13;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[3] = local_78[3] + uVar15;
  uVar15 = uVar15 ^ uVar7;
  uVar15 = uVar15 << 0x20 | uVar15 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[2] = local_78[2] + uVar15;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar7 = uVar7 + local_138[0] + uVar3;
  uVar15 = uVar15 ^ uVar7;
  uVar16 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[2] = local_78[2] + uVar16;
  uVar4 = uVar4 + local_138[15] + uVar5;
  uVar3 = uVar3 ^ local_78[2];
  uVar11 = uVar11 ^ uVar4;
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  local_78[3] = local_78[3] + uVar11;
  uVar5 = uVar5 ^ local_78[3];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar4 = uVar4 + local_138[4] + uVar5;
  uVar11 = uVar11 ^ uVar4;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar12 = uVar12 + local_138[8] + uVar6;
  uVar13 = uVar13 + local_138[2] + uVar14;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 ^ uVar12;
  uVar10 = uVar10 ^ uVar13;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar5 = uVar5 ^ local_78[3];
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar9 = uVar9 + uVar8;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar6 = uVar6 ^ uVar9;
  local_78[1] = local_78[1] + uVar10;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar14 = uVar14 ^ local_78[1];
  uVar12 = uVar12 + local_138[6] + uVar6;
  uVar15 = uVar14 >> 0x18 | uVar14 << 0x28;
  uVar8 = uVar8 ^ uVar12;
  uVar13 = uVar13 + local_138[10] + uVar15;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar10 = uVar10 ^ uVar13;
  uVar9 = uVar9 + uVar8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar6 = uVar6 ^ uVar9;
  local_78[1] = local_78[1] + uVar10;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar15 = uVar15 ^ local_78[1];
  uVar15 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar7 = uVar7 + local_138[6] + uVar15;
  uVar4 = uVar4 + local_138[14] + uVar3;
  uVar11 = uVar11 ^ uVar7;
  uVar8 = uVar8 ^ uVar4;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar12 = uVar12 + local_138[11] + uVar5;
  uVar9 = uVar9 + uVar11;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 ^ uVar12;
  uVar15 = uVar15 ^ uVar9;
  uVar3 = uVar3 ^ local_78[1];
  uVar15 = uVar15 >> 0x18 | uVar15 << 0x28;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar7 = uVar7 + local_138[15] + uVar15;
  uVar4 = uVar4 + local_138[9] + uVar3;
  uVar11 = uVar11 ^ uVar7;
  uVar8 = uVar8 ^ uVar4;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar9 = uVar9 + uVar11;
  local_78[1] = local_78[1] + uVar8;
  uVar15 = uVar15 ^ uVar9;
  uVar3 = uVar3 ^ local_78[1];
  uVar14 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  local_78[2] = local_78[2] + uVar10;
  uVar13 = uVar13 + local_138[0] + uVar6;
  uVar5 = uVar5 ^ local_78[2];
  uVar16 = uVar16 ^ uVar13;
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar7 = uVar7 + local_138[12] + uVar3;
  uVar15 = uVar16 << 0x20 | uVar16 >> 0x20;
  uVar12 = uVar12 + local_138[3] + uVar5;
  local_78[3] = local_78[3] + uVar15;
  uVar10 = uVar10 ^ uVar12;
  uVar6 = uVar6 ^ local_78[3];
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  local_78[2] = local_78[2] + uVar10;
  uVar13 = uVar13 + local_138[8] + uVar6;
  uVar5 = uVar5 ^ local_78[2];
  uVar15 = uVar15 ^ uVar13;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[3] = local_78[3] + uVar15;
  uVar15 = uVar15 ^ uVar7;
  uVar15 = uVar15 << 0x20 | uVar15 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[2] = local_78[2] + uVar15;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar4 = uVar4 + local_138[13] + uVar5;
  uVar7 = uVar7 + local_138[2] + uVar3;
  uVar11 = uVar11 ^ uVar4;
  uVar12 = uVar12 + local_138[1] + uVar6;
  uVar15 = uVar15 ^ uVar7;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar8 = uVar8 ^ uVar12;
  uVar16 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  local_78[2] = local_78[2] + uVar16;
  uVar5 = uVar5 ^ local_78[3];
  uVar9 = uVar9 + uVar8;
  uVar3 = uVar3 ^ local_78[2];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar6 = uVar6 ^ uVar9;
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar4 = uVar4 + local_138[7] + uVar5;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar11 = uVar11 ^ uVar4;
  uVar12 = uVar12 + local_138[4] + uVar6;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar8 = uVar8 ^ uVar12;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar5 = uVar5 ^ local_78[3];
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar9 = uVar9 + uVar8;
  uVar13 = uVar13 + local_138[10] + uVar14;
  uVar6 = uVar6 ^ uVar9;
  uVar10 = uVar10 ^ uVar13;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  local_78[1] = local_78[1] + uVar10;
  uVar14 = uVar14 ^ local_78[1];
  uVar15 = uVar14 >> 0x18 | uVar14 << 0x28;
  uVar13 = uVar13 + local_138[5] + uVar15;
  uVar10 = uVar10 ^ uVar13;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  local_78[1] = local_78[1] + uVar10;
  uVar15 = uVar15 ^ local_78[1];
  uVar15 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar7 = uVar7 + local_138[10] + uVar15;
  uVar11 = uVar11 ^ uVar7;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar9 = uVar9 + uVar11;
  uVar15 = uVar15 ^ uVar9;
  uVar15 = uVar15 >> 0x18 | uVar15 << 0x28;
  uVar7 = uVar7 + local_138[2] + uVar15;
  uVar11 = uVar11 ^ uVar7;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar9 = uVar9 + uVar11;
  uVar15 = uVar15 ^ uVar9;
  uVar14 = uVar15 << 1 | (ulong)((long)uVar15 < 0);
  uVar4 = uVar4 + local_138[8] + uVar3;
  uVar8 = uVar8 ^ uVar4;
  uVar12 = uVar12 + local_138[7] + uVar5;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar10 = uVar10 ^ uVar12;
  uVar13 = uVar13 + local_138[1] + uVar6;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar3 = uVar3 ^ local_78[1];
  local_78[2] = local_78[2] + uVar10;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar5 = uVar5 ^ local_78[2];
  uVar16 = uVar16 ^ uVar13;
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar4 = uVar4 + local_138[4] + uVar3;
  uVar15 = uVar16 << 0x20 | uVar16 >> 0x20;
  uVar8 = uVar8 ^ uVar4;
  uVar12 = uVar12 + local_138[6] + uVar5;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar10 = uVar10 ^ uVar12;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar3 = uVar3 ^ local_78[1];
  local_78[2] = local_78[2] + uVar10;
  uVar5 = uVar5 ^ local_78[2];
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  local_78[3] = local_78[3] + uVar15;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar6 = uVar6 ^ local_78[3];
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar7 = uVar7 + local_138[15] + uVar3;
  uVar13 = uVar13 + local_138[5] + uVar6;
  uVar4 = uVar4 + local_138[9] + uVar5;
  uVar15 = uVar15 ^ uVar13;
  uVar11 = uVar11 ^ uVar4;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x30;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  local_78[3] = local_78[3] + uVar15;
  uVar15 = uVar15 ^ uVar7;
  uVar15 = uVar15 << 0x20 | uVar15 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[3] = local_78[3] + uVar11;
  local_78[2] = local_78[2] + uVar15;
  uVar5 = uVar5 ^ local_78[3];
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar4 = uVar4 + local_138[14] + uVar5;
  uVar7 = uVar7 + local_138[11] + uVar3;
  uVar15 = uVar15 ^ uVar7;
  uVar16 = uVar15 >> 0x10 | uVar15 << 0x30;
  local_78[2] = local_78[2] + uVar16;
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar11 = uVar11 ^ uVar4;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar12 = uVar12 + local_138[3] + uVar6;
  uVar13 = uVar13 + local_138[13] + uVar14;
  local_78[3] = local_78[3] + uVar11;
  uVar8 = uVar8 ^ uVar12;
  uVar10 = uVar10 ^ uVar13;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar5 = uVar5 ^ local_78[3];
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar9 = uVar9 + uVar8;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar6 = uVar6 ^ uVar9;
  local_78[1] = local_78[1] + uVar10;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar14 = uVar14 ^ local_78[1];
  uVar15 = uVar12 + local_138[12] + uVar6;
  uVar14 = uVar14 >> 0x18 | uVar14 << 0x28;
  uVar8 = uVar8 ^ uVar15;
  uVar12 = uVar13 + local_138[0] + uVar14;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar10 = uVar10 ^ uVar12;
  uVar9 = uVar9 + uVar8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar6 = uVar6 ^ uVar9;
  local_78[1] = local_78[1] + uVar10;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar14 = uVar14 ^ local_78[1];
  uVar13 = uVar14 << 1 | (ulong)((long)uVar14 < 0);
  uVar7 = uVar7 + local_138[0] + uVar13;
  uVar4 = uVar4 + local_138[2] + uVar3;
  uVar11 = uVar11 ^ uVar7;
  uVar8 = uVar8 ^ uVar4;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
  uVar15 = uVar15 + local_138[4] + uVar5;
  uVar9 = uVar9 + uVar11;
  local_78[1] = local_78[1] + uVar8;
  uVar10 = uVar10 ^ uVar15;
  uVar13 = uVar13 ^ uVar9;
  uVar3 = uVar3 ^ local_78[1];
  uVar14 = uVar13 >> 0x18 | uVar13 << 0x28;
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar7 = uVar7 + local_138[1] + uVar14;
  uVar4 = uVar4 + local_138[3] + uVar3;
  uVar11 = uVar11 ^ uVar7;
  uVar8 = uVar8 ^ uVar4;
  uVar13 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar11 = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar9 = uVar9 + uVar13;
  local_78[1] = local_78[1] + uVar11;
  uVar14 = uVar14 ^ uVar9;
  uVar3 = uVar3 ^ local_78[1];
  uVar17 = uVar14 << 1 | (ulong)((long)uVar14 < 0);
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  local_78[2] = local_78[2] + uVar10;
  uVar12 = uVar12 + local_138[6] + uVar6;
  uVar5 = uVar5 ^ local_78[2];
  uVar16 = uVar16 ^ uVar12;
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar7 = uVar7 + local_138[8] + uVar3;
  uVar16 = uVar16 << 0x20 | uVar16 >> 0x20;
  uVar14 = uVar15 + local_138[5] + uVar5;
  local_78[3] = local_78[3] + uVar16;
  uVar10 = uVar10 ^ uVar14;
  uVar6 = uVar6 ^ local_78[3];
  uVar8 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  local_78[2] = local_78[2] + uVar8;
  uVar15 = uVar12 + local_138[7] + uVar6;
  uVar5 = uVar5 ^ local_78[2];
  uVar16 = uVar16 ^ uVar15;
  uVar5 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar10 = uVar16 >> 0x10 | uVar16 << 0x30;
  local_78[3] = local_78[3] + uVar10;
  uVar10 = uVar10 ^ uVar7;
  uVar16 = uVar10 << 0x20 | uVar10 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[2] = local_78[2] + uVar16;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar3 = uVar3 ^ local_78[2];
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar4 = uVar4 + local_138[10] + uVar5;
  uVar10 = uVar7 + local_138[9] + uVar3;
  uVar13 = uVar13 ^ uVar4;
  uVar12 = uVar14 + local_138[12] + uVar6;
  uVar16 = uVar16 ^ uVar10;
  uVar13 = uVar13 << 0x20 | uVar13 >> 0x20;
  uVar11 = uVar11 ^ uVar12;
  uVar18 = uVar16 >> 0x10 | uVar16 << 0x30;
  local_78[3] = local_78[3] + uVar13;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  local_78[2] = local_78[2] + uVar18;
  uVar5 = uVar5 ^ local_78[3];
  uVar9 = uVar9 + uVar11;
  uVar3 = uVar3 ^ local_78[2];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  uVar6 = uVar6 ^ uVar9;
  uVar3 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar7 = uVar4 + local_138[11] + uVar5;
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar13 = uVar13 ^ uVar7;
  uVar14 = uVar12 + local_138[13] + uVar6;
  uVar12 = uVar13 >> 0x10 | uVar13 << 0x30;
  uVar11 = uVar11 ^ uVar14;
  local_78[3] = local_78[3] + uVar12;
  uVar13 = uVar11 >> 0x10 | uVar11 << 0x30;
  uVar5 = uVar5 ^ local_78[3];
  uVar4 = uVar5 << 1 | (ulong)((long)uVar5 < 0);
  uVar9 = uVar9 + uVar13;
  uVar11 = uVar15 + local_138[14] + uVar17;
  uVar6 = uVar6 ^ uVar9;
  uVar8 = uVar8 ^ uVar11;
  uVar6 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar5 = uVar8 << 0x20 | uVar8 >> 0x20;
  local_78[1] = local_78[1] + uVar5;
  uVar17 = uVar17 ^ local_78[1];
  uVar8 = uVar17 >> 0x18 | uVar17 << 0x28;
  uVar15 = uVar11 + local_138[15] + uVar8;
  uVar5 = uVar5 ^ uVar15;
  uVar11 = uVar5 >> 0x10 | uVar5 << 0x30;
  local_78[1] = local_78[1] + uVar11;
  uVar8 = uVar8 ^ local_78[1];
  uVar8 = uVar8 << 1 | (ulong)((long)uVar8 < 0);
  uVar5 = uVar10 + local_138[14] + uVar8;
  uVar12 = uVar12 ^ uVar5;
  uVar10 = uVar12 << 0x20 | uVar12 >> 0x20;
  uVar9 = uVar9 + uVar10;
  uVar8 = uVar8 ^ uVar9;
  uVar16 = uVar8 >> 0x18 | uVar8 << 0x28;
  uVar8 = uVar5 + local_138[10] + uVar16;
  uVar10 = uVar10 ^ uVar8;
  uVar12 = uVar10 >> 0x10 | uVar10 << 0x30;
  uVar9 = uVar9 + uVar12;
  uVar16 = uVar16 ^ uVar9;
  uVar5 = uVar16 << 1 | (ulong)((long)uVar16 < 0);
  uVar10 = uVar7 + local_138[4] + uVar3;
  uVar14 = uVar14 + local_138[9] + uVar4;
  uVar13 = uVar13 ^ uVar10;
  uVar15 = uVar15 + local_138[13] + uVar6;
  uVar11 = uVar11 ^ uVar14;
  uVar13 = uVar13 << 0x20 | uVar13 >> 0x20;
  uVar18 = uVar18 ^ uVar15;
  uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
  local_78[1] = local_78[1] + uVar13;
  uVar16 = uVar18 << 0x20 | uVar18 >> 0x20;
  local_78[2] = local_78[2] + uVar11;
  uVar3 = uVar3 ^ local_78[1];
  uVar4 = uVar4 ^ local_78[2];
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  uVar7 = uVar4 >> 0x18 | uVar4 << 0x28;
  uVar10 = uVar10 + local_138[8] + uVar3;
  local_78[3] = local_78[3] + uVar16;
  uVar14 = uVar14 + local_138[15] + uVar7;
  uVar13 = uVar13 ^ uVar10;
  uVar11 = uVar11 ^ uVar14;
  uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x30;
  local_78[1] = local_78[1] + uVar13;
  local_78[2] = local_78[2] + uVar11;
  uVar3 = uVar3 ^ local_78[1];
  uVar7 = uVar7 ^ local_78[2];
  uVar4 = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar7 = uVar7 << 1 | (ulong)((long)uVar7 < 0);
  uVar6 = uVar6 ^ local_78[3];
  uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
  uVar8 = uVar8 + local_138[1] + uVar4;
  uVar15 = uVar15 + local_138[6] + uVar6;
  uVar16 = uVar16 ^ uVar15;
  uVar3 = uVar16 >> 0x10 | uVar16 << 0x30;
  local_78[3] = local_78[3] + uVar3;
  uVar3 = uVar3 ^ uVar8;
  uVar16 = uVar3 << 0x20 | uVar3 >> 0x20;
  uVar6 = uVar6 ^ local_78[3];
  local_78[2] = local_78[2] + uVar16;
  uVar3 = uVar6 << 1 | (ulong)((long)uVar6 < 0);
  uVar4 = uVar4 ^ local_78[2];
  uVar4 = uVar4 >> 0x18 | uVar4 << 0x28;
  uVar6 = uVar8 + local_138[12] + uVar4;
  uVar16 = uVar16 ^ uVar6;
  local_78[7] = uVar16 >> 0x10 | uVar16 << 0x30;
  local_78[2] = local_78[2] + local_78[7];
  uVar10 = uVar10 + local_138[0] + uVar7;
  local_78[2] = local_78[2] ^ uVar4;
  uVar12 = uVar12 ^ uVar10;
  uVar8 = uVar12 << 0x20 | uVar12 >> 0x20;
  local_b8[5] = local_78[2] << 1 | (ulong)((long)local_78[2] < 0);
  local_78[3] = local_78[3] + uVar8;
  uVar7 = uVar7 ^ local_78[3];
  uVar4 = uVar7 >> 0x18 | uVar7 << 0x28;
  local_b8[1] = uVar10 + local_138[2] + uVar4;
  uVar8 = local_b8[1] ^ uVar8;
  uVar10 = uVar14 + local_138[11] + uVar3;
  local_78[4] = uVar8 >> 0x10 | uVar8 << 0x30;
  uVar13 = uVar13 ^ uVar10;
  local_78[3] = local_78[3] + local_78[4];
  uVar7 = uVar13 << 0x20 | uVar13 >> 0x20;
  local_78[3] = local_78[3] ^ uVar4;
  uVar9 = uVar9 + uVar7;
  uVar3 = uVar3 ^ uVar9;
  local_b8[6] = local_78[3] << 1 | (ulong)((long)local_78[3] < 0);
  uVar3 = uVar3 >> 0x18 | uVar3 << 0x28;
  local_b8[2] = uVar10 + local_138[7] + uVar3;
  uVar7 = local_b8[2] ^ uVar7;
  local_78[5] = uVar7 >> 0x10 | uVar7 << 0x30;
  local_78[5] = local_78[5] + uVar9;
  uVar3 = uVar3 ^ local_78[5];
  local_b8[7] = uVar3 << 1 | (ulong)((long)uVar3 < 0);
  uVar9 = local_138[5] + uVar15 + uVar5;
  uVar11 = uVar11 ^ uVar9;
  uVar3 = uVar11 << 0x20 | uVar11 >> 0x20;
  local_78[1] = local_78[1] + uVar3;
  uVar5 = uVar5 ^ local_78[1];
  uVar5 = uVar5 >> 0x18 | uVar5 << 0x28;
  local_b8[3] = uVar9 + local_138[3] + uVar5;
  uVar3 = uVar3 ^ local_b8[3];
  lVar2 = 0;
  local_78[6] = uVar3 >> 0x10 | uVar3 << 0x30;
  local_78[1] = local_78[6] + local_78[1];
  local_78[1] = local_78[1] ^ uVar5;
  local_b8[4] = local_78[1] << 1 | (ulong)((long)local_78[1] < 0);
  while( true ) {
    puVar1 = (ulong *)(param_1 + lVar2 * 8);
    *puVar1 = *puVar1 ^ uVar6 ^ local_78[5];
    lVar2 = lVar2 + 1;
    if (lVar2 == 8) break;
    uVar6 = local_b8[lVar2];
    local_78[5] = local_78[lVar2];
  }
  return;
}


void FUN_00404c20(long param_1,void *param_2,size_t param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  
  lVar1 = param_1 + 0x60;
  lVar2 = *(long *)(param_1 + 0xe0);
  uVar4 = 0x80 - lVar2;
  pvVar5 = (void *)(lVar1 + lVar2);
  if (uVar4 < param_3) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    param_3 = lVar2 + -0x80 + param_3;
    memcpy(pvVar5,param_2,uVar4);
    uVar3 = *(long *)(param_1 + 0x40) + 0x80;
    *(ulong *)(param_1 + 0x40) = uVar3;
    param_2 = (void *)(uVar4 + (long)param_2);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (ulong)(uVar3 < 0x80);
    FUN_00403680(param_1,lVar1);
    if (param_3 < 0x81) {
      pvVar5 = (void *)(*(long *)(param_1 + 0xe0) + lVar1);
    }
    else {
      uVar4 = param_3 - 0x81 >> 7;
      pvVar6 = (void *)((uVar4 + 1) * 0x80 + (long)param_2);
      do {
        uVar3 = *(long *)(param_1 + 0x40) + 0x80;
        *(ulong *)(param_1 + 0x40) = uVar3;
        pvVar5 = (void *)((long)param_2 + 0x80);
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (ulong)(uVar3 < 0x80);
        FUN_00403680(param_1,param_2);
        param_2 = pvVar5;
      } while (pvVar6 != pvVar5);
      param_3 = (param_3 - 0x80) + uVar4 * -0x80;
      pvVar5 = (void *)(*(long *)(param_1 + 0xe0) + lVar1);
      param_2 = pvVar6;
    }
  }
  memcpy(pvVar5,param_2,param_3);
  *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + param_3;
  return;
}


undefined8 FUN_00404d50(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  param_1[8] = 0;
  uVar3 = 0x6a09e667f3bcc908;
  param_1[0x1e] = 0;
  puVar4 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8)) + 0xf8U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_1 = 0x6a09e667f3bcc908;
  param_1[1] = 0xbb67ae8584caa73b;
  param_1[2] = 0x3c6ef372fe94f82b;
  param_1[3] = 0xa54ff53a5f1d36f1;
  param_1[4] = 0x510e527fade682d1;
  param_1[5] = 0x9b05688c2b3e6c1f;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[7] = 0x5be0cd19137e2179;
  lVar1 = 0;
  while( true ) {
    param_1[lVar1] = uVar3 ^ *(ulong *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
    if (lVar1 == 8) break;
    uVar3 = param_1[lVar1];
  }
  param_1[0x1d] = (ulong)*param_2;
  return 0;
}


undefined8 FUN_00404e20(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined local_48;
  undefined8 local_47;
  undefined8 local_3f;
  undefined local_37;
  undefined8 local_36;
  undefined4 local_2e;
  undefined2 local_2a;
  undefined local_28 [16];
  undefined local_18 [16];
  
  if (param_2 - 1U < 0x40) {
    local_48 = (undefined)param_2;
    local_47 = 0x10100;
    local_3f = 0;
    local_37 = 0;
    local_36 = 0;
    local_2e = 0;
    local_2a = 0;
    local_28 = (undefined  [16])0x0;
    local_18 = (undefined  [16])0x0;
    uVar1 = FUN_00404d50(param_1,&local_48);
    return uVar1;
  }
  return 0xffffffff;
}


undefined8 FUN_00404e90(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined local_d8;
  undefined local_d7;
  undefined8 local_d6;
  undefined8 local_ce;
  undefined8 local_c6;
  undefined4 local_be;
  undefined2 local_ba;
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined8 local_98 [17];
  
  bVar5 = 0;
  if (((param_2 - 1U < 0x40) && (param_4 - 1U < 0x40)) && (param_3 != 0)) {
    local_d8 = (undefined)param_2;
    local_d7 = (undefined)param_4;
    local_d6 = 0x101;
    local_ce = 0;
    local_c6 = 0;
    local_be = 0;
    local_ba = 0;
    local_b8 = (undefined  [16])0x0;
    local_a8 = (undefined  [16])0x0;
    iVar1 = FUN_00404d50(param_1,&local_d8);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      puVar4 = local_98;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
      __memcpy_chk(local_98,param_3,param_4,0x80);
      FUN_00404c20(param_1,local_98,0x80);
      (*(code *)PTR_memset_0060e238)(local_98,0,0x80);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffff;
}


undefined8 FUN_00404f80(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_00404c20();
    return 0;
  }
  return 0;
}


undefined8 FUN_00404fa0(undefined8 *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [16];
  
  local_58 = (undefined  [16])0x0;
  local_48 = (undefined  [16])0x0;
  local_38 = (undefined  [16])0x0;
  local_28 = (undefined  [16])0x0;
  if (((param_2 == (void *)0x0) || (param_3 <= (ulong)param_1[0x1d] && param_1[0x1d] != param_3)) ||
     (param_1[10] != 0)) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar1 = param_1[0x1c];
    param_1[9] = param_1[9] + (ulong)CARRY8(uVar1,param_1[8]);
    param_1[8] = uVar1 + param_1[8];
    if (*(char *)(param_1 + 0x1e) != '\0') {
      param_1[0xb] = 0xffffffffffffffff;
    }
    param_1[10] = 0xffffffffffffffff;
    memset((void *)((long)(param_1 + 0xc) + uVar1),0,0x80 - uVar1);
    FUN_00403680(param_1,param_1 + 0xc);
    puVar2 = local_58;
    puVar5 = param_1;
    do {
      uVar4 = *puVar5;
      puVar3 = puVar2 + 8;
      puVar5 = puVar5 + 1;
      *puVar2 = (char)uVar4;
      puVar2[1] = (char)((ulong)uVar4 >> 8);
      puVar2[2] = (char)((ulong)uVar4 >> 0x10);
      puVar2[3] = (char)((ulong)uVar4 >> 0x18);
      puVar2[4] = (char)((ulong)uVar4 >> 0x20);
      puVar2[5] = (char)((ulong)uVar4 >> 0x28);
      puVar2[7] = (char)((ulong)uVar4 >> 0x38);
      puVar2[6] = (char)((ulong)uVar4 >> 0x30);
      puVar2 = puVar3;
    } while (puVar3 != &stack0xffffffffffffffe8);
    memcpy(param_2,local_58,param_1[0x1d]);
    (*(code *)PTR_memset_0060e238)(local_58,0,0x40);
    uVar4 = 0;
  }
  return uVar4;
}


undefined8
FUN_004050f0(long param_1,long param_2,long param_3,long param_4,long param_5,ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_128 [256];
  
  if ((((param_4 == 0 || param_3 != 0) && (param_1 != 0)) && ((param_5 != 0 || (param_6 == 0)))) &&
     ((param_2 - 1U < 0x40 && (param_6 < 0x41)))) {
    if (param_6 == 0) {
      iVar1 = FUN_00404e20(auStack_128);
    }
    else {
      iVar1 = FUN_00404e90(auStack_128,param_2,param_5,param_6);
    }
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      if (param_4 != 0) {
        FUN_00404c20(auStack_128,param_3,param_4);
      }
      FUN_00404fa0(auStack_128,param_1,param_2);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffff;
}


undefined8
thunk_FUN_004050f0(long param_1,long param_2,long param_3,long param_4,long param_5,ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_128 [256];
  
  if ((((param_4 == 0 || param_3 != 0) && (param_1 != 0)) && ((param_5 != 0 || (param_6 == 0)))) &&
     ((param_2 - 1U < 0x40 && (param_6 < 0x41)))) {
    if (param_6 == 0) {
      iVar1 = FUN_00404e20(auStack_128);
    }
    else {
      iVar1 = FUN_00404e90(auStack_128,param_2,param_5,param_6);
    }
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      if (param_4 != 0) {
        FUN_00404c20(auStack_128,param_3,param_4);
      }
      FUN_00404fa0(auStack_128,param_1,param_2);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffff;
}


undefined8 FUN_004051d0(FILE *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  void *__ptr;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auStack_138 [264];
  
  __ptr = malloc(0x8000);
  if (__ptr == (void *)0x0) {
    return 0xffffffff;
  }
  FUN_00404e20(auStack_138,param_3);
  do {
    lVar3 = 0;
LAB_00405229:
    sVar2 = fread((void *)((long)__ptr + lVar3),1,0x8000 - lVar3,param_1);
    lVar3 = lVar3 + sVar2;
    if (lVar3 != 0x8000) {
      if (sVar2 != 0) break;
      iVar1 = ferror(param_1);
      uVar4 = 0xffffffff;
      if (iVar1 != 0) goto LAB_00405283;
      goto LAB_0040526e;
    }
    FUN_00404f80(auStack_138,__ptr,0x8000);
  } while( true );
  iVar1 = feof(param_1);
  if (iVar1 != 0) {
LAB_0040526e:
    if (lVar3 != 0) {
      FUN_00404f80(auStack_138,__ptr,lVar3);
    }
    uVar4 = 0;
    FUN_00404fa0(auStack_138,param_2,param_3);
LAB_00405283:
    free(__ptr);
    return uVar4;
  }
  goto LAB_00405229;
}


void FUN_004052c0(void)

{
  FUN_00403280(1);
  return;
}


long FUN_004052d0(char *param_1,char **param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  size_t sVar4;
  long lVar5;
  void *__s2;
  char *__s1;
  long local_58;
  
  __n = strlen(param_1);
  __s1 = *param_2;
  local_58 = -1;
  lVar2 = local_58;
  if (__s1 != (char *)0x0) {
    bVar1 = false;
    lVar2 = 0;
    __s2 = param_3;
LAB_00405367:
    do {
      lVar5 = lVar2;
      iVar3 = strncmp(__s1,param_1,__n);
      if (iVar3 == 0) {
        sVar4 = strlen(__s1);
        if (sVar4 == __n) {
          return lVar5;
        }
        if (local_58 == -1) {
          __s2 = (void *)((long)__s2 + param_4);
          __s1 = param_2[lVar5 + 1];
          lVar2 = lVar5 + 1;
          local_58 = lVar5;
          if (__s1 == (char *)0x0) break;
          goto LAB_00405367;
        }
        if (param_3 == (void *)0x0) {
          bVar1 = true;
        }
        else {
          iVar3 = memcmp((void *)(local_58 * param_4 + (long)param_3),__s2,param_4);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
      }
      __s2 = (void *)((long)__s2 + param_4);
      __s1 = param_2[lVar5 + 1];
      lVar2 = lVar5 + 1;
    } while (__s1 != (char *)0x0);
    lVar2 = -2;
    if (!bVar1) {
      lVar2 = local_58;
    }
  }
  local_58 = lVar2;
  return local_58;
}


void FUN_004053f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == -1) {
    uVar1 = dcgettext(0,"invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext(0,"ambiguous argument %s for %s",5);
  }
  uVar2 = FUN_004073f0(1,param_1);
  uVar3 = FUN_004070e0(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}


void FUN_00405470(long *param_1,void *param_2,size_t param_3)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  void *__s2;
  long lVar5;
  void *__s1;
  
  __stream = stderr;
  __s1 = (void *)0x0;
  pcVar2 = (char *)dcgettext(0,"Valid arguments are:",5);
  lVar4 = 0;
  fputs_unlocked(pcVar2,__stream);
  lVar5 = *param_1;
  while (lVar5 != 0) {
    while ((__s2 = param_2, lVar4 == 0 || (iVar1 = memcmp(__s1,__s2,param_3), iVar1 != 0))) {
      lVar4 = lVar4 + 1;
      uVar3 = FUN_00407410(lVar5);
      __fprintf_chk(stderr,1,"\n  - %s",uVar3);
      lVar5 = param_1[lVar4];
      param_2 = (void *)((long)__s2 + param_3);
      __s1 = __s2;
      if (lVar5 == 0) goto LAB_00405540;
    }
    lVar4 = lVar4 + 1;
    param_2 = (void *)((long)__s2 + param_3);
    uVar3 = FUN_00407410(lVar5);
    __fprintf_chk(stderr,1,&DAT_0040ac1a,uVar3);
    lVar5 = param_1[lVar4];
  }
LAB_00405540:
  pcVar2 = stderr->_IO_write_ptr;
  if (pcVar2 < stderr->_IO_write_end) {
    stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  __overflow(stderr,10);
  return;
}


long FUN_00405590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = FUN_004052d0(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    FUN_004053f0(param_1,param_2,lVar1);
    FUN_00405470(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}


long FUN_00405600(void *param_1,long *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    param_2 = param_2 + 1;
    do {
      iVar1 = memcmp(param_1,param_3,param_4);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = *param_2;
      param_3 = (void *)((long)param_3 + param_4);
      param_2 = param_2 + 1;
    } while (lVar2 != 0);
  }
  return lVar2;
}


void FUN_00405650(undefined8 param_1)

{
  DAT_0060e330 = param_1;
  return;
}


void FUN_00405660(undefined param_1)

{
  DAT_0060e328 = param_1;
  return;
}


void FUN_00405670(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00409690(stdout);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    if ((DAT_0060e328 == '\0') || (*piVar2 != 0x20)) {
      uVar3 = dcgettext(0,"write error",5);
      if (DAT_0060e330 == 0) {
        error(0,*piVar2,&DAT_0040ac1c,uVar3);
      }
      else {
        uVar4 = FUN_00407260();
        error(0,*piVar2,"%s: %s",uVar4,uVar3);
      }
      goto LAB_004056ee;
    }
  }
  iVar1 = FUN_00409690(stderr);
  if (iVar1 == 0) {
    return;
  }
LAB_004056ee:
                    /* WARNING: Subroutine does not return */
  _exit(DAT_0060e250);
}


void FUN_00405720(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}


FILE * FUN_00405750(char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  FILE *pFVar4;
  int *piVar5;
  
  __stream = fopen(param_1,param_2);
  pFVar4 = __stream;
  if ((__stream != (FILE *)0x0) && (uVar1 = fileno(__stream), uVar1 < 3)) {
    iVar2 = FUN_00407430(uVar1);
    if (iVar2 < 0) {
      piVar5 = __errno_location();
      pFVar4 = (FILE *)0x0;
      iVar2 = *piVar5;
      FUN_004085e0(__stream);
      *piVar5 = iVar2;
    }
    else {
      iVar3 = FUN_004085e0(__stream);
      if ((iVar3 == 0) && (pFVar4 = fdopen(iVar2,param_2), pFVar4 != (FILE *)0x0)) {
        return pFVar4;
      }
      piVar5 = __errno_location();
      iVar3 = *piVar5;
      close(iVar2);
      *piVar5 = iVar3;
      pFVar4 = (FILE *)0x0;
    }
  }
  return pFVar4;
}


void FUN_004057f0(byte *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (param_1 == (byte *)0x0) {
    fwrite("A NULL argv[0] was passed through an exec system call.\n",1,0x37,stderr);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar2 = strrchr((char *)param_1,0x2f);
  if (pcVar2 != (char *)0x0) {
    pbVar1 = (byte *)(pcVar2 + 1);
    uVar4 = (long)pbVar1 - (long)param_1;
    bVar7 = uVar4 < 6;
    bVar9 = uVar4 == 6;
    if (6 < (long)uVar4) {
      lVar3 = 7;
      pbVar5 = (byte *)(pcVar2 + -6);
      pbVar6 = (byte *)"/.libs/";
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar7 = *pbVar5 < *pbVar6;
        bVar9 = *pbVar5 == *pbVar6;
        pbVar5 = pbVar5 + (ulong)bVar10 * -2 + 1;
        pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
      } while (bVar9);
      bVar8 = false;
      bVar7 = (!bVar7 && !bVar9) == bVar7;
      if (bVar7) {
        lVar3 = 3;
        pbVar5 = pbVar1;
        pbVar6 = &DAT_0040ac78;
        do {
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -1;
          bVar8 = *pbVar5 < *pbVar6;
          bVar7 = *pbVar5 == *pbVar6;
          pbVar5 = pbVar5 + (ulong)bVar10 * -2 + 1;
          pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
        } while (bVar7);
        param_1 = pbVar1;
        if ((!bVar8 && !bVar7) == bVar8) {
          param_1 = (byte *)(pcVar2 + 4);
          program_invocation_short_name = param_1;
        }
      }
    }
  }
  DAT_0060e338 = param_1;
  program_invocation_name = param_1;
  return;
}


char * FUN_00405890(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  
  pcVar2 = (char *)dcgettext(0,param_1,5);
  if (param_1 == pcVar2) {
    pbVar3 = (byte *)FUN_00409750();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) != 0x54) || ((pbVar3[2] & 0xdf) != 0x46)) || (pbVar3[3] != 0x2d)) ||
         ((pbVar3[4] != 0x38 || (pbVar3[5] != 0)))) {
LAB_00405968:
        pcVar2 = "\"";
        if (param_2 != 9) {
          pcVar2 = "\'";
        }
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040ac89;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040ac7e;
      }
    }
    else {
      if (((((*pbVar3 & 0xdf) != 0x47) || ((pbVar3[1] & 0xdf) != 0x42)) || (pbVar3[2] != 0x31)) ||
         (((pbVar3[3] != 0x38 || (pbVar3[4] != 0x30)) ||
          ((pbVar3[5] != 0x33 || ((pbVar3[6] != 0x30 || (pbVar3[7] != 0)))))))) goto LAB_00405968;
      cVar1 = *pcVar2;
      pcVar2 = &DAT_0040ac85;
      if (cVar1 != '`') {
        pcVar2 = &DAT_0040ac82;
      }
    }
  }
  return pcVar2;
}


ulong FUN_00405990(undefined *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
                  uint param_6,long param_7,char *param_8,char *param_9)

{
  byte *__s1;
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  ulong uVar9;
  ushort **ppuVar10;
  long lVar11;
  char *pcVar12;
  byte bVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  bool bVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  size_t local_a0;
  char *local_78;
  ulong local_70;
  bool local_5c;
  bool local_5b;
  wint_t local_44;
  mbstate_t local_40 [2];
  
  sVar8 = __ctype_get_mb_cur_max();
  uVar18 = param_6 & 2;
  local_5c = uVar18 != 0;
  uVar9 = param_2;
  switch(param_5) {
  case 0:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    local_5b = false;
    local_70 = 0;
    local_5c = false;
    bVar6 = false;
    local_a0 = 0;
    local_78 = (char *)0x0;
    break;
  case 2:
    if (uVar18 != 0) {
      bVar2 = true;
      bVar3 = false;
      uVar15 = 0;
      local_5b = false;
      local_70 = 0;
      local_5c = true;
      bVar6 = false;
      local_a0 = 1;
      local_78 = "\'";
      break;
    }
    bVar6 = false;
LAB_004065e1:
    if (param_2 != 0) {
      bVar3 = false;
      local_5b = false;
      bVar2 = true;
      local_70 = 0;
      goto LAB_00406216;
    }
    bVar2 = true;
    bVar3 = false;
    uVar15 = 1;
    param_5 = 2;
    local_70 = 0;
    local_5b = false;
    local_5c = false;
    local_a0 = 1;
    local_78 = "\'";
    break;
  case 3:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    param_5 = 2;
    local_5b = false;
    local_70 = 0;
    local_5c = true;
    bVar6 = true;
    local_a0 = 1;
    local_78 = "\'";
    break;
  case 4:
    if (uVar18 == 0) {
      bVar6 = true;
      goto LAB_004065e1;
    }
  case 1:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    param_5 = 2;
    local_5b = false;
    local_70 = 0;
    local_5c = true;
    bVar6 = false;
    local_a0 = 1;
    local_78 = "\'";
    break;
  case 5:
    if (uVar18 == 0) {
      if (param_2 != 0) {
        *param_1 = 0x22;
      }
      local_5b = false;
      local_70 = 0;
      bVar2 = true;
      bVar3 = false;
      local_5c = false;
      uVar15 = 1;
      bVar6 = true;
      local_a0 = 1;
      local_78 = "\"";
    }
    else {
      bVar2 = true;
      bVar3 = false;
      uVar15 = 0;
      local_5b = false;
      local_70 = 0;
      local_5c = true;
      bVar6 = true;
      local_a0 = 1;
      local_78 = "\"";
    }
    break;
  case 6:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    param_5 = 5;
    local_5b = false;
    local_70 = 0;
    local_5c = true;
    bVar6 = true;
    local_a0 = 1;
    local_78 = "\"";
    break;
  case 7:
    bVar2 = true;
    bVar3 = false;
    uVar15 = 0;
    local_5b = false;
    local_70 = 0;
    local_5c = false;
    bVar6 = true;
    local_a0 = 0;
    local_78 = (char *)0x0;
    break;
  case 8:
  case 9:
  case 10:
    if (param_5 != 10) {
      param_8 = (char *)FUN_00405890(&DAT_0040ac8d,param_5);
      param_9 = (char *)FUN_00405890(&DAT_0040c50f);
    }
    uVar15 = 0;
    if (uVar18 == 0) {
      cVar14 = *param_8;
      while (cVar14 != '\0') {
        if (uVar15 < param_2) {
          param_1[uVar15] = cVar14;
        }
        uVar15 = uVar15 + 1;
        cVar14 = param_8[uVar15];
      }
    }
    local_a0 = strlen(param_9);
    bVar2 = true;
    bVar3 = false;
    local_78 = param_9;
    local_5b = false;
    local_70 = 0;
    bVar6 = true;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_00405a28:
  uVar22 = 0;
  bVar5 = local_5b;
LAB_00405a38:
  bVar23 = param_4 != uVar22;
  if (param_4 == 0xffffffffffffffff) {
    bVar23 = param_3[uVar22] != '\0';
  }
  bVar26 = bVar6;
  if (!bVar23) goto LAB_004061b8;
  bVar20 = (bool)(param_5 != 2 & bVar6);
  __s1 = (byte *)(param_3 + uVar22);
  uVar16 = uVar15;
  bVar4 = bVar3;
  if (bVar20) {
    if (local_a0 == 0) {
LAB_00406130:
      uVar19 = (ulong)*__s1;
      switch(uVar19) {
      case 0:
        goto switchD_00406142_caseD_0;
      default:
        bVar20 = false;
        goto switchD_00405fae_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405e45;
      case 8:
        bVar17 = 0x62;
        break;
      case 9:
switchD_00406142_caseD_9:
        bVar17 = 0x74;
        break;
      case 10:
switchD_00406142_caseD_a:
        bVar17 = 0x6e;
        break;
      case 0xb:
switchD_00406142_caseD_b:
        bVar17 = 0x76;
        goto LAB_00405e45;
      case 0xc:
switchD_00406142_caseD_c:
        bVar17 = 0x66;
LAB_00405e45:
        if (local_5c) {
          bVar25 = false;
          goto LAB_00405d98;
        }
LAB_00405e50:
        bVar23 = false;
        goto LAB_00405c0b;
      case 0xd:
        bVar20 = false;
switchD_00405b28_caseD_d:
        bVar25 = param_5 == 2;
        uVar19 = 0xd;
        bVar13 = 0x72;
        goto LAB_00405d60;
      case 0x20:
        bVar25 = false;
LAB_0040618a:
        uVar19 = 0x20;
        goto LAB_00406152;
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x5b:
      case 0x5e:
      case 0x60:
      case 0x7c:
        bVar20 = false;
switchD_00405b28_caseD_21:
        bVar25 = false;
        goto LAB_00405d6b;
      case 0x23:
      case 0x7e:
        bVar26 = false;
LAB_0040616a:
        if (uVar22 == 0) {
          bVar25 = false;
          bVar23 = bVar20;
          bVar20 = bVar26;
          goto LAB_00405b78;
        }
        bVar23 = false;
        goto LAB_00405b8f;
      case 0x25:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
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
      case 0x3a:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
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
      case 0x5a:
      case 0x5d:
      case 0x5f:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
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
      case 0x7a:
        bVar25 = false;
LAB_00406152:
        bVar24 = false;
        bVar23 = bVar20;
        bVar20 = bVar25;
        goto LAB_00405b91;
      case 0x27:
        bVar20 = false;
        goto switchD_00405fae_caseD_27;
      case 0x3f:
        bVar20 = false;
        goto switchD_00405fae_caseD_3f;
      case 0x5c:
        bVar20 = false;
        goto switchD_00405b28_caseD_5c;
      case 0x7b:
      case 0x7d:
        bVar20 = false;
        goto switchD_00405fae_caseD_7b;
      }
      bVar25 = false;
      bVar23 = false;
      goto joined_r0x00405d87;
    }
    if ((param_4 == 0xffffffffffffffff) && (1 < local_a0)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar22 + local_a0) || (iVar7 = memcmp(__s1,local_78,local_a0), iVar7 != 0))
    goto LAB_00406130;
    if (!local_5c) {
      uVar19 = (ulong)*__s1;
      bVar25 = bVar20;
      switch(uVar19) {
      case 0:
        goto switchD_00405b28_caseD_0;
      default:
        goto switchD_00405fae_caseD_1;
      case 7:
        bVar17 = 0x61;
        goto LAB_00405e50;
      case 8:
        bVar25 = false;
        bVar23 = false;
        bVar17 = 0x62;
        break;
      case 9:
        goto switchD_00406142_caseD_9;
      case 10:
        goto switchD_00406142_caseD_a;
      case 0xb:
        goto switchD_00406142_caseD_b;
      case 0xc:
        goto switchD_00406142_caseD_c;
      case 0xd:
        goto switchD_00405b28_caseD_d;
      case 0x20:
        goto LAB_0040618a;
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x5b:
      case 0x5e:
      case 0x60:
      case 0x7c:
        goto switchD_00405b28_caseD_21;
      case 0x23:
      case 0x7e:
        bVar26 = bVar20;
        goto LAB_0040616a;
      case 0x25:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
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
      case 0x3a:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
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
      case 0x5a:
      case 0x5d:
      case 0x5f:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
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
      case 0x7a:
        goto LAB_00406152;
      case 0x27:
        goto switchD_00405fae_caseD_27;
      case 0x3f:
        goto switchD_00405fae_caseD_3f;
      case 0x5c:
        goto switchD_00405b28_caseD_5c;
      case 0x7b:
      case 0x7d:
        goto switchD_00405fae_caseD_7b;
      }
      goto LAB_00405bd2;
    }
    goto LAB_00405daa;
  }
  uVar19 = (ulong)*__s1;
  switch(uVar19) {
  case 0:
    if (bVar6) {
switchD_00406142_caseD_0:
      if (!local_5c) {
        bVar20 = false;
switchD_00405b28_caseD_0:
        bVar26 = param_5 == 2;
        bVar24 = (bool)((bVar3 ^ 1U) & bVar26);
        if (bVar24) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x27;
          }
          if (uVar15 + 1 < uVar9) {
            param_1[uVar15 + 1] = 0x24;
          }
          if (uVar15 + 2 < uVar9) {
            param_1[uVar15 + 2] = 0x27;
          }
          uVar16 = uVar15 + 3;
          bVar3 = bVar24;
          if (uVar9 <= uVar15 + 3) {
            uVar16 = uVar15 + 4;
            bVar23 = false;
            bVar17 = 0x30;
            bVar4 = bVar24;
            goto LAB_00405c88;
          }
LAB_00405eca:
          param_1[uVar16] = 0x5c;
          uVar15 = uVar16;
        }
        else if (uVar15 < uVar9) goto LAB_00405eca;
        uVar16 = uVar15 + 1;
        bVar24 = bVar23;
        if (param_5 == 2) {
          bVar17 = 0x30;
          bVar23 = false;
          bVar4 = bVar3;
          goto LAB_00405c88;
        }
        uVar19 = 0x30;
        if ((uVar22 + 1 < param_4) && ((byte)(param_3[uVar22 + 1] - 0x30U) < 10)) {
          if (uVar16 < uVar9) {
            param_1[uVar16] = 0x30;
          }
          if (uVar15 + 2 < uVar9) {
            param_1[uVar15 + 2] = 0x30;
          }
          uVar16 = uVar15 + 3;
          uVar19 = 0x30;
        }
LAB_00405f09:
        bVar17 = (byte)uVar19;
        bVar23 = false;
        uVar15 = uVar16;
        bVar4 = bVar3;
        if ((bool)(bVar6 ^ 1U | bVar26)) goto LAB_00405c88;
        goto LAB_00405b91;
      }
      bVar26 = param_5 == 2;
      goto LAB_00405d9c;
    }
    if ((param_6 & 1) == 0) {
      bVar25 = param_5 == 2;
      uVar19 = 0;
      bVar23 = false;
      bVar20 = false;
      goto LAB_00405b78;
    }
    uVar22 = uVar22 + 1;
    goto LAB_00405a38;
  default:
switchD_00405fae_caseD_1:
    bVar25 = bVar6;
    if (sVar8 != 1) {
      local_40[0] = (mbstate_t)0x0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar21 = 0;
      do {
        uVar1 = uVar22 + uVar21;
        lVar11 = FUN_00409610(&local_44,param_3 + uVar1,param_4 - uVar1,local_40);
        if (lVar11 == 0) break;
        if (lVar11 == -1) {
          bVar23 = false;
          goto LAB_004068ba;
        }
        if (lVar11 == -2) {
          if ((param_4 <= uVar1) || (param_3[uVar1] == '\0')) goto LAB_004069f7;
          goto LAB_004069e7;
        }
        if (((param_5 == 2) && (local_5c)) && (lVar11 != 1)) {
          pcVar12 = param_3 + uVar1 + 1;
          do {
            if (((byte)(*pcVar12 + 0xa5U) < 0x22) &&
               ((1L << (*pcVar12 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
              param_5 = 2;
              goto LAB_00405d9c;
            }
            pcVar12 = pcVar12 + 1;
          } while (param_3 + uVar1 + lVar11 != pcVar12);
        }
        iVar7 = iswprint(local_44);
        if (iVar7 == 0) {
          bVar23 = false;
        }
        uVar21 = uVar21 + lVar11;
        iVar7 = mbsinit(local_40);
      } while (iVar7 == 0);
      bVar25 = (bool)((bVar23 ^ 1U) & bVar6);
      goto LAB_004068ba;
    }
    ppuVar10 = __ctype_b_loc();
    uVar21 = 1;
    bVar25 = ((*ppuVar10)[uVar19] & 0x4000) == 0;
    bVar23 = !bVar25;
    bVar25 = (bool)(bVar25 & bVar6);
    goto LAB_00405f84;
  case 7:
    bVar25 = param_5 == 2;
    uVar19 = 7;
    bVar13 = 0x61;
    break;
  case 8:
    bVar25 = param_5 == 2;
    uVar19 = 8;
    bVar13 = 0x62;
    break;
  case 9:
    uVar19 = 9;
    bVar13 = 0x74;
    goto LAB_00405fc2;
  case 10:
    uVar19 = 10;
    bVar13 = 0x6e;
    goto LAB_00405fc2;
  case 0xb:
    bVar25 = param_5 == 2;
    uVar19 = 0xb;
    bVar13 = 0x76;
    break;
  case 0xc:
    bVar25 = param_5 == 2;
    uVar19 = 0xc;
    bVar13 = 0x66;
    break;
  case 0xd:
    uVar19 = 0xd;
    bVar13 = 0x72;
LAB_00405fc2:
    bVar25 = param_5 == 2;
    bVar20 = (bool)(local_5c & bVar25);
    if (bVar20) {
LAB_00405fda:
      param_5 = 2;
      goto LAB_00405d9c;
    }
    break;
  case 0x20:
    uVar19 = 0x20;
    goto LAB_00405b66;
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x5b:
  case 0x5e:
  case 0x60:
  case 0x7c:
    bVar23 = false;
LAB_00405b66:
    bVar25 = param_5 == 2;
    if ((local_5c) && (bVar25)) goto LAB_00405fda;
    goto LAB_00405b78;
  case 0x23:
  case 0x7e:
LAB_00405b5d:
    bVar25 = param_5 == 2;
    if (uVar22 == 0) goto LAB_00405b66;
    goto LAB_00405d6b;
  case 0x25:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
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
  case 0x3a:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
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
  case 0x5a:
  case 0x5d:
  case 0x5f:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
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
  case 0x7a:
    goto switchD_00405fae_caseD_25;
  case 0x27:
switchD_00405fae_caseD_27:
    bVar5 = bVar23;
    if (param_5 != 2) {
      bVar25 = false;
      uVar19 = 0x27;
      goto LAB_00405b78;
    }
    if (!local_5c) {
      if ((uVar9 == 0) || (uVar19 = 0, uVar21 = uVar9, local_70 != 0)) {
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x27;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = 0x5c;
        }
        uVar19 = uVar9;
        uVar21 = local_70;
        if (uVar15 + 2 < uVar9) {
          param_1[uVar15 + 2] = 0x27;
        }
      }
      uVar16 = uVar15 + 3;
      bVar17 = 0x27;
      uVar9 = uVar19;
      local_70 = uVar21;
      bVar24 = false;
      bVar4 = false;
      goto LAB_00405c88;
    }
    goto LAB_00405d9c;
  case 0x3f:
switchD_00405fae_caseD_3f:
    if (param_5 == 2) {
      if (!local_5c) {
        bVar17 = 0x3f;
        bVar24 = false;
        bVar23 = false;
        goto LAB_00405c88;
      }
      goto LAB_00405d9c;
    }
    if (param_5 != 5) {
      bVar25 = param_5 == 2;
      uVar19 = 0x3f;
      bVar23 = false;
      goto LAB_00405b78;
    }
    if (((((param_6 & 4) != 0) && (uVar21 = uVar22 + 2, uVar21 < param_4)) &&
        (param_3[uVar22 + 1] == '?')) &&
       ((uVar19 = (ulong)(byte)param_3[uVar21], (byte)param_3[uVar21] < 0x3f &&
        ((0x7000a38200000000U >> (uVar19 & 0x3f) & 1) != 0)))) {
      if (!local_5c) {
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x3f;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = 0x22;
        }
        if (uVar15 + 2 < uVar9) {
          param_1[uVar15 + 2] = 0x22;
        }
        if (uVar15 + 3 < uVar9) {
          param_1[uVar15 + 3] = 0x3f;
        }
        uVar16 = uVar15 + 4;
        bVar26 = false;
        uVar22 = uVar21;
        bVar24 = false;
        goto LAB_00405f09;
      }
      goto LAB_00405daa;
    }
    bVar25 = false;
    uVar19 = 0x3f;
    bVar23 = false;
    goto LAB_00405b78;
  case 0x5c:
    if (param_5 != 2) {
switchD_00405b28_caseD_5c:
      uVar19 = 0x5c;
      bVar17 = 0x5c;
      bVar13 = 0x5c;
      bVar25 = (bool)(bVar6 & local_5c & local_a0 != 0);
      if (!bVar25) break;
      uVar22 = uVar22 + 1;
      bVar23 = false;
      goto LAB_00405ca4;
    }
    if (local_5c) goto LAB_00405d9c;
    uVar22 = uVar22 + 1;
    bVar23 = false;
    bVar17 = 0x5c;
    goto LAB_00405ca4;
  case 0x7b:
  case 0x7d:
switchD_00405fae_caseD_7b:
    bVar24 = param_4 != 1;
    if (param_4 == 0xffffffffffffffff) {
      bVar24 = param_3[1] != '\0';
    }
    bVar25 = param_5 == 2;
    if (!bVar24) goto LAB_00405b5d;
    goto LAB_00405d6b;
  }
LAB_00405d60:
  if (!bVar6) {
LAB_00405d6b:
    bVar23 = false;
    goto LAB_00405b78;
  }
  bVar23 = false;
  bVar17 = bVar13;
  goto joined_r0x00405d87;
LAB_004061b8:
  if ((uVar15 == 0) && ((bool)(local_5c & param_5 == 2))) {
    param_5 = 2;
LAB_00405d9c:
    if (bVar26) {
      param_5 = 4;
    }
LAB_00405daa:
    uVar9 = FUN_00405990(param_1,uVar9,param_3,param_4,param_5,param_6 & 0xfffffffd,0,param_8,
                         param_9);
    return uVar9;
  }
  bVar26 = (bool)(param_5 == 2 & (local_5c ^ 1U));
  bVar23 = (bool)(local_5c ^ 1U);
  if ((!bVar26) || (bVar23 = bVar26, !bVar5)) {
LAB_00406a8d:
    uVar22 = uVar15;
    if (((local_78 != (char *)0x0) && (bVar23)) && (cVar14 = *local_78, cVar14 != '\0')) {
      do {
        if (uVar22 < uVar9) {
          param_1[uVar22] = cVar14;
        }
        uVar22 = uVar22 + 1;
        cVar14 = local_78[uVar22 - uVar15];
      } while (cVar14 != '\0');
    }
    if (uVar22 < uVar9) {
      param_1[uVar22] = 0;
    }
    return uVar22;
  }
  if (bVar2) {
    uVar9 = FUN_00405990(param_1,local_70,param_3,param_4,5,param_6,param_7,param_8,param_9);
    return uVar9;
  }
  local_5b = uVar9 == 0 && local_70 != 0;
  param_2 = local_70;
  bVar23 = bVar5;
  if (uVar9 != 0 || local_70 == 0) goto LAB_00406a8d;
LAB_00406216:
  *param_1 = 0x27;
  param_5 = 2;
  uVar15 = 1;
  local_78 = "\'";
  local_a0 = 1;
  local_5c = false;
  uVar9 = param_2;
  goto LAB_00405a28;
  while (__s1[uVar21] != 0) {
LAB_004069e7:
    uVar21 = uVar21 + 1;
    if (param_4 <= uVar22 + uVar21) break;
  }
LAB_004069f7:
  bVar23 = false;
LAB_004068ba:
  if (1 < uVar21) {
LAB_0040647e:
    bVar26 = false;
    uVar21 = uVar21 + uVar22;
    uVar16 = uVar22;
    do {
      bVar17 = (byte)uVar19;
      if (bVar25) {
        bVar26 = param_5 == 2;
        if (local_5c) goto LAB_00405d9c;
        bVar26 = (bool)(bVar26 & (bVar4 ^ 1U));
        if (bVar26) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x27;
          }
          if (uVar15 + 1 < uVar9) {
            param_1[uVar15 + 1] = 0x24;
          }
          if (uVar15 + 2 < uVar9) {
            param_1[uVar15 + 2] = 0x27;
          }
          uVar15 = uVar15 + 3;
          bVar4 = bVar26;
        }
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x5c;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = (char)(uVar19 >> 6) + '0';
        }
        if (uVar15 + 2 < uVar9) {
          param_1[uVar15 + 2] = ((byte)(uVar19 >> 3) & 7) + 0x30;
        }
        uVar22 = uVar16 + 1;
        uVar15 = uVar15 + 3;
        bVar17 = (bVar17 & 7) + 0x30;
        bVar26 = bVar25;
        if (uVar21 <= uVar22) goto LAB_00405c1d;
      }
      else {
        bVar3 = (bool)((bVar26 ^ 1U) & bVar4);
        if (bVar20) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x5c;
          }
          uVar15 = uVar15 + 1;
        }
        uVar22 = uVar16 + 1;
        if (uVar21 <= uVar22) goto LAB_00405ca4;
        if (bVar3) {
          if (uVar15 < uVar9) {
            param_1[uVar15] = 0x27;
          }
          if (uVar15 + 1 < uVar9) {
            param_1[uVar15 + 1] = 0x27;
          }
          uVar15 = uVar15 + 2;
          bVar20 = false;
          bVar4 = false;
        }
        else {
          bVar20 = false;
        }
      }
      uVar16 = uVar16 + 1;
      if (uVar15 < uVar9) {
        param_1[uVar15] = bVar17;
      }
      uVar19 = (ulong)(byte)param_3[uVar16];
      uVar15 = uVar15 + 1;
    } while( true );
  }
LAB_00405f84:
  if (bVar25) {
    bVar23 = false;
    bVar25 = bVar6;
    goto LAB_0040647e;
  }
switchD_00405fae_caseD_25:
  bVar25 = param_5 == 2;
LAB_00405b78:
  bVar17 = (byte)uVar19;
  bVar24 = (bool)((bVar6 ^ 1U | bVar25) ^ 1 | local_5c);
  bVar26 = bVar20;
  if (bVar24) {
LAB_00405b8f:
    bVar24 = false;
    bVar20 = bVar26;
LAB_00405b91:
    bVar17 = (byte)uVar19;
    uVar16 = uVar15;
    bVar4 = bVar3;
    if ((param_7 == 0) || ((*(uint *)(param_7 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) == 0))
    goto LAB_00405c88;
    bVar25 = param_5 == 2;
  }
  else {
LAB_00405c88:
    bVar25 = param_5 == 2;
    uVar15 = uVar16;
    bVar3 = bVar4;
    if (!bVar20) {
      uVar22 = uVar22 + 1;
      bVar3 = (bool)((bVar24 ^ 1U) & bVar4);
LAB_00405ca4:
      if (bVar3) {
        if (uVar15 < uVar9) {
          param_1[uVar15] = 0x27;
        }
        if (uVar15 + 1 < uVar9) {
          param_1[uVar15 + 1] = 0x27;
        }
        uVar15 = uVar15 + 2;
        bVar4 = false;
      }
      goto LAB_00405c1d;
    }
  }
joined_r0x00405d87:
  if (local_5c) {
LAB_00405d98:
    bVar26 = (bool)(bVar6 & bVar25);
    goto LAB_00405d9c;
  }
LAB_00405bd2:
  bVar25 = (bool)((bVar3 ^ 1U) & bVar25);
  if (bVar25) {
    if (uVar15 < uVar9) {
      param_1[uVar15] = 0x27;
    }
    if (uVar15 + 1 < uVar9) {
      param_1[uVar15 + 1] = 0x24;
    }
    if (uVar15 + 2 < uVar9) {
      param_1[uVar15 + 2] = 0x27;
    }
    uVar15 = uVar15 + 3;
    bVar3 = bVar25;
  }
LAB_00405c0b:
  if (uVar15 < uVar9) {
    param_1[uVar15] = 0x5c;
  }
  uVar15 = uVar15 + 1;
  uVar22 = uVar22 + 1;
  bVar4 = bVar3;
LAB_00405c1d:
  bVar3 = bVar4;
  if (uVar15 < uVar9) {
    param_1[uVar15] = bVar17;
  }
  uVar15 = uVar15 + 1;
  if (!bVar23) {
    bVar2 = false;
  }
  goto LAB_00405a38;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00406bc0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined *__ptr;
  ulong *puVar10;
  
  piVar7 = __errno_location();
  iVar1 = *piVar7;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (undefined4 *)PTR_DAT_0060e298;
  if (DAT_0060e2b0 <= param_1) {
    if (param_1 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00407c30();
    }
    if (PTR_DAT_0060e298 == &DAT_0060e2a0) {
      puVar8 = (undefined4 *)FUN_00407a40(0);
      uVar6 = PTR_DAT_0060e2a8._4_4_;
      uVar5 = PTR_DAT_0060e2a8._0_4_;
      uVar3 = _UNK_0060e2a4;
      PTR_DAT_0060e298 = (undefined *)puVar8;
      *puVar8 = _DAT_0060e2a0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
    }
    else {
      puVar8 = (undefined4 *)FUN_00407a40(PTR_DAT_0060e298);
      PTR_DAT_0060e298 = (undefined *)puVar8;
    }
    memset(puVar8 + (long)DAT_0060e2b0 * 4,0,(long)((param_1 + 1) - DAT_0060e2b0) << 4);
    DAT_0060e2b0 = param_1 + 1;
  }
  uVar2 = param_4[1];
  puVar10 = (ulong *)(puVar8 + (long)param_1 * 4);
  uVar4 = *puVar10;
  __ptr = (undefined *)puVar10[1];
  uVar9 = FUN_00405990(__ptr,uVar4,param_2,param_3,*param_4,uVar2 | 1,param_4 + 2,
                       *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar4 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar10 = uVar9;
    if (__ptr != &DAT_0060e340) {
      free(__ptr);
    }
    __ptr = (undefined *)FUN_004079e0(uVar9);
    uVar3 = *param_4;
    puVar10[1] = (ulong)__ptr;
    FUN_00405990(__ptr,uVar9,param_2,param_3,uVar3,uVar2 | 1,param_4 + 2,
                 *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar1;
  return __ptr;
}


void FUN_00406d60(undefined *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e440;
  }
  FUN_00407be0(param_1,0x38);
  *piVar2 = iVar1;
  return;
}


undefined4 FUN_00406da0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e440;
  }
  return *param_1;
}


void FUN_00406db0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e440;
  }
  *param_1 = param_2;
  return;
}


uint FUN_00406dc0(undefined *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e440;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  uVar2 = uVar1 >> (param_2 & 0x1f);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       ((param_3 ^ uVar2) & 1) << (param_2 & 0x1f) ^ uVar1;
  return uVar2 & 1;
}


undefined4 FUN_00406e00(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_0060e440;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}


void FUN_00406e20(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)&DAT_0060e440;
  }
  *param_1 = 10;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(long *)(param_1 + 10) = param_2;
    *(long *)(param_1 + 0xc) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00406e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = (undefined4 *)&DAT_0060e440;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  FUN_00405990(param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
               *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}


undefined8 FUN_00406ed0(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)&DAT_0060e440;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = FUN_00405990(0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                       *(undefined8 *)(param_4 + 0xc));
  uVar4 = FUN_004079e0(lVar3 + 1);
  FUN_00405990(uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
               *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}


void FUN_00406fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00406ed0(param_1,param_2,0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406fd0(void)

{
  void **ppvVar1;
  void *__ptr;
  undefined *__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = PTR_DAT_0060e298;
  if (1 < DAT_0060e2b0) {
    ppvVar2 = (void **)(PTR_DAT_0060e298 + 0x18);
    ppvVar1 = (void **)(PTR_DAT_0060e298 + (ulong)(DAT_0060e2b0 - 2) * 0x10 + 0x28);
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 2;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  if (*(undefined **)(__ptr_00 + 8) != &DAT_0060e340) {
    free(*(undefined **)(__ptr_00 + 8));
    _DAT_0060e2a0 = 0x100;
    PTR_DAT_0060e2a8 = &DAT_0060e340;
  }
  if (__ptr_00 != &DAT_0060e2a0) {
    free(__ptr_00);
    PTR_DAT_0060e298 = &DAT_0060e2a0;
  }
  DAT_0060e2b0 = 1;
  return;
}


void FUN_00407070(undefined8 param_1,undefined8 param_2)

{
  FUN_00406bc0(param_1,param_2,0xffffffffffffffff,&DAT_0060e440);
  return;
}


void FUN_00407090(void)

{
  FUN_00406bc0();
  return;
}


void FUN_004070a0(undefined8 param_1)

{
  FUN_00406bc0(0,param_1,0xffffffffffffffff,&DAT_0060e440);
  return;
}


void FUN_004070c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00406bc0(0,param_1,param_2,&DAT_0060e440);
  return;
}


void FUN_004070e0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 10) {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_00406bc0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407150(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 10) {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_00406bc0(param_1,param_3,param_4,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_004071c0(undefined4 param_1,undefined8 param_2)

{
  FUN_004070e0(0,param_1,param_2);
  return;
}


void FUN_004071d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00407150(0,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004071e0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = DAT_0060e470;
  local_48 = _DAT_0060e440;
  uStack_40 = uRam000000000060e448;
  local_38 = _DAT_0060e450;
  uStack_30 = uRam000000000060e458;
  puVar1 = (uint *)((long)&uStack_40 + (ulong)(param_3 >> 5) * 4);
  local_28 = _DAT_0060e460;
  uStack_20 = uRam000000000060e468;
  uVar2 = *puVar1;
  *puVar1 = (~(uVar2 >> (param_3 & 0x1f)) & 1) << (param_3 & 0x1f) ^ uVar2;
  FUN_00406bc0(0,param_1,param_2,&local_48);
  return;
}


void FUN_00407250(undefined8 param_1,char param_2)

{
  FUN_004071e0(param_1,0xffffffffffffffff,(int)param_2);
  return;
}


void FUN_00407260(undefined8 param_1)

{
  FUN_004071e0(param_1,0xffffffffffffffff,0x3a);
  return;
}


void FUN_00407280(undefined8 param_1,undefined8 param_2)

{
  FUN_004071e0(param_1,param_2,0x3a);
  return;
}


void FUN_00407290(undefined8 param_1,int param_2,undefined8 param_3)

{
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != 10) {
    local_40 = 0x400000000000000;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = param_2;
    FUN_00406bc0(param_1,param_3,0xffffffffffffffff,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407300(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  
  uStack_40 = uRam000000000060e448;
  local_38 = _DAT_0060e450;
  uStack_30 = uRam000000000060e458;
  local_28 = _DAT_0060e460;
  lStack_20 = uRam000000000060e468;
  local_18 = DAT_0060e470;
  local_48 = CONCAT44((int)((ulong)_DAT_0060e440 >> 0x20),10);
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    FUN_00406bc0(param_1,param_4,param_5,&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


void FUN_00407370(void)

{
  FUN_00407300();
  return;
}


void FUN_00407380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00407300(0,param_1,param_2,param_3,0xffffffffffffffff);
  return;
}


void FUN_004073a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00407300(0,param_1,param_2,param_3,param_4);
  return;
}


void FUN_004073c0(void)

{
  FUN_00406bc0();
  return;
}


void FUN_004073d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00406bc0(0,param_1,param_2,&DAT_0060e260);
  return;
}


void FUN_004073f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00406bc0(param_1,param_2,0xffffffffffffffff,&DAT_0060e260);
  return;
}


void FUN_00407410(undefined8 param_1)

{
  FUN_00406bc0(0,param_1,0xffffffffffffffff,&DAT_0060e260);
  return;
}


void FUN_00407430(undefined8 param_1)

{
  FUN_00408660(param_1,0,3);
  return;
}


undefined8
FUN_00407440(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (param_2 == 0) {
    __fprintf_chk(param_1,1,"%s %s\n",param_3,param_4);
  }
  else {
    __fprintf_chk(param_1,1,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar1 = dcgettext(0,&DAT_0040b9cb,5);
  __fprintf_chk(param_1,1,"Copyright %s %d Free Software Foundation, Inc.",uVar1,0x7e1);
  pcVar2 = (char *)dcgettext(0,
                             "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n"
                             ,5);
  fputs_unlocked(pcVar2,param_1);
  switch(param_6) {
  case 0:
                    /* WARNING: Subroutine does not return */
    abort();
  case 1:
    uVar1 = *param_5;
    uVar4 = dcgettext(0,"Written by %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar4,uVar1);
    return uVar1;
  case 2:
    uVar1 = param_5[1];
    uVar4 = *param_5;
    uVar5 = dcgettext(0,"Written by %s and %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar5,uVar4,uVar1);
    return uVar1;
  case 3:
    uVar1 = param_5[2];
    uVar4 = param_5[1];
    uVar5 = *param_5;
    uVar6 = dcgettext(0,"Written by %s, %s, and %s.\n",5);
    uVar1 = __fprintf_chk(param_1,1,uVar6,uVar5,uVar4,uVar1);
    return uVar1;
  case 4:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\nand %s.\n",5);
    goto LAB_004076bc;
  case 5:
    uVar1 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = param_5[1];
    uVar6 = *param_5;
    uVar7 = dcgettext(0,"Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_004076bc:
    __fprintf_chk(param_1,1,uVar7,uVar6,uVar5,uVar4);
    return uVar1;
  case 6:
    local_58 = param_5[1];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar1 = param_5[2];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    goto LAB_00407759;
  case 7:
    uVar1 = param_5[2];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    local_58 = param_5[1];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_00407759:
    uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_58,uVar1,uVar6,uVar5,uVar4);
    return uVar1;
  case 8:
    local_48 = param_5[7];
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar7 = *param_5;
    uVar3 = dcgettext(0,"Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    goto LAB_0040753a;
  case 9:
    local_48 = param_5[7];
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar7 = *param_5;
    break;
  default:
    local_48 = param_5[7];
    pcVar2 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    local_58 = param_5[2];
    local_50 = param_5[1];
    uVar1 = param_5[6];
    uVar4 = param_5[5];
    uVar5 = param_5[4];
    uVar6 = param_5[3];
    uVar7 = *param_5;
  }
  uVar3 = dcgettext(0,pcVar2,5);
LAB_0040753a:
  uVar1 = __fprintf_chk(param_1,1,uVar3,uVar7,local_50,local_58,uVar6,uVar5,uVar4,uVar1,local_48);
  return uVar1;
}


void FUN_00407820(void)

{
  long lVar1;
  long *in_R8;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = *in_R8;
  while (lVar1 != 0) {
    lVar2 = lVar2 + 1;
    lVar1 = in_R8[lVar2];
  }
  FUN_00407440();
  return;
}


void FUN_00407840(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint *in_R8;
  long lVar4;
  long local_58 [11];
  
  lVar4 = 0;
  do {
    uVar1 = *in_R8;
    if (uVar1 < 0x30) {
      *in_R8 = uVar1 + 8;
      lVar3 = *(long *)((ulong)uVar1 + *(long *)(in_R8 + 4));
      local_58[lVar4] = lVar3;
    }
    else {
      plVar2 = *(long **)(in_R8 + 2);
      *(long **)(in_R8 + 2) = plVar2 + 1;
      lVar3 = *plVar2;
      local_58[lVar4] = lVar3;
    }
  } while ((lVar3 != 0) && (lVar4 = lVar4 + 1, lVar4 != 10));
  FUN_00407440();
  return;
}


void FUN_004078a0(void)

{
  long lVar1;
  undefined8 in_R8;
  ulong uVar2;
  undefined8 in_R9;
  long lVar3;
  long *plVar4;
  long local_88 [10];
  long local_38 [4];
  long local_18 [3];
  
  local_18[0] = in_R8;
  plVar4 = (long *)&stack0x00000008;
  uVar2 = 0x20;
  local_18[1] = in_R9;
  lVar3 = 0;
  do {
    if ((uint)uVar2 < 0x30) {
      lVar1 = *(long *)((long)local_38 + uVar2);
      local_88[lVar3] = lVar1;
      uVar2 = (ulong)((uint)uVar2 + 8);
    }
    else {
      lVar1 = *plVar4;
      local_88[lVar3] = lVar1;
      plVar4 = plVar4 + 1;
    }
  } while ((lVar1 != 0) && (lVar3 = lVar3 + 1, lVar3 != 10));
  FUN_00407440();
  return;
}


void FUN_00407960(void)

{
  FILE *__stream;
  undefined8 uVar1;
  char *__s;
  
  uVar1 = dcgettext(0,"\nReport bugs to: %s\n",5);
  __printf_chk(1,uVar1,"bug-coreutils@gnu.org");
  uVar1 = dcgettext(0,"%s home page: <%s>\n",5);
  __printf_chk(1,uVar1,"GNU coreutils","https://www.gnu.org/software/coreutils/");
  __stream = stdout;
  __s = (char *)dcgettext(0,"General help using GNU software: <https://www.gnu.org/gethelp/>\n",5);
  fputs_unlocked(__s,__stream);
  return;
}


void FUN_004079e0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00407c30();
  }
  return;
}


void FUN_00407a00(ulong param_1,ulong param_2)

{
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    FUN_004079e0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00407c30();
}


void thunk_FUN_004079e0(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00407c30();
  }
  return;
}


void * FUN_00407a40(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) && (param_1 != (void *)0x0)) {
    free(param_1);
    return (void *)0x0;
  }
  pvVar1 = realloc(param_1,param_2);
  if ((pvVar1 == (void *)0x0) && (param_2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00407c30();
  }
  return pvVar1;
}


void FUN_00407a80(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((-1 < SUB168(ZEXT816(param_2) * ZEXT816(param_3),0)) &&
     (SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) == 0)) {
    FUN_00407a40();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00407c30();
}


void FUN_00407ab0(long param_1,ulong *param_2,ulong param_3)

{
  undefined auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (param_1 == 0) {
    if (uVar2 == 0) {
      uVar2 = (ulong)(0x80 < param_3) +
              SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(param_3),0);
    }
    uVar3 = (ulong)(SUB168(ZEXT816(uVar2) * ZEXT816(param_3) >> 0x40,0) != 0);
    if ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) || (uVar3 != 0)) goto LAB_00407b0b;
  }
  else {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554);
    uVar3 = SUB168(auVar1 % ZEXT816(param_3),0);
    if (SUB168(auVar1 / ZEXT816(param_3),0) <= uVar2) {
LAB_00407b0b:
                    /* WARNING: Subroutine does not return */
      FUN_00407c30(param_1,param_2,uVar3);
    }
    uVar2 = (uVar2 >> 1) + 1 + uVar2;
  }
  *param_2 = uVar2;
  FUN_00407a40(param_1,uVar2 * param_3);
  return;
}


void FUN_00407b40(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_1 == 0) {
    if (uVar1 == 0) {
      *param_2 = 0x80;
      FUN_00407a40(0,0x80);
      return;
    }
    if ((long)uVar1 < 0) goto LAB_00407b8a;
  }
  else {
    if (0x5555555555555553 < uVar1) {
LAB_00407b8a:
                    /* WARNING: Subroutine does not return */
      FUN_00407c30();
    }
    uVar1 = (uVar1 >> 1) + 1 + uVar1;
  }
  *param_2 = uVar1;
  FUN_00407a40(param_1,uVar1);
  return;
}


void FUN_00407b90(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_004079e0();
  memset(__s,0,param_1);
  return;
}


void FUN_00407bb0(size_t param_1,ulong param_2)

{
  void *pvVar1;
  
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    pvVar1 = calloc(param_1,param_2);
    if (pvVar1 != (void *)0x0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00407c30();
}


void FUN_00407be0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_004079e0(param_2);
  memcpy(__dest,param_1,param_2);
  return;
}


void FUN_00407c10(char *param_1)

{
  void *__dest;
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_004079e0(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return;
}


void FUN_00407c30(void)

{
  undefined8 uVar1;
  
  uVar1 = dcgettext(0,"memory exhausted",5);
  error(DAT_0060e250,0,&DAT_0040ac1c,uVar1);
                    /* WARNING: Subroutine does not return */
  abort();
}


ulong FUN_00407c70(undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong local_40 [2];
  
  iVar2 = FUN_004081a0(param_1,0,param_2,local_40);
  uVar1 = local_40[0];
  if (iVar2 == 0) {
    if ((param_3 <= local_40[0]) && (local_40[0] <= param_4)) {
      return local_40[0];
    }
    piVar3 = __errno_location();
    *piVar3 = (-(uint)(uVar1 < 0x40000000) & 0xffffffd7) + 0x4b;
  }
  else {
    piVar3 = __errno_location();
    if (iVar2 == 1) {
      *piVar3 = 0x4b;
    }
    else if (iVar2 == 3) {
      *piVar3 = 0;
    }
  }
  uVar4 = FUN_00407410(param_1);
  iVar2 = *piVar3;
  if (iVar2 == 0x16) {
    iVar2 = 0;
  }
  if (param_7 == 0) {
    param_7 = 1;
  }
  error(param_7,iVar2,"%s: %s",param_6,uVar4);
  return local_40[0];
}


void FUN_00407d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_00407c70(param_1,10,param_2,param_3,param_4,param_5,param_6);
  return;
}


ulong FUN_00407d70(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  int *piVar3;
  ushort **ppuVar4;
  byte *pbVar5;
  ulong uVar6;
  char *pcVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  byte *local_40 [2];
  
  if (0x24 < param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtoul");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = local_40;
  }
  piVar3 = __errno_location();
  *piVar3 = 0;
  bVar12 = *param_1;
  ppuVar4 = __ctype_b_loc();
  pbVar5 = param_1;
  while ((*(byte *)((long)*ppuVar4 + (ulong)bVar12 * 2 + 1) & 0x20) != 0) {
    pbVar5 = pbVar5 + 1;
    bVar12 = *pbVar5;
  }
  if (bVar12 == 0x2d) {
    return 4;
  }
  uVar6 = strtoul((char *)param_1,(char **)param_2,param_3);
  pbVar5 = *param_2;
  if (pbVar5 == param_1) {
    if ((param_5 == (char *)0x0) || (bVar12 = *param_1, bVar12 == 0)) {
      return 4;
    }
    uVar14 = 0;
    uVar6 = 1;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) {
      return 4;
    }
  }
  else {
    if (*piVar3 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
      if (*piVar3 != 0x22) {
        return 4;
      }
    }
    uVar13 = (uint)uVar14;
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00407e10;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_00407eec_caseD_1;
  }
  uVar13 = (uint)uVar14;
  uVar9 = bVar12 - 0x45;
  bVar8 = (byte)uVar9;
  if (((bVar8 < 0x30) && ((0x814400308945U >> ((ulong)uVar9 & 0x3f) & 1) != 0)) &&
     (pcVar7 = strchr(param_5,0x30), pcVar7 != (char *)0x0)) {
    bVar1 = pbVar5[1];
    if (bVar1 != 0x44) {
      if (bVar1 == 0x69) {
        uVar11 = 0x400;
        iVar15 = (pbVar5[2] == 0x42) + 1 + (uint)(pbVar5[2] == 0x42);
        goto LAB_00407eda;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00407ec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040bd98)[bVar8])();
        return uVar6;
      }
    }
    iVar15 = 2;
    uVar11 = 1000;
  }
  else {
    iVar15 = 1;
    uVar11 = 0x400;
  }
LAB_00407eda:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00407f47;
  default:
switchD_00407eec_caseD_1:
    *param_4 = uVar6;
    return (ulong)(uVar13 | 2);
  case 3:
    iVar16 = 6;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00407fd4;
  case 5:
  case 0x25:
    uVar11 = (ulong)iVar10;
    if (((SUB168(ZEXT816(uVar6) * ZEXT816(uVar11) >> 0x40,0) != 0) ||
        (auVar2 = (ZEXT816(uVar6) * ZEXT816(uVar11) & (undefined  [16])0xffffffffffffffff) *
                  ZEXT816(uVar11), SUB168(auVar2 >> 0x40,0) != 0)) ||
       (auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816(uVar11),
       uVar6 = SUB168(auVar2,0), SUB168(auVar2 >> 0x40,0) != 0)) {
      uVar6 = 0xffffffffffffffff;
      uVar14 = 1;
    }
    break;
  case 9:
  case 0x29:
    auVar2 = ZEXT816(uVar6) * ZEXT816(uVar11);
    goto joined_r0x00407f0c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00407f47;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x00407f0c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00407f47:
      uVar14 = 1;
      uVar6 = 0xffffffffffffffff;
    }
    break;
  case 0xe:
    iVar16 = 5;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00407fd4;
  case 0x12:
  case 0x32:
    iVar16 = 4;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00407fd4;
  case 0x17:
    iVar16 = 8;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00407fd4;
  case 0x18:
    iVar16 = 7;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
LAB_00407fd4:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00407f47;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00407f47;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00407e10:
  *param_4 = uVar6;
  return uVar14;
}


ulong FUN_004081a0(byte *param_1,byte **param_2,uint param_3,ulong *param_4,char *param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  int *piVar3;
  ushort **ppuVar4;
  byte *pbVar5;
  ulong uVar6;
  char *pcVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  byte *local_40 [2];
  
  if (0x24 < param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= strtol_base && strtol_base <= 36","lib/xstrtol.c",0x60,"xstrtoumax");
  }
  if (param_2 == (byte **)0x0) {
    param_2 = local_40;
  }
  piVar3 = __errno_location();
  *piVar3 = 0;
  bVar12 = *param_1;
  ppuVar4 = __ctype_b_loc();
  pbVar5 = param_1;
  while ((*(byte *)((long)*ppuVar4 + (ulong)bVar12 * 2 + 1) & 0x20) != 0) {
    pbVar5 = pbVar5 + 1;
    bVar12 = *pbVar5;
  }
  if (bVar12 == 0x2d) {
    return 4;
  }
  uVar6 = __strtoul_internal(param_1,param_2,param_3,0);
  pbVar5 = *param_2;
  if (pbVar5 == param_1) {
    if ((param_5 == (char *)0x0) || (bVar12 = *param_1, bVar12 == 0)) {
      return 4;
    }
    uVar14 = 0;
    uVar6 = 1;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) {
      return 4;
    }
  }
  else {
    if (*piVar3 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
      if (*piVar3 != 0x22) {
        return 4;
      }
    }
    uVar13 = (uint)uVar14;
    if ((param_5 == (char *)0x0) || (bVar12 = *pbVar5, bVar12 == 0)) goto LAB_00408242;
    pcVar7 = strchr(param_5,(int)(char)bVar12);
    if (pcVar7 == (char *)0x0) goto switchD_0040832c_caseD_1;
  }
  uVar13 = (uint)uVar14;
  uVar9 = bVar12 - 0x45;
  bVar8 = (byte)uVar9;
  if (((bVar8 < 0x30) && ((0x814400308945U >> ((ulong)uVar9 & 0x3f) & 1) != 0)) &&
     (pcVar7 = strchr(param_5,0x30), pcVar7 != (char *)0x0)) {
    bVar1 = pbVar5[1];
    if (bVar1 != 0x44) {
      if (bVar1 == 0x69) {
        uVar11 = 0x400;
        iVar15 = (pbVar5[2] == 0x42) + 1 + (uint)(pbVar5[2] == 0x42);
        goto LAB_0040831a;
      }
      if (bVar1 != 0x42) {
                    /* WARNING: Could not recover jumptable at 0x00408301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)(&PTR_LAB_0040c0d8)[bVar8])();
        return uVar6;
      }
    }
    iVar15 = 2;
    uVar11 = 1000;
  }
  else {
    iVar15 = 1;
    uVar11 = 0x400;
  }
LAB_0040831a:
  iVar10 = (int)uVar11;
  switch(bVar12 - 0x42 & 0xff) {
  case 0:
    if (uVar6 >> 0x36 == 0) {
      uVar6 = uVar6 << 10;
      break;
    }
    goto LAB_00408387;
  default:
switchD_0040832c_caseD_1:
    *param_4 = uVar6;
    return (ulong)(uVar13 | 2);
  case 3:
    iVar16 = 6;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00408414;
  case 5:
  case 0x25:
    uVar11 = (ulong)iVar10;
    if (((SUB168(ZEXT816(uVar6) * ZEXT816(uVar11) >> 0x40,0) != 0) ||
        (auVar2 = (ZEXT816(uVar6) * ZEXT816(uVar11) & (undefined  [16])0xffffffffffffffff) *
                  ZEXT816(uVar11), SUB168(auVar2 >> 0x40,0) != 0)) ||
       (auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816(uVar11),
       uVar6 = SUB168(auVar2,0), SUB168(auVar2 >> 0x40,0) != 0)) {
      uVar6 = 0xffffffffffffffff;
      uVar14 = 1;
    }
    break;
  case 9:
  case 0x29:
    auVar2 = ZEXT816(uVar6) * ZEXT816(uVar11);
    goto joined_r0x0040834c;
  case 0xb:
  case 0x2b:
    auVar2 = ZEXT816(uVar6) * ZEXT816((ulong)(long)iVar10);
    if (SUB168(auVar2 >> 0x40,0) != 0) goto LAB_00408387;
    auVar2 = (auVar2 & (undefined  [16])0xffffffffffffffff) * ZEXT816((ulong)(long)iVar10);
joined_r0x0040834c:
    uVar6 = SUB168(auVar2,0);
    if (SUB168(auVar2 >> 0x40,0) != 0) {
LAB_00408387:
      uVar14 = 1;
      uVar6 = 0xffffffffffffffff;
    }
    break;
  case 0xe:
    iVar16 = 5;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00408414;
  case 0x12:
  case 0x32:
    iVar16 = 4;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00408414;
  case 0x17:
    iVar16 = 8;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    goto LAB_00408414;
  case 0x18:
    iVar16 = 7;
    uVar9 = 0;
    do {
      auVar2 = ZEXT816(uVar6);
      uVar6 = SUB168(auVar2 * ZEXT816((ulong)(long)iVar10),0);
      if (SUB168(auVar2 * ZEXT816((ulong)(long)iVar10) >> 0x40,0) != 0) {
        uVar9 = 1;
        uVar6 = 0xffffffffffffffff;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
LAB_00408414:
    uVar14 = (ulong)(uVar13 | uVar9);
    break;
  case 0x20:
    if (uVar6 >> 0x37 != 0) goto LAB_00408387;
    uVar6 = uVar6 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar6 < 0) goto LAB_00408387;
    uVar6 = uVar6 * 2;
  }
  *param_2 = pbVar5 + iVar15;
  if (pbVar5[iVar15] != 0) {
    uVar14 = (ulong)((uint)uVar14 | 2);
  }
LAB_00408242:
  *param_4 = uVar6;
  return uVar14;
}


int FUN_004085e0(FILE *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  __off_t _Var4;
  
  iVar1 = fileno(param_1);
  if (-1 < iVar1) {
    iVar1 = __freading();
    if (iVar1 != 0) {
      iVar1 = fileno(param_1);
      _Var4 = lseek(iVar1,0,1);
      if (_Var4 == -1) goto LAB_00408647;
    }
    iVar1 = FUN_004087a0(param_1);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      iVar2 = fclose(param_1);
      if (iVar1 != 0) {
        *piVar3 = iVar1;
        iVar2 = -1;
      }
      return iVar2;
    }
  }
LAB_00408647:
  iVar1 = fclose(param_1);
  return iVar1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00408660(ulong param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0x406) {
    iVar1 = fcntl((int)param_1,param_2,param_3);
    return iVar1;
  }
  if (DAT_0060e478 < 0) {
    iVar1 = FUN_00408660(param_1,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_0060e478 != -1) {
      return iVar1;
    }
  }
  else {
    iVar1 = fcntl((int)param_1,0x406);
    if ((-1 < iVar1) || (piVar4 = __errno_location(), *piVar4 != 0x16)) {
      DAT_0060e478 = 1;
      return iVar1;
    }
    iVar1 = FUN_00408660(param_1 & 0xffffffff,0,param_3 & 0xffffffff);
    if (iVar1 < 0) {
      return iVar1;
    }
    DAT_0060e478 = -1;
  }
  uVar2 = fcntl(iVar1,1);
  if ((-1 < (int)uVar2) && (iVar3 = fcntl(iVar1,2,(ulong)(uVar2 | 1)), iVar3 != -1)) {
    return iVar1;
  }
  piVar4 = __errno_location();
  iVar3 = *piVar4;
  close(iVar1);
  *piVar4 = iVar3;
  return -1;
}


void FUN_004087a0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = __freading();
    if ((iVar1 != 0) && ((param_1->_flags & 0x100U) != 0)) {
      FUN_004087e0(param_1,0,1);
      fflush(param_1);
      return;
    }
  }
  fflush(param_1);
  return;
}


ulong FUN_004087e0(FILE *param_1,__off_t param_2,int param_3)

{
  uint uVar1;
  int __fd;
  ulong uVar2;
  
  if (((param_1->_IO_read_end == param_1->_IO_read_ptr) &&
      (param_1->_IO_write_ptr == param_1->_IO_write_base)) &&
     (param_1->_IO_save_base == (char *)0x0)) {
    __fd = fileno(param_1);
    uVar2 = lseek(__fd,param_2,param_3);
    if (uVar2 != 0xffffffffffffffff) {
      param_1->_flags = param_1->_flags & 0xffffffef;
      param_1->_offset = uVar2;
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar1 = fseeko(param_1,param_2,param_3);
  return (ulong)uVar1;
}


void FUN_00408840(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = param_2[0xb];
  iVar2 = *param_2;
  iVar3 = param_2[0xc];
  iVar8 = iVar1;
  iVar9 = iVar2;
  while (iVar3 < iVar9) {
    while( true ) {
      if (iVar3 <= iVar8) goto LAB_004088bc;
      iVar10 = iVar9 - iVar3;
      iVar7 = iVar3 - iVar8;
      if (iVar10 <= iVar7) break;
      lVar6 = (long)iVar8;
      iVar9 = iVar9 - iVar7;
      puVar5 = (undefined8 *)(param_1 + lVar6 * 8);
      do {
        uVar4 = *puVar5;
        *puVar5 = puVar5[iVar9 - lVar6];
        puVar5[iVar9 - lVar6] = uVar4;
        puVar5 = puVar5 + 1;
      } while ((undefined8 *)(param_1 + 8 + ((ulong)(iVar7 - 1) + lVar6) * 8) != puVar5);
      if (iVar9 <= iVar3) goto LAB_004088bc;
    }
    lVar6 = (long)iVar8;
    puVar5 = (undefined8 *)(param_1 + lVar6 * 8);
    do {
      uVar4 = *puVar5;
      *puVar5 = puVar5[iVar3 - lVar6];
      puVar5[iVar3 - lVar6] = uVar4;
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined8 *)(param_1 + 8 + ((ulong)(iVar10 - 1) + lVar6) * 8));
    iVar8 = iVar8 + iVar10;
  }
LAB_004088bc:
  param_2[0xc] = iVar2;
  param_2[0xb] = iVar1 + (iVar2 - iVar3);
  return;
}


int FUN_00408920(int param_1,undefined8 *param_2,char *param_3,char **param_4,undefined4 *param_5,
                int param_6,int *param_7,int param_8,undefined8 param_9)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char **ppcVar10;
  char *pcVar11;
  char **ppcVar12;
  char *pcVar13;
  char *__s1;
  FILE *__stream;
  ulong uVar14;
  size_t sVar15;
  char *__s1_00;
  long lVar16;
  char *local_70;
  uint local_44;
  
  pcVar13 = *(char **)(param_7 + 8);
  cVar1 = *pcVar13;
  pcVar11 = pcVar13;
  if ((cVar1 == '=') || (cVar1 == '\0')) {
    sVar15 = 0;
  }
  else {
    do {
      pcVar11 = pcVar11 + 1;
      if (*pcVar11 == '\0') break;
    } while (*pcVar11 != '=');
    sVar15 = (long)pcVar11 - (long)pcVar13;
  }
  uVar14 = 0;
  __s1 = *param_4;
  ppcVar10 = param_4;
  __s1_00 = __s1;
  if (__s1 != (char *)0x0) {
    while( true ) {
      iVar5 = strncmp(__s1_00,pcVar13,sVar15);
      if ((iVar5 == 0) && (sVar7 = strlen(__s1_00), sVar7 == sVar15)) goto LAB_00408b40;
      ppcVar10 = ppcVar10 + 4;
      __s1_00 = *ppcVar10;
      iVar5 = (int)uVar14 + 1;
      if (__s1_00 == (char *)0x0) break;
      uVar14 = (ulong)iVar5;
    }
    lVar16 = 0;
    ppcVar10 = (char **)0x0;
    local_44 = 0xffffffff;
    bVar3 = false;
    bVar4 = false;
    local_70 = (char *)0x0;
    ppcVar12 = param_4;
    do {
      iVar6 = strncmp(__s1,pcVar13,sVar15);
      if (iVar6 == 0) {
        if (ppcVar10 == (char **)0x0) {
          local_44 = (uint)lVar16;
          ppcVar10 = ppcVar12;
        }
        else if (((((param_6 != 0) || (*(int *)(ppcVar10 + 1) != *(int *)(ppcVar12 + 1))) ||
                  (ppcVar10[2] != ppcVar12[2])) ||
                 (*(int *)(ppcVar10 + 3) != *(int *)(ppcVar12 + 3))) && (!bVar3)) {
          if (param_8 == 0) {
            bVar3 = true;
            if (local_70 == (char *)0x0) goto LAB_00408a80;
          }
          else if (local_70 == (char *)0x0) {
            local_70 = (char *)calloc((long)iVar5,1);
            if (local_70 == (char *)0x0) {
              bVar3 = true;
              goto LAB_00408a80;
            }
            bVar4 = true;
            local_70[(int)local_44] = '\x01';
          }
          local_70[lVar16] = '\x01';
        }
      }
LAB_00408a80:
      ppcVar12 = ppcVar12 + 4;
      __s1 = *ppcVar12;
      lVar16 = lVar16 + 1;
    } while (__s1 != (char *)0x0);
    if ((local_70 != (char *)0x0) || (bVar3)) {
      if (param_8 != 0) {
        if (bVar3) {
          uVar2 = *param_2;
          uVar8 = dcgettext(0,"%s: option \'%s%s\' is ambiguous\n",5);
          __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
          pcVar13 = *(char **)(param_7 + 8);
        }
        else {
          flockfile(stderr);
          uVar2 = *(undefined8 *)(param_7 + 8);
          uVar8 = *param_2;
          uVar9 = dcgettext(0,"%s: option \'%s%s\' is ambiguous; possibilities:",5);
          __fprintf_chk(stderr,1,uVar9,uVar8,param_9,uVar2);
          pcVar13 = local_70;
          __stream = stderr;
          do {
            if (*pcVar13 != '\0') {
              __fprintf_chk(__stream,1,&DAT_0040c509,param_9,*param_4);
              __stream = stderr;
            }
            pcVar13 = pcVar13 + 1;
            param_4 = param_4 + 4;
          } while (local_70 + uVar14 + 1 != pcVar13);
          fputc(10,__stream);
          funlockfile(stderr);
          pcVar13 = *(char **)(param_7 + 8);
        }
      }
      if (bVar4) {
        free(local_70);
      }
      sVar15 = strlen(pcVar13);
      *(char **)(param_7 + 8) = pcVar13 + sVar15;
      *param_7 = *param_7 + 1;
      param_7[2] = 0;
      return 0x3f;
    }
    if (ppcVar10 != (char **)0x0) {
      uVar14 = (ulong)local_44;
LAB_00408b40:
      iVar6 = *param_7;
      *(undefined8 *)(param_7 + 8) = 0;
      iVar5 = iVar6 + 1;
      *param_7 = iVar5;
      if (*pcVar11 == '\0') {
        if (*(int *)(ppcVar10 + 1) == 1) {
          if (param_1 <= iVar5) {
            if (param_8 != 0) {
              pcVar13 = *ppcVar10;
              uVar2 = *param_2;
              uVar8 = dcgettext(0,"%s: option \'%s%s\' requires an argument\n",5);
              __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
            }
            param_7[2] = *(int *)(ppcVar10 + 3);
            return (uint)(*param_3 != ':') * 5 + 0x3a;
          }
          *param_7 = iVar6 + 2;
          *(undefined8 *)(param_7 + 4) = param_2[iVar5];
        }
      }
      else {
        if (*(int *)(ppcVar10 + 1) == 0) {
          if (param_8 != 0) {
            pcVar13 = *ppcVar10;
            uVar2 = *param_2;
            uVar8 = dcgettext(0,"%s: option \'%s%s\' doesn\'t allow an argument\n",5);
            __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
          }
          param_7[2] = *(int *)(ppcVar10 + 3);
          return 0x3f;
        }
        *(char **)(param_7 + 4) = pcVar11 + 1;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = (int)uVar14;
      }
      if ((int *)ppcVar10[2] == (int *)0x0) {
        return *(int *)(ppcVar10 + 3);
      }
      *(int *)ppcVar10[2] = *(int *)(ppcVar10 + 3);
      return 0;
    }
  }
  if (((param_6 != 0) && (*(char *)(param_2[*param_7] + 1) != '-')) &&
     (pcVar11 = strchr(param_3,(int)cVar1), pcVar11 != (char *)0x0)) {
    return -1;
  }
  if (param_8 != 0) {
    uVar2 = *param_2;
    uVar8 = dcgettext(0,"%s: unrecognized option \'%s%s\'\n",5);
    __fprintf_chk(stderr,1,uVar8,uVar2,param_9,pcVar13);
  }
  *(undefined8 *)(param_7 + 8) = 0;
  *param_7 = *param_7 + 1;
  param_7[2] = 0;
  return 0x3f;
}


uint FUN_00408f40(uint param_1,undefined8 *param_2,char *param_3,long param_4,undefined8 param_5,
                 ulong param_6,uint *param_7,int param_8)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined1 *puVar15;
  
  bVar14 = 0;
  uVar3 = param_7[1];
  if ((int)param_1 < 1) {
    return 0xffffffff;
  }
  uVar11 = *param_7;
  *(undefined8 *)(param_7 + 4) = 0;
  if (uVar11 == 0) {
    *param_7 = 1;
    uVar11 = 1;
LAB_00408f8a:
    param_7[0xc] = uVar11;
    param_7[0xb] = uVar11;
    *(undefined8 *)(param_7 + 8) = 0;
    if (*param_3 == '-') {
      param_7[10] = 2;
      param_3 = param_3 + 1;
      pbVar8 = (byte *)0x0;
    }
    else if (*param_3 == '+') {
      param_7[10] = 0;
      param_3 = param_3 + 1;
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)0x0;
      if (param_8 == 0) {
        pcVar4 = getenv("POSIXLY_CORRECT");
        param_6 = param_6 & 0xffffffff;
        if (pcVar4 == (char *)0x0) {
          param_7[10] = 1;
          pbVar8 = *(byte **)(param_7 + 8);
          goto LAB_0040908d;
        }
        pbVar8 = *(byte **)(param_7 + 8);
      }
      param_7[10] = 0;
    }
LAB_0040908d:
    param_7[6] = 1;
    cVar2 = *param_3;
LAB_00409098:
    if (cVar2 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 == (byte *)0x0) goto LAB_00409008;
LAB_004090ac:
    if (*pbVar8 == 0) goto LAB_00409008;
  }
  else {
    if (param_7[6] == 0) goto LAB_00408f8a;
    cVar2 = *param_3;
    pbVar8 = *(byte **)(param_7 + 8);
    if ((cVar2 - 0x2bU & 0xfd) != 0) goto LAB_00409098;
    pcVar4 = param_3 + 1;
    param_3 = param_3 + 1;
    if (*pcVar4 == ':') {
      uVar3 = 0;
    }
    if (pbVar8 != (byte *)0x0) goto LAB_004090ac;
LAB_00409008:
    uVar11 = *param_7;
    if (param_7[0xc] != uVar11 && (int)uVar11 <= (int)param_7[0xc]) {
      param_7[0xc] = uVar11;
    }
    if ((int)uVar11 < (int)param_7[0xb]) {
      param_7[0xb] = uVar11;
    }
    if (param_7[10] == 1) {
      uVar7 = param_7[0xc];
      if (param_7[0xb] == uVar7) {
        if (uVar11 != uVar7) {
          param_7[0xb] = uVar11;
          uVar7 = uVar11;
        }
      }
      else if (uVar11 != uVar7) {
        FUN_00408840(param_2,param_7);
        param_6 = param_6 & 0xffffffff;
        uVar7 = *param_7;
      }
      uVar11 = uVar7;
      uVar7 = uVar11;
      if ((int)uVar11 < (int)param_1) {
        lVar6 = (long)(int)uVar11;
        do {
          if ((*(char *)param_2[lVar6] == '-') && (((char *)param_2[lVar6])[1] != '\0')) {
            uVar11 = *param_7;
            uVar7 = (uint)lVar6;
            break;
          }
          uVar11 = (uint)lVar6 + 1;
          lVar6 = lVar6 + 1;
          *param_7 = uVar11;
          uVar7 = uVar11;
        } while ((int)lVar6 < (int)param_1);
      }
      param_7[0xc] = uVar7;
    }
    bVar12 = param_1 < uVar11;
    bVar13 = param_1 == uVar11;
    if (bVar13) {
      param_1 = param_7[0xc];
      uVar11 = param_7[0xb];
LAB_00409176:
      if (uVar11 != param_1) {
        *param_7 = uVar11;
      }
      return 0xffffffff;
    }
    lVar6 = 3;
    pbVar8 = (byte *)param_2[(int)uVar11];
    pbVar9 = pbVar8;
    pbVar10 = &DAT_0040c521;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar12 = *pbVar9 < *pbVar10;
      bVar13 = *pbVar9 == *pbVar10;
      pbVar9 = pbVar9 + (ulong)bVar14 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
    if ((!bVar12 && !bVar13) == bVar12) {
      uVar11 = uVar11 + 1;
      *param_7 = uVar11;
      if (param_7[0xb] == param_7[0xc]) {
        param_7[0xb] = uVar11;
      }
      else {
        bVar12 = uVar11 != param_7[0xc];
        uVar11 = param_7[0xb];
        if (bVar12) {
          FUN_00408840(param_2,param_7);
          uVar11 = param_7[0xb];
        }
      }
      param_7[0xc] = param_1;
      *param_7 = param_1;
      goto LAB_00409176;
    }
    if ((*pbVar8 != 0x2d) || (bVar14 = pbVar8[1], bVar14 == 0)) {
      if (param_7[10] == 0) {
        return 0xffffffff;
      }
      *(byte **)(param_7 + 4) = pbVar8;
      *param_7 = uVar11 + 1;
      return 1;
    }
    if (param_4 != 0) {
      if (bVar14 == 0x2d) {
        *(byte **)(param_7 + 8) = pbVar8 + 2;
        puVar15 = &DAT_0040c521;
        goto LAB_004092d5;
      }
      if ((int)param_6 != 0) {
        if (pbVar8[2] == 0) {
          pcVar4 = strchr(param_3,(int)(char)bVar14);
          param_6 = param_6 & 0xffffffff;
          if (pcVar4 != (char *)0x0) goto LAB_00409280;
        }
        *(byte **)(param_7 + 8) = pbVar8 + 1;
        uVar11 = FUN_00408920(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,
                              &DAT_0040c522);
        if (uVar11 != 0xffffffff) {
          return uVar11;
        }
        pbVar8 = (byte *)param_2[(int)*param_7];
      }
    }
LAB_00409280:
    pbVar8 = pbVar8 + 1;
  }
  pbVar9 = pbVar8 + 1;
  *(byte **)(param_7 + 8) = pbVar9;
  bVar14 = *pbVar8;
  uVar11 = (uint)(char)bVar14;
  pcVar4 = strchr(param_3,uVar11);
  if (pbVar8[1] == 0) {
    *param_7 = *param_7 + 1;
  }
  if (((byte)(bVar14 - 0x3a) < 2) || (pcVar4 == (char *)0x0)) {
    if (uVar3 != 0) {
      uVar1 = *param_2;
      uVar5 = dcgettext(0,"%s: invalid option -- \'%c\'\n",5);
      __fprintf_chk(stderr,1,uVar5,uVar1,uVar11);
    }
    param_7[2] = uVar11;
    return 0x3f;
  }
  if (((*pcVar4 != 'W') || (param_4 == 0)) || (pcVar4[1] != ';')) {
    if (pcVar4[1] == ':') {
      if (pcVar4[2] == ':') {
        if (pbVar8[1] == 0) {
          *(undefined8 *)(param_7 + 4) = 0;
        }
        else {
          *(byte **)(param_7 + 4) = pbVar9;
          *param_7 = *param_7 + 1;
        }
      }
      else {
        uVar7 = *param_7;
        if (pbVar8[1] == 0) {
          if (param_1 == uVar7) {
            if (uVar3 != 0) {
              uVar1 = *param_2;
              uVar5 = dcgettext(0,"%s: option requires an argument -- \'%c\'\n",5);
              __fprintf_chk(stderr,1,uVar5,uVar1,uVar11);
            }
            param_7[2] = uVar11;
            uVar11 = (uint)(*param_3 != ':') * 5 + 0x3a;
          }
          else {
            uVar1 = param_2[(int)uVar7];
            *param_7 = uVar7 + 1;
            *(undefined8 *)(param_7 + 4) = uVar1;
          }
        }
        else {
          *(byte **)(param_7 + 4) = pbVar9;
          *param_7 = uVar7 + 1;
        }
      }
      *(undefined8 *)(param_7 + 8) = 0;
      return uVar11;
    }
    return uVar11;
  }
  if (pbVar8[1] == 0) {
    if (*param_7 == param_1) {
      if (uVar3 != 0) {
        uVar1 = *param_2;
        uVar5 = dcgettext(0,"%s: option requires an argument -- \'%c\'\n",5);
        __fprintf_chk(stderr,1,uVar5,uVar1,uVar11);
      }
      param_7[2] = uVar11;
      return (uint)(*param_3 != ':') * 5 + 0x3a;
    }
    pbVar9 = (byte *)param_2[(int)*param_7];
  }
  *(byte **)(param_7 + 8) = pbVar9;
  param_6 = 0;
  *(undefined8 *)(param_7 + 4) = 0;
  puVar15 = &DAT_0040c540;
LAB_004092d5:
  uVar3 = FUN_00408920(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3,puVar15);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409510(void)

{
  DAT_0060e480 = DAT_0060e2bc;
  _DAT_0060e484 = DAT_0060e2b8;
  FUN_00408f40();
  DAT_0060e2bc = DAT_0060e480;
  DAT_0060e4c0 = DAT_0060e490;
  _DAT_0060e2b4 = DAT_0060e488;
  return;
}


void FUN_00409570(void)

{
  FUN_00409510();
  return;
}


void FUN_00409590(void)

{
  FUN_00409510();
  return;
}


void FUN_004095b0(void)

{
  FUN_00408f40();
  return;
}


void FUN_004095d0(void)

{
  FUN_00409510();
  return;
}


void FUN_004095f0(void)

{
  FUN_00408f40();
  return;
}


size_t FUN_00409610(wchar_t *param_1,byte *param_2,size_t param_3,mbstate_t *param_4)

{
  char cVar1;
  size_t sVar2;
  wchar_t local_1c;
  
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    param_2 = (byte *)0x40c53f;
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffffffffffe;
    }
    if (param_1 != (wchar_t *)0x0) goto LAB_00409634;
  }
  param_1 = &local_1c;
LAB_00409634:
  sVar2 = mbrtowc(param_1,(char *)param_2,param_3,param_4);
  if ((0xfffffffffffffffd < sVar2) && (cVar1 = FUN_004096f0(0), cVar1 == '\0')) {
    sVar2 = 1;
    *param_1 = (uint)*param_2;
  }
  return sVar2;
}


ulong FUN_00409690(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = __fpending();
  uVar1 = *param_1;
  uVar3 = FUN_004085e0(param_1);
  if ((uVar1 & 0x20) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (lVar2 == 0) {
      piVar4 = __errno_location();
      return (ulong)-(uint)(*piVar4 != 9);
    }
  }
  else if ((int)uVar3 == 0) {
    piVar4 = __errno_location();
    *piVar4 = 0;
    return 0xffffffff;
  }
  return 0xffffffff;
}


bool FUN_004096f0(int param_1)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  
  bVar9 = 0;
  pbVar2 = (byte *)setlocale(param_1,(char *)0x0);
  bVar1 = true;
  bVar6 = false;
  bVar8 = pbVar2 == (byte *)0x0;
  if (!bVar8) {
    lVar3 = 2;
    pbVar4 = pbVar2;
    pbVar5 = &DAT_0040c544;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar8 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + (ulong)bVar9 * -2 + 1;
      pbVar5 = pbVar5 + (ulong)bVar9 * -2 + 1;
    } while (bVar8);
    bVar1 = false;
    bVar7 = false;
    bVar6 = (!bVar6 && !bVar8) == bVar6;
    if (!bVar6) {
      lVar3 = 6;
      pbVar4 = (byte *)"POSIX";
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar7 = *pbVar2 < *pbVar4;
        bVar6 = *pbVar2 == *pbVar4;
        pbVar2 = pbVar2 + (ulong)bVar9 * -2 + 1;
        pbVar4 = pbVar4 + (ulong)bVar9 * -2 + 1;
      } while (bVar6);
      return (!bVar7 && !bVar6) != bVar7;
    }
  }
  return bVar1;
}


/* WARNING: Could not reconcile some variable overlaps */

char * FUN_00409750(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *__s1;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  size_t __n;
  char *__file;
  FILE *__stream;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  char *__ptr;
  bool bVar14;
  long local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined auStack_80 [8];
  undefined8 local_78;
  
  __s1 = nl_langinfo(0xe);
  if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  if (DAT_0060e4b8 != (char *)0x0) goto LAB_0040978a;
  pcVar7 = getenv("CHARSETALIASDIR");
  if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
    sVar6 = 0x73;
    sVar5 = 0x65;
    __n = 100;
    pcVar7 = 
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib"
    ;
LAB_00409875:
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      __file[__n] = '/';
      goto LAB_00409896;
    }
  }
  else {
    __n = strlen(pcVar7);
    if (__n == 0) {
      sVar6 = 0xe;
    }
    else {
      if (pcVar7[__n - 1] != '/') {
        sVar6 = __n + 0xf;
        sVar5 = __n + 1;
        goto LAB_00409875;
      }
      sVar6 = __n + 0xe;
    }
    __file = (char *)malloc(sVar6);
    if (__file != (char *)0x0) {
      memcpy(__file,pcVar7,__n);
      sVar5 = __n;
LAB_00409896:
      puVar13 = (undefined8 *)(__file + sVar5);
      *puVar13 = 0x2e74657372616863;
      *(undefined2 *)((long)puVar13 + 0xc) = 0x73;
      *(undefined4 *)(puVar13 + 1) = 0x61696c61;
      iVar2 = open(__file,0);
      if (-1 < iVar2) {
        __stream = fdopen(iVar2,"r");
        local_d0 = 0;
        if (__stream != (FILE *)0x0) {
          pcVar7 = (char *)0x0;
LAB_00409930:
          pbVar8 = (byte *)__stream->_IO_read_ptr;
          if (__stream->_IO_read_end <= pbVar8) goto LAB_00409abc;
          do {
            __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
            uVar4 = (uint)*pbVar8;
            __ptr = pcVar7;
            while( true ) {
              pcVar7 = __ptr;
              if ((uVar4 - 9 < 2) || (uVar4 == 0x20)) goto LAB_00409930;
              if (uVar4 == 0x23) goto LAB_00409b21;
              ungetc(uVar4,__stream);
              iVar2 = fscanf(__stream,"%50s %50s",&local_b8,&local_78);
              puVar13 = &local_b8;
              if (iVar2 < 2) goto LAB_00409acf;
              do {
                puVar10 = puVar13;
                uVar3 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
                uVar4 = uVar3 & 0x80808080;
                puVar13 = (undefined8 *)((long)puVar10 + 4);
              } while (uVar4 == 0);
              bVar14 = (uVar3 & 0x8080) == 0;
              if (bVar14) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar14) {
                puVar13 = (undefined8 *)((long)puVar10 + 6);
              }
              lVar11 = (long)puVar13 +
                       ((-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)) - (long)&local_b8);
              puVar13 = &local_78;
              do {
                puVar10 = puVar13;
                uVar3 = *(uint *)puVar10 + 0xfefefeff & ~*(uint *)puVar10;
                uVar4 = uVar3 & 0x80808080;
                puVar13 = (undefined8 *)((long)puVar10 + 4);
              } while (uVar4 == 0);
              bVar14 = (uVar3 & 0x8080) == 0;
              if (bVar14) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar14) {
                puVar13 = (undefined8 *)((long)puVar10 + 6);
              }
              local_c0 = (long)puVar13 +
                         ((-3 - (ulong)CARRY1((byte)uVar4,(byte)uVar4)) - (long)&local_78);
              lVar9 = lVar11 + local_c0;
              if (local_d0 == 0) {
                pcVar7 = (char *)malloc(lVar9 + 3);
              }
              else {
                lVar9 = lVar9 + local_d0;
                pcVar7 = (char *)realloc(__ptr,lVar9 + 3);
              }
              local_d0 = lVar9 + 2;
              if (pcVar7 == (char *)0x0) {
                pcVar7 = "";
                free(__ptr);
                FUN_004085e0(__stream);
                goto LAB_004098d4;
              }
              uVar12 = lVar11 + 1;
              puVar13 = (undefined8 *)(pcVar7 + (-2 - lVar11) + (local_d0 - local_c0));
              uVar4 = (uint)uVar12;
              if (uVar4 < 8) {
                if ((uVar12 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined *)puVar13 = (undefined)local_b8;
                    if ((uVar12 & 2) != 0) {
                      *(undefined2 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 2)) =
                           *(undefined2 *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 2));
                    }
                  }
                }
                else {
                  *(undefined4 *)puVar13 = (undefined4)local_b8;
                  *(undefined4 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 4)) =
                       *(undefined4 *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 4));
                }
              }
              else {
                *puVar13 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
                *(undefined8 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 8)) =
                     *(undefined8 *)((long)&local_b8 + ((uVar12 & 0xffffffff) - 8));
                lVar11 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar3 = 0;
                  do {
                    uVar12 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined8 *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar12) =
                         *(undefined8 *)((long)&local_b8 + (uVar12 - lVar11));
                  } while (uVar3 < uVar4);
                }
              }
              uVar12 = local_c0 + 1;
              puVar13 = (undefined8 *)(pcVar7 + (local_d0 - local_c0) + -1);
              uVar4 = (uint)uVar12;
              if (uVar4 < 8) {
                if ((uVar12 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined *)puVar13 = (undefined)local_78;
                    if ((uVar12 & 2) != 0) {
                      *(undefined2 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 2)) =
                           *(undefined2 *)((long)auStack_80 + (uVar12 & 0xffffffff) + 6);
                    }
                  }
                }
                else {
                  *(undefined4 *)puVar13 = (undefined4)local_78;
                  *(undefined4 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 4)) =
                       *(undefined4 *)((long)auStack_80 + (uVar12 & 0xffffffff) + 4);
                }
              }
              else {
                *puVar13 = CONCAT44(local_78._4_4_,(undefined4)local_78);
                *(undefined8 *)((long)puVar13 + ((uVar12 & 0xffffffff) - 8)) =
                     *(undefined8 *)((long)auStack_80 + (uVar12 & 0xffffffff));
                lVar11 = (long)puVar13 - ((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
                uVar4 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar4) {
                  uVar3 = 0;
                  do {
                    uVar12 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined8 *)(((ulong)(puVar13 + 1) & 0xfffffffffffffff8) + uVar12) =
                         *(undefined8 *)((long)&local_78 + (uVar12 - lVar11));
                  } while (uVar3 < uVar4);
                }
              }
              pbVar8 = (byte *)__stream->_IO_read_ptr;
              if (pbVar8 < __stream->_IO_read_end) break;
LAB_00409abc:
              uVar4 = __uflow(__stream);
              __ptr = pcVar7;
              if (uVar4 == 0xffffffff) goto LAB_00409acf;
            }
          } while( true );
        }
        close(iVar2);
      }
      goto LAB_004098ce;
    }
  }
  DAT_0060e4b8 = "";
LAB_0040978a:
  cVar1 = *DAT_0060e4b8;
  pcVar7 = DAT_0060e4b8;
  do {
    if (cVar1 == '\0') {
LAB_004097e4:
      if (*__s1 == '\0') {
        __s1 = "ASCII";
      }
      return __s1;
    }
    iVar2 = strcmp(__s1,pcVar7);
    if ((iVar2 == 0) || ((cVar1 == '*' && (pcVar7[1] == '\0')))) {
      sVar6 = strlen(pcVar7);
      __s1 = pcVar7 + sVar6 + 1;
      goto LAB_004097e4;
    }
    sVar6 = strlen(pcVar7);
    sVar5 = strlen(pcVar7 + sVar6 + 1);
    pcVar7 = pcVar7 + sVar6 + 1 + sVar5 + 1;
    cVar1 = *pcVar7;
  } while( true );
LAB_00409b21:
  do {
    pbVar8 = (byte *)__stream->_IO_read_ptr;
    if (pbVar8 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar8 + 1);
      uVar4 = (uint)*pbVar8;
      bVar14 = true;
    }
    else {
      uVar4 = __uflow(__stream);
      bVar14 = uVar4 != 0xffffffff;
    }
  } while ((uVar4 != 10) && (bVar14));
  if (uVar4 == 0xffffffff) goto LAB_00409acf;
  goto LAB_00409930;
LAB_00409acf:
  FUN_004085e0(__stream);
  if (local_d0 == 0) {
LAB_004098ce:
    pcVar7 = "";
  }
  else {
    pcVar7[local_d0] = '\0';
  }
LAB_004098d4:
  free(__file);
  DAT_0060e4b8 = pcVar7;
  goto LAB_0040978a;
}


/* WARNING: Removing unreachable block (ram,0x00409cf3) */
/* WARNING: Removing unreachable block (ram,0x00409cf8) */

void FUN_00409cc0(void)

{
  __DT_INIT();
  return;
}


void FUN_00409d20(void)

{
  return;
}


void FUN_00409d30(undefined8 param_1)

{
  __cxa_atexit(param_1,0,DAT_0060e228);
  return;
}


undefined8 FUN_00409d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  
  for (ppcVar1 = (code **)&DAT_0060de30; *ppcVar1 != (code *)0xffffffffffffffff;
      ppcVar1 = ppcVar1 + -1) {
    (**ppcVar1)();
  }
  return param_3;
}


void __DT_FINI(void)

{
  FUN_00402ed1();
  return;
}

