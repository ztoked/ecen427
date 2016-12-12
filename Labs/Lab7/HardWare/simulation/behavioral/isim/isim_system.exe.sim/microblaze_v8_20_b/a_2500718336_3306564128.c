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
static const char *ng0 = "Function legacy_mode_calc ended without a return statement";
static const char *ng1 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/dsp_module.vhd";
static const char *ng2 = "Function convert_s3adsp_opmode ended without a return statement";



char *microblaze_v8_20_b_a_2500718336_3306564128_sub_2366142956_229454594(char *t1, char *t2)
{
    char *t0;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;

LAB0:    t5 = ((unsigned char)13 == (unsigned char)7);
    if (t5 != 0)
        goto LAB2;

LAB4:    t5 = (0 == 0);
    if (t5 != 0)
        goto LAB10;

LAB12:    t7 = (t1 + 23680);
    t0 = xsi_get_transient_memory(6U);
    memcpy(t0, t7, 6U);
    t9 = (t2 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 1;
    t10 = (t9 + 4U);
    *((int *)t10) = 6;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (6 - 1);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;

LAB1:    return t0;
LAB2:    t6 = (0 == 0);
    if (t6 != 0)
        goto LAB5;

LAB7:    t7 = (t1 + 23666);
    t0 = xsi_get_transient_memory(10U);
    memcpy(t0, t7, 10U);
    t9 = (t2 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 1;
    t10 = (t9 + 4U);
    *((int *)t10) = 10;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (10 - 1);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    t7 = (t1 + 23657);
    t0 = xsi_get_transient_memory(9U);
    memcpy(t0, t7, 9U);
    t9 = (t2 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 1;
    t10 = (t9 + 4U);
    *((int *)t10) = 9;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (9 - 1);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    goto LAB1;

LAB6:    goto LAB3;

LAB8:    goto LAB6;

LAB9:    goto LAB6;

LAB10:    t7 = (t1 + 23676);
    t0 = xsi_get_transient_memory(4U);
    memcpy(t0, t7, 4U);
    t9 = (t2 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 1;
    t10 = (t9 + 4U);
    *((int *)t10) = 4;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (4 - 1);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    goto LAB1;

LAB11:    goto LAB3;

LAB13:    goto LAB11;

LAB14:    goto LAB11;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
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

LAB0:    xsi_set_current_line(170, ng1);
    t1 = (0 > 0);
    if (t1 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 13208);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 13048);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2040U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 13208);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
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

LAB0:    xsi_set_current_line(171, ng1);
    t1 = (0 > 0);
    if (t1 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 13272);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 13064);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2040U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 13272);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
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

LAB0:    xsi_set_current_line(172, ng1);
    t1 = (0 == 2);
    if (t1 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 13336);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 13080);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2040U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 13336);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
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

LAB0:    xsi_set_current_line(173, ng1);
    t1 = (0 > 0);
    if (t1 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 13400);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 13096);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2040U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 13400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
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

LAB0:    xsi_set_current_line(174, ng1);
    t1 = (0 != 0);
    if (t1 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 13464);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 13112);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2200U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 13464);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
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

LAB0:    xsi_set_current_line(175, ng1);
    t1 = (1 != 0);
    if (t1 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 13528);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 13128);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2360U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 13528);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(178, ng1);

LAB3:    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t3 = (t0 + 13592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 3U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(179, ng1);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 13656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(180, ng1);

LAB3:    t1 = xsi_get_transient_memory(18U);
    memset(t1, 0, 18U);
    t2 = t1;
    memset(t2, (unsigned char)2, 18U);
    t3 = (t0 + 13720);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 18U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(181, ng1);

LAB3:    t1 = xsi_get_transient_memory(30U);
    memset(t1, 0, 30U);
    t2 = t1;
    memset(t2, (unsigned char)2, 30U);
    t3 = (t0 + 13784);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 30U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_2500718336_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(182, ng1);

LAB3:    t1 = xsi_get_transient_memory(48U);
    memset(t1, 0, 48U);
    t2 = t1;
    memset(t2, (unsigned char)2, 48U);
    t3 = (t0 + 13848);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 48U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

char *microblaze_v8_20_b_a_2500718336_3306564128_sub_853812503_35921516(char *t1, char *t2)
{
    char t4[24];
    char t5[16];
    char *t0;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 6;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (6 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t4 + 4U);
    t10 = (t2 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t4 + 12U);
    *((char **)t11) = t5;
    t12 = (t1 + 23686);
    t14 = xsi_mem_cmp(t12, t2, 7U);
    if (t14 == 1)
        goto LAB5;

LAB10:    t15 = (t1 + 23693);
    t17 = xsi_mem_cmp(t15, t2, 7U);
    if (t17 == 1)
        goto LAB6;

LAB11:    t18 = (t1 + 23700);
    t20 = xsi_mem_cmp(t18, t2, 7U);
    if (t20 == 1)
        goto LAB7;

LAB12:    t21 = (t1 + 23707);
    t23 = xsi_mem_cmp(t21, t2, 7U);
    if (t23 == 1)
        goto LAB8;

LAB13:
LAB9:    t6 = (t1 + 23746);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t6, 8U);

LAB1:    return t0;
LAB3:    *((char **)t7) = t2;
    goto LAB2;

LAB4:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB5:    t24 = (t1 + 23714);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t24, 8U);
    goto LAB1;

LAB6:    t6 = (t1 + 23722);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t6, 8U);
    goto LAB1;

LAB7:    t6 = (t1 + 23730);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t6, 8U);
    goto LAB1;

LAB8:    t6 = (t1 + 23738);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t6, 8U);
    goto LAB1;

LAB14:;
LAB15:    goto LAB4;

LAB16:    goto LAB4;

LAB17:    goto LAB4;

LAB18:    goto LAB4;

LAB19:    goto LAB4;

}


void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

extern void microblaze_v8_20_b_a_2500718336_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_0,(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_1,(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_2,(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_3,(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_4,(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_5,(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_6,(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_7,(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_8,(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_9,(void *)microblaze_v8_20_b_a_2500718336_3306564128_p_10};
	static char *se[] = {(void *)microblaze_v8_20_b_a_2500718336_3306564128_sub_2366142956_229454594,(void *)microblaze_v8_20_b_a_2500718336_3306564128_sub_853812503_35921516};
	xsi_register_didat("microblaze_v8_20_b_a_2500718336_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_2500718336_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 8);
	xsi_register_resolution_function(2, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 8);
}
