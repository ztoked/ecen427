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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_vdma_v5_00_a/hdl/vhdl/axi_vdma_mm2s_linebuf.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(403, ng0);

LAB3:    t1 = (t0 + 15040U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29720);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 29288);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(414, ng0);

LAB3:    t1 = (t0 + 4480U);
    t2 = *((char **)t1);
    t1 = (t0 + 20056U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t1 = (t0 + 20776U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t5 + t7);
    t9 = (16 - t8);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = (t0 + 29784);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 10U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 29304);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(538, ng0);

LAB3:    t1 = (t0 + 29848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_3(char *t0)
{
    char t5[16];
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(541, ng0);

LAB3:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4800U);
    t4 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 55840U);
    t1 = xsi_base_array_concat(t1, t5, t6, (char)99, t3, (char)97, t4, t7, (char)101);
    t8 = (t0 + 4640U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t0 + 55824U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)97, t1, t5, (char)97, t9, t12, (char)101);
    t13 = (1U + 4U);
    t14 = (t13 + 32U);
    t15 = (37U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 29912);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 37U);
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 29320);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(37U, t14, 0);
    goto LAB6;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_4(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(542, ng0);

LAB3:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7840U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 13440U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t10);
    t1 = (t0 + 29976);
    t12 = (t1 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast(t1);

LAB2:    t16 = (t0 + 29336);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(543, ng0);

LAB3:    t1 = (t0 + 7840U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 13440U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t8 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t7);
    t1 = (t0 + 30040);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast(t1);

LAB2:    t13 = (t0 + 29352);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(544, ng0);

LAB3:    t1 = (t0 + 8480U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 30104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 29368);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_7(char *t0)
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
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(547, ng0);

LAB3:    t1 = (t0 + 8640U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7680U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 12800U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t9);
    t1 = (t0 + 30168);
    t11 = (t1 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t1);

LAB2:    t15 = (t0 + 29384);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(548, ng0);

LAB3:    t1 = (t0 + 7680U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 12800U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t6);
    t1 = (t0 + 30232);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 29400);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_9(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(549, ng0);

LAB3:    t1 = (t0 + 7200U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t4 = (36 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 30296);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 29416);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(550, ng0);

LAB3:    t1 = (t0 + 7200U);
    t2 = *((char **)t1);
    t1 = (t0 + 19936U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 2);
    t6 = (36 - t5);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 30360);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 29432);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(551, ng0);

LAB3:    t1 = (t0 + 7680U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 7200U);
    t5 = *((char **)t1);
    t1 = (t0 + 19936U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 36);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t13 = *((unsigned char *)t1);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t13);
    t15 = (t0 + 30424);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t14;
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 29448);
    *((int *)t20) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(552, ng0);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 30488);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_13(char *t0)
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(564, ng0);
    t2 = (t0 + 3160U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 29464);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(565, ng0);
    t4 = (t0 + 13600U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8160U);
    t4 = *((char **)t2);
    t2 = (t0 + 20056U);
    t5 = *((char **)t2);
    t15 = *((int *)t5);
    t16 = (t15 - 1);
    t17 = (10 - t16);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t2 = (t4 + t19);
    t8 = (t0 + 12640U);
    t11 = *((char **)t8);
    t8 = ((IEEE_P_2592010699) + 4024);
    t3 = xsi_vhdl_lessthanEqual(t8, t2, 10U, t11, 10U);
    if (t3 == 1)
        goto LAB13;

