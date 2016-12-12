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
static const char *ng0 = "E:/427/Lab7/HardWare/pcores/axi_ac97_v1_00_a/hdl/vhdl/ac97_core.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );


static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(272, ng0);

LAB3:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 20136);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 19544);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_1(char *t0)
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
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17};

LAB0:    xsi_set_current_line(281, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 19560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(282, ng0);
    t1 = (t0 + 20200);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(283, ng0);
    t1 = (t0 + 20264);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(284, ng0);
    t1 = (t0 + 20328);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(285, ng0);
    t1 = (t0 + 20392);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(289, ng0);
    t2 = (t0 + 5672U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t11);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(294, ng0);
    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB25;

LAB26:    t7 = (t0 + 2472U);
    t16 = *((char **)t7);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)3);
    t13 = t18;

LAB27:    if (t13 == 1)
        goto LAB22;

LAB23:    t12 = (unsigned char)0;

LAB24:    if (t12 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB10;

LAB12:    xsi_set_current_line(314, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB10;

LAB13:    xsi_set_current_line(320, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB34;

LAB36:
LAB35:    goto LAB10;

LAB14:    xsi_set_current_line(327, ng0);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t26 = *((int *)t2);
    t4 = (t26 == 0);
    if (t4 == 1)
        goto LAB40;

LAB41:    t3 = (unsigned char)0;

LAB42:    if (t3 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB10;

LAB15:    xsi_set_current_line(349, ng0);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t26 = *((int *)t2);
    t4 = (t26 == 1);
    if (t4 == 1)
        goto LAB55;

LAB56:    t3 = (unsigned char)0;

LAB57:    if (t3 != 0)
        goto LAB52;

LAB54:
LAB53:    goto LAB10;

LAB16:    xsi_set_current_line(360, ng0);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t26 = *((int *)t2);
    t4 = (t26 == 2);
    if (t4 == 1)
        goto LAB70;

LAB71:    t3 = (unsigned char)0;

LAB72:    if (t3 != 0)
        goto LAB67;

LAB69:
LAB68:    goto LAB10;

LAB17:    xsi_set_current_line(367, ng0);
    t1 = (t0 + 20264);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(368, ng0);
    t1 = (t0 + 20200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB18:    xsi_set_current_line(370, ng0);
    goto LAB10;

LAB19:    xsi_set_current_line(297, ng0);
    t7 = (t0 + 20200);
    t22 = (t7 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(298, ng0);
    t1 = (t0 + 20264);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(299, ng0);
    t1 = (t0 + 20328);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(300, ng0);
    t1 = (t0 + 20392);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(301, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 20456);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 7U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(302, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(306, ng0);
    t1 = (t0 + 20584);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB29:    goto LAB20;

LAB22:    t7 = (t0 + 8872U);
    t19 = *((char **)t7);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)3);
    t12 = t21;
    goto LAB24;

LAB25:    t13 = (unsigned char)1;
    goto LAB27;

LAB28:    xsi_set_current_line(303, ng0);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t1 = (t0 + 20520);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    memcpy(t16, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(304, ng0);
    t1 = (t0 + 20584);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB29;

LAB31:    xsi_set_current_line(315, ng0);
    t1 = (t0 + 20200);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB34:    xsi_set_current_line(321, ng0);
    t1 = (t0 + 20200);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB37:    xsi_set_current_line(328, ng0);
    t1 = (t0 + 6152U);
    t6 = *((char **)t1);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)2);
    if (t12 != 0)
        goto LAB43;

LAB45:    xsi_set_current_line(342, ng0);
    t1 = (t0 + 20200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB44:    goto LAB38;

LAB40:    t1 = (t0 + 5352U);
    t5 = *((char **)t1);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB42;

LAB43:    xsi_set_current_line(329, ng0);
    t1 = (t0 + 7912U);
    t7 = *((char **)t1);
    t27 = (14 - 19);
    t28 = (t27 * -1);
    t29 = (1U * t28);
    t30 = (0 + t29);
    t1 = (t7 + t30);
    t14 = *((unsigned char *)t1);
    t15 = (t14 != (unsigned char)3);
    if (t15 == 1)
        goto LAB49;

LAB50:    t8 = (t0 + 7912U);
    t16 = *((char **)t8);
    t31 = (13 - 19);
    t32 = (t31 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t8 = (t16 + t34);
    t17 = *((unsigned char *)t8);
    t18 = (t17 != (unsigned char)3);
    t13 = t18;

LAB51:    if (t13 != 0)
        goto LAB46;

LAB48:    xsi_set_current_line(338, ng0);
    t1 = (t0 + 20200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB47:    goto LAB44;

LAB46:    xsi_set_current_line(335, ng0);
    t19 = (t0 + 20328);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(336, ng0);
    t1 = (t0 + 20200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB47;

LAB49:    t13 = (unsigned char)1;
    goto LAB51;

LAB52:    xsi_set_current_line(350, ng0);
    t1 = (t0 + 7912U);
    t6 = *((char **)t1);
    t28 = (19 - 18);
    t29 = (t28 * 1U);
    t30 = (0 + t29);
    t1 = (t6 + t30);
    t7 = (t0 + 5832U);
    t8 = *((char **)t7);
    t11 = 1;
    if (7U == 7U)
        goto LAB61;

LAB62:    t11 = 0;

LAB63:    if ((!(t11)) != 0)
        goto LAB58;

LAB60:    xsi_set_current_line(355, ng0);
    t1 = (t0 + 20200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB59:    goto LAB53;

LAB55:    t1 = (t0 + 5352U);
    t5 = *((char **)t1);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB57;

LAB58:    xsi_set_current_line(351, ng0);
    t19 = (t0 + 20328);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(352, ng0);
    t1 = (t0 + 20200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB59;

LAB61:    t32 = 0;

LAB64:    if (t32 < 7U)
        goto LAB65;
    else
        goto LAB63;

LAB65:    t7 = (t1 + t32);
    t16 = (t8 + t32);
    if (*((unsigned char *)t7) != *((unsigned char *)t16))
        goto LAB62;

LAB66:    t32 = (t32 + 1);
    goto LAB64;

LAB67:    xsi_set_current_line(361, ng0);
    t1 = (t0 + 7912U);
    t6 = *((char **)t1);
    t28 = (19 - 19);
    t29 = (t28 * 1U);
    t30 = (0 + t29);
    t1 = (t6 + t30);
    t7 = (t0 + 20648);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    t19 = (t16 + 56U);
    t22 = *((char **)t19);
    memcpy(t22, t1, 16U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(362, ng0);
    t1 = (t0 + 20392);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(363, ng0);
    t1 = (t0 + 20200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB68;

LAB70:    t1 = (t0 + 5352U);
    t5 = *((char **)t1);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB72;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(375, ng0);

LAB3:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 20712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 19576);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(376, ng0);

LAB3:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 20776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 19592);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    static char *nl0[] = {&&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11};

LAB0:    t1 = (t0 + 11536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(378, ng0);
    t2 = (t0 + 5672U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(378, ng0);

LAB31:    t2 = (t0 + 19608);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB32;

LAB1:    return;
LAB5:    xsi_set_current_line(379, ng0);
    t5 = (t0 + 33280);
    t7 = (3U != 3U);
    if (t7 == 1)
        goto LAB13;

LAB14:    t8 = (t0 + 20840);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 3U);
    xsi_driver_first_trans_delta(t8, 0U, 3U, 0LL);
    goto LAB4;

LAB6:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 33283);
    t4 = (3U != 3U);
    if (t4 == 1)
        goto LAB15;

LAB16:    t5 = (t0 + 20840);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_delta(t5, 0U, 3U, 0LL);
    goto LAB4;

LAB7:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 33286);
    t4 = (3U != 3U);
    if (t4 == 1)
        goto LAB17;

LAB18:    t5 = (t0 + 20840);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_delta(t5, 0U, 3U, 0LL);
    goto LAB4;

LAB8:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 33289);
    t4 = (3U != 3U);
    if (t4 == 1)
        goto LAB19;

LAB20:    t5 = (t0 + 20840);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_delta(t5, 0U, 3U, 0LL);
    goto LAB4;

LAB9:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 33292);
    t4 = (3U != 3U);
    if (t4 == 1)
        goto LAB21;

LAB22:    t5 = (t0 + 20840);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_delta(t5, 0U, 3U, 0LL);
    goto LAB4;

LAB10:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 33295);
    t4 = (3U != 3U);
    if (t4 == 1)
        goto LAB23;

LAB24:    t5 = (t0 + 20840);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_delta(t5, 0U, 3U, 0LL);
    goto LAB4;

LAB11:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 33298);
    t4 = (3U != 3U);
    if (t4 == 1)
        goto LAB25;

LAB26:    t5 = (t0 + 20840);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_delta(t5, 0U, 3U, 0LL);
    goto LAB4;

LAB12:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 33301);
    t4 = (3U != 3U);
    if (t4 == 1)
        goto LAB27;

LAB28:    t5 = (t0 + 20840);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_delta(t5, 0U, 3U, 0LL);
    goto LAB4;

LAB13:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB28;

LAB29:    t3 = (t0 + 19608);
    *((int *)t3) = 0;
    goto LAB2;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(387, ng0);

LAB3:    t1 = xsi_get_transient_memory(13U);
    memset(t1, 0, 13U);
    t2 = t1;
    memset(t2, (unsigned char)2, 13U);
    t3 = (t0 + 20904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 13U);
    xsi_driver_first_trans_delta(t3, 3U, 13U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_6(char *t0)
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

LAB0:    xsi_set_current_line(391, ng0);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 20968);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 19624);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 20968);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_7(char *t0)
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

LAB0:    xsi_set_current_line(426, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 3592U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 21032);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 19640);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(430, ng0);

LAB3:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 19656);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(431, ng0);

