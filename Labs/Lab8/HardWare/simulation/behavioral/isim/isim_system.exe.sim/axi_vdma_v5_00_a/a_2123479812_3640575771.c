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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_vdma_v5_00_a/hdl/vhdl/axi_vdma_intrpt.vhd";
extern char *AXI_VDMA_V5_00_A_P_3854302438;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );


static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_0(char *t0)
{
    char t21[16];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    int t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(300, ng0);
    t2 = (t0 + 2048U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 15840);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(301, ng0);
    t4 = (t0 + 2248U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3528U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 7048U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB16;

LAB17:    t7 = (unsigned char)0;

LAB18:    t1 = t7;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 2728U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 6888U);
    t4 = *((char **)t2);
    t2 = (t0 + 16080);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(324, ng0);
    t2 = (t0 + 16144);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2088U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(302, ng0);
    t4 = ((AXI_VDMA_V5_00_A_P_3854302438) + 3208U);
    t11 = *((char **)t4);
    t4 = (t0 + 16080);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(303, ng0);
    t2 = (t0 + 16144);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(308, ng0);
    t2 = (t0 + 3688U);
    t11 = *((char **)t2);
    t2 = (t0 + 16080);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(309, ng0);
    t2 = (t0 + 16144);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    t2 = (t0 + 2888U);
    t8 = *((char **)t2);
    t16 = *((unsigned char *)t8);
    t17 = (t16 == (unsigned char)2);
    t7 = t17;
    goto LAB18;

LAB19:    xsi_set_current_line(315, ng0);
    t2 = (t0 + 6888U);
    t5 = *((char **)t2);
    t2 = ((AXI_VDMA_V5_00_A_P_3854302438) + 3208U);
    t8 = *((char **)t2);
    t6 = 1;
    if (8U == 8U)
        goto LAB24;

LAB25:    t6 = 0;

LAB26:    if (t6 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(319, ng0);
    t2 = (t0 + 6888U);
    t4 = *((char **)t2);
    t18 = (7 - 7);
    t22 = (t18 * 1U);
    t23 = (0 + t22);
    t2 = (t4 + t23);
    t5 = (t24 + 0U);
    t8 = (t5 + 0U);
    *((int *)t8) = 7;
    t8 = (t5 + 4U);
    *((int *)t8) = 0;
    t8 = (t5 + 8U);
    *((int *)t8) = -1;
    t25 = (0 - 7);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t8 = (t5 + 12U);
    *((unsigned int *)t8) = t26;
    t8 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t21, t2, t24, 1);
    t11 = (t0 + 16080);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 8U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(320, ng0);
    t2 = (t0 + 16144);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB22:    goto LAB9;

LAB21:    xsi_set_current_line(316, ng0);
    t12 = (t0 + 3688U);
    t13 = *((char **)t12);
    t12 = (t0 + 16080);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t13, 8U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(317, ng0);
    t2 = (t0 + 16144);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB22;

LAB24:    t18 = 0;

LAB27:    if (t18 < 8U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t2 = (t5 + t18);
    t11 = (t8 + t18);
    if (*((unsigned char *)t2) != *((unsigned char *)t11))
        goto LAB25;

LAB29:    t18 = (t18 + 1);
    goto LAB27;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(330, ng0);

LAB3:    t1 = (t0 + 6888U);
    t2 = *((char **)t1);
    t1 = (t0 + 16208);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 15856);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(331, ng0);

LAB3:    t1 = (t0 + 7208U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 16272);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15872);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_3(char *t0)
{
    char t33[16];
    char t38[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
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
    unsigned char t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t39;
    unsigned int t40;

LAB0:    xsi_set_current_line(345, ng0);
    t2 = (t0 + 2048U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 15888);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(346, ng0);
    t4 = (t0 + 2248U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    if (t14 == 1)
        goto LAB20;

LAB21:    t4 = (t0 + 7528U);
    t15 = *((char **)t4);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)2);
    t11 = t17;

LAB22:    if (t11 == 1)
        goto LAB17;

LAB18:    t4 = (t0 + 8328U);
    t18 = *((char **)t4);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)3);
    t10 = t20;

LAB19:    if (t10 == 1)
        goto LAB14;

LAB15:    t4 = (t0 + 3848U);
    t21 = *((char **)t4);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)3);
    t9 = t23;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 3208U);
    t24 = *((char **)t4);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)3);
    t8 = t26;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 7688U);
    t4 = *((char **)t2);
    t2 = (t0 + 10944U);
    t5 = *((char **)t2);
    t1 = 1;
    if (7U == 7U)
        goto LAB25;