LAB14:    t12 = (t0 + 7680U);
    t13 = *((char **)t12);
    t6 = *((unsigned char *)t13);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(572, ng0);
    t2 = (t0 + 30552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3200U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(566, ng0);
    t4 = (t0 + 30552);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(570, ng0);
    t12 = (t0 + 30552);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_14(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(578, ng0);

LAB3:    t1 = (t0 + 12320U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12800U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 10720U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t11 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t10);
    t1 = (t0 + 30616);
    t12 = (t1 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t16 = (t0 + 29480);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_15(char *t0)
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

LAB0:    xsi_set_current_line(582, ng0);

LAB3:    t1 = (t0 + 10720U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 30680);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t9 = (t0 + 29496);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_16(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(606, ng0);
    t3 = (t0 + 10560U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 12800U);
    t12 = *((char **)t3);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    if (t14 == 1)
        goto LAB14;

LAB15:    t11 = (unsigned char)0;

LAB16:    if (t11 == 1)
        goto LAB11;

LAB12:    t10 = (unsigned char)0;

LAB13:    t1 = t10;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB17:    t25 = (t0 + 30744);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_first_trans_fast(t25);

LAB2:    t30 = (t0 + 29512);
    *((int *)t30) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 30744);
    t21 = (t3 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t3 = (t0 + 10720U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    t2 = t9;
    goto LAB10;

LAB11:    t3 = (t0 + 10720U);
    t18 = *((char **)t3);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)2);
    t10 = t20;
    goto LAB13;

LAB14:    t3 = (t0 + 13280U);
    t15 = *((char **)t3);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)3);
    t11 = t17;
    goto LAB16;

LAB18:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(654, ng0);

LAB3:    t1 = (t0 + 30808);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(692, ng0);

LAB3:    t1 = (t0 + 10720U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 30872);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 29528);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_19(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(693, ng0);

LAB3:    t1 = (t0 + 10880U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 30936);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 29544);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_20(char *t0)
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

