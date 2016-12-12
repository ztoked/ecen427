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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/exception_registers_gti.vhd";
extern char *MICROBLAZE_V8_20_B_P_1761634766;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void microblaze_v8_20_b_a_0511440537_3306564128_p_0(char *t0)
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

LAB0:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 10232U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 34992);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(202, ng0);
    t4 = (t0 + 10432U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10592U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 10272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(203, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 35312);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(205, ng0);
    if ((unsigned char)0 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 11072U);
    t4 = *((char **)t2);
    t2 = (t0 + 35312);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 32U);
    xsi_driver_first_trans_fast(t2);

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 10912U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 11072U);
    t4 = *((char **)t2);
    t2 = (t0 + 35312);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 32U);
    xsi_driver_first_trans_fast(t2);

LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 11232U);
    t8 = *((char **)t2);
    t2 = (t0 + 35312);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB17;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(237, ng0);
    t1 = (t0 + 11872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 35376);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 35008);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 35376);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_2(char *t0)
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

LAB0:    xsi_set_current_line(254, ng0);
    t2 = (t0 + 10232U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 35024);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(255, ng0);
    t4 = (t0 + 10432U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10592U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 10272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(256, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 35440);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 18112U);
    t5 = *((char **)t2);
    t2 = (t0 + 35440);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_3(char *t0)
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

