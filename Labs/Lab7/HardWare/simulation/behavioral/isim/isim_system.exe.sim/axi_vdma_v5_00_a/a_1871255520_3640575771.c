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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_vdma_v5_00_a/hdl/vhdl/axi_vdma_regdirect.vhd";
extern char *IEEE_P_2592010699;
extern char *AXI_VDMA_V5_00_A_P_3854302438;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_0(char *t0)
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

LAB0:    xsi_set_current_line(361, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 37680);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(362, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(365, ng0);
    t2 = (t0 + 2200U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 38496);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(363, ng0);
    t4 = (t0 + 38496);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_1(char *t0)
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

LAB0:    xsi_set_current_line(370, ng0);

LAB3:    t1 = (t0 + 2200U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9400U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 38560);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 37696);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_2(char *t0)
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
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(378, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 37712);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(379, ng0);
    t4 = (t0 + 1720U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2520U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 9560U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:    t2 = (t0 + 9080U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB16;

LAB17:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(380, ng0);
    t4 = (t0 + 38624);
    t15 = (t4 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(383, ng0);
    t2 = (t0 + 38624);
    t5 = (t2 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB16:    xsi_set_current_line(386, ng0);
    t2 = (t0 + 38624);
    t5 = (t2 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(391, ng0);

LAB3:    t1 = (t0 + 9240U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 38688);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 37728);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_4(char *t0)
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
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    xsi_set_current_line(396, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 37744);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(397, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1880U);
    t4 = *((char **)t2);
    t2 = (t0 + 15616U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t18 = (t17 - 18);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(398, ng0);
    t4 = xsi_get_transient_memory(13U);
    memset(t4, 0, 13U);
    t11 = t4;
    memset(t11, (unsigned char)2, 13U);
    t12 = (t0 + 38752);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 13U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(400, ng0);
    t8 = (t0 + 2040U);
    t11 = *((char **)t8);
    t8 = ((AXI_VDMA_V5_00_A_P_3854302438) + 4168U);
    t12 = *((char **)t8);
    t22 = *((int *)t12);
    t23 = (t22 - 1);
    t24 = (31 - t23);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t8 = (t11 + t26);
    t13 = (t0 + 38752);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t27 = *((char **)t16);
    memcpy(t27, t8, 13U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_5(char *t0)
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
    char *t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(407, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 37760);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(408, ng0);
    t4 = (t0 + 1720U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2200U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1880U);
    t4 = *((char **)t2);
    t2 = (t0 + 15616U);
    t5 = *((char **)t2);
    t19 = *((int *)t5);
    t20 = (t19 - 18);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t2 = (t4 + t23);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:    xsi_set_current_line(413, ng0);
    t2 = (t0 + 38816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(409, ng0);
    t4 = (t0 + 38816);
    t15 = (t4 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(411, ng0);
    t9 = (t0 + 38816);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(418, ng0);

LAB3:    t1 = (t0 + 9080U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 38880);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 37776);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_7(char *t0)
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
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    xsi_set_current_line(423, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 37792);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(424, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1880U);
    t4 = *((char **)t2);
    t2 = (t0 + 15736U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t18 = (t17 - 18);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(425, ng0);
    t4 = xsi_get_transient_memory(16U);
    memset(t4, 0, 16U);
    t11 = t4;
    memset(t11, (unsigned char)2, 16U);
    t12 = (t0 + 38944);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 16U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(427, ng0);
    t8 = (t0 + 2040U);
    t11 = *((char **)t8);
    t8 = ((AXI_VDMA_V5_00_A_P_3854302438) + 4288U);
    t12 = *((char **)t8);
    t22 = *((int *)t12);
    t23 = (t22 - 1);
    t24 = (31 - t23);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t8 = (t11 + t26);
    t13 = (t0 + 38944);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t27 = *((char **)t16);
    memcpy(t27, t8, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_8(char *t0)
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
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    xsi_set_current_line(435, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 37808);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(436, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1880U);
    t4 = *((char **)t2);
    t2 = (t0 + 15856U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t18 = (t17 - 18);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(437, ng0);
    t4 = xsi_get_transient_memory(5U);
    memset(t4, 0, 5U);
    t11 = t4;
    memset(t11, (unsigned char)2, 5U);
    t12 = (t0 + 39008);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 5U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(438, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    memset(t4, (unsigned char)2, 16U);
    t5 = (t0 + 39072);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB9;

LAB11:    xsi_set_current_line(440, ng0);
    t8 = (t0 + 2040U);
    t11 = *((char **)t8);
    t8 = ((AXI_VDMA_V5_00_A_P_3854302438) + 4648U);
    t12 = *((char **)t8);
    t22 = *((int *)t12);
    t23 = (31 - t22);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t8 = (t11 + t25);
    t13 = (t0 + 39008);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t26 = *((char **)t16);
    memcpy(t26, t8, 5U);
    xsi_driver_first_trans_fast_port(t13);
    xsi_set_current_line(441, ng0);
    t2 = (t0 + 2040U);
    t4 = *((char **)t2);
    t2 = ((AXI_VDMA_V5_00_A_P_3854302438) + 4408U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t18 = (t17 - 1);
    t19 = (31 - t18);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t8 = (t0 + 39072);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 16U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_9(char *t0)
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
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(618, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 37824);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(619, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1880U);
    t4 = *((char **)t2);
    t2 = (t0 + 15976U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t18 = (t17 - 18);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(620, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 39136);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(622, ng0);
    t8 = (t0 + 2040U);
    t11 = *((char **)t8);
    t8 = (t0 + 39136);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 32U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_10(char *t0)
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
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(630, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 37840);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(631, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1880U);
    t4 = *((char **)t2);
    t2 = (t0 + 16096U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t18 = (t17 - 18);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(632, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 39200);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(634, ng0);
    t8 = (t0 + 2040U);
    t11 = *((char **)t8);
    t8 = (t0 + 39200);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 32U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_11(char *t0)
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
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(642, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 37856);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(643, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1880U);
    t4 = *((char **)t2);
    t2 = (t0 + 16216U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t18 = (t17 - 18);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t2 = (t4 + t21);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(644, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 39264);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(646, ng0);
    t8 = (t0 + 2040U);
    t11 = *((char **)t8);
    t8 = (t0 + 39264);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 32U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(652, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39328);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(653, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39392);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(654, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39456);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(655, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(656, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39584);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(657, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(658, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(659, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39776);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(660, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(661, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(662, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 39968);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(663, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40032);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(664, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40096);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_25(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(665, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_26(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(666, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40224);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_27(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(667, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40288);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_28(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(668, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40352);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_29(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(669, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40416);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_30(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(670, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_31(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(671, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_32(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(672, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_33(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(673, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40672);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_34(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(674, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_35(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(675, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_36(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(676, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40864);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_37(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(677, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40928);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_38(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(678, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 40992);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_39(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(679, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 41056);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_40(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(680, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 41120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_41(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8041, ng0);

LAB3:    t1 = (t0 + 9880U);
    t2 = *((char **)t1);
    t1 = (t0 + 41184);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_delta(t1, 0U, 32U, 0LL);

LAB2:    t7 = (t0 + 37872);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_42(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8042, ng0);

LAB3:    t1 = (t0 + 10040U);
    t2 = *((char **)t1);
    t1 = (t0 + 41248);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_delta(t1, 32U, 32U, 0LL);

LAB2:    t7 = (t0 + 37888);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_43(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8043, ng0);

LAB3:    t1 = (t0 + 10200U);
    t2 = *((char **)t1);
    t1 = (t0 + 41312);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_delta(t1, 64U, 32U, 0LL);

LAB2:    t7 = (t0 + 37904);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_44(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8843, ng0);

LAB3:    t1 = (t0 + 9880U);
    t2 = *((char **)t1);
    t1 = (t0 + 41376);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 37920);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_45(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8844, ng0);

LAB3:    t1 = (t0 + 10040U);
    t2 = *((char **)t1);
    t1 = (t0 + 41440);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 37936);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_46(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8845, ng0);

LAB3:    t1 = (t0 + 10200U);
    t2 = *((char **)t1);
    t1 = (t0 + 41504);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 37952);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_47(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8846, ng0);

LAB3:    t1 = (t0 + 10360U);
    t2 = *((char **)t1);
    t1 = (t0 + 41568);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 37968);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_48(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8847, ng0);

LAB3:    t1 = (t0 + 10520U);
    t2 = *((char **)t1);
    t1 = (t0 + 41632);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 37984);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_49(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8848, ng0);

LAB3:    t1 = (t0 + 10680U);
    t2 = *((char **)t1);
    t1 = (t0 + 41696);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38000);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_50(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8849, ng0);

LAB3:    t1 = (t0 + 10840U);
    t2 = *((char **)t1);
    t1 = (t0 + 41760);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38016);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_51(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8850, ng0);

LAB3:    t1 = (t0 + 11000U);
    t2 = *((char **)t1);
    t1 = (t0 + 41824);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38032);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_52(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8851, ng0);

LAB3:    t1 = (t0 + 11160U);
    t2 = *((char **)t1);
    t1 = (t0 + 41888);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38048);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_53(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8852, ng0);

LAB3:    t1 = (t0 + 11320U);
    t2 = *((char **)t1);
    t1 = (t0 + 41952);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38064);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_54(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8853, ng0);

LAB3:    t1 = (t0 + 11480U);
    t2 = *((char **)t1);
    t1 = (t0 + 42016);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38080);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_55(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8854, ng0);

LAB3:    t1 = (t0 + 11640U);
    t2 = *((char **)t1);
    t1 = (t0 + 42080);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38096);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_56(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8855, ng0);

LAB3:    t1 = (t0 + 11800U);
    t2 = *((char **)t1);
    t1 = (t0 + 42144);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38112);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_57(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8856, ng0);

LAB3:    t1 = (t0 + 11960U);
    t2 = *((char **)t1);
    t1 = (t0 + 42208);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38128);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_58(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8857, ng0);

LAB3:    t1 = (t0 + 12120U);
    t2 = *((char **)t1);
    t1 = (t0 + 42272);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38144);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_59(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8858, ng0);

LAB3:    t1 = (t0 + 12280U);
    t2 = *((char **)t1);
    t1 = (t0 + 42336);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38160);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_60(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8859, ng0);

LAB3:    t1 = (t0 + 12440U);
    t2 = *((char **)t1);
    t1 = (t0 + 42400);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38176);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_61(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8860, ng0);

LAB3:    t1 = (t0 + 12600U);
    t2 = *((char **)t1);
    t1 = (t0 + 42464);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38192);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_62(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8861, ng0);

LAB3:    t1 = (t0 + 12760U);
    t2 = *((char **)t1);
    t1 = (t0 + 42528);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38208);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_63(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8862, ng0);

LAB3:    t1 = (t0 + 12920U);
    t2 = *((char **)t1);
    t1 = (t0 + 42592);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38224);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_64(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8863, ng0);

LAB3:    t1 = (t0 + 13080U);
    t2 = *((char **)t1);
    t1 = (t0 + 42656);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38240);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_65(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8864, ng0);

LAB3:    t1 = (t0 + 13240U);
    t2 = *((char **)t1);
    t1 = (t0 + 42720);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38256);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_66(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8865, ng0);

LAB3:    t1 = (t0 + 13400U);
    t2 = *((char **)t1);
    t1 = (t0 + 42784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38272);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_67(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8866, ng0);

LAB3:    t1 = (t0 + 13560U);
    t2 = *((char **)t1);
    t1 = (t0 + 42848);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38288);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_68(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8867, ng0);

LAB3:    t1 = (t0 + 13720U);
    t2 = *((char **)t1);
    t1 = (t0 + 42912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38304);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_69(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8868, ng0);

LAB3:    t1 = (t0 + 13880U);
    t2 = *((char **)t1);
    t1 = (t0 + 42976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38320);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_70(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8869, ng0);

LAB3:    t1 = (t0 + 14040U);
    t2 = *((char **)t1);
    t1 = (t0 + 43040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38336);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_71(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8870, ng0);

LAB3:    t1 = (t0 + 14200U);
    t2 = *((char **)t1);
    t1 = (t0 + 43104);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38352);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_72(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8871, ng0);

LAB3:    t1 = (t0 + 14360U);
    t2 = *((char **)t1);
    t1 = (t0 + 43168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38368);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_73(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8872, ng0);

LAB3:    t1 = (t0 + 14520U);
    t2 = *((char **)t1);
    t1 = (t0 + 43232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38384);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_74(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8873, ng0);

LAB3:    t1 = (t0 + 14680U);
    t2 = *((char **)t1);
    t1 = (t0 + 43296);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38400);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1871255520_3640575771_p_75(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(8874, ng0);

LAB3:    t1 = (t0 + 14840U);
    t2 = *((char **)t1);
    t1 = (t0 + 43360);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 38416);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_vdma_v5_00_a_a_1871255520_3640575771_init()
{
	static char *pe[] = {(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_0,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_1,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_2,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_3,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_4,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_5,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_6,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_7,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_8,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_9,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_10,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_11,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_12,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_13,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_14,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_15,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_16,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_17,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_18,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_19,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_20,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_21,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_22,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_23,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_24,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_25,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_26,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_27,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_28,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_29,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_30,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_31,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_32,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_33,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_34,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_35,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_36,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_37,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_38,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_39,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_40,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_41,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_42,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_43,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_44,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_45,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_46,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_47,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_48,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_49,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_50,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_51,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_52,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_53,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_54,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_55,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_56,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_57,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_58,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_59,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_60,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_61,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_62,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_63,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_64,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_65,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_66,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_67,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_68,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_69,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_70,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_71,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_72,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_73,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_74,(void *)axi_vdma_v5_00_a_a_1871255520_3640575771_p_75};
	xsi_register_didat("axi_vdma_v5_00_a_a_1871255520_3640575771", "isim/isim_system.exe.sim/axi_vdma_v5_00_a/a_1871255520_3640575771.didat");
	xsi_register_executes(pe);
}
