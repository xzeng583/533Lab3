/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Documents and Settings/student/isetest/isim/lab3_1/ids_tb.ant";
static const char *ng1 = "Annotate[%d,in_rdy,%b]";
static int ng2[] = {1, 0};
static const char *ng3 = "Annotate[%d,out_data,%b]";
static const char *ng4 = "Annotate[%d,out_ctrl,%b]";
static const char *ng5 = "Annotate[%d,out_wr,%b]";
static const char *ng6 = "Annotate[%d,reg_req_out,%b]";
static const char *ng7 = "Annotate[%d,reg_ack_out,%b]";
static const char *ng8 = "Annotate[%d,reg_rd_wr_L_out,%b]";
static const char *ng9 = "Annotate[%d,reg_addr_out,%b]";
static const char *ng10 = "Annotate[%d,reg_data_out,%b]";
static const char *ng11 = "Annotate[%d,reg_src_out,%b]";
static unsigned int ng12[] = {0U, 0U};
static unsigned int ng13[] = {1U, 0U};
static const char *ng14 = "C:\\Documents and Settings\\student\\isetest\\isim\\lab3_1\\ids_tb.ano";
static const char *ng15 = "Success! Annotation Simulation Complete.";
static const char *ng16 = "Total[%d]";
static unsigned int ng17[] = {65536U, 0U, 0U, 0U};
static unsigned int ng18[] = {65537U, 0U, 0U, 0U};
static unsigned int ng19[] = {65538U, 0U, 0U, 0U};
static unsigned int ng20[] = {65539U, 0U, 0U, 0U};
static unsigned int ng21[] = {65540U, 0U, 0U, 0U};
static unsigned int ng22[] = {65541U, 0U, 0U, 0U};
static unsigned int ng23[] = {65542U, 0U, 0U, 0U};
static unsigned int ng24[] = {65543U, 0U, 0U, 0U};
static unsigned int ng25[] = {65544U, 0U, 0U, 0U};
static unsigned int ng26[] = {65545U, 0U, 0U, 0U};
static unsigned int ng27[] = {65546U, 0U, 0U, 0U};
static unsigned int ng28[] = {65547U, 0U, 0U, 0U};
static unsigned int ng29[] = {65548U, 0U, 0U, 0U};
static unsigned int ng30[] = {65549U, 0U, 0U, 0U};
static unsigned int ng31[] = {65550U, 0U, 0U, 0U};
static unsigned int ng32[] = {65551U, 0U, 0U, 0U};
static unsigned int ng33[] = {65552U, 0U, 0U, 0U};
static unsigned int ng34[] = {65553U, 0U, 0U, 0U};
static unsigned int ng35[] = {65554U, 0U, 0U, 0U};
static unsigned int ng36[] = {65555U, 0U, 0U, 0U};
static unsigned int ng37[] = {65556U, 0U, 0U, 0U};
static unsigned int ng38[] = {65557U, 0U, 0U, 0U};
static unsigned int ng39[] = {65558U, 0U, 0U, 0U};
static unsigned int ng40[] = {65559U, 0U, 0U, 0U};
static unsigned int ng41[] = {65560U, 0U, 0U, 0U};
static unsigned int ng42[] = {65561U, 0U, 0U, 0U};
static unsigned int ng43[] = {65562U, 0U, 0U, 0U};
static unsigned int ng44[] = {65563U, 0U, 0U, 0U};
static unsigned int ng45[] = {65564U, 0U, 0U, 0U};
static unsigned int ng46[] = {65565U, 0U, 0U, 0U};
static unsigned int ng47[] = {65566U, 0U, 0U, 0U};
static unsigned int ng48[] = {65567U, 0U, 0U, 0U};
static unsigned int ng49[] = {65568U, 0U, 0U, 0U};
static unsigned int ng50[] = {65569U, 0U, 0U, 0U};
static unsigned int ng51[] = {65570U, 0U, 0U, 0U};
static unsigned int ng52[] = {65571U, 0U, 0U, 0U};
static unsigned int ng53[] = {65572U, 0U, 0U, 0U};
static unsigned int ng54[] = {65573U, 0U, 0U, 0U};
static unsigned int ng55[] = {65574U, 0U, 0U, 0U};
static unsigned int ng56[] = {65575U, 0U, 0U, 0U};
static unsigned int ng57[] = {65576U, 0U, 0U, 0U};
static unsigned int ng58[] = {65577U, 0U, 0U, 0U};
static unsigned int ng59[] = {65578U, 0U, 0U, 0U};
static unsigned int ng60[] = {65579U, 0U, 0U, 0U};
static unsigned int ng61[] = {65580U, 0U, 0U, 0U};
static unsigned int ng62[] = {65581U, 0U, 0U, 0U};
static unsigned int ng63[] = {65582U, 0U, 0U, 0U};
static unsigned int ng64[] = {65583U, 0U, 0U, 0U};
static unsigned int ng65[] = {65584U, 0U, 0U, 0U};
static unsigned int ng66[] = {65585U, 0U, 0U, 0U};
static unsigned int ng67[] = {65586U, 0U, 0U, 0U};
static unsigned int ng68[] = {65587U, 0U, 0U, 0U};
static unsigned int ng69[] = {65588U, 0U, 0U, 0U};
static unsigned int ng70[] = {65589U, 0U, 0U, 0U};
static unsigned int ng71[] = {65590U, 0U, 0U, 0U};
static unsigned int ng72[] = {65591U, 0U, 0U, 0U};
static unsigned int ng73[] = {65592U, 0U, 0U, 0U};
static unsigned int ng74[] = {65593U, 0U, 0U, 0U};
static unsigned int ng75[] = {65594U, 0U, 0U, 0U};
static unsigned int ng76[] = {7U, 0U, 0U, 0U};
static unsigned int ng77[] = {65596U, 0U, 0U, 0U};
static unsigned int ng78[] = {65597U, 0U, 0U, 0U};
static unsigned int ng79[] = {65598U, 0U, 0U, 0U};
static unsigned int ng80[] = {65599U, 0U, 0U, 0U};
static unsigned int ng81[] = {65600U, 0U, 0U, 0U};
static unsigned int ng82[] = {65601U, 0U, 0U, 0U};
static unsigned int ng83[] = {65602U, 0U, 0U, 0U};
static unsigned int ng84[] = {65603U, 0U, 0U, 0U};
static unsigned int ng85[] = {65604U, 0U, 0U, 0U};
static unsigned int ng86[] = {65605U, 0U, 0U, 0U};
static unsigned int ng87[] = {65606U, 0U, 0U, 0U};
static unsigned int ng88[] = {65607U, 0U, 0U, 0U};
static unsigned int ng89[] = {65608U, 0U, 0U, 0U};
static unsigned int ng90[] = {65609U, 0U, 0U, 0U};
static unsigned int ng91[] = {65610U, 0U, 0U, 0U};
static unsigned int ng92[] = {65611U, 0U, 0U, 0U};
static unsigned int ng93[] = {65612U, 0U, 0U, 0U};
static unsigned int ng94[] = {65613U, 0U, 0U, 0U};
static unsigned int ng95[] = {65614U, 0U, 0U, 0U};
static unsigned int ng96[] = {65615U, 0U, 0U, 0U};
static unsigned int ng97[] = {65616U, 0U, 0U, 0U};
static unsigned int ng98[] = {65617U, 0U, 0U, 0U};
static unsigned int ng99[] = {65618U, 0U, 0U, 0U};
static unsigned int ng100[] = {65619U, 0U, 0U, 0U};
static unsigned int ng101[] = {65620U, 0U, 0U, 0U};
static unsigned int ng102[] = {65621U, 0U, 0U, 0U};
static unsigned int ng103[] = {65622U, 0U, 0U, 0U};
static unsigned int ng104[] = {65623U, 0U, 0U, 0U};
static unsigned int ng105[] = {65624U, 0U, 0U, 0U};
static unsigned int ng106[] = {65625U, 0U, 0U, 0U};
static unsigned int ng107[] = {65626U, 0U, 0U, 0U};
static unsigned int ng108[] = {65627U, 0U, 0U, 0U};
static unsigned int ng109[] = {65628U, 0U, 0U, 0U};
static unsigned int ng110[] = {65629U, 0U, 0U, 0U};
static unsigned int ng111[] = {65630U, 0U, 0U, 0U};
static unsigned int ng112[] = {65631U, 0U, 0U, 0U};
static unsigned int ng113[] = {65632U, 0U, 0U, 0U};
static unsigned int ng114[] = {65633U, 0U, 0U, 0U};
static unsigned int ng115[] = {65634U, 0U, 0U, 0U};
static unsigned int ng116[] = {65635U, 0U, 0U, 0U};