LAB26:    t1 = 0;

LAB27:    if (t1 != 0)
        goto LAB23;

LAB24:    xsi_set_current_line(354, ng0);
    t2 = (t0 + 7688U);
    t4 = *((char **)t2);
    t2 = (t0 + 10704U);
    t5 = *((char **)t2);
    t34 = *((int *)t5);
    t35 = (t34 - 1);
    t32 = (6 - t35);
    t36 = (t32 * 1U);
    t37 = (0 + t36);
    t2 = (t4 + t37);
    t12 = (t38 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 6;
    t15 = (t12 + 4U);
    *((int *)t15) = 0;
    t15 = (t12 + 8U);
    *((int *)t15) = -1;
    t39 = (0 - 6);
    t40 = (t39 * -1);
    t40 = (t40 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t40;
    t15 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t33, t2, t38, 1);
    t18 = (t0 + 16336);
    t21 = (t18 + 56U);
    t24 = *((char **)t21);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t15, 7U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(355, ng0);
    t2 = (t0 + 16400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2088U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(348, ng0);
    t4 = (t0 + 10824U);
    t27 = *((char **)t4);
    t4 = (t0 + 16336);
    t28 = (t4 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t27, 7U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(349, ng0);
    t2 = (t0 + 16400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    t9 = (unsigned char)1;
    goto LAB16;

LAB17:    t10 = (unsigned char)1;
    goto LAB19;

LAB20:    t11 = (unsigned char)1;
    goto LAB22;

LAB23:    xsi_set_current_line(351, ng0);
    t15 = (t0 + 10824U);
    t18 = *((char **)t15);
    t15 = (t0 + 16336);
    t21 = (t15 + 56U);
    t24 = *((char **)t21);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 7U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(352, ng0);
    t2 = (t0 + 16400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB25:    t32 = 0;

LAB28:    if (t32 < 7U)
        goto LAB29;
    else
        goto LAB27;

LAB29:    t2 = (t4 + t32);
    t12 = (t5 + t32);
    if (*((unsigned char *)t2) != *((unsigned char *)t12))
        goto LAB26;

LAB30:    t32 = (t32 + 1);
    goto LAB28;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    xsi_set_current_line(376, ng0);
    t1 = (t0 + 3368U);
    t2 = *((char **)t1);
    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 3328U);
    t3 = *((char **)t1);
    t4 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t12 = (t0 + 16464);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 15904);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 16464);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_5(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
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

LAB0:    xsi_set_current_line(380, ng0);
    t3 = (t0 + 7368U);
    t4 = *((char **)t3);
    t3 = (t0 + 3368U);
    t5 = *((char **)t3);
    t6 = 1;
    if (8U == 8U)
        goto LAB11;

LAB12:    t6 = 0;

LAB13:    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB17:    t20 = (t0 + 16528);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t20);

LAB2:    t25 = (t0 + 15920);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 16528);
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    t9 = (t0 + 3848U);
    t13 = *((char **)t9);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t1 = t15;
    goto LAB7;

LAB8:    t9 = (t0 + 8008U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t2 = t12;
    goto LAB10;

LAB11:    t7 = 0;

LAB14:    if (t7 < 8U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t3 = (t4 + t7);
    t8 = (t5 + t7);
    if (*((unsigned char *)t3) != *((unsigned char *)t8))
        goto LAB12;

LAB16:    t7 = (t7 + 1);
    goto LAB14;

LAB18:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_6(char *t0)
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

LAB0:    xsi_set_current_line(387, ng0);
    t3 = (t0 + 8008U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 3048U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 7048U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 16592);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 15936);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 16592);
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

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_7(char *t0)
{
    char t33[16];
    char t37[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
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
    unsigned char t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t38;
    unsigned int t39;

LAB0:    xsi_set_current_line(397, ng0);
    t2 = (t0 + 2048U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 15952);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(398, ng0);
    t4 = (t0 + 2248U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    if (t14 == 1)
        goto LAB20;

LAB21:    t4 = (t0 + 7528U);
    t15 = *((char **)t4);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)2);
    t11 = t17;

LAB22:    if (t11 == 1)
        goto LAB17;

LAB18:    t4 = (t0 + 8328U);
    t18 = *((char **)t4);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)3);
    t10 = t20;

LAB19:    if (t10 == 1)
        goto LAB14;

LAB15:    t4 = (t0 + 3848U);
    t21 = *((char **)t4);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)3);
    t9 = t23;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 3208U);
    t24 = *((char **)t4);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)3);
    t8 = t26;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 7848U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB25;

LAB26:    t1 = (unsigned char)0;

