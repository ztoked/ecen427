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
extern char *IEEE_P_2592010699;
static const char *ng1 = "E:/427/Lab7/HardWare/pcores/axi_ac97_v1_00_a/hdl/vhdl/opb_ac97.vhd";

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);


int axi_ac97_v1_00_a_a_0746072887_3306564128_sub_4080491193_229454594(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[40];
    char t6[16];
    char t12[16];
    char t15[16];
    char t32[16];
    int t0;
    int t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    int t13;
    int t14;
    int t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    int t38;

LAB0:    t7 = (32 - 1);
    t8 = (t6 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = t7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (t7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    memcpy(t12, t6, 16U);
    t13 = (32 - 1);
    t14 = (t13 - 0);
    t11 = (t14 * 1);
    t11 = (t11 + 1);
    t11 = (t11 * 1U);
    t16 = (32 - 1);
    t9 = (t15 + 0U);
    t17 = (t9 + 0U);
    *((int *)t17) = 0;
    t17 = (t9 + 4U);
    *((int *)t17) = t16;
    t17 = (t9 + 8U);
    *((int *)t17) = 1;
    t18 = (t16 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t9 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t4 + 4U);
    t20 = ((IEEE_P_2592010699) + 4024);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t11);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t15);
    t24 = (t17 + 64U);
    *((char **)t24) = t15;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t11;
    t26 = (t5 + 4U);
    t27 = (t2 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t5 + 12U);
    *((char **)t28) = t6;
    t29 = (t5 + 20U);
    t30 = (t3 != 0);
    if (t30 == 1)
        goto LAB5;

LAB4:    t31 = (t5 + 28U);
    *((char **)t31) = t12;
    t33 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t32, t2, t6, t3, t12);
    t34 = (t17 + 56U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    t36 = (t32 + 12U);
    t19 = *((unsigned int *)t36);
    t37 = (1U * t19);
    memcpy(t34, t33, t37);
    t7 = (32 - 1);
    t10 = 0;
    t13 = t7;

LAB6:    if (t10 <= t13)
        goto LAB7;

LAB9:    t0 = 32;

LAB1:    return t0;
LAB3:    *((char **)t26) = t2;
    goto LAB2;

LAB5:    *((char **)t29) = t3;
    goto LAB4;

LAB7:    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t8 = (t15 + 0U);
    t14 = *((int *)t8);
    t20 = (t15 + 8U);
    t16 = *((int *)t20);
    t18 = (t10 - t14);
    t11 = (t18 * t16);
    t21 = (t15 + 4U);
    t38 = *((int *)t21);
    xsi_vhdl_check_range_of_index(t14, t38, t16, t10);
    t19 = (1U * t11);
    t37 = (0 + t19);
    t23 = (t9 + t37);
    t27 = *((unsigned char *)t23);
    t30 = (t27 == (unsigned char)3);
    if (t30 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB8:    if (t10 == t13)
        goto LAB9;

LAB14:    t7 = (t10 + 1);
    t10 = t7;
    goto LAB6;

LAB10:    t0 = t10;
    goto LAB1;

LAB13:    goto LAB11;

LAB15:;
}

static void axi_ac97_v1_00_a_a_0746072887_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(205, ng1);

LAB3:    t1 = (t0 + 13960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 22768);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 22592);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0746072887_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(209, ng1);

LAB3:    t1 = (t0 + 10440U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 22832);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 22608);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0746072887_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(229, ng1);
    t1 = (t0 + 10280U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 9760U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 22624);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(230, ng1);
    t1 = (t0 + 22896);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(231, ng1);
    t1 = (t0 + 22960);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(232, ng1);
    t1 = (t0 + 23024);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(234, ng1);
    t2 = (t0 + 12680U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 12840U);
    t7 = *((char **)t2);
    t12 = *((unsigned char *)t7);
    t13 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t12);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t13);
    t2 = (t0 + 13000U);
    t8 = *((char **)t2);
    t15 = *((unsigned char *)t8);
    t16 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t15);
    t17 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t14, t16);
    t2 = (t0 + 22896);
    t18 = (t2 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t17;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(235, ng1);
    t1 = (t0 + 12840U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 22960);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(236, ng1);
    t1 = (t0 + 10120U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 23024);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 9800U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void axi_ac97_v1_00_a_a_0746072887_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(240, ng1);

LAB3:    t1 = (t0 + 12840U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13320U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 23088);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 22640);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0746072887_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(241, ng1);

LAB3:    t1 = (t0 + 12840U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13320U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 23152);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 22656);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0746072887_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(245, ng1);
    t1 = (t0 + 10280U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 9760U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 22672);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(246, ng1);
    t1 = (t0 + 23216);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(248, ng1);
    t2 = (t0 + 12840U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 23216);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 9800U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void axi_ac97_v1_00_a_a_0746072887_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(252, ng1);

LAB3:    t1 = (t0 + 23280);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0746072887_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(253, ng1);

LAB3:    t1 = (t0 + 23344);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0746072887_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(254, ng1);

LAB3:    t1 = (t0 + 23408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0746072887_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(255, ng1);

LAB3:    t1 = (t0 + 13160U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 23472);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 22688);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_ac97_v1_00_a_a_0746072887_3306564128_init()
{
	static char *pe[] = {(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_p_0,(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_p_1,(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_p_2,(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_p_3,(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_p_4,(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_p_5,(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_p_6,(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_p_7,(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_p_8,(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_p_9};
	static char *se[] = {(void *)axi_ac97_v1_00_a_a_0746072887_3306564128_sub_4080491193_229454594};
	xsi_register_didat("axi_ac97_v1_00_a_a_0746072887_3306564128", "isim/isim_system.exe.sim/axi_ac97_v1_00_a/a_0746072887_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