static int sp_ANNOTATE_in_rdy(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 684);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(562, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(562, ng0);

LAB6:    xsi_set_current_line(563, ng0);
    t7 = (t1 + 5312);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 3192U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng1, 3, t1, (char)118, t10, 64, (char)118, t13, 1);
    xsi_set_current_line(564, ng0);
    t4 = (t1 + 5312);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(565, ng0);
    t4 = (t1 + 5404);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 5404);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_out_data(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 924);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(570, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(570, ng0);

LAB6:    xsi_set_current_line(571, ng0);
    t7 = (t1 + 5312);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 3280U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng3, 3, t1, (char)118, t10, 64, (char)118, t13, 64);
    xsi_set_current_line(572, ng0);
    t4 = (t1 + 5312);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(573, ng0);
    t4 = (t1 + 5404);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 5404);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_out_ctrl(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1164);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(578, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(578, ng0);

LAB6:    xsi_set_current_line(579, ng0);
    t7 = (t1 + 5312);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 3368U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng4, 3, t1, (char)118, t10, 64, (char)118, t13, 8);
    xsi_set_current_line(580, ng0);
    t4 = (t1 + 5312);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(581, ng0);
    t4 = (t1 + 5404);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 5404);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_out_wr(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1404);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(586, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(586, ng0);

LAB6:    xsi_set_current_line(587, ng0);
    t7 = (t1 + 5312);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 3456U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng5, 3, t1, (char)118, t10, 64, (char)118, t13, 1);
    xsi_set_current_line(588, ng0);
    t4 = (t1 + 5312);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(589, ng0);
    t4 = (t1 + 5404);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 5404);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_reg_req_out(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1644);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(594, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(594, ng0);

LAB6:    xsi_set_current_line(595, ng0);
    t7 = (t1 + 5312);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 3544U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng6, 3, t1, (char)118, t10, 64, (char)118, t13, 1);
    xsi_set_current_line(596, ng0);
    t4 = (t1 + 5312);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(597, ng0);
    t4 = (t1 + 5404);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 5404);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_reg_ack_out(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1884);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(602, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(602, ng0);

LAB6:    xsi_set_current_line(603, ng0);
    t7 = (t1 + 5312);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 3632U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng7, 3, t1, (char)118, t10, 64, (char)118, t13, 1);
    xsi_set_current_line(604, ng0);
    t4 = (t1 + 5312);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(605, ng0);
    t4 = (t1 + 5404);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 5404);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_reg_rd_wr_L_out(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2124);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(610, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(610, ng0);

LAB6:    xsi_set_current_line(611, ng0);
    t7 = (t1 + 5312);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 3720U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng8, 3, t1, (char)118, t10, 64, (char)118, t13, 1);
    xsi_set_current_line(612, ng0);
    t4 = (t1 + 5312);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(613, ng0);
    t4 = (t1 + 5404);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 5404);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_reg_addr_out(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2364);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(618, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(618, ng0);

LAB6:    xsi_set_current_line(619, ng0);
    t7 = (t1 + 5312);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 3808U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng9, 3, t1, (char)118, t10, 64, (char)118, t13, 16);
    xsi_set_current_line(620, ng0);
    t4 = (t1 + 5312);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(621, ng0);
    t4 = (t1 + 5404);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 5404);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_reg_data_out(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2604);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(626, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(626, ng0);

LAB6:    xsi_set_current_line(627, ng0);
    t7 = (t1 + 5312);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 3896U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng10, 3, t1, (char)118, t10, 64, (char)118, t13, 16);
    xsi_set_current_line(628, ng0);
    t4 = (t1 + 5312);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(629, ng0);
    t4 = (t1 + 5404);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 5404);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static int sp_ANNOTATE_reg_src_out(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t0 = 1;
    t3 = (t2 + 24U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2844);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(634, ng0);
    t5 = (t2 + 28U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 0LL);
    *((char **)t3) = &&LAB5;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 24U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    xsi_set_current_line(634, ng0);

LAB6:    xsi_set_current_line(635, ng0);
    t7 = (t1 + 5312);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = xsi_vlog_time(t10, 1000000.000000000, 1000.000000000000);
    t12 = (t1 + 3984U);
    t13 = *((char **)t12);
    xsi_vlogfile_fwrite(*((unsigned int *)t9), 1, 0, ng11, 3, t1, (char)118, t10, 64, (char)118, t13, 2);
    xsi_set_current_line(636, ng0);
    t4 = (t1 + 5312);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    xsi_vlogfile_fflush(0, *((unsigned int *)t6));
    xsi_set_current_line(637, ng0);
    t4 = (t1 + 5404);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t6, 32, t7, 32);
    t8 = (t1 + 5404);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB4;

}

