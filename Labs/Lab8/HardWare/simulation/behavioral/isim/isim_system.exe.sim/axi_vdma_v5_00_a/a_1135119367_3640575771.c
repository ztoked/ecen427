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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_vdma_v5_00_a/hdl/vhdl/axi_vdma_reset.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_0(char *t0)
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

LAB0:    xsi_set_current_line(326, ng0);
    t3 = (t0 + 5128U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 5768U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 8808U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 31184);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 30784);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 31184);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_1(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(338, ng0);
    t2 = (t0 + 2368U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 30800);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(339, ng0);
    t4 = (t0 + 5128U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 31248);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(340, ng0);
    t2 = (t0 + 5768U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 31312);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(344, ng0);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 31376);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_2(char *t0)
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

LAB0:    xsi_set_current_line(350, ng0);

LAB3:    t1 = (t0 + 5128U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5288U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 31440);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 30816);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_3(char *t0)
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

LAB0:    xsi_set_current_line(353, ng0);

LAB3:    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7208U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 31504);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 30832);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
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

LAB0:    xsi_set_current_line(357, ng0);

LAB3:    t1 = (t0 + 5768U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 5608U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t6);
    t1 = (t0 + 8808U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t11 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t10);
    t1 = (t0 + 31568);
    t12 = (t1 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t16 = (t0 + 30848);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(369, ng0);
    t2 = (t0 + 2368U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 30864);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(370, ng0);
    t4 = (t0 + 7528U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB14;

LAB15:    t4 = (t0 + 2888U);
    t13 = *((char **)t4);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)3);
    t9 = t15;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 3528U);
    t16 = *((char **)t4);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t8 = t18;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(373, ng0);
    t2 = (t0 + 3208U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 31632);
    t5 = (t2 + 56U);
    t10 = *((char **)t5);
    t13 = (t10 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(371, ng0);
    t4 = (t0 + 31632);
    t19 = (t4 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    t9 = (unsigned char)1;
    goto LAB16;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_6(char *t0)
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

LAB0:    xsi_set_current_line(378, ng0);

LAB3:    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 8008U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t6);
    t1 = (t0 + 31696);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 30880);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_7(char *t0)
{
    char t19[16];
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
    unsigned int t17;
    char *t18;

LAB0:    xsi_set_current_line(394, ng0);
    t2 = (t0 + 2368U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 30896);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(395, ng0);
    t4 = (t0 + 11048U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 5448U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 10408U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 10408U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB26;

LAB27:    t1 = (unsigned char)0;

LAB28:    if (t1 != 0)
        goto LAB24;

LAB25:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(396, ng0);
    t4 = xsi_get_transient_memory(3U);
    memset(t4, 0, 3U);
    t11 = t4;
    memset(t11, (unsigned char)2, 3U);
    t12 = (t0 + 31760);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 3U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(397, ng0);
    t2 = (t0 + 31824);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(399, ng0);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t5 = t2;
    memset(t5, (unsigned char)2, 3U);
    t8 = (t0 + 31760);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 3U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(400, ng0);
    t2 = (t0 + 31824);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(402, ng0);
    t12 = (t0 + 24024U);
    t13 = *((char **)t12);
    t12 = (t0 + 31760);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t13, 3U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(403, ng0);
    t2 = (t0 + 31824);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB15:    t2 = (t0 + 11688U);
    t5 = *((char **)t2);
    t2 = (t0 + 24024U);
    t8 = *((char **)t2);
    t7 = 1;
    if (3U == 3U)
        goto LAB18;

LAB19:    t7 = 0;

LAB20:    t1 = t7;
    goto LAB17;

LAB18:    t17 = 0;

LAB21:    if (t17 < 3U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t2 = (t5 + t17);
    t11 = (t8 + t17);
    if (*((unsigned char *)t2) != *((unsigned char *)t11))
        goto LAB19;

LAB23:    t17 = (t17 + 1);
    goto LAB21;

LAB24:    xsi_set_current_line(405, ng0);
    t2 = (t0 + 11688U);
    t8 = *((char **)t2);
    t2 = (t0 + 59556U);
    t11 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t8, t2, 1);
    t12 = (t0 + 31760);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 3U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(406, ng0);
    t2 = (t0 + 31824);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB26:    t2 = (t0 + 3368U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB28;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_8(char *t0)
{
    char t19[16];
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
    unsigned int t17;
    char *t18;

LAB0:    xsi_set_current_line(461, ng0);
    t2 = (t0 + 2048U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 30912);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(462, ng0);
    t4 = (t0 + 11368U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 9608U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 9448U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 9448U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB26;

LAB27:    t1 = (unsigned char)0;

LAB28:    if (t1 != 0)
        goto LAB24;

LAB25:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2088U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(463, ng0);
    t4 = xsi_get_transient_memory(3U);
    memset(t4, 0, 3U);
    t11 = t4;
    memset(t11, (unsigned char)2, 3U);
    t12 = (t0 + 31888);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 3U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(464, ng0);
    t2 = (t0 + 31952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(466, ng0);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t5 = t2;
    memset(t5, (unsigned char)2, 3U);
    t8 = (t0 + 31888);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 3U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(467, ng0);
    t2 = (t0 + 31952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(469, ng0);
    t12 = (t0 + 24024U);
    t13 = *((char **)t12);
    t12 = (t0 + 31888);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t13, 3U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(470, ng0);
    t2 = (t0 + 31952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB15:    t2 = (t0 + 12008U);
    t5 = *((char **)t2);
    t2 = (t0 + 24024U);
    t8 = *((char **)t2);
    t7 = 1;
    if (3U == 3U)
        goto LAB18;

LAB19:    t7 = 0;

LAB20:    t1 = t7;
    goto LAB17;

LAB18:    t17 = 0;

LAB21:    if (t17 < 3U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t2 = (t5 + t17);
    t11 = (t8 + t17);
    if (*((unsigned char *)t2) != *((unsigned char *)t11))
        goto LAB19;

LAB23:    t17 = (t17 + 1);
    goto LAB21;

LAB24:    xsi_set_current_line(472, ng0);
    t2 = (t0 + 12008U);
    t8 = *((char **)t2);
    t2 = (t0 + 59588U);
    t11 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t8, t2, 1);
    t12 = (t0 + 31888);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 3U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(473, ng0);
    t2 = (t0 + 31952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB26:    t2 = (t0 + 9768U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB28;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_9(char *t0)
{
    char t19[16];
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
    unsigned int t17;
    char *t18;

LAB0:    xsi_set_current_line(572, ng0);
    t2 = (t0 + 2528U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 30928);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(573, ng0);
    t4 = (t0 + 11528U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10088U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 9928U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 9928U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB26;

LAB27:    t1 = (unsigned char)0;

LAB28:    if (t1 != 0)
        goto LAB24;

LAB25:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(574, ng0);
    t4 = xsi_get_transient_memory(3U);
    memset(t4, 0, 3U);
    t11 = t4;
    memset(t11, (unsigned char)2, 3U);
    t12 = (t0 + 32016);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 3U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(575, ng0);
    t2 = (t0 + 32080);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(577, ng0);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t5 = t2;
    memset(t5, (unsigned char)2, 3U);
    t8 = (t0 + 32016);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 3U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(578, ng0);
    t2 = (t0 + 32080);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(580, ng0);
    t12 = (t0 + 24024U);
    t13 = *((char **)t12);
    t12 = (t0 + 32016);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t13, 3U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(581, ng0);
    t2 = (t0 + 32080);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB15:    t2 = (t0 + 12168U);
    t5 = *((char **)t2);
    t2 = (t0 + 24024U);
    t8 = *((char **)t2);
    t7 = 1;
    if (3U == 3U)
        goto LAB18;

LAB19:    t7 = 0;

LAB20:    t1 = t7;
    goto LAB17;

LAB18:    t17 = 0;

LAB21:    if (t17 < 3U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t2 = (t5 + t17);
    t11 = (t8 + t17);
    if (*((unsigned char *)t2) != *((unsigned char *)t11))
        goto LAB19;

LAB23:    t17 = (t17 + 1);
    goto LAB21;

LAB24:    xsi_set_current_line(583, ng0);
    t2 = (t0 + 12168U);
    t8 = *((char **)t2);
    t2 = (t0 + 59604U);
    t11 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t8, t2, 1);
    t12 = (t0 + 32016);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 3U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(584, ng0);
    t2 = (t0 + 32080);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB26:    t2 = (t0 + 10248U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB28;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(777, ng0);

LAB3:    t1 = (t0 + 10408U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10728U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 10888U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 32144);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 30944);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_11(char *t0)
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
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;

LAB0:    xsi_set_current_line(784, ng0);
    t2 = (t0 + 2368U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 30960);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(785, ng0);
    t4 = (t0 + 5448U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 5768U);
    t4 = *((char **)t2);
    t7 = *((unsigned char *)t4);
    t9 = (t7 == (unsigned char)3);
    if (t9 == 1)
        goto LAB19;

LAB20:    t6 = (unsigned char)0;

LAB21:    if (t6 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(786, ng0);
    t4 = (t0 + 32208);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(791, ng0);
    t2 = (t0 + 32208);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 10888U);
    t11 = *((char **)t2);
    t18 = *((unsigned char *)t11);
    t19 = (t18 == (unsigned char)2);
    t1 = t19;
    goto LAB15;

LAB16:    t2 = (t0 + 10728U);
    t8 = *((char **)t2);
    t16 = *((unsigned char *)t8);
    t17 = (t16 == (unsigned char)2);
    t3 = t17;
    goto LAB18;

LAB19:    t2 = (t0 + 10408U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t15 = (t10 == (unsigned char)2);
    t6 = t15;
    goto LAB21;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_12(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(857, ng0);
    t2 = (t0 + 2368U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 30976);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(858, ng0);
    t4 = (t0 + 2888U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB14;

LAB15:    t9 = (unsigned char)0;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(862, ng0);
    t2 = (t0 + 32272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(860, ng0);
    t4 = (t0 + 32272);
    t23 = (t4 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t4 = (t0 + 3848U);
    t17 = *((char **)t4);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)3);
    if (t19 == 1)
        goto LAB17;

LAB18:    t4 = (t0 + 7848U);
    t20 = *((char **)t4);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)3);
    t16 = t22;

LAB19:    t8 = t16;
    goto LAB13;

LAB14:    t4 = (t0 + 3368U);
    t13 = *((char **)t4);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)3);
    t9 = t15;
    goto LAB16;

LAB17:    t16 = (unsigned char)1;
    goto LAB19;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_13(char *t0)
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
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;

LAB0:    xsi_set_current_line(872, ng0);
    t2 = (t0 + 2368U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 30992);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(873, ng0);
    t4 = (t0 + 7528U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 7368U);
    t4 = *((char **)t2);
    t7 = *((unsigned char *)t4);
    t9 = (t7 == (unsigned char)3);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 3528U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t15 = (t10 == (unsigned char)3);
    t6 = t15;

LAB21:    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 8168U);
    t8 = *((char **)t2);
    t16 = *((unsigned char *)t8);
    t17 = (t16 == (unsigned char)3);
    t3 = t17;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 4008U);
    t11 = *((char **)t2);
    t18 = *((unsigned char *)t11);
    t19 = (t18 == (unsigned char)3);
    t1 = t19;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 7848U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB27;

LAB28:    t3 = (unsigned char)0;

LAB29:    if (t3 == 1)
        goto LAB24;

LAB25:    t1 = (unsigned char)0;

LAB26:    if (t1 != 0)
        goto LAB22;

LAB23:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(874, ng0);
    t4 = (t0 + 32336);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(885, ng0);
    t2 = (t0 + 32336);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    t3 = (unsigned char)1;
    goto LAB18;

LAB19:    t6 = (unsigned char)1;
    goto LAB21;

LAB22:    xsi_set_current_line(890, ng0);
    t2 = (t0 + 32336);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB24:    t2 = (t0 + 3208U);
    t8 = *((char **)t2);
    t15 = *((unsigned char *)t8);
    t16 = (t15 == (unsigned char)3);
    t1 = t16;
    goto LAB26;

LAB27:    t2 = (t0 + 3528U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB29;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(896, ng0);

LAB3:    t1 = (t0 + 7688U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 32400);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 31008);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_15(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(909, ng0);
    t2 = (t0 + 2368U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 31024);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(910, ng0);
    t4 = (t0 + 7528U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 32464);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_16(char *t0)
{
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
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(923, ng0);
    t2 = (t0 + 2368U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 31040);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(929, ng0);
    t4 = (t0 + 3848U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB17;

LAB18:    t10 = (unsigned char)0;

LAB19:    if (t10 == 1)
        goto LAB14;

LAB15:    t9 = (unsigned char)0;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 7848U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB22;

LAB23:    t1 = (unsigned char)0;

LAB24:    if (t1 != 0)
        goto LAB20;

LAB21:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(930, ng0);
    t4 = (t0 + 32528);
    t23 = (t4 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t4 = (t0 + 3528U);
    t20 = *((char **)t4);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)2);
    t8 = t22;
    goto LAB13;

LAB14:    t4 = (t0 + 2888U);
    t17 = *((char **)t4);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)2);
    t9 = t19;
    goto LAB16;

LAB17:    t4 = (t0 + 7688U);
    t14 = *((char **)t4);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t10 = t16;
    goto LAB19;

LAB20:    xsi_set_current_line(932, ng0);
    t2 = (t0 + 32528);
    t11 = (t2 + 56U);
    t14 = *((char **)t11);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB22:    t2 = (t0 + 3208U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB24;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_17(char *t0)
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

LAB0:    xsi_set_current_line(979, ng0);

LAB3:    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7848U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 32592);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t12 = (t0 + 31056);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(980, ng0);

LAB3:    t1 = (t0 + 8488U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 32656);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 31072);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1023, ng0);

LAB3:    t1 = (t0 + 32720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1024, ng0);

LAB3:    t1 = (t0 + 32784);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_21(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1060, ng0);

LAB3:    t1 = (t0 + 8328U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 32848);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 31088);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_1135119367_3640575771_p_22(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1061, ng0);

LAB3:    t1 = (t0 + 8328U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 32912);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 31104);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_vdma_v5_00_a_a_1135119367_3640575771_init()
{
	static char *pe[] = {(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_0,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_1,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_2,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_3,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_4,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_5,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_6,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_7,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_8,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_9,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_10,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_11,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_12,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_13,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_14,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_15,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_16,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_17,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_18,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_19,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_20,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_21,(void *)axi_vdma_v5_00_a_a_1135119367_3640575771_p_22};
	xsi_register_didat("axi_vdma_v5_00_a_a_1135119367_3640575771", "isim/isim_system.exe.sim/axi_vdma_v5_00_a/a_1135119367_3640575771.didat");
	xsi_register_executes(pe);
}
