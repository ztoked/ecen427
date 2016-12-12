/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_s6_ddrx_v1_05_a/hdl/verilog/axi_mcb_simple_fifo.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {2U, 0U};



static void Always_108_0(char *t0)
{
    char t15[8];
    char t16[8];
    char t18[8];
    char t29[8];
    char t30[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    int t44;
    char *t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;

LAB0:    t1 = (t0 + 5696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 8000);
    *((int *)t2) = 1;
    t3 = (t0 + 5728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 5504);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(110, ng0);
    t6 = (t0 + 2616U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:
LAB10:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 5504);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(110, ng0);

LAB11:    xsi_set_current_line(111, ng0);
    xsi_set_current_line(111, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 4776);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB12:    t2 = (t0 + 4776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1040);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t6, 32, t5, 32);
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 32, t4, 32, t15, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t0 + 4136);
    t4 = (t0 + 4136);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 4136);
    t13 = (t7 + 64U);
    t14 = *((char **)t13);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t15, t16, t6, t14, 2, 1, t17, 32, 1);
    t19 = (t15 + 4);
    t8 = *((unsigned int *)t19);
    t44 = (!(t8));
    t20 = (t16 + 4);
    t9 = *((unsigned int *)t20);
    t47 = (!(t9));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB18;

LAB19:    goto LAB10;

LAB13:    xsi_set_current_line(111, ng0);

LAB15:    xsi_set_current_line(112, ng0);
    t13 = (t0 + 4136);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    t19 = (t0 + 4136);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 4136);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 4776);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t18, 2, t17, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t0 + 4136);
    t31 = (t0 + 4136);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 4136);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 4776);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng2)));
    memset(t41, 0, 8);
    xsi_vlog_signed_add(t41, 32, t39, 32, t40, 32);
    xsi_vlog_generic_convert_array_indices(t29, t30, t33, t36, 2, 1, t41, 32, 1);
    t42 = (t29 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t30 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t6 = (t0 + 4776);
    xsi_vlogvar_assign_value(t6, t15, 0, 0, 32);
    goto LAB12;

LAB16:    t49 = *((unsigned int *)t29);
    t50 = *((unsigned int *)t30);
    t51 = (t49 - t50);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t28, t18, 0, *((unsigned int *)t30), t52, 0LL);
    goto LAB17;

LAB18:    t10 = *((unsigned int *)t15);
    t11 = *((unsigned int *)t16);
    t51 = (t10 - t11);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t16), t52, 0LL);
    goto LAB19;

}

static void Always_124_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;

LAB0:    t1 = (t0 + 5944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 8016);
    *((int *)t2) = 1;
    t3 = (t0 + 5976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(124, ng0);

LAB5:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 2456U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    t2 = (t0 + 2776U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t2) == 0)
        goto LAB9;

LAB11:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB12:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t13);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t11 = (t3 + 4);
    t12 = (t13 + 4);
    t18 = (t14 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB13;

LAB14:
LAB15:    t44 = (t14 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t14);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t2) == 0)
        goto LAB19;

LAB21:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB22:    t5 = (t0 + 2776U);
    t11 = *((char **)t5);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t11);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t5 = (t13 + 4);
    t12 = (t11 + 4);
    t18 = (t14 + 4);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB23;

LAB24:
LAB25:    t44 = (t14 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t14);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(125, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t24 | t25);
    t26 = (t3 + 4);
    t27 = (t13 + 4);
    t28 = *((unsigned int *)t3);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t38);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t39);
    t42 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t42 & t38);
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & t39);
    goto LAB15;

LAB16:    xsi_set_current_line(126, ng0);
    t50 = (t0 + 4296);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng4)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 2, t52, 2, t53, 2);
    t55 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, 0, 2, 0LL);
    goto LAB18;

LAB19:    *((unsigned int *)t13) = 1;
    goto LAB22;

LAB23:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t24 | t25);
    t26 = (t13 + 4);
    t27 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t38);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t39);
    t42 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t42 & t38);
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & t39);
    goto LAB25;

LAB26:    xsi_set_current_line(127, ng0);
    t50 = (t0 + 4296);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng4)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_minus(t54, 2, t52, 2, t53, 2);
    t55 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, 0, 2, 0LL);
    goto LAB28;

}

static void Always_133_2(char *t0)
{
    char t13[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;

LAB0:    t1 = (t0 + 6192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 8032);
    *((int *)t2) = 1;
    t3 = (t0 + 6224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(133, ng0);

LAB5:    xsi_set_current_line(134, ng0);
    t4 = (t0 + 2456U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    t2 = (t0 + 2776U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB13:    t11 = (t13 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB15;

LAB14:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t13);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t3 + 4);
    t27 = (t13 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB16;

LAB17:
LAB18:    t54 = (t22 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t22);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t2) == 0)
        goto LAB23;

LAB25:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB26:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB28;

LAB27:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t12 = (t0 + 2776U);
    t26 = *((char **)t12);
    t23 = *((unsigned int *)t13);
    t24 = *((unsigned int *)t26);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t12 = (t13 + 4);
    t27 = (t26 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB29;

LAB30:
LAB31:    t54 = (t22 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t22);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(134, ng0);

LAB9:    xsi_set_current_line(135, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t18 | t19);
    goto LAB14;

LAB16:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t13 + 4);
    t38 = *((unsigned int *)t3);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB18;

LAB19:    xsi_set_current_line(137, ng0);

LAB22:    xsi_set_current_line(138, ng0);
    t60 = (t0 + 3256U);
    t61 = *((char **)t60);
    t60 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t60, t61, 0, 0, 1, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t13) = 1;
    goto LAB26;

LAB28:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB27;

LAB29:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t13 + 4);
    t37 = (t26 + 4);
    t38 = *((unsigned int *)t13);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB31;

LAB32:    xsi_set_current_line(140, ng0);

LAB35:    xsi_set_current_line(141, ng0);
    t60 = ((char*)((ng5)));
    t61 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t61, t60, 0, 0, 1, 0LL);
    goto LAB34;

}