LAB0:    xsi_set_current_line(699, ng0);
    t2 = (t0 + 3160U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 29560);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(700, ng0);
    t4 = (t0 + 13600U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(705, ng0);
    t2 = (t0 + 10880U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 31000);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(706, ng0);
    t2 = (t0 + 10720U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 31064);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(707, ng0);
    t2 = (t0 + 6080U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 31128);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3200U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(701, ng0);
    t4 = (t0 + 31000);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(702, ng0);
    t2 = (t0 + 31064);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(703, ng0);
    t2 = (t0 + 31128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_21(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(960, ng0);
    t3 = (t0 + 9760U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 31192);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 29576);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 31192);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    t3 = (t0 + 9600U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    t3 = (t0 + 9920U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;
    goto LAB10;

LAB12:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_22(char *t0)
{
    char t23[16];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    char *t22;
    char *t24;

LAB0:    xsi_set_current_line(970, ng0);
    t2 = (t0 + 3160U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 29592);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(971, ng0);
    t4 = (t0 + 13600U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4000U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:    t2 = (t0 + 10400U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB18;

LAB19:    t1 = (unsigned char)0;

LAB20:    if (t1 != 0)
        goto LAB16;

LAB17:    t2 = (t0 + 10400U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB29;

LAB30:    t1 = (unsigned char)0;

LAB31:    if (t1 != 0)
        goto LAB27;

LAB28:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3200U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(972, ng0);
    t4 = xsi_get_transient_memory(13U);
    memset(t4, 0, 13U);
    t15 = t4;
    memset(t15, (unsigned char)2, 13U);
    t16 = (t0 + 31256);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 13U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(973, ng0);
    t2 = (t0 + 31320);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    t4 = (t0 + 4000U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t8 = t14;
    goto LAB13;

LAB14:    xsi_set_current_line(975, ng0);
    t2 = (t0 + 10080U);
    t5 = *((char **)t2);
    t2 = (t0 + 31256);
    t9 = (t2 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 13U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(976, ng0);
    t2 = (t0 + 31320);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB16:    xsi_set_current_line(978, ng0);
    t15 = xsi_get_transient_memory(13U);
    memset(t15, 0, 13U);
    t16 = t15;
    memset(t16, (unsigned char)2, 13U);
    t17 = (t0 + 31256);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t15, 13U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(979, ng0);
    t2 = (t0 + 31320);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB18:    t2 = (t0 + 10240U);
    t5 = *((char **)t2);
    t2 = (t0 + 20536U);
    t9 = *((char **)t2);
    t7 = 1;
    if (13U == 13U)
        goto LAB21;

LAB22:    t7 = 0;

LAB23:    t1 = t7;
    goto LAB20;

LAB21:    t21 = 0;

LAB24:    if (t21 < 13U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t2 = (t5 + t21);
    t12 = (t9 + t21);
    if (*((unsigned char *)t2) != *((unsigned char *)t12))
        goto LAB22;

LAB26:    t21 = (t21 + 1);
    goto LAB24;

LAB27:    xsi_set_current_line(982, ng0);
    t15 = (t0 + 10240U);
    t16 = *((char **)t15);
    t15 = (t0 + 56112U);
    t17 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t23, t16, t15, 1);
    t18 = (t0 + 31256);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t22 = (t20 + 56U);
    t24 = *((char **)t22);
    memcpy(t24, t17, 13U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(983, ng0);
    t2 = (t0 + 31320);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB29:    t2 = (t0 + 10240U);
    t5 = *((char **)t2);
    t2 = (t0 + 20656U);
    t9 = *((char **)t2);
    t7 = 1;
    if (13U == 13U)
        goto LAB32;

LAB33:    t7 = 0;

LAB34:    t1 = (!(t7));
    goto LAB31;

LAB32:    t21 = 0;

LAB35:    if (t21 < 13U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t2 = (t5 + t21);
    t12 = (t9 + t21);
    if (*((unsigned char *)t2) != *((unsigned char *)t12))
        goto LAB33;

LAB37:    t21 = (t21 + 1);
    goto LAB35;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1038, ng0);

LAB3:    t1 = xsi_get_transient_memory(13U);
    memset(t1, 0, 13U);
    t2 = t1;
    memset(t2, (unsigned char)2, 13U);
    t3 = (t0 + 31384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 13U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1039, ng0);

LAB3:    t1 = (t0 + 31448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_25(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1040, ng0);

LAB3:    t1 = (t0 + 31512);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_26(char *t0)
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
    unsigned char t15;

LAB0:    xsi_set_current_line(1054, ng0);
    t2 = (t0 + 3160U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 29608);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1055, ng0);
    t4 = (t0 + 3360U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 11360U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(1065, ng0);
    t2 = (t0 + 31576);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3200U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1056, ng0);
    t4 = (t0 + 31576);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1059, ng0);
    t2 = (t0 + 4000U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    if (t9 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 15520U);
    t8 = *((char **)t2);
    t10 = *((unsigned char *)t8);
    t15 = (t10 == (unsigned char)3);
    t6 = t15;

LAB18:    if (t6 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(1062, ng0);
    t2 = (t0 + 31576);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(1060, ng0);
    t2 = (t0 + 31576);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    t6 = (unsigned char)1;
    goto LAB18;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_27(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(1072, ng0);
    t3 = (t0 + 3040U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 4160U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 3520U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 31640);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 29624);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 31640);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3170921518_3640575771_p_28(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(1078, ng0);
    t3 = (t0 + 3360U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 4000U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 15520U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 31704);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 29640);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 31704);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}


extern void axi_vdma_v5_00_a_a_3170921518_3640575771_init()
{
	static char *pe[] = {(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_0,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_1,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_2,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_3,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_4,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_5,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_6,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_7,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_8,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_9,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_10,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_11,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_12,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_13,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_14,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_15,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_16,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_17,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_18,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_19,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_20,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_21,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_22,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_23,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_24,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_25,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_26,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_27,(void *)axi_vdma_v5_00_a_a_3170921518_3640575771_p_28};
	xsi_register_didat("axi_vdma_v5_00_a_a_3170921518_3640575771", "isim/isim_system.exe.sim/axi_vdma_v5_00_a/a_3170921518_3640575771.didat");
	xsi_register_executes(pe);
}