static void I49_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 5880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5796);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(52, ng0);

LAB6:    xsi_set_current_line(53, ng0);

LAB7:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5220);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5796);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 5220);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5796);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    goto LAB6;

LAB10:    goto LAB1;

}

static void I87_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 6008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);

LAB4:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5924);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 684);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB9;

LAB8:    t6 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 684);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 924);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB11:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB13;

LAB12:    t6 = (t0 + 924);
    xsi_vlog_subprogram_popinvocation(t6);

LAB10:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 924);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 1164);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB15:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB17;

LAB16:    t6 = (t0 + 1164);
    xsi_vlog_subprogram_popinvocation(t6);

LAB14:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 1164);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 1404);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB19:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB21;

LAB20:    t6 = (t0 + 1404);
    xsi_vlog_subprogram_popinvocation(t6);

LAB18:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 1404);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 1644);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB23:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB25;

LAB24:    t6 = (t0 + 1644);
    xsi_vlog_subprogram_popinvocation(t6);

LAB22:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 1644);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 1884);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB27:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB29;

LAB28:    t6 = (t0 + 1884);
    xsi_vlog_subprogram_popinvocation(t6);

LAB26:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 1884);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 2124);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB31:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB33;

LAB32:    t6 = (t0 + 2124);
    xsi_vlog_subprogram_popinvocation(t6);