LAB27:    if (t1 != 0)
        goto LAB23;

LAB24:    t2 = (t0 + 7848U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB28;

LAB29:    xsi_set_current_line(409, ng0);
    t2 = (t0 + 7368U);
    t4 = *((char **)t2);
    t2 = (t0 + 16656);
    t5 = (t2 + 56U);
    t12 = *((char **)t5);
    t15 = (t12 + 56U);
    t18 = *((char **)t15);
    memcpy(t18, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(410, ng0);
    t2 = (t0 + 16720);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2088U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(400, ng0);
    t4 = xsi_get_transient_memory(8U);
    memset(t4, 0, 8U);
    t27 = t4;
    memset(t27, (unsigned char)2, 8U);
    t28 = (t0 + 16656);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t4, 8U);
    xsi_driver_first_trans_fast(t28);
    xsi_set_current_line(401, ng0);
    t2 = (t0 + 16720);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    t9 = (unsigned char)1;
    goto LAB16;

LAB17:    t10 = (unsigned char)1;
    goto LAB19;

LAB20:    t11 = (unsigned char)1;
    goto LAB22;

LAB23:    xsi_set_current_line(403, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t12 = t2;
    memset(t12, (unsigned char)2, 8U);
    t15 = (t0 + 16656);
    t18 = (t15 + 56U);
    t21 = *((char **)t18);
    t24 = (t21 + 56U);
    t27 = *((char **)t24);
    memcpy(t27, t2, 8U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(404, ng0);
    t2 = (t0 + 16720);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB25:    t2 = (t0 + 8168U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB27;

LAB28:    xsi_set_current_line(406, ng0);
    t2 = (t0 + 7368U);
    t5 = *((char **)t2);
    t34 = (7 - 7);
    t35 = (t34 * 1U);
    t36 = (0 + t35);
    t2 = (t5 + t36);
    t12 = (t37 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 7;
    t15 = (t12 + 4U);
    *((int *)t15) = 0;
    t15 = (t12 + 8U);
    *((int *)t15) = -1;
    t38 = (0 - 7);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t39;
    t15 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t33, t2, t37, 1);
    t18 = (t0 + 16656);
    t21 = (t18 + 56U);
    t24 = *((char **)t21);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t15, 8U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(407, ng0);
    t2 = (t0 + 16720);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(416, ng0);

LAB3:    t1 = (t0 + 7368U);
    t2 = *((char **)t1);
    t1 = (t0 + 16784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 15968);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(417, ng0);

LAB3:    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 16848);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15984);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_10(char *t0)
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

LAB0:    xsi_set_current_line(422, ng0);
    t2 = (t0 + 2048U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 16000);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(423, ng0);
    t4 = (t0 + 2248U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 8328U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 7528U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB19;

LAB20:    t3 = (unsigned char)0;

LAB21:    if (t3 == 1)
        goto LAB16;

LAB17:    t1 = (unsigned char)0;

LAB18:    if (t1 != 0)
        goto LAB14;

LAB15:    t2 = (t0 + 4008U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB22;

LAB23:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2088U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(424, ng0);
    t4 = (t0 + 16912);
    t15 = (t4 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(430, ng0);
    t2 = (t0 + 16912);
    t12 = (t2 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB16:    t2 = (t0 + 4008U);
    t9 = *((char **)t2);
    t11 = *((unsigned char *)t9);
    t13 = (t11 == (unsigned char)2);
    t1 = t13;
    goto LAB18;

LAB19:    t2 = (t0 + 3848U);
    t5 = *((char **)t2);
    t8 = *((unsigned char *)t5);
    t10 = (t8 == (unsigned char)3);
    t3 = t10;
    goto LAB21;

LAB22:    xsi_set_current_line(432, ng0);
    t2 = (t0 + 16912);
    t5 = (t2 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(619, ng0);

LAB3:    t1 = (t0 + 16976);
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

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(620, ng0);

LAB3:    t1 = (t0 + 17040);
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

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(621, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 17104);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2123479812_3640575771_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(622, ng0);

LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 17168);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_vdma_v5_00_a_a_2123479812_3640575771_init()
{
	static char *pe[] = {(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_0,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_1,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_2,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_3,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_4,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_5,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_6,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_7,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_8,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_9,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_10,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_11,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_12,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_13,(void *)axi_vdma_v5_00_a_a_2123479812_3640575771_p_14};
	xsi_register_didat("axi_vdma_v5_00_a_a_2123479812_3640575771", "isim/isim_system.exe.sim/axi_vdma_v5_00_a/a_2123479812_3640575771.didat");
	xsi_register_executes(pe);
}
