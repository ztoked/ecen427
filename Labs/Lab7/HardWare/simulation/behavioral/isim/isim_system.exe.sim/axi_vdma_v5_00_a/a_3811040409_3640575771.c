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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_vdma_v5_00_a/hdl/vhdl/axi_vdma_reg_mux.vhd";
extern char *IEEE_P_2592010699;
extern char *AXI_VDMA_V5_00_A_P_3854302438;



static void axi_vdma_v5_00_a_a_3811040409_3640575771_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(399, ng0);

LAB3:    t1 = (t0 + 1824U);
    t2 = *((char **)t1);
    t3 = (31 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 13872);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 13760);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_3811040409_3640575771_p_1(char *t0)
{
    char t14[16];
    char t16[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(400, ng0);

LAB3:    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t3 = (0 - 31);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1824U);
    t9 = *((char **)t8);
    t10 = (31 - 7);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t8 = (t9 + t12);
    t15 = ((IEEE_P_2592010699) + 4024);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 7;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 7);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t13 = xsi_base_array_concat(t13, t14, t15, (char)99, t7, (char)97, t8, t16, (char)101);
    t20 = (1U + 8U);
    t21 = (9U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 13936);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t13, 9U);
    xsi_driver_first_trans_fast(t18);

LAB2:    t26 = (t0 + 13776);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t20, 0);
    goto LAB6;

}

static void axi_vdma_v5_00_a_a_3811040409_3640575771_p_2(char *t0)
{
    char t31[16];
    char t33[16];
    char t34[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    unsigned int t32;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    xsi_set_current_line(535, ng0);
    t1 = (t0 + 9824U);
    t2 = *((char **)t1);
    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 23488U);
    t3 = *((char **)t1);
    t4 = xsi_mem_cmp(t3, t2, 8U);
    if (t4 == 1)
        goto LAB3;

LAB15:    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 23608U);
    t5 = *((char **)t1);
    t6 = xsi_mem_cmp(t5, t2, 8U);
    if (t6 == 1)
        goto LAB4;

LAB16:    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 20608U);
    t7 = *((char **)t1);
    t8 = xsi_mem_cmp(t7, t2, 8U);
    if (t8 == 1)
        goto LAB5;

LAB17:    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 24208U);
    t9 = *((char **)t1);
    t10 = xsi_mem_cmp(t9, t2, 8U);
    if (t10 == 1)
        goto LAB6;

LAB18:    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 24328U);
    t11 = *((char **)t1);
    t12 = xsi_mem_cmp(t11, t2, 8U);
    if (t12 == 1)
        goto LAB7;

LAB19:    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 30688U);
    t13 = *((char **)t1);
    t14 = xsi_mem_cmp(t13, t2, 8U);
    if (t14 == 1)
        goto LAB8;

LAB20:    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 30808U);
    t15 = *((char **)t1);
    t16 = xsi_mem_cmp(t15, t2, 8U);
    if (t16 == 1)
        goto LAB9;

LAB21:    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 30928U);
    t17 = *((char **)t1);
    t18 = xsi_mem_cmp(t17, t2, 8U);
    if (t18 == 1)
        goto LAB10;

LAB22:    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 31768U);
    t19 = *((char **)t1);
    t20 = xsi_mem_cmp(t19, t2, 8U);
    if (t20 == 1)
        goto LAB11;

LAB23:    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 31888U);
    t21 = *((char **)t1);
    t22 = xsi_mem_cmp(t21, t2, 8U);
    if (t22 == 1)
        goto LAB12;

LAB24:    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 32008U);
    t23 = *((char **)t1);
    t24 = xsi_mem_cmp(t23, t2, 8U);
    if (t24 == 1)
        goto LAB13;