LAB30:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 2124);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 2364);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB35:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB37;

LAB36:    t6 = (t0 + 2364);
    xsi_vlog_subprogram_popinvocation(t6);

LAB34:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 2364);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 2604);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB39:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB41;

LAB40:    t6 = (t0 + 2604);
    xsi_vlog_subprogram_popinvocation(t6);

LAB38:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 2604);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 2844);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB43:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB45;

LAB44:    t6 = (t0 + 2844);
    xsi_vlog_subprogram_popinvocation(t6);

LAB42:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 2844);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5924);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB9:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB13:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB11;
    goto LAB1;

LAB17:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB15;
    goto LAB1;

LAB21:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB19;
    goto LAB1;

LAB25:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB23;
    goto LAB1;

LAB29:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB27;
    goto LAB1;

LAB33:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB31;
    goto LAB1;

LAB37:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB35;
    goto LAB1;

LAB41:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB39;
    goto LAB1;

LAB45:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB43;
    goto LAB1;

LAB46:    xsi_set_current_line(100, ng0);

LAB47:    xsi_set_current_line(100, ng0);

LAB48:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5924);
    xsi_process_wait(t2, 115000000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB49:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 684);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB51:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB53;

LAB52:    t6 = (t0 + 684);
    xsi_vlog_subprogram_popinvocation(t6);

LAB50:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 684);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 924);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB55:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB57;

LAB56:    t6 = (t0 + 924);
    xsi_vlog_subprogram_popinvocation(t6);

LAB54:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 924);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 1164);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB59:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB61;

LAB60:    t6 = (t0 + 1164);
    xsi_vlog_subprogram_popinvocation(t6);

LAB58:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 1164);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 1404);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB63:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB65;

LAB64:    t6 = (t0 + 1404);
    xsi_vlog_subprogram_popinvocation(t6);

LAB62:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 1404);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 1644);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB67:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB69;

LAB68:    t6 = (t0 + 1644);
    xsi_vlog_subprogram_popinvocation(t6);

LAB66:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 1644);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 1884);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB71:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB73;

LAB72:    t6 = (t0 + 1884);
    xsi_vlog_subprogram_popinvocation(t6);

LAB70:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 1884);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 2124);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB75:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB77;

LAB76:    t6 = (t0 + 2124);
    xsi_vlog_subprogram_popinvocation(t6);

LAB74:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 2124);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 2364);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB79:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB81;

LAB80:    t6 = (t0 + 2364);
    xsi_vlog_subprogram_popinvocation(t6);

LAB78:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 2364);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 2604);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB83:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB85;

LAB84:    t6 = (t0 + 2604);
    xsi_vlog_subprogram_popinvocation(t6);

LAB82:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 2604);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5924);
    t3 = (t0 + 2844);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB87:    t5 = (t0 + 5972);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    t9 = (t8 + 132U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);
    if (t13 != 0)
        goto LAB89;

LAB88:    t6 = (t0 + 2844);
    xsi_vlog_subprogram_popinvocation(t6);

