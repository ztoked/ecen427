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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/mdm_v2_00_b/hdl/vhdl/srl_fifo.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void mdm_v2_00_b_a_3871516802_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
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
    char *t18;

LAB0:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    t1 = (t0 + 24944);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t13 = (t0 + 13696);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 13440);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 13696);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(114, ng0);

LAB3:    t1 = (t0 + 6432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13760);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13456);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
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
    char *t18;

LAB0:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    t1 = (t0 + 24948);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t13 = (t0 + 13824);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 13472);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 13824);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(118, ng0);

LAB3:    t1 = (t0 + 6912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6592U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 6592U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t1 = (t0 + 5312U);
    t10 = *((char **)t1);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t9, t11);
    t13 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t12);
    t1 = (t0 + 6912U);
    t14 = *((char **)t1);
    t15 = *((unsigned char *)t14);
    t1 = (t0 + 5632U);
    t16 = *((char **)t1);
    t17 = *((unsigned char *)t16);
    t18 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t17);
    t19 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t15, t18);
    t20 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t13, t19);
    t1 = (t0 + 13888);
    t21 = (t1 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t20;
    xsi_driver_first_trans_fast(t1);

LAB2:    t25 = (t0 + 13488);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_4(char *t0)
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

LAB0:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 5152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 4952U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 13504);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 13952);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 6752U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 13952);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 4992U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(131, ng0);

LAB3:    t1 = (t0 + 6912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14016);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13520);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(133, ng0);

LAB3:    t1 = (t0 + 5312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5632U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t1 = (t0 + 6432U);
    t6 = *((char **)t1);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t5, t8);
    t10 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t9);
    t1 = (t0 + 14080);
    t11 = (t1 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t1);

LAB2:    t15 = (t0 + 13536);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(135, ng0);

LAB3:    t1 = (t0 + 7072U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14144);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 13552);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(139, ng0);

LAB3:    t1 = (t0 + 5632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6272U);
    t4 = *((char **)t1);
    t1 = (t0 + 8088U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t4 + t10);
    t11 = *((unsigned char *)t1);
    t12 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t11);
    t13 = (t0 + 5312U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t13 = (t0 + 6592U);
    t16 = *((char **)t13);
    t17 = *((unsigned char *)t16);
    t18 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t17);
    t19 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t18);
    t20 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t19);
    t13 = (t0 + 14208);
    t21 = (t13 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t20;
    xsi_driver_first_trans_delta(t13, 0U, 1, 0LL);

LAB2:    t25 = (t0 + 13568);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(139, ng0);

LAB3:    t1 = (t0 + 5632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6272U);
    t4 = *((char **)t1);
    t1 = (t0 + 8208U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t4 + t10);
    t11 = *((unsigned char *)t1);
    t12 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t11);
    t13 = (t0 + 5312U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t13 = (t0 + 6592U);
    t16 = *((char **)t13);
    t17 = *((unsigned char *)t16);
    t18 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t17);
    t19 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t18);
    t20 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t19);
    t13 = (t0 + 14272);
    t21 = (t13 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t20;
    xsi_driver_first_trans_delta(t13, 1U, 1, 0LL);

LAB2:    t25 = (t0 + 13584);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(139, ng0);

LAB3:    t1 = (t0 + 5632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6272U);
    t4 = *((char **)t1);
    t1 = (t0 + 8328U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t4 + t10);
    t11 = *((unsigned char *)t1);
    t12 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t11);
    t13 = (t0 + 5312U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t13 = (t0 + 6592U);
    t16 = *((char **)t13);
    t17 = *((unsigned char *)t16);
    t18 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t17);
    t19 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t18);
    t20 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t19);
    t13 = (t0 + 14336);
    t21 = (t13 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t20;
    xsi_driver_first_trans_delta(t13, 2U, 1, 0LL);

LAB2:    t25 = (t0 + 13600);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_3871516802_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(139, ng0);

LAB3:    t1 = (t0 + 5632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6272U);
    t4 = *((char **)t1);
    t1 = (t0 + 8448U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t4 + t10);
    t11 = *((unsigned char *)t1);
    t12 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t11);
    t13 = (t0 + 5312U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t13 = (t0 + 6592U);
    t16 = *((char **)t13);
    t17 = *((unsigned char *)t16);
    t18 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t17);
    t19 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t18);
    t20 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t12, t19);
    t13 = (t0 + 14400);
    t21 = (t13 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t20;
    xsi_driver_first_trans_delta(t13, 3U, 1, 0LL);

LAB2:    t25 = (t0 + 13616);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void mdm_v2_00_b_a_3871516802_3306564128_init()
{
	static char *pe[] = {(void *)mdm_v2_00_b_a_3871516802_3306564128_p_0,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_1,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_2,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_3,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_4,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_5,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_6,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_7,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_8,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_9,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_10,(void *)mdm_v2_00_b_a_3871516802_3306564128_p_11};
	xsi_register_didat("mdm_v2_00_b_a_3871516802_3306564128", "isim/isim_system.exe.sim/mdm_v2_00_b/a_3871516802_3306564128.didat");
	xsi_register_executes(pe);
}
