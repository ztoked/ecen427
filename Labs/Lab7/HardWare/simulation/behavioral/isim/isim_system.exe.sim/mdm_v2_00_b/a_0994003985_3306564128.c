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
static const char *ng0 = "Function largest ended without a return statement";
static const char *ng1 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/mdm_v2_00_b/hdl/vhdl/jtag_control.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


int mdm_v2_00_b_a_0994003985_3306564128_sub_2308573634_229454594(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t2 > t3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(306, ng1);

LAB3:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 38640);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 37840);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(324, ng1);

LAB3:    t1 = (t0 + 8800U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 38704);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 37856);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(330, ng1);

LAB3:    t1 = (t0 + 6400U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 38768);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t9 = (t0 + 37872);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(348, ng1);

LAB3:    t1 = (t0 + 16480U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 38832);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);

LAB2:    t8 = (t0 + 37888);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(348, ng1);

LAB3:    t1 = (t0 + 17120U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 38896);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);

LAB2:    t8 = (t0 + 37904);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(348, ng1);

LAB3:    t1 = (t0 + 17760U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 38960);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);

LAB2:    t8 = (t0 + 37920);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(348, ng1);

LAB3:    t1 = (t0 + 18400U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 39024);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);

LAB2:    t8 = (t0 + 37936);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(348, ng1);

LAB3:    t1 = (t0 + 19040U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 39088);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);

LAB2:    t8 = (t0 + 37952);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(351, ng1);