LAB3:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21160);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);

LAB2:    t8 = (t0 + 19672);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(432, ng0);

LAB3:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21224);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);

LAB2:    t8 = (t0 + 19688);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(433, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21288);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);

LAB2:    t8 = (t0 + 19704);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(434, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21352);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);

LAB2:    t8 = (t0 + 19720);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_13(char *t0)
{
    char *t1;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(435, ng0);

LAB3:    t1 = (t0 + 33304);
    t3 = (9U != 9U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 21416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 9U);
    xsi_driver_first_trans_delta(t4, 5U, 9U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, 9U, 0);
    goto LAB6;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_14(char *t0)
{
    char *t1;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(436, ng0);

LAB3:    t1 = (t0 + 33313);
    t3 = (2U != 2U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 21480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_delta(t4, 14U, 2U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB6;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_15(char *t0)
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

LAB0:    xsi_set_current_line(446, ng0);

LAB3:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 21544);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t9 = (t0 + 19736);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(447, ng0);

LAB3:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    t1 = (t0 + 21608);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 7U);
    xsi_driver_first_trans_delta(t1, 1U, 7U, 0LL);

LAB2:    t7 = (t0 + 19752);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(448, ng0);

LAB3:    t1 = xsi_get_transient_memory(12U);
    memset(t1, 0, 12U);
    t2 = t1;
    memset(t2, (unsigned char)2, 12U);
    t3 = (t0 + 21672);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 12U);
    xsi_driver_first_trans_delta(t3, 8U, 12U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(457, ng0);

LAB3:    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    t1 = (t0 + 21736);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);

LAB2:    t7 = (t0 + 19768);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(458, ng0);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 21800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_delta(t3, 16U, 4U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(465, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 21864);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_delta(t3, 16U, 4U, 0LL);
    xsi_set_current_line(466, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 21864);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    t1 = (t0 + 19784);
    *((int *)t1) = 1;

LAB1:    return;
}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(474, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 21928);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_delta(t3, 16U, 4U, 0LL);
    xsi_set_current_line(475, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 21928);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    t1 = (t0 + 19800);
    *((int *)t1) = 1;

LAB1:    return;
}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    int t10;
    char *t11;