LAB86:    t14 = (t0 + 5972);
    t15 = *((char **)t14);
    t14 = (t0 + 2844);
    t16 = (t0 + 5972);
    t17 = *((char **)t16);
    t16 = (t0 + 5924);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t17, t0, t16, t18);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5924);
    xsi_process_wait(t2, 85000000LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB53:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB51;
    goto LAB1;

LAB57:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB55;
    goto LAB1;

LAB61:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB59;
    goto LAB1;

LAB65:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB63;
    goto LAB1;

LAB69:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB67;
    goto LAB1;

LAB73:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB71;
    goto LAB1;

LAB77:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB75;
    goto LAB1;

LAB81:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB79;
    goto LAB1;

LAB85:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB83;
    goto LAB1;

LAB89:    t5 = (t0 + 6008U);
    *((char **)t5) = &&LAB87;
    goto LAB1;

LAB90:    goto LAB47;

LAB91:    goto LAB1;

}

static void I116_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);

LAB4:    xsi_set_current_line(117, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname(ng14);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 5312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 6052);
    xsi_process_wait(t2, 22200000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(119, ng0);
    xsi_vlogfile_write(1, 0, ng15, 1, t0);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5312);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 5404);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 1, 0, ng16, 2, t0, (char)119, t8, 32);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5312);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(122, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void I125_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 6264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);

