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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_vdma_v5_00_a/hdl/vhdl/axi_vdma_genlock_mngr.vhd";
extern char *AXI_VDMA_V5_00_A_P_3854302438;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned int t11;
    char *t12;
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
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(303, ng0);
    t1 = (t0 + 2304U);
    t2 = *((char **)t1);
    t1 = (t0 + 8040U);
    t3 = *((char **)t1);
    t1 = ((AXI_VDMA_V5_00_A_P_3854302438) + 3568U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (t5 - 1);
    t7 = (5 - t6);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t3 + t9);
    t10 = 1;
    if (5U == 5U)
        goto LAB5;

LAB6:    t10 = 0;

LAB7:    if (t10 != 0)
        goto LAB3;

LAB4:
LAB11:    t19 = (t0 + 12696);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 12440);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t14 = (t0 + 12696);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB5:    t11 = 0;

LAB8:    if (t11 < 5U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t12 = (t2 + t11);
    t13 = (t1 + t11);
    if (*((unsigned char *)t12) != *((unsigned char *)t13))
        goto LAB6;

LAB10:    t11 = (t11 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(583, ng0);

LAB3:    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t3 = (t0 + 12760);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 5U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_2(char *t0)
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
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(589, ng0);
    t2 = (t0 + 1784U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12456);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(590, ng0);
    t4 = (t0 + 1984U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 3264U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3584U);
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

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(591, ng0);
    t4 = (t0 + 12824);
    t15 = (t4 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(597, ng0);
    t15 = (t0 + 6144U);
    t17 = *((char **)t15);
    t13 = *((unsigned char *)t17);
    t14 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t13);
    t15 = (t0 + 12824);
    t18 = (t15 + 56U);
    t20 = *((char **)t18);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t14;
    xsi_driver_first_trans_fast(t15);
    goto LAB9;

LAB16:    t15 = (t0 + 3424U);
    t16 = *((char **)t15);
    t10 = *((unsigned char *)t16);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB18;

LAB19:    t2 = (t0 + 3744U);
    t5 = *((char **)t2);
    t2 = (t0 + 2304U);
    t9 = *((char **)t2);
    t8 = 1;
    if (5U == 5U)
        goto LAB22;

LAB23:    t8 = 0;

LAB24:    t3 = t8;
    goto LAB21;

LAB22:    t19 = 0;

LAB25:    if (t19 < 5U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t2 = (t5 + t19);
    t12 = (t9 + t19);
    if (*((unsigned char *)t2) != *((unsigned char *)t12))
        goto LAB23;

LAB27:    t19 = (t19 + 1);
    goto LAB25;

}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_3(char *t0)
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

LAB0:    xsi_set_current_line(607, ng0);
    t2 = (t0 + 1784U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12472);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(608, ng0);
    t4 = (t0 + 1984U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(612, ng0);
    t2 = (t0 + 6144U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 12888);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(613, ng0);
    t2 = (t0 + 6304U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 12952);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(609, ng0);
    t4 = (t0 + 12888);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(610, ng0);
    t2 = (t0 + 12952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_4(char *t0)
{
    char t1[16];
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

LAB0:    xsi_set_current_line(629, ng0);

LAB3:    t2 = (t0 + 2304U);
    t3 = *((char **)t2);
    t2 = (t0 + 23540U);
    t4 = (t0 + 3744U);
    t5 = *((char **)t4);
    t4 = (t0 + 23620U);
    t6 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t1, t3, t2, t5, t4);
    t7 = (t0 + 13016);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 5U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 12488);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(633, ng0);
    t2 = (t0 + 6144U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(636, ng0);
    t2 = (t0 + 3744U);
    t3 = *((char **)t2);
    t2 = (t0 + 13080);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 5U);
    xsi_driver_first_trans_fast(t2);

LAB3:    t2 = (t0 + 12504);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(634, ng0);
    t2 = (t0 + 5184U);
    t9 = *((char **)t2);
    t2 = (t0 + 13080);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 5U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 5984U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_6(char *t0)
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

LAB0:    xsi_set_current_line(643, ng0);
    t2 = (t0 + 1784U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12520);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(644, ng0);
    t4 = (t0 + 1984U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(647, ng0);
    t2 = (t0 + 5024U);
    t4 = *((char **)t2);
    t2 = (t0 + 13144);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 5U);
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(645, ng0);
    t4 = xsi_get_transient_memory(5U);
    memset(t4, 0, 5U);
    t11 = t4;
    memset(t11, (unsigned char)2, 5U);
    t12 = (t0 + 13144);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    int t43;
    char *t44;
    int t46;
    char *t47;
    int t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned char t56;
    unsigned char t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    xsi_set_current_line(665, ng0);
    t1 = (t0 + 2144U);
    t2 = *((char **)t1);
    t1 = (t0 + 24000);
    t4 = xsi_mem_cmp(t1, t2, 6U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 24006);
    t7 = xsi_mem_cmp(t5, t2, 6U);
    if (t7 == 1)
        goto LAB3;

LAB9:    t8 = (t0 + 24012);
    t10 = xsi_mem_cmp(t8, t2, 6U);
    if (t10 == 1)
        goto LAB4;

LAB10:    t11 = (t0 + 24018);
    t13 = xsi_mem_cmp(t11, t2, 6U);
    if (t13 == 1)
        goto LAB4;

LAB11:    t14 = (t0 + 24024);
    t16 = xsi_mem_cmp(t14, t2, 6U);
    if (t16 == 1)
        goto LAB5;

LAB12:    t17 = (t0 + 24030);
    t19 = xsi_mem_cmp(t17, t2, 6U);
    if (t19 == 1)
        goto LAB5;

LAB13:    t20 = (t0 + 24036);
    t22 = xsi_mem_cmp(t20, t2, 6U);
    if (t22 == 1)
        goto LAB5;

LAB14:    t23 = (t0 + 24042);
    t25 = xsi_mem_cmp(t23, t2, 6U);
    if (t25 == 1)
        goto LAB5;

LAB15:    t26 = (t0 + 24048);
    t28 = xsi_mem_cmp(t26, t2, 6U);
    if (t28 == 1)
        goto LAB6;

LAB16:    t29 = (t0 + 24054);
    t31 = xsi_mem_cmp(t29, t2, 6U);
    if (t31 == 1)
        goto LAB6;

LAB17:    t32 = (t0 + 24060);
    t34 = xsi_mem_cmp(t32, t2, 6U);
    if (t34 == 1)
        goto LAB6;

LAB18:    t35 = (t0 + 24066);
    t37 = xsi_mem_cmp(t35, t2, 6U);
    if (t37 == 1)
        goto LAB6;

LAB19:    t38 = (t0 + 24072);
    t40 = xsi_mem_cmp(t38, t2, 6U);
    if (t40 == 1)
        goto LAB6;

LAB20:    t41 = (t0 + 24078);
    t43 = xsi_mem_cmp(t41, t2, 6U);
    if (t43 == 1)
        goto LAB6;

LAB21:    t44 = (t0 + 24084);
    t46 = xsi_mem_cmp(t44, t2, 6U);
    if (t46 == 1)
        goto LAB6;

LAB22:    t47 = (t0 + 24090);
    t49 = xsi_mem_cmp(t47, t2, 6U);
    if (t49 == 1)
        goto LAB6;

LAB23:
LAB7:    xsi_set_current_line(701, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (0 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 4U, 1, 0LL);
    xsi_set_current_line(702, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (1 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 3U, 1, 0LL);
    xsi_set_current_line(703, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (2 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 2U, 1, 0LL);
    xsi_set_current_line(704, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (3 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 1U, 1, 0LL);
    xsi_set_current_line(705, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);

LAB2:    t1 = (t0 + 12536);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(668, ng0);
    t50 = (t0 + 5504U);
    t51 = *((char **)t50);
    t52 = (0 - 4);
    t53 = (t52 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t50 = (t51 + t55);
    t56 = *((unsigned char *)t50);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t58 = (t0 + 13208);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    *((unsigned char *)t62) = t57;
    xsi_driver_first_trans_delta(t58, 4U, 1, 0LL);
    xsi_set_current_line(669, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (1 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t56;
    xsi_driver_first_trans_delta(t3, 3U, 1, 0LL);
    xsi_set_current_line(670, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (2 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t56;
    xsi_driver_first_trans_delta(t3, 2U, 1, 0LL);
    xsi_set_current_line(671, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (3 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t56;
    xsi_driver_first_trans_delta(t3, 1U, 1, 0LL);
    xsi_set_current_line(672, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t56;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    goto LAB2;

LAB4:    xsi_set_current_line(676, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (0 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 4U, 1, 0LL);
    xsi_set_current_line(677, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (1 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 3U, 1, 0LL);
    xsi_set_current_line(678, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (2 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t56;
    xsi_driver_first_trans_delta(t3, 2U, 1, 0LL);
    xsi_set_current_line(679, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (3 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t56;
    xsi_driver_first_trans_delta(t3, 1U, 1, 0LL);
    xsi_set_current_line(680, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t56;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    goto LAB2;

LAB5:    xsi_set_current_line(684, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (0 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 4U, 1, 0LL);
    xsi_set_current_line(685, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (1 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 3U, 1, 0LL);
    xsi_set_current_line(686, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (2 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 2U, 1, 0LL);
    xsi_set_current_line(687, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (3 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t56;
    xsi_driver_first_trans_delta(t3, 1U, 1, 0LL);
    xsi_set_current_line(688, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t56;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(693, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (0 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 4U, 1, 0LL);
    xsi_set_current_line(694, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (1 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 3U, 1, 0LL);
    xsi_set_current_line(695, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (2 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 2U, 1, 0LL);
    xsi_set_current_line(696, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (3 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t56);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t57;
    xsi_driver_first_trans_delta(t3, 1U, 1, 0LL);
    xsi_set_current_line(697, ng0);
    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    t4 = (4 - 4);
    t53 = (t4 * -1);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t1 = (t2 + t55);
    t56 = *((unsigned char *)t1);
    t3 = (t0 + 13208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t56;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    goto LAB2;

LAB24:;
}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_8(char *t0)
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

LAB0:    xsi_set_current_line(713, ng0);
    t2 = (t0 + 1784U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12552);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(714, ng0);
    t4 = (t0 + 1984U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(717, ng0);
    t2 = (t0 + 5344U);
    t4 = *((char **)t2);
    t2 = (t0 + 13272);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 5U);
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(715, ng0);
    t4 = xsi_get_transient_memory(5U);
    memset(t4, 0, 5U);
    t11 = t4;
    memset(t11, (unsigned char)2, 5U);
    t12 = (t0 + 13272);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;

LAB0:    xsi_set_current_line(914, ng0);
    t1 = (t0 + 2144U);
    t2 = *((char **)t1);
    t1 = (t0 + 24096);
    t4 = xsi_mem_cmp(t1, t2, 6U);
    if (t4 == 1)
        goto LAB3;

LAB6:    t5 = (t0 + 24102);
    t7 = xsi_mem_cmp(t5, t2, 6U);
    if (t7 == 1)
        goto LAB4;

LAB7:
LAB5:    xsi_set_current_line(930, ng0);
    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    t4 = (0 - 4);
    t16 = (t4 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t10 = *((unsigned char *)t1);
    t3 = (t0 + 13336);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t10;
    xsi_driver_first_trans_delta(t3, 5U, 1, 0LL);
    xsi_set_current_line(931, ng0);
    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    t4 = (1 - 4);
    t16 = (t4 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t10 = *((unsigned char *)t1);
    t3 = (t0 + 13336);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t10;
    xsi_driver_first_trans_delta(t3, 4U, 1, 0LL);
    xsi_set_current_line(932, ng0);
    t1 = (t0 + 6464U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 13336);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t11;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    xsi_set_current_line(933, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    xsi_set_current_line(934, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(935, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t1 = (t0 + 12568);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(916, ng0);
    t8 = (t0 + 6464U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t8 = (t0 + 13336);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_delta(t8, 5U, 1, 0LL);
    xsi_set_current_line(917, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    xsi_set_current_line(918, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    xsi_set_current_line(919, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    xsi_set_current_line(920, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(921, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB2;

LAB4:    xsi_set_current_line(923, ng0);
    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    t4 = (0 - 4);
    t16 = (t4 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t10 = *((unsigned char *)t1);
    t3 = (t0 + 13336);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t10;
    xsi_driver_first_trans_delta(t3, 5U, 1, 0LL);
    xsi_set_current_line(924, ng0);
    t1 = (t0 + 6464U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 13336);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t11;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    xsi_set_current_line(925, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    xsi_set_current_line(926, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    xsi_set_current_line(927, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(928, ng0);
    t1 = (t0 + 13336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB2;

LAB8:;
}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_10(char *t0)
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

LAB0:    xsi_set_current_line(983, ng0);
    t2 = (t0 + 1784U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12584);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(984, ng0);
    t4 = (t0 + 1984U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(987, ng0);
    t2 = (t0 + 5824U);
    t4 = *((char **)t2);
    t2 = (t0 + 13400);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 6U);
    xsi_driver_first_trans_fast_port(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(985, ng0);
    t4 = xsi_get_transient_memory(6U);
    memset(t4, 0, 6U);
    t11 = t4;
    memset(t11, (unsigned char)2, 6U);
    t12 = (t0 + 13400);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 6U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_11(char *t0)
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

LAB0:    xsi_set_current_line(999, ng0);
    t2 = (t0 + 1784U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12600);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1000, ng0);
    t4 = (t0 + 1984U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1006, ng0);
    t2 = (t0 + 3584U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 13464);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1007, ng0);
    t2 = (t0 + 6624U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 13528);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1008, ng0);
    t2 = (t0 + 6784U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 13592);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1009, ng0);
    t2 = (t0 + 6944U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 13656);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1001, ng0);
    t4 = (t0 + 13464);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1002, ng0);
    t2 = (t0 + 13528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1003, ng0);
    t2 = (t0 + 13592);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1004, ng0);
    t2 = (t0 + 13656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2325684008_3640575771_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1014, ng0);

LAB3:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13720);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12616);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_vdma_v5_00_a_a_2325684008_3640575771_init()
{
	static char *pe[] = {(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_0,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_1,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_2,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_3,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_4,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_5,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_6,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_7,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_8,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_9,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_10,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_11,(void *)axi_vdma_v5_00_a_a_2325684008_3640575771_p_12};
	xsi_register_didat("axi_vdma_v5_00_a_a_2325684008_3640575771", "isim/isim_system.exe.sim/axi_vdma_v5_00_a/a_2325684008_3640575771.didat");
	xsi_register_executes(pe);
}