LAB0:    xsi_set_current_line(487, ng0);
    t1 = xsi_get_transient_memory(20U);
    memset(t1, 0, 20U);
    t2 = t1;
    memset(t2, (unsigned char)2, 20U);
    t3 = (t0 + 21992);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 20U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(488, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 19816);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(489, ng0);
    t1 = (t0 + 8072U);
    t3 = *((char **)t1);
    t1 = (t0 + 21992);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(491, ng0);
    t1 = (t0 + 5512U);
    t3 = *((char **)t1);
    t10 = *((int *)t3);
    if (t10 == 0)
        goto LAB8;

LAB13:    if (t10 == 1)
        goto LAB9;

LAB14:    if (t10 == 2)
        goto LAB10;

LAB15:    if (t10 == 3)
        goto LAB11;

LAB16:
LAB12:    xsi_set_current_line(496, ng0);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(492, ng0);
    t1 = (t0 + 8232U);
    t4 = *((char **)t1);
    t1 = (t0 + 21992);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t4, 20U);
    xsi_driver_first_trans_delta(t1, 0U, 20U, 0LL);
    goto LAB7;

LAB9:    xsi_set_current_line(493, ng0);
    t1 = (t0 + 8392U);
    t2 = *((char **)t1);
    t1 = (t0 + 21992);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 20U);
    xsi_driver_first_trans_delta(t1, 0U, 20U, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(494, ng0);
    t1 = (t0 + 8552U);
    t2 = *((char **)t1);
    t1 = (t0 + 21992);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 20U);
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB11:    xsi_set_current_line(495, ng0);
    t1 = (t0 + 8712U);
    t2 = *((char **)t1);
    t1 = (t0 + 21992);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 20U);
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB17:;
}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_23(char *t0)
{
    char t23[16];
    char t24[16];
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
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(506, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 19832);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(507, ng0);
    t1 = xsi_get_transient_memory(20U);
    memset(t1, 0, 20U);
    t5 = t1;
    memset(t5, (unsigned char)2, 20U);
    t6 = (t0 + 22056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 20U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(509, ng0);
    t2 = (t0 + 5032U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 5352U);
    t7 = *((char **)t2);
    t16 = *((unsigned char *)t7);
    t17 = (t16 == (unsigned char)3);
    t13 = t17;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(512, ng0);
    t1 = (t0 + 7752U);
    t2 = *((char **)t1);
    t20 = (19 - 18);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t24 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 18;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t25 = (0 - 18);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t26;
    t5 = xsi_base_array_concat(t5, t23, t6, (char)97, t1, t24, (char)99, (unsigned char)2, (char)101);
    t26 = (19U + 1U);
    t3 = (20U != t26);
    if (t3 == 1)
        goto LAB16;

LAB17:    t8 = (t0 + 22056);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 20U);
    xsi_driver_first_trans_delta(t8, 0U, 20U, 0LL);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(510, ng0);
    t2 = (t0 + 7592U);
    t8 = *((char **)t2);
    t2 = (t0 + 22056);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 20U);
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB13:    t13 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_size_not_matching(20U, t26, 0);
    goto LAB17;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_24(char *t0)
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