LAB4:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 185000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng33)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng36)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng37)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng39)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng40)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng42)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng43)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(241, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng44)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(246, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(252, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng46)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng47)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(261, ng0);
    t2 = ((char*)((ng48)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(264, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(266, ng0);
    t2 = ((char*)((ng49)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(271, ng0);
    t2 = ((char*)((ng50)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(275, ng0);
    t2 = ((char*)((ng51)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(279, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(280, ng0);
    t2 = ((char*)((ng52)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(283, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng53)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(287, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(288, ng0);
    t2 = ((char*)((ng54)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(291, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng55)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(295, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng56)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(299, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    xsi_set_current_line(300, ng0);
    t2 = ((char*)((ng57)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(303, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng58)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(307, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng59)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(311, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB48:    xsi_set_current_line(312, ng0);
    t2 = ((char*)((ng60)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(315, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB49:    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng61)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(319, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(320, ng0);
    t2 = ((char*)((ng62)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(323, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(324, ng0);
    t2 = ((char*)((ng63)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(327, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(328, ng0);
    t2 = ((char*)((ng64)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(331, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB53:    xsi_set_current_line(332, ng0);
    t2 = ((char*)((ng65)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(333, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(336, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(337, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(338, ng0);
    t2 = ((char*)((ng66)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(342, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(343, ng0);
    t2 = ((char*)((ng67)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(346, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB56:    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng68)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(350, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB57:    xsi_set_current_line(351, ng0);
    t2 = ((char*)((ng69)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(354, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng70)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(360, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB59:    xsi_set_current_line(361, ng0);
    t2 = ((char*)((ng71)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(362, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(365, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    xsi_set_current_line(366, ng0);
    t2 = ((char*)((ng72)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(369, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB61:    xsi_set_current_line(370, ng0);
    t2 = ((char*)((ng73)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(373, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(374, ng0);
    t2 = ((char*)((ng74)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(377, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB63:    xsi_set_current_line(378, ng0);
    t2 = ((char*)((ng75)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(381, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB64:    xsi_set_current_line(382, ng0);
    t2 = ((char*)((ng76)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(385, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    xsi_set_current_line(386, ng0);
    t2 = ((char*)((ng77)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(389, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB66:    xsi_set_current_line(390, ng0);
    t2 = ((char*)((ng78)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(393, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB67:    xsi_set_current_line(394, ng0);
    t2 = ((char*)((ng79)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(397, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB68:    xsi_set_current_line(398, ng0);
    t2 = ((char*)((ng80)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(401, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB69:    xsi_set_current_line(402, ng0);
    t2 = ((char*)((ng81)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(403, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(406, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB70:    xsi_set_current_line(407, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(408, ng0);
    t2 = ((char*)((ng82)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(409, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(412, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB71:    xsi_set_current_line(413, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(414, ng0);
    t2 = ((char*)((ng83)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(415, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(418, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB72:    xsi_set_current_line(419, ng0);
    t2 = ((char*)((ng84)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(420, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(423, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB73:    xsi_set_current_line(424, ng0);
    t2 = ((char*)((ng85)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(427, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB74:    xsi_set_current_line(428, ng0);
    t2 = ((char*)((ng86)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(431, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB75:    xsi_set_current_line(432, ng0);
    t2 = ((char*)((ng87)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(435, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB76:    xsi_set_current_line(436, ng0);
    t2 = ((char*)((ng88)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(439, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB77:    xsi_set_current_line(440, ng0);
    t2 = ((char*)((ng89)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(443, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB78:    xsi_set_current_line(444, ng0);
    t2 = ((char*)((ng90)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(447, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB79:    xsi_set_current_line(448, ng0);
    t2 = ((char*)((ng91)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(449, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(452, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB80:    xsi_set_current_line(453, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(454, ng0);
    t2 = ((char*)((ng92)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(455, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(458, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB81:    xsi_set_current_line(459, ng0);
    t2 = ((char*)((ng93)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(462, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB82:    xsi_set_current_line(463, ng0);
    t2 = ((char*)((ng94)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(466, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB83:    xsi_set_current_line(467, ng0);
    t2 = ((char*)((ng95)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(470, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB84:    xsi_set_current_line(471, ng0);
    t2 = ((char*)((ng96)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(474, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB85:    xsi_set_current_line(475, ng0);
    t2 = ((char*)((ng97)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(478, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB86:    xsi_set_current_line(479, ng0);
    t2 = ((char*)((ng98)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(482, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    xsi_set_current_line(483, ng0);
    t2 = ((char*)((ng99)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(486, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB88:    xsi_set_current_line(487, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(488, ng0);
    t2 = ((char*)((ng100)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(489, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(492, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB89:    xsi_set_current_line(493, ng0);
    t2 = ((char*)((ng101)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(494, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(497, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB90:    xsi_set_current_line(498, ng0);
    t2 = ((char*)((ng102)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(501, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB91:    xsi_set_current_line(502, ng0);
    t2 = ((char*)((ng103)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(505, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB92:    xsi_set_current_line(506, ng0);
    t2 = ((char*)((ng104)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(509, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB93;
    goto LAB1;

LAB93:    xsi_set_current_line(510, ng0);
    t2 = ((char*)((ng105)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(513, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB94:    xsi_set_current_line(514, ng0);
    t2 = ((char*)((ng106)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(517, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB95:    xsi_set_current_line(518, ng0);
    t2 = ((char*)((ng107)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(521, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB96:    xsi_set_current_line(522, ng0);
    t2 = ((char*)((ng108)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(525, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB97:    xsi_set_current_line(526, ng0);
    t2 = ((char*)((ng109)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(529, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB98:    xsi_set_current_line(530, ng0);
    t2 = ((char*)((ng110)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(533, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB99:    xsi_set_current_line(534, ng0);
    t2 = ((char*)((ng111)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(537, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB100;
    goto LAB1;

LAB100:    xsi_set_current_line(538, ng0);
    t2 = ((char*)((ng112)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(541, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB101:    xsi_set_current_line(542, ng0);
    t2 = ((char*)((ng113)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(545, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB102:    xsi_set_current_line(546, ng0);
    t2 = ((char*)((ng114)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(547, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(550, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB103:    xsi_set_current_line(551, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(552, ng0);
    t2 = ((char*)((ng115)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(553, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(556, ng0);
    t2 = (t0 + 6180);
    xsi_process_wait(t2, 200000000LL);
    *((char **)t1) = &&LAB104;
    goto LAB1;

LAB104:    xsi_set_current_line(557, ng0);
    t2 = ((char*)((ng116)));
    t3 = (t0 + 4208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    goto LAB1;

}


extern void work_m_00000000003008316969_1670755963_init()
{
	static char *pe[] = {(void *)I49_0,(void *)I87_1,(void *)I116_2,(void *)I125_3};
	static char *se[] = {(void *)sp_ANNOTATE_in_rdy,(void *)sp_ANNOTATE_out_data,(void *)sp_ANNOTATE_out_ctrl,(void *)sp_ANNOTATE_out_wr,(void *)sp_ANNOTATE_reg_req_out,(void *)sp_ANNOTATE_reg_ack_out,(void *)sp_ANNOTATE_reg_rd_wr_L_out,(void *)sp_ANNOTATE_reg_addr_out,(void *)sp_ANNOTATE_reg_data_out,(void *)sp_ANNOTATE_reg_src_out};
	xsi_register_didat("work_m_00000000003008316969_1670755963", "isim/_tmp/work/m_00000000003008316969_1670755963.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