LAB3:    t1 = (t0 + 9280U);
    t2 = *((char **)t1);
    t3 = (5 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 39152);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 37968);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_9(char *t0)
{
    char t22[16];
    char t24[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(355, ng1);
    t2 = (t0 + 6520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 37984);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(356, ng1);
    t4 = (t0 + 6400U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(357, ng1);
    t4 = (t0 + 5600U);
    t15 = *((char **)t4);
    t16 = *((unsigned char *)t15);
    t4 = (t0 + 9760U);
    t17 = *((char **)t4);
    t18 = (0 - 0);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t4 = (t17 + t20);
    t23 = ((IEEE_P_2592010699) + 4024);
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 0;
    t26 = (t25 + 4U);
    *((int *)t26) = 6;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t27 = (6 - 0);
    t28 = (t27 * 1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t21 = xsi_base_array_concat(t21, t22, t23, (char)99, t16, (char)97, t4, t24, (char)101);
    t28 = (1U + 7U);
    t29 = (8U != t28);
    if (t29 == 1)
        goto LAB14;

LAB15:    t26 = (t0 + 39216);
    t30 = (t26 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t21, 8U);
    xsi_driver_first_trans_fast(t26);
    goto LAB9;

LAB11:    t4 = (t0 + 6080U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;
    goto LAB13;

LAB14:    xsi_size_not_matching(8U, t28, 0);
    goto LAB15;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_10(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(364, ng1);
    t2 = (t0 + 5880U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 38000);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(365, ng1);
    t4 = (t0 + 6400U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5920U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(366, ng1);
    t4 = (t0 + 9600U);
    t11 = *((char **)t4);
    t4 = (t0 + 39280);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_11(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(373, ng1);
    t2 = (t0 + 5880U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 38016);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(374, ng1);
    t4 = (t0 + 6400U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5920U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(375, ng1);
    t4 = (t0 + 9760U);
    t15 = *((char **)t4);
    t16 = (0 - 0);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t4 = (t15 + t18);
    t19 = (t0 + 39344);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t4, 8U);
    xsi_driver_first_trans_fast(t19);
    goto LAB9;

LAB11:    t4 = (t0 + 8800U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t8 = t14;
    goto LAB13;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(380, ng1);

LAB3:    t1 = (t0 + 6560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 39408);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38032);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(381, ng1);
    t1 = (t0 + 8800U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(8U);
    memset(t10, 0, 8U);
    t11 = t10;
    memset(t11, (unsigned char)2, 8U);
    t12 = (t0 + 39472);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 38048);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 9440U);
    t5 = *((char **)t1);
    t1 = (t0 + 39472);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(382, ng1);

LAB3:    t1 = (t0 + 9920U);
    t2 = *((char **)t1);
    t1 = (t0 + 39536);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38064);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(383, ng1);

LAB3:    t1 = (t0 + 8640U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 39600);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38080);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(384, ng1);

LAB3:    t1 = (t0 + 6240U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 39664);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38096);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(385, ng1);

LAB3:    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 39728);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 38112);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(386, ng1);

LAB3:    t1 = (t0 + 10560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 39792);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38128);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_19(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(389, ng1);
    t2 = (t0 + 9440U);
    t3 = *((char **)t2);
    t2 = (t0 + 22096U);
    t4 = *((char **)t2);
    t5 = 1;
    if (8U == 8U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t21 = (t0 + 6080U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t21 = (t0 + 39856);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = t23;
    xsi_driver_first_trans_fast(t21);

LAB2:    t28 = (t0 + 38144);
    *((int *)t28) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 6080U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t8 = (t0 + 10400U);
    t14 = *((char **)t8);
    t15 = *((unsigned char *)t14);
    t16 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t13, t15);
    t8 = (t0 + 39856);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t16;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t8 = (t0 + 8800U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 8U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t2 = (t3 + t6);
    t7 = (t4 + t6);
    if (*((unsigned char *)t2) != *((unsigned char *)t7))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB15:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_20(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(393, ng1);

LAB3:    t1 = (t0 + 10080U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 39920);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38160);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_21(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(395, ng1);
    t2 = (t0 + 9760U);
    t3 = *((char **)t2);
    t4 = (0 - 0);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t7 = (t0 + 21496U);
    t8 = *((char **)t7);
    t9 = 1;
    if (8U == 8U)
        goto LAB8;

LAB9:    t9 = 0;

LAB10:    if (t9 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t20 = (t0 + 39984);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t20);

LAB2:    t25 = (t0 + 38176);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 39984);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t12 = (t0 + 8800U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)3);
    t1 = t15;
    goto LAB7;

LAB8:    t10 = 0;

LAB11:    if (t10 < 8U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t2 + t10);
    t11 = (t8 + t10);
    if (*((unsigned char *)t7) != *((unsigned char *)t11))
        goto LAB9;

LAB13:    t10 = (t10 + 1);
    goto LAB11;

LAB15:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_22(char *t0)
{
    char t17[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(413, ng1);
    t2 = (t0 + 6520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 38192);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(414, ng1);
    t4 = (t0 + 6080U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(417, ng1);
    t2 = (t0 + 11200U);
    t4 = *((char **)t2);
    t2 = (t0 + 67480U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t4, t2, 1);
    t8 = (t0 + 40048);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 5U);
    xsi_driver_first_trans_fast(t8);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(415, ng1);
    t4 = xsi_get_transient_memory(5U);
    memset(t4, 0, 5U);
    t11 = t4;
    memset(t11, (unsigned char)2, 5U);
    t12 = (t0 + 40048);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_23(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(427, ng1);
    t2 = (t0 + 6520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 38208);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(428, ng1);
    t4 = (t0 + 10080U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(429, ng1);
    t4 = (t0 + 12320U);
    t11 = *((char **)t4);
    t12 = (0 - 0);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t4 = (t11 + t14);
    t15 = (t0 + 40112);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 7U);
    xsi_driver_first_trans_delta(t15, 1U, 7U, 0LL);
    xsi_set_current_line(431, ng1);
    t2 = (t0 + 8640U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 40112);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t15 = *((char **)t11);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    goto LAB9;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_24(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(467, ng1);
    t1 = (t0 + 11200U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 8320U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t16 = (t0 + 40176);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t18;
    xsi_driver_first_trans_fast(t16);

LAB2:    t23 = (t0 + 38224);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 8160U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 40176);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_25(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(500, ng1);
    t1 = (t0 + 11200U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 14560U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t16 = (t0 + 40240);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t18;
    xsi_driver_first_trans_fast(t16);

LAB2:    t23 = (t0 + 38240);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 14400U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 40240);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_26(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    int t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 31568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(505, ng1);
    t2 = (t0 + 9440U);
    t3 = *((char **)t2);
    t2 = (t0 + 21616U);
    t4 = *((char **)t2);
    t5 = xsi_mem_cmp(t4, t3, 8U);
    if (t5 == 1)
        goto LAB5;

LAB10:    t2 = (t0 + 22816U);
    t6 = *((char **)t2);
    t7 = xsi_mem_cmp(t6, t3, 8U);
    if (t7 == 1)
        goto LAB6;

LAB11:    t2 = (t0 + 22696U);
    t8 = *((char **)t2);
    t9 = xsi_mem_cmp(t8, t3, 8U);
    if (t9 == 1)
        goto LAB7;

LAB12:    t2 = (t0 + 22936U);
    t10 = *((char **)t2);
    t11 = xsi_mem_cmp(t10, t3, 8U);
    if (t11 == 1)
        goto LAB8;

LAB13:
LAB9:    xsi_set_current_line(507, ng1);
    t2 = (t0 + 7360U);
    t3 = *((char **)t2);
    t13 = *((unsigned char *)t3);
    t2 = (t0 + 40304);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t13;
    xsi_driver_first_trans_fast_port(t2);

LAB4:    xsi_set_current_line(505, ng1);

LAB17:    t2 = (t0 + 38256);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;

LAB1:    return;
LAB5:    xsi_set_current_line(507, ng1);
    t2 = (t0 + 14240U);
    t12 = *((char **)t2);
    t13 = *((unsigned char *)t12);
    t2 = (t0 + 40304);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB6:    xsi_set_current_line(507, ng1);
    t2 = (t0 + 11360U);
    t3 = *((char **)t2);
    t13 = *((unsigned char *)t3);
    t2 = (t0 + 40304);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t13;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(507, ng1);
    t2 = (t0 + 11360U);
    t3 = *((char **)t2);
    t13 = *((unsigned char *)t3);
    t2 = (t0 + 40304);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t13;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB8:    xsi_set_current_line(507, ng1);
    t2 = (t0 + 8480U);
    t3 = *((char **)t2);
    t13 = *((unsigned char *)t3);
    t2 = (t0 + 40304);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t13;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB14:;
LAB15:    t3 = (t0 + 38256);
    *((int *)t3) = 0;
    goto LAB2;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_27(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(536, ng1);

LAB3:    t1 = (t0 + 40368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_28(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(548, ng1);
    t2 = (t0 + 5880U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 38272);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(549, ng1);
    t4 = (t0 + 9440U);
    t9 = *((char **)t4);
    t4 = (t0 + 22456U);
    t10 = *((char **)t4);
    t11 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t11 = 0;

LAB16:    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5920U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(550, ng1);
    t14 = (t0 + 9760U);
    t18 = *((char **)t14);
    t19 = (0 - 0);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t14 = (t18 + t22);
    t23 = *((unsigned char *)t14);
    t24 = (t0 + 40432);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t23;
    xsi_driver_first_trans_fast(t24);
    xsi_set_current_line(551, ng1);
    t2 = (t0 + 9760U);
    t4 = *((char **)t2);
    t19 = (1 - 0);
    t12 = (t19 * 1);
    t20 = (1U * t12);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 40496);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t1;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(552, ng1);
    t2 = (t0 + 9760U);
    t4 = *((char **)t2);
    t19 = (2 - 0);
    t12 = (t19 * 1);
    t20 = (1U * t12);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 40560);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t1;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(553, ng1);
    t2 = (t0 + 9760U);
    t4 = *((char **)t2);
    t19 = (3 - 0);
    t12 = (t19 * 1);
    t20 = (1U * t12);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 40624);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t1;
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    t14 = (t0 + 8800U);
    t15 = *((char **)t14);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)3);
    t8 = t17;
    goto LAB13;

LAB14:    t12 = 0;

LAB17:    if (t12 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t4 = (t9 + t12);
    t13 = (t10 + t12);
    if (*((unsigned char *)t4) != *((unsigned char *)t13))
        goto LAB15;

LAB19:    t12 = (t12 + 1);
    goto LAB17;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_29(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(564, ng1);
    t2 = (t0 + 5880U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 38288);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(565, ng1);
    t4 = (t0 + 9440U);
    t9 = *((char **)t4);
    t4 = (t0 + 23176U);
    t10 = *((char **)t4);
    t11 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t11 = 0;

LAB16:    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5920U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(566, ng1);
    t14 = (t0 + 9760U);
    t18 = *((char **)t14);
    t19 = (0 - 0);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t14 = (t18 + t22);
    t23 = *((unsigned char *)t14);
    t24 = (t0 + 40688);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t23;
    xsi_driver_first_trans_fast(t24);
    goto LAB9;

LAB11:    t14 = (t0 + 8800U);
    t15 = *((char **)t14);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)3);
    t8 = t17;
    goto LAB13;

LAB14:    t12 = 0;

LAB17:    if (t12 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t4 = (t9 + t12);
    t13 = (t10 + t12);
    if (*((unsigned char *)t4) != *((unsigned char *)t13))
        goto LAB15;

LAB19:    t12 = (t12 + 1);
    goto LAB17;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_30(char *t0)
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
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(576, ng1);
    t1 = (t0 + 8800U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5880U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 38304);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(577, ng1);
    t1 = (t0 + 40752);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(579, ng1);
    t2 = (t0 + 9440U);
    t6 = *((char **)t2);
    t2 = (t0 + 22816U);
    t7 = *((char **)t2);
    t12 = 1;
    if (8U == 8U)
        goto LAB16;

LAB17:    t12 = 0;

LAB18:    if (t12 == 1)
        goto LAB13;

LAB14:    t14 = (t0 + 9440U);
    t15 = *((char **)t14);
    t14 = (t0 + 22576U);
    t16 = *((char **)t14);
    t17 = 1;
    if (8U == 8U)
        goto LAB22;

LAB23:    t17 = 0;

LAB24:    t11 = t17;

LAB15:    if (t11 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(583, ng1);
    t1 = (t0 + 40752);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 5920U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(581, ng1);
    t20 = (t0 + 40752);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast(t20);
    goto LAB11;

LAB13:    t11 = (unsigned char)1;
    goto LAB15;

LAB16:    t13 = 0;

LAB19:    if (t13 < 8U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t2 = (t6 + t13);
    t8 = (t7 + t13);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB17;

LAB21:    t13 = (t13 + 1);
    goto LAB19;

LAB22:    t18 = 0;

LAB25:    if (t18 < 8U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t14 = (t15 + t18);
    t19 = (t16 + t18);
    if (*((unsigned char *)t14) != *((unsigned char *)t19))
        goto LAB23;

LAB27:    t18 = (t18 + 1);
    goto LAB25;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_31(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(590, ng1);
    t2 = (t0 + 2840U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 38320);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(591, ng1);
    t4 = (t0 + 40816);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(592, ng1);
    t2 = (t0 + 40880);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(593, ng1);
    t2 = (t0 + 11040U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t1 = (unsigned char)0;

LAB13:    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(601, ng1);
    t2 = (t0 + 10880U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 40944);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(602, ng1);
    t2 = (t0 + 10720U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 41008);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 2880U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(594, ng1);
    t2 = (t0 + 9440U);
    t8 = *((char **)t2);
    t2 = (t0 + 22576U);
    t9 = *((char **)t2);
    t13 = 1;
    if (8U == 8U)
        goto LAB17;

LAB18:    t13 = 0;

LAB19:    if (t13 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(597, ng1);
    t2 = (t0 + 9440U);
    t4 = *((char **)t2);
    t2 = (t0 + 22816U);
    t5 = *((char **)t2);
    t1 = 1;
    if (8U == 8U)
        goto LAB26;

LAB27:    t1 = 0;

LAB28:    if (t1 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB9;

LAB11:    t2 = (t0 + 10880U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t12 = (t7 == (unsigned char)3);
    t1 = t12;
    goto LAB13;

LAB14:    xsi_set_current_line(595, ng1);
    t11 = (t0 + 40816);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB15;

LAB17:    t14 = 0;

LAB20:    if (t14 < 8U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t2 = (t8 + t14);
    t10 = (t9 + t14);
    if (*((unsigned char *)t2) != *((unsigned char *)t10))
        goto LAB18;

LAB22:    t14 = (t14 + 1);
    goto LAB20;

LAB23:    xsi_set_current_line(598, ng1);
    t9 = (t0 + 40880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB24;

LAB26:    t14 = 0;

LAB29:    if (t14 < 8U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t2 = (t4 + t14);
    t8 = (t5 + t14);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB27;

LAB31:    t14 = (t14 + 1);
    goto LAB29;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_32(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(606, ng1);

LAB3:    t1 = (t0 + 13920U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 41072);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38336);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_33(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(607, ng1);

LAB3:    t1 = (t0 + 14080U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 41136);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38352);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_34(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(608, ng1);

LAB3:    t1 = (t0 + 13760U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 41200);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38368);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_35(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(619, ng1);

LAB3:    t1 = (t0 + 12000U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 41264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38384);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_36(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(627, ng1);

LAB3:    t1 = (t0 + 13120U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 41328);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);

LAB2:    t8 = (t0 + 38400);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_37(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(628, ng1);

LAB3:    t1 = (t0 + 13280U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 41392);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);

LAB2:    t8 = (t0 + 38416);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_38(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(629, ng1);

LAB3:    t1 = (t0 + 12480U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 41456);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);

LAB2:    t9 = (t0 + 38432);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_39(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(630, ng1);

LAB3:    t1 = (t0 + 12640U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 41520);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);

LAB2:    t8 = (t0 + 38448);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_40(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(631, ng1);

LAB3:    t1 = (t0 + 41584);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_41(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(632, ng1);

LAB3:    t1 = (t0 + 41648);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_42(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(633, ng1);

LAB3:    t1 = (t0 + 41712);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_43(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(634, ng1);

LAB3:    t1 = (t0 + 41776);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_44(char *t0)
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

LAB0:    xsi_set_current_line(637, ng1);

LAB3:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13440U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 41840);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 38464);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_45(char *t0)
{
    char t23[16];
    char t24[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t25;

LAB0:    xsi_set_current_line(648, ng1);
    t2 = (t0 + 6520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 38480);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(649, ng1);
    t4 = (t0 + 6240U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 6080U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB16;

LAB17:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(650, ng1);
    t4 = (t0 + 9440U);
    t11 = *((char **)t4);
    t4 = (t0 + 22696U);
    t12 = *((char **)t4);
    t13 = xsi_mem_cmp(t12, t11, 8U);
    if (t13 == 1)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(655, ng1);
    t2 = (t0 + 12960U);
    t4 = *((char **)t2);
    t2 = (t0 + 41904);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast(t2);

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(652, ng1);
    t4 = xsi_get_transient_memory(8U);
    memset(t4, 0, 8U);
    t14 = t4;
    memset(t14, (unsigned char)2, 8U);
    t15 = (t0 + 41904);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 8U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(653, ng1);
    t2 = (t0 + 11680U);
    t4 = *((char **)t2);
    t2 = (t0 + 41904);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_delta(t2, 0U, 8U, 0LL);
    goto LAB11;

LAB15:;
LAB16:    xsi_set_current_line(658, ng1);
    t2 = (t0 + 11520U);
    t5 = *((char **)t2);
    t20 = (0 - 0);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t2 = (t5 + t22);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t24 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 0;
    t14 = (t12 + 4U);
    *((int *)t14) = 6;
    t14 = (t12 + 8U);
    *((int *)t14) = 1;
    t13 = (6 - 0);
    t25 = (t13 * 1);
    t25 = (t25 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t25;
    t8 = xsi_base_array_concat(t8, t23, t11, (char)99, (unsigned char)2, (char)97, t2, t24, (char)101);
    t25 = (1U + 7U);
    t6 = (8U != t25);
    if (t6 == 1)
        goto LAB18;

LAB19:    t14 = (t0 + 41904);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 8U);
    xsi_driver_first_trans_fast(t14);
    goto LAB9;

LAB18:    xsi_size_not_matching(8U, t25, 0);
    goto LAB19;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_46(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(663, ng1);

LAB3:    t1 = (t0 + 11520U);
    t2 = *((char **)t1);
    t3 = (7 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 41968);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 38496);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_47(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(682, ng1);

LAB3:    t1 = (t0 + 12480U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 42032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38512);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_48(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(683, ng1);

LAB3:    t1 = (t0 + 12640U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 42096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38528);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_49(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(699, ng1);

LAB3:    t1 = (t0 + 13280U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 42160);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 38544);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_0994003985_3306564128_p_50(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(700, ng1);

LAB3:    t1 = (t0 + 13120U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 42224);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t9 = (t0 + 38560);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void mdm_v2_00_b_a_0994003985_3306564128_init()
{
	static char *pe[] = {(void *)mdm_v2_00_b_a_0994003985_3306564128_p_0,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_1,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_2,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_3,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_4,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_5,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_6,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_7,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_8,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_9,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_10,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_11,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_12,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_13,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_14,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_15,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_16,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_17,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_18,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_19,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_20,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_21,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_22,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_23,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_24,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_25,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_26,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_27,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_28,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_29,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_30,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_31,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_32,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_33,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_34,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_35,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_36,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_37,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_38,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_39,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_40,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_41,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_42,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_43,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_44,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_45,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_46,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_47,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_48,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_49,(void *)mdm_v2_00_b_a_0994003985_3306564128_p_50};
	static char *se[] = {(void *)mdm_v2_00_b_a_0994003985_3306564128_sub_2308573634_229454594};
	xsi_register_didat("mdm_v2_00_b_a_0994003985_3306564128", "isim/isim_system.exe.sim/mdm_v2_00_b/a_0994003985_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