LAB25:
LAB14:    xsi_set_current_line(575, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 14000);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(576, ng0);
    t1 = (t0 + 14064);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 13792);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(537, ng0);
    t1 = (t0 + 2624U);
    t25 = *((char **)t1);
    t1 = (t0 + 14000);
    t26 = (t1 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t25, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(538, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(540, ng0);
    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    t1 = (t0 + 14000);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(541, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(543, ng0);
    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t1 = (t0 + 14000);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(544, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(546, ng0);
    t1 = (t0 + 11840U);
    t2 = *((char **)t1);
    t1 = (t0 + 3584U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 26524U);
    t9 = (t0 + 25884U);
    t1 = xsi_base_array_concat(t1, t31, t5, (char)97, t2, t7, (char)97, t3, t9, (char)101);
    t32 = (26U + 6U);
    t30 = (32U != t32);
    if (t30 == 1)
        goto LAB27;

LAB28:    t11 = (t0 + 14000);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t17 = (t15 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t1, 32U);
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(548, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(550, ng0);
    t1 = (t0 + 11960U);
    t2 = *((char **)t1);
    t1 = (t0 + 3744U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 26540U);
    t9 = (t0 + 25900U);
    t1 = xsi_base_array_concat(t1, t31, t5, (char)97, t2, t7, (char)97, t3, t9, (char)101);
    t32 = (15U + 17U);
    t30 = (32U != t32);
    if (t30 == 1)
        goto LAB29;

LAB30:    t11 = (t0 + 14000);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t17 = (t15 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t1, 32U);
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(552, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(554, ng0);
    t1 = (t0 + 11480U);
    t2 = *((char **)t1);
    t1 = (t0 + 3904U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 26492U);
    t9 = (t0 + 25916U);
    t1 = xsi_base_array_concat(t1, t31, t5, (char)97, t2, t7, (char)97, t3, t9, (char)101);
    t32 = (19U + 13U);
    t30 = (32U != t32);
    if (t30 == 1)
        goto LAB31;

LAB32:    t11 = (t0 + 14000);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t17 = (t15 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t1, 32U);
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(555, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(557, ng0);
    t1 = (t0 + 11720U);
    t2 = *((char **)t1);
    t1 = (t0 + 4064U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 26508U);
    t9 = (t0 + 25932U);
    t1 = xsi_base_array_concat(t1, t31, t5, (char)97, t2, t7, (char)97, t3, t9, (char)101);
    t32 = (16U + 16U);
    t30 = (32U != t32);
    if (t30 == 1)
        goto LAB33;

LAB34:    t11 = (t0 + 14000);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t17 = (t15 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t1, 32U);
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(558, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(560, ng0);
    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 4888U);
    t2 = *((char **)t1);
    t1 = (t0 + 4384U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t7 = ((AXI_VDMA_V5_00_A_P_3854302438) + 138196U);
    t9 = (t0 + 25964U);
    t1 = xsi_base_array_concat(t1, t31, t5, (char)97, t2, t7, (char)97, t3, t9, (char)101);
    t11 = ((AXI_VDMA_V5_00_A_P_3854302438) + 5008U);
    t13 = *((char **)t11);
    t15 = ((IEEE_P_2592010699) + 4024);
    t17 = ((AXI_VDMA_V5_00_A_P_3854302438) + 138212U);
    t11 = xsi_base_array_concat(t11, t33, t15, (char)97, t1, t31, (char)97, t13, t17, (char)101);
    t19 = (t0 + 4224U);
    t21 = *((char **)t19);
    t23 = ((IEEE_P_2592010699) + 4024);
    t25 = (t0 + 25948U);
    t19 = xsi_base_array_concat(t19, t34, t23, (char)97, t11, t33, (char)97, t21, t25, (char)101);
    t32 = (3U + 5U);
    t35 = (t32 + 8U);
    t36 = (t35 + 16U);
    t30 = (32U != t36);
    if (t30 == 1)
        goto LAB35;

LAB36:    t26 = (t0 + 14000);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t37 = *((char **)t29);
    memcpy(t37, t19, 32U);
    xsi_driver_first_trans_fast_port(t26);
    xsi_set_current_line(564, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(566, ng0);
    t1 = (t0 + 4544U);
    t2 = *((char **)t1);
    t1 = (t0 + 14000);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(567, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(569, ng0);
    t1 = (t0 + 4704U);
    t2 = *((char **)t1);
    t1 = (t0 + 14000);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(570, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(572, ng0);
    t1 = (t0 + 4864U);
    t2 = *((char **)t1);
    t1 = (t0 + 14000);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(573, ng0);
    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t30 = *((unsigned char *)t2);
    t1 = (t0 + 14064);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t30;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB26:;
LAB27:    xsi_size_not_matching(32U, t32, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(32U, t32, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(32U, t32, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(32U, t32, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(32U, t36, 0);
    goto LAB36;

}


extern void axi_vdma_v5_00_a_a_3811040409_3640575771_init()
{
	static char *pe[] = {(void *)axi_vdma_v5_00_a_a_3811040409_3640575771_p_0,(void *)axi_vdma_v5_00_a_a_3811040409_3640575771_p_1,(void *)axi_vdma_v5_00_a_a_3811040409_3640575771_p_2};
	xsi_register_didat("axi_vdma_v5_00_a_a_3811040409_3640575771", "isim/isim_system.exe.sim/axi_vdma_v5_00_a/a_3811040409_3640575771.didat");
	xsi_register_executes(pe);
}