LAB0:    xsi_set_current_line(516, ng0);

LAB3:    t1 = (t0 + 7752U);
    t2 = *((char **)t1);
    t3 = (19 - 19);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 22120);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 19848);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_25(char *t0)
{
    char t15[16];
    char t17[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(531, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19864);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(532, ng0);
    t4 = (t0 + 7912U);
    t8 = *((char **)t4);
    t9 = (19 - 18);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t4 = (t8 + t11);
    t12 = (t0 + 1672U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 18;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - 18);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t12 = xsi_base_array_concat(t12, t15, t16, (char)97, t4, t17, (char)99, t14, (char)101);
    t21 = (19U + 1U);
    t22 = (20U != t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    t19 = (t0 + 22184);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t12, 20U);
    xsi_driver_first_trans_delta(t19, 0U, 20U, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_size_not_matching(20U, t21, 0);
    goto LAB9;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_26(char *t0)
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
    int t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(541, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19880);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(542, ng0);
    t4 = (t0 + 5512U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t11 = (t10 == 0);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(543, ng0);
    t4 = (t0 + 7912U);
    t15 = *((char **)t4);
    t16 = (15 - 19);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t4 = (t15 + t19);
    t20 = *((unsigned char *)t4);
    t21 = (t0 + 22248);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t20;
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(548, ng0);
    t2 = (t0 + 7912U);
    t4 = *((char **)t2);
    t10 = (12 - 19);
    t17 = (t10 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t4 + t19);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 22312);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t21 = *((char **)t15);
    *((unsigned char *)t21) = t1;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(549, ng0);
    t2 = (t0 + 7912U);
    t4 = *((char **)t2);
    t10 = (11 - 19);
    t17 = (t10 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t4 + t19);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 22376);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t21 = *((char **)t15);
    *((unsigned char *)t21) = t1;
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    t4 = (t0 + 5352U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;
    goto LAB13;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_27(char *t0)
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

LAB0:    xsi_set_current_line(554, ng0);

LAB3:    t1 = (t0 + 6952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5032U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 22440);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 19896);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_28(char *t0)
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

LAB0:    xsi_set_current_line(555, ng0);

LAB3:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5032U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 22504);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 19912);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_29(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(557, ng0);

LAB3:    t1 = (t0 + 8872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 22568);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 19928);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_30(char *t0)
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
    int t13;
    unsigned char t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(564, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19944);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(565, ng0);
    t4 = (t0 + 5352U);
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

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(566, ng0);
    t4 = (t0 + 7912U);
    t15 = *((char **)t4);
    t16 = (11 - 19);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t4 = (t15 + t19);
    t20 = *((unsigned char *)t4);
    t21 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t20);
    t22 = (t0 + 22632);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t21;
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(567, ng0);
    t2 = (t0 + 7912U);
    t4 = *((char **)t2);
    t13 = (10 - 19);
    t17 = (t13 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t4 + t19);
    t1 = *((unsigned char *)t2);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t1);
    t5 = (t0 + 22696);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = t3;
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    t4 = (t0 + 5512U);
    t12 = *((char **)t4);
    t13 = *((int *)t12);
    t14 = (t13 == 1);
    t8 = t14;
    goto LAB13;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_31(char *t0)
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