LAB0:    xsi_set_current_line(270, ng0);
    t2 = (t0 + 10232U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 35040);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(271, ng0);
    t4 = (t0 + 10432U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 10272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(272, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 35504);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 16512U);
    t5 = *((char **)t2);
    t2 = (t0 + 35504);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_4(char *t0)
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
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(281, ng0);
    t2 = (t0 + 10232U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 35056);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(282, ng0);
    t4 = (t0 + 10432U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 12192U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (!(t13));
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 10272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(283, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t15 = t4;
    memset(t15, (unsigned char)2, 32U);
    t16 = (t0 + 35568);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 32U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(285, ng0);
    t2 = (t0 + 17152U);
    t5 = *((char **)t2);
    t2 = (t0 + 35568);
    t9 = (t2 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 32U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_5(char *t0)
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

LAB0:    xsi_set_current_line(296, ng0);
    t2 = (t0 + 10232U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 35072);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(297, ng0);
    t4 = (t0 + 10432U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(300, ng0);
    t2 = (t0 + 12992U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 10272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(298, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 35632);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(301, ng0);
    t2 = (t0 + 16672U);
    t5 = *((char **)t2);
    t2 = (t0 + 35632);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_6(char *t0)
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

LAB0:    xsi_set_current_line(309, ng0);
    t2 = (t0 + 10232U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 35088);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(310, ng0);
    t4 = (t0 + 12512U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (!(t9));
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 10272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(311, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 35696);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(314, ng0);
    t2 = (t0 + 16992U);
    t5 = *((char **)t2);
    t2 = (t0 + 35696);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_7(char *t0)
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

LAB0:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 10232U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 35104);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(324, ng0);
    t4 = (t0 + 10432U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(327, ng0);
    t2 = (t0 + 13152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 10272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(325, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 35760);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(328, ng0);
    t2 = (t0 + 15232U);
    t5 = *((char **)t2);
    t2 = (t0 + 35760);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_8(char *t0)
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

LAB0:    xsi_set_current_line(336, ng0);
    t2 = (t0 + 10232U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 35120);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(337, ng0);
    t4 = (t0 + 12672U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (!(t9));
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 10272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(338, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 35824);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(340, ng0);
    t2 = (t0 + 16832U);
    t5 = *((char **)t2);
    t2 = (t0 + 35824);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(346, ng0);
    t1 = (t0 + 12832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 10432U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 35888);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t8);

LAB2:    t15 = (t0 + 35136);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 35888);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_10(char *t0)
{
    char t25[16];
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
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;

LAB0:    xsi_set_current_line(350, ng0);
    t2 = (t0 + 10232U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 35152);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(351, ng0);
    t4 = (t0 + 16192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(354, ng0);
    t2 = (t0 + 13312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 10272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(352, ng0);
    t4 = xsi_get_transient_memory(13U);
    memset(t4, 0, 13U);
    t11 = t4;
    memset(t11, (unsigned char)2, 13U);
    t12 = (t0 + 35952);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 13U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(355, ng0);
    t2 = (t0 + 14432U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(358, ng0);
    t2 = (t0 + 35952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);

LAB15:    xsi_set_current_line(362, ng0);
    t2 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2248U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t3 = (0 >= t17);
    if (t3 == 1)
        goto LAB20;

LAB21:    t1 = (unsigned char)0;

LAB22:    if (t1 != 0)
        goto LAB17;

LAB19:    if ((unsigned char)0 == 1)
        goto LAB43;

LAB44:    t3 = (unsigned char)0;

LAB45:    if (t3 == 1)
        goto LAB40;

LAB41:    t1 = (unsigned char)0;

LAB42:    if (t1 != 0)
        goto LAB38;

LAB39:    t3 = (0 > 0);
    if (t3 == 1)
        goto LAB54;

LAB55:    t1 = (unsigned char)0;

LAB56:    if (t1 != 0)
        goto LAB52;

LAB53:    xsi_set_current_line(374, ng0);
    t2 = (t0 + 13792U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 35952);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t2, 1U, 1, 0LL);

LAB18:    xsi_set_current_line(376, ng0);
    t2 = (t0 + 13632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 35952);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t2, 2U, 1, 0LL);
    xsi_set_current_line(377, ng0);
    if ((unsigned char)0 == 1)
        goto LAB75;

LAB76:    t1 = (unsigned char)0;

LAB77:    if (t1 != 0)
        goto LAB72;

LAB74:    xsi_set_current_line(380, ng0);
    t2 = (t0 + 14272U);
    t4 = *((char **)t2);
    t2 = (t0 + 35952);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 5U);
    xsi_driver_first_trans_delta(t2, 3U, 5U, 0LL);

LAB73:    xsi_set_current_line(386, ng0);
    t2 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2248U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (0 >= t17);
    if (t1 != 0)
        goto LAB84;

LAB86:    xsi_set_current_line(389, ng0);
    t2 = (t0 + 35952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 8U, 1, 0LL);
    xsi_set_current_line(390, ng0);
    t2 = (t0 + 13472U);
    t4 = *((char **)t2);
    t18 = (28 - 27);
    t19 = (t18 * 1U);
    t26 = (0 + t19);
    t2 = (t4 + t26);
    t5 = (t0 + 35952);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_delta(t5, 9U, 4U, 0LL);

LAB85:    goto LAB12;

LAB14:    xsi_set_current_line(356, ng0);
    t2 = (t0 + 35952);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(365, ng0);
    t16 = (t0 + 13952U);
    t20 = *((char **)t16);
    t10 = *((unsigned char *)t20);
    t16 = (t0 + 35952);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t10;
    xsi_driver_first_trans_delta(t16, 1U, 1, 0LL);
    goto LAB18;

LAB20:    t2 = (t0 + 13472U);
    t5 = *((char **)t2);
    t2 = ((MICROBLAZE_V8_20_B_P_1761634766) + 41848U);
    t8 = *((char **)t2);
    t7 = 1;
    if (5U == 5U)
        goto LAB26;

LAB27:    t7 = 0;

LAB28:    if (t7 == 1)
        goto LAB23;

LAB24:    t12 = (t0 + 13472U);
    t13 = *((char **)t12);
    t12 = ((MICROBLAZE_V8_20_B_P_1761634766) + 41968U);
    t14 = *((char **)t12);
    t9 = 1;
    if (5U == 5U)
        goto LAB32;

LAB33:    t9 = 0;

LAB34:    t6 = t9;

LAB25:    t1 = t6;
    goto LAB22;

LAB23:    t6 = (unsigned char)1;
    goto LAB25;

LAB26:    t18 = 0;

LAB29:    if (t18 < 5U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t2 = (t5 + t18);
    t11 = (t8 + t18);
    if (*((unsigned char *)t2) != *((unsigned char *)t11))
        goto LAB27;

LAB31:    t18 = (t18 + 1);
    goto LAB29;

LAB32:    t19 = 0;

LAB35:    if (t19 < 5U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t12 = (t13 + t19);
    t15 = (t14 + t19);
    if (*((unsigned char *)t12) != *((unsigned char *)t15))
        goto LAB33;

LAB37:    t19 = (t19 + 1);
    goto LAB35;

LAB38:    xsi_set_current_line(368, ng0);
    t11 = (t0 + 14112U);
    t12 = *((char **)t11);
    t7 = *((unsigned char *)t12);
    t11 = (t0 + 35952);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t7;
    xsi_driver_first_trans_delta(t11, 1U, 1, 0LL);
    goto LAB18;

LAB40:    t2 = (t0 + 13472U);
    t4 = *((char **)t2);
    t2 = ((MICROBLAZE_V8_20_B_P_1761634766) + 41008U);
    t5 = *((char **)t2);
    t6 = 1;
    if (5U == 5U)
        goto LAB46;

LAB47:    t6 = 0;

LAB48:    t1 = t6;
    goto LAB42;

LAB43:    t3 = (unsigned char)1;
    goto LAB45;

LAB46:    t18 = 0;

LAB49:    if (t18 < 5U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t2 = (t4 + t18);
    t8 = (t5 + t18);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB47;

LAB51:    t18 = (t18 + 1);
    goto LAB49;

LAB52:    xsi_set_current_line(372, ng0);
    t15 = (t0 + 14912U);
    t16 = *((char **)t15);
    t10 = *((unsigned char *)t16);
    t15 = (t0 + 35952);
    t20 = (t15 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t10;
    xsi_driver_first_trans_delta(t15, 1U, 1, 0LL);
    goto LAB18;

LAB54:    t2 = (t0 + 13472U);
    t4 = *((char **)t2);
    t2 = ((MICROBLAZE_V8_20_B_P_1761634766) + 40768U);
    t5 = *((char **)t2);
    t7 = 1;
    if (5U == 5U)
        goto LAB60;

LAB61:    t7 = 0;

LAB62:    if (t7 == 1)
        goto LAB57;

LAB58:    t11 = (t0 + 13472U);
    t12 = *((char **)t11);
    t11 = ((MICROBLAZE_V8_20_B_P_1761634766) + 40888U);
    t13 = *((char **)t11);
    t9 = 1;
    if (5U == 5U)
        goto LAB66;

LAB67:    t9 = 0;

LAB68:    t6 = t9;

LAB59:    t1 = t6;
    goto LAB56;

LAB57:    t6 = (unsigned char)1;
    goto LAB59;

LAB60:    t18 = 0;

LAB63:    if (t18 < 5U)
        goto LAB64;
    else
        goto LAB62;

LAB64:    t2 = (t4 + t18);
    t8 = (t5 + t18);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB61;

LAB65:    t18 = (t18 + 1);
    goto LAB63;

LAB66:    t19 = 0;

LAB69:    if (t19 < 5U)
        goto LAB70;
    else
        goto LAB68;

LAB70:    t11 = (t12 + t19);
    t14 = (t13 + t19);
    if (*((unsigned char *)t11) != *((unsigned char *)t14))
        goto LAB67;

LAB71:    t19 = (t19 + 1);
    goto LAB69;

LAB72:    xsi_set_current_line(378, ng0);
    t11 = (t0 + 15072U);
    t12 = *((char **)t11);
    t17 = *((int *)t12);
    t11 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t25, t17, 5);
    t13 = (t0 + 35952);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    memcpy(t20, t11, 5U);
    xsi_driver_first_trans_delta(t13, 3U, 5U, 0LL);
    goto LAB73;

LAB75:    t2 = (t0 + 13472U);
    t4 = *((char **)t2);
    t2 = ((MICROBLAZE_V8_20_B_P_1761634766) + 40408U);
    t5 = *((char **)t2);
    t3 = 1;
    if (5U == 5U)
        goto LAB78;

LAB79:    t3 = 0;

LAB80:    t1 = t3;
    goto LAB77;

LAB78:    t18 = 0;

LAB81:    if (t18 < 5U)
        goto LAB82;
    else
        goto LAB80;

LAB82:    t2 = (t4 + t18);
    t8 = (t5 + t18);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB79;

LAB83:    t18 = (t18 + 1);
    goto LAB81;

LAB84:    xsi_set_current_line(387, ng0);
    t2 = (t0 + 13472U);
    t5 = *((char **)t2);
    t2 = (t0 + 35952);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 5U);
    xsi_driver_first_trans_delta(t2, 8U, 5U, 0LL);
    goto LAB85;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_11(char *t0)
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

LAB0:    xsi_set_current_line(400, ng0);
    t2 = (t0 + 10232U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 35168);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(401, ng0);
    t4 = (t0 + 12352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (!(t9));
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 10272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(402, ng0);
    t4 = xsi_get_transient_memory(13U);
    memset(t4, 0, 13U);
    t11 = t4;
    memset(t11, (unsigned char)2, 13U);
    t12 = (t0 + 36016);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 13U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(404, ng0);
    t2 = (t0 + 16352U);
    t5 = *((char **)t2);
    t2 = (t0 + 36016);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 13U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_12(char *t0)
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

LAB0:    xsi_set_current_line(441, ng0);
    t1 = (t0 + 17792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (!(t3));
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 36080);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 35184);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 36080);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(510, ng0);
    t1 = (t0 + 10752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 36144);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 35200);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 36144);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(552, ng0);

LAB3:    t1 = (t0 + 17312U);
    t2 = *((char **)t1);
    t1 = (t0 + 36208);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 35216);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_0511440537_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    int t17;
    unsigned char t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(565, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 36272);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(566, ng0);
    t1 = (t0 + 36336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(568, ng0);
    t1 = (t0 + 13472U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 42328U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 27);
    t10 = (t9 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t13 = *((unsigned char *)t1);
    t4 = ((MICROBLAZE_V8_20_B_P_1761634766) + 42448U);
    t5 = *((char **)t4);
    t14 = *((unsigned char *)t5);
    t15 = (t13 == t14);
    if (t15 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 35232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(569, ng0);
    t4 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2248U);
    t6 = *((char **)t4);
    t17 = *((int *)t6);
    t18 = (0 < t17);
    if (t18 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 13472U);
    t7 = *((char **)t4);
    t19 = (27 - 27);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(27, 31, 1, 27);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t4 = (t7 + t22);
    t23 = *((unsigned char *)t4);
    t24 = (t23 == (unsigned char)2);
    t16 = t24;

LAB10:    if (t16 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(576, ng0);
    t1 = (t0 + 14592U);
    t2 = *((char **)t1);
    t14 = *((unsigned char *)t2);
    if (t14 == 1)
        goto LAB14;

LAB15:    t1 = (t0 + 14432U);
    t3 = *((char **)t1);
    t16 = *((unsigned char *)t3);
    if (t16 == 1)
        goto LAB17;

LAB18:    t15 = (unsigned char)0;

LAB19:    t13 = t15;

LAB16:    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(581, ng0);
    t1 = (t0 + 14432U);
    t2 = *((char **)t1);
    t14 = *((unsigned char *)t2);
    if (t14 == 1)
        goto LAB23;

LAB24:    t13 = (unsigned char)0;

LAB25:    if (t13 != 0)
        goto LAB20;

LAB22:
LAB21:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(572, ng0);
    t25 = (t0 + 36272);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)3;
    xsi_driver_first_trans_delta(t25, 29U, 1, 0LL);
    xsi_set_current_line(573, ng0);
    t1 = (t0 + 36336);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t16 = (unsigned char)1;
    goto LAB10;

LAB11:    xsi_set_current_line(579, ng0);
    t1 = (t0 + 36272);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t25 = *((char **)t7);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 29U, 1, 0LL);
    goto LAB12;

LAB14:    t13 = (unsigned char)1;
    goto LAB16;

LAB17:    t1 = (t0 + 14752U);
    t4 = *((char **)t1);
    t18 = *((unsigned char *)t4);
    t23 = (!(t18));
    t15 = t23;
    goto LAB19;

LAB20:    xsi_set_current_line(583, ng0);
    t1 = (t0 + 36272);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 28U, 1, 0LL);
    goto LAB21;

LAB23:    t1 = (t0 + 14752U);
    t3 = *((char **)t1);
    t15 = *((unsigned char *)t3);
    t13 = t15;
    goto LAB25;

}


extern void microblaze_v8_20_b_a_0511440537_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_0,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_1,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_2,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_3,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_4,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_5,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_6,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_7,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_8,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_9,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_10,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_11,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_12,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_13,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_14,(void *)microblaze_v8_20_b_a_0511440537_3306564128_p_15};
	xsi_register_didat("microblaze_v8_20_b_a_0511440537_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_0511440537_3306564128.didat");
	xsi_register_executes(pe);
}