static void Always_145_3(char *t0)
{
    char t13[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;

LAB0:    t1 = (t0 + 6440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 8048);
    *((int *)t2) = 1;
    t3 = (t0 + 6472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(145, ng0);

LAB5:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 2456U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB15;

LAB14:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t12 = (t0 + 2776U);
    t22 = *((char **)t12);
    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t22);
    t26 = (t24 & t25);
    *((unsigned int *)t23) = t26;
    t12 = (t13 + 4);
    t27 = (t22 + 4);
    t28 = (t23 + 4);
    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB16;

LAB17:
LAB18:    t54 = (t23 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t23);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    t2 = (t0 + 2776U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t2) == 0)
        goto LAB23;

LAB25:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB26:    t11 = (t13 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB28;

LAB27:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 1U);
    t24 = *((unsigned int *)t3);
    t25 = *((unsigned int *)t13);
    t26 = (t24 & t25);
    *((unsigned int *)t23) = t26;
    t22 = (t3 + 4);
    t27 = (t13 + 4);
    t28 = (t23 + 4);
    t29 = *((unsigned int *)t22);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB29;

LAB30:
LAB31:    t54 = (t23 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t23);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(146, ng0);

LAB9:    xsi_set_current_line(147, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB14;

LAB16:    t34 = *((unsigned int *)t23);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t23) = (t34 | t35);
    t36 = (t13 + 4);
    t37 = (t22 + 4);
    t38 = *((unsigned int *)t13);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t22);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t52 & t48);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & t49);
    goto LAB18;

LAB19:    xsi_set_current_line(149, ng0);

LAB22:    xsi_set_current_line(150, ng0);
    t60 = (t0 + 3576U);
    t61 = *((char **)t60);
    t60 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t60, t61, 0, 0, 1, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t13) = 1;
    goto LAB26;

LAB28:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t18 | t19);
    goto LAB27;

LAB29:    t34 = *((unsigned int *)t23);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t23) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t13 + 4);
    t38 = *((unsigned int *)t3);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t52 & t48);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & t49);
    goto LAB31;

LAB32:    xsi_set_current_line(152, ng0);

LAB35:    xsi_set_current_line(153, ng0);
    t60 = ((char*)((ng5)));
    t61 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t61, t60, 0, 0, 1, 0LL);
    goto LAB34;

}

static void Cont_158_4(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8208);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8064);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_159_5(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8272);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8080);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_160_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 7184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 8336);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 8096);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_161_7(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 7432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 8400);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 8112);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_163_8(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t21[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 7680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 1040);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t14);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t36, 8);

LAB16:    t46 = (t0 + 8464);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t50, 0, 8);
    t51 = 3U;
    t52 = t51;
    t53 = (t3 + 4);
    t54 = *((unsigned int *)t3);
    t51 = (t51 & t54);
    t55 = *((unsigned int *)t53);
    t52 = (t52 & t55);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 | t51);
    t58 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t58 | t52);
    xsi_driver_vfirst_trans(t46, 0, 1);
    t59 = (t0 + 8128);
    *((int *)t59) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 4136);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t22 = (t0 + 4136);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 4136);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t21, 2, t20, t24, t27, 2, 1, t28, 32, 1);
    goto LAB9;

LAB10:    t33 = (t0 + 4136);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t37 = (t0 + 4136);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 4136);
    t41 = (t40 + 64U);
    t42 = *((char **)t41);
    t43 = (t0 + 4296);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    xsi_vlog_generic_get_array_select_value(t36, 2, t35, t39, t42, 2, 1, t45, 2, 2);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 2, t21, 2, t36, 2);
    goto LAB16;

LAB14:    memcpy(t3, t21, 8);
    goto LAB16;

}


extern void axi_s6_ddrx_v1_05_a_m_00000000001601414950_0389232631_init()
{
	static char *pe[] = {(void *)Always_108_0,(void *)Always_124_1,(void *)Always_133_2,(void *)Always_145_3,(void *)Cont_158_4,(void *)Cont_159_5,(void *)Cont_160_6,(void *)Cont_161_7,(void *)Cont_163_8};
	xsi_register_didat("axi_s6_ddrx_v1_05_a_m_00000000001601414950_0389232631", "isim/isim_system.exe.sim/axi_s6_ddrx_v1_05_a/m_00000000001601414950_0389232631.didat");
	xsi_register_executes(pe);
}