LAB0:    xsi_set_current_line(572, ng0);

LAB3:    t1 = (t0 + 7272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5032U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 22760);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 19960);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_32(char *t0)
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

LAB0:    xsi_set_current_line(573, ng0);

LAB3:    t1 = (t0 + 7432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5032U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 22824);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 19976);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_33(char *t0)
{
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
    int t13;
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

LAB0:    xsi_set_current_line(583, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19992);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(584, ng0);
    t4 = (t0 + 5352U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 5352U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB16;

LAB17:    t1 = (unsigned char)0;

LAB18:    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(585, ng0);
    t4 = (t0 + 7912U);
    t15 = *((char **)t4);
    t16 = (19 - 19);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t4 = (t15 + t18);
    t19 = (t0 + 22888);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t4, 16U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(587, ng0);
    t2 = (t0 + 18536);
    t4 = (t0 + 9888U);
    t5 = (t0 + 33315);
    t12 = (t24 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 1;
    t15 = (t12 + 4U);
    *((int *)t15) = 31;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t13 = (31 - 1);
    t16 = (t13 * 1);
    t16 = (t16 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t16;
    std_textio_write7(STD_TEXTIO, t2, t4, t5, t24, (unsigned char)0, 0);
    xsi_set_current_line(588, ng0);
    t2 = (t0 + 18536);
    t4 = (t0 + 9888U);
    t5 = (t0 + 9032U);
    t9 = *((char **)t5);
    t5 = (t0 + 32864U);
    t12 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t24, t9, t5, (unsigned char)0);
    t15 = (t24 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t19 = (char *)alloca(t16);
    memcpy(t19, t12, t16);
    std_textio_write2(STD_TEXTIO, t2, t4, t19, t24, (unsigned char)0, 0);
    xsi_set_current_line(589, ng0);
    t2 = (t0 + 18536);
    t4 = ((STD_TEXTIO) + 1480U);
    t5 = (t0 + 9888U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    goto LAB9;

LAB11:    t4 = (t0 + 5512U);
    t12 = *((char **)t4);
    t13 = *((int *)t12);
    t14 = (t13 == 3);
    t8 = t14;
    goto LAB13;

LAB14:    xsi_set_current_line(592, ng0);
    t2 = (t0 + 7912U);
    t9 = *((char **)t2);
    t16 = (19 - 19);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t2 = (t9 + t18);
    t12 = (t0 + 22952);
    t15 = (t12 + 56U);
    t20 = *((char **)t15);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 16U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(594, ng0);
    t2 = (t0 + 18536);
    t4 = (t0 + 9888U);
    t5 = (t0 + 33346);
    t12 = (t24 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 1;
    t15 = (t12 + 4U);
    *((int *)t15) = 32;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t13 = (32 - 1);
    t16 = (t13 * 1);
    t16 = (t16 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t16;
    std_textio_write7(STD_TEXTIO, t2, t4, t5, t24, (unsigned char)0, 0);
    xsi_set_current_line(595, ng0);
    t2 = (t0 + 18536);
    t4 = (t0 + 9888U);
    t5 = (t0 + 9192U);
    t9 = *((char **)t5);
    t5 = (t0 + 32880U);
    t12 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t24, t9, t5, (unsigned char)0);
    t15 = (t24 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t20 = (char *)alloca(t16);
    memcpy(t20, t12, t16);
    std_textio_write2(STD_TEXTIO, t2, t4, t20, t24, (unsigned char)0, 0);
    xsi_set_current_line(596, ng0);
    t2 = (t0 + 18536);
    t4 = ((STD_TEXTIO) + 1480U);
    t5 = (t0 + 9888U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    goto LAB9;

LAB16:    t2 = (t0 + 5512U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t7 = (t13 == 4);
    t1 = t7;
    goto LAB18;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_34(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(601, ng0);

LAB3:    t1 = (t0 + 9032U);
    t2 = *((char **)t1);
    t1 = (t0 + 23016);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 20040);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0225536449_3306564128_p_35(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(602, ng0);

LAB3:    t1 = (t0 + 9192U);
    t2 = *((char **)t1);
    t1 = (t0 + 23080);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 20056);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_ac97_v1_00_a_a_0225536449_3306564128_init()
{
	static char *pe[] = {(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_0,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_1,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_2,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_3,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_4,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_5,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_6,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_7,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_8,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_9,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_10,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_11,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_12,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_13,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_14,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_15,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_16,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_17,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_18,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_19,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_20,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_21,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_22,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_23,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_24,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_25,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_26,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_27,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_28,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_29,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_30,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_31,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_32,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_33,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_34,(void *)axi_ac97_v1_00_a_a_0225536449_3306564128_p_35};
	xsi_register_didat("axi_ac97_v1_00_a_a_0225536449_3306564128", "isim/isim_system.exe.sim/axi_ac97_v1_00_a/a_0225536449_3306564128.didat");
	xsi_register_executes(pe);
}
