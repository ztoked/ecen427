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
extern char *STD_STANDARD;
static const char *ng1 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_datamover_v3_00_a/hdl/vhdl/axi_datamover.vhd";



int axi_datamover_v3_00_a_a_0660305774_3640575771_sub_3041300734_2560086426(char *t1, int t2, int t3, int t4, int t5)
{
    char t6[248];
    char t7[24];
    char t12[8];
    char t18[8];
    int t0;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    int t30;

LAB0:    t8 = (t5 > 0);
    t9 = (t6 + 4U);
    t10 = ((STD_STANDARD) + 0);
    t11 = (t9 + 88U);
    *((char **)t11) = t10;
    t13 = (t9 + 56U);
    *((char **)t13) = t12;
    *((unsigned char *)t12) = t8;
    t14 = (t9 + 80U);
    *((unsigned int *)t14) = 1U;
    t15 = (t6 + 124U);
    t16 = ((STD_STANDARD) + 384);
    t17 = (t15 + 88U);
    *((char **)t17) = t16;
    t19 = (t15 + 56U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, 0);
    t20 = (t15 + 80U);
    *((unsigned int *)t20) = 4U;
    t21 = (t7 + 4U);
    *((int *)t21) = t2;
    t22 = (t7 + 8U);
    *((int *)t22) = t3;
    t23 = (t7 + 12U);
    *((int *)t23) = t4;
    t24 = (t7 + 16U);
    *((int *)t24) = t5;
    t25 = (t9 + 56U);
    t26 = *((char **)t25);
    t27 = *((unsigned char *)t26);
    if (t27 != 0)
        goto LAB2;

LAB4:    t8 = (t4 <= 128);
    if (t8 != 0)
        goto LAB21;

LAB23:    t8 = (t4 <= 256);
    if (t8 != 0)
        goto LAB24;

LAB25:    t8 = (t4 <= 512);
    if (t8 != 0)
        goto LAB29;

LAB30:    t8 = (t2 <= 32);
    if (t8 != 0)
        goto LAB34;

LAB36:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 32;

LAB35:
LAB22:
LAB3:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t30 = *((int *)t11);
    t0 = t30;

LAB1:    return t0;
LAB2:    t28 = (t3 <= 128);
    if (t28 != 0)
        goto LAB5;

LAB7:    t8 = (t3 <= 256);
    if (t8 != 0)
        goto LAB8;

LAB9:    t8 = (t3 <= 512);
    if (t8 != 0)
        goto LAB13;

LAB14:    t8 = (t2 <= 32);
    if (t8 != 0)
        goto LAB18;

LAB20:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 32;

LAB19:
LAB6:    goto LAB3;

LAB5:    t25 = (t15 + 56U);
    t29 = *((char **)t25);
    t25 = (t29 + 0);
    *((int *)t25) = t2;
    goto LAB6;

LAB8:    t27 = (t2 <= 128);
    if (t27 != 0)
        goto LAB10;

LAB12:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 128;

LAB11:    goto LAB6;

LAB10:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t2;
    goto LAB11;

LAB13:    t27 = (t2 <= 64);
    if (t27 != 0)
        goto LAB15;

LAB17:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 64;

LAB16:    goto LAB6;

LAB15:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t2;
    goto LAB16;

LAB18:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t2;
    goto LAB19;

LAB21:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t2;
    goto LAB22;

LAB24:    t27 = (t2 <= 128);
    if (t27 != 0)
        goto LAB26;

LAB28:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 128;

LAB27:    goto LAB22;

LAB26:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t2;
    goto LAB27;

LAB29:    t27 = (t2 <= 64);
    if (t27 != 0)
        goto LAB31;

LAB33:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = 64;

LAB32:    goto LAB22;

LAB31:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t2;
    goto LAB32;

LAB34:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t2;
    goto LAB35;

LAB37:;
}

int axi_datamover_v3_00_a_a_0660305774_3640575771_sub_546429474_2560086426(char *t1, int t2, int t3)
{
    char t4[128];
    char t5[16];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    *((int *)t12) = t2;
    t13 = (t5 + 8U);
    *((int *)t13) = t3;
    t14 = (t2 == 1);
    if (t14 != 0)
        goto LAB2;

LAB4:    t14 = (t3 > 16);
    if (t14 != 0)
        goto LAB5;

LAB6:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t3;

LAB3:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = *((int *)t8);
    t0 = t17;

LAB1:    return t0;
LAB2:    t15 = (t6 + 56U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    *((int *)t15) = 16;
    goto LAB3;

LAB5:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 16;
    goto LAB3;

LAB7:;
}

int axi_datamover_v3_00_a_a_0660305774_3640575771_sub_3163463501_2560086426(char *t1, int t2, int t3)
{
    char t4[248];
    char t5[16];
    char t9[8];
    char t15[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    unsigned char t23;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 124U);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t12 + 88U);
    *((char **)t14) = t13;
    t16 = (t12 + 56U);
    *((char **)t16) = t15;
    xsi_type_set_default_value(t13, t15, 0);
    t17 = (t12 + 80U);
    *((unsigned int *)t17) = 4U;
    t18 = (t5 + 4U);
    *((int *)t18) = t2;
    t19 = (t5 + 8U);
    *((int *)t19) = t3;
    t20 = (t2 * t3);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    t21 = (t22 + 0);
    *((int *)t21) = t20;
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t23 = (t20 <= 16);
    if (t23 != 0)
        goto LAB2;

LAB4:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t23 = (t20 <= 32);
    if (t23 != 0)
        goto LAB5;

LAB6:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t23 = (t20 <= 64);
    if (t23 != 0)
        goto LAB7;

LAB8:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t23 = (t20 <= 128);
    if (t23 != 0)
        goto LAB9;

LAB10:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t23 = (t20 <= 256);
    if (t23 != 0)
        goto LAB11;

LAB12:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t23 = (t20 <= 512);
    if (t23 != 0)
        goto LAB13;

LAB14:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t23 = (t20 <= 1024);
    if (t23 != 0)
        goto LAB15;

LAB16:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t23 = (t20 <= 2048);
    if (t23 != 0)
        goto LAB17;

LAB18:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t23 = (t20 <= 4096);
    if (t23 != 0)
        goto LAB19;

LAB20:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 14;

LAB3:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t0 = t20;

LAB1:    return t0;
LAB2:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 5;
    goto LAB3;

LAB5:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 6;
    goto LAB3;

LAB7:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 7;
    goto LAB3;

LAB9:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 8;
    goto LAB3;

LAB11:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 9;
    goto LAB3;

LAB13:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 10;
    goto LAB3;

LAB15:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 11;
    goto LAB3;

LAB17:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 12;
    goto LAB3;

LAB19:    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = 13;
    goto LAB3;

LAB21:;
}

int axi_datamover_v3_00_a_a_0660305774_3640575771_sub_646730446_2560086426(char *t1, int t2, int t3, int t4)
{
    char t5[128];
    char t6[16];
    char t10[8];
    int t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    int t17;
    char *t18;
    char *t19;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 384);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    *((int *)t10) = 4;
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 4U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    *((int *)t14) = t3;
    t15 = (t6 + 12U);
    *((int *)t15) = t4;
    t16 = (t4 > 0);
    if (t16 != 0)
        goto LAB2;

LAB4:    t17 = (t3 / 8);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t17;

LAB3:    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t17 = *((int *)t9);
    t0 = t17;

LAB1:    return t0;
LAB2:    t17 = (t2 / 8);
    t18 = (t7 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((int *)t18) = t17;
    goto LAB3;

LAB5:;
}

int axi_datamover_v3_00_a_a_0660305774_3640575771_sub_1329798637_2560086426(char *t1, int t2, int t3)
{
    char t4[128];
    char t5[16];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    *((int *)t12) = t2;
    t13 = (t5 + 8U);
    *((int *)t13) = t3;
    t14 = (t2 < t3);
    if (t14 != 0)
        goto LAB2;

LAB4:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t2;

LAB3:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = *((int *)t8);
    t0 = t17;

LAB1:    return t0;
LAB2:    t15 = (t6 + 56U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    *((int *)t15) = t3;
    goto LAB3;

LAB5:;
}

static void axi_datamover_v3_00_a_a_0660305774_3640575771_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(947, ng1);

LAB3:    t1 = (t0 + 14840U);
    t2 = *((char **)t1);
    t1 = (t0 + 22976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 22848);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_0660305774_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(950, ng1);

LAB3:    t1 = (t0 + 15000U);
    t2 = *((char **)t1);
    t1 = (t0 + 23040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 1U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 22864);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_0660305774_3640575771_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(954, ng1);

LAB3:    t1 = (t0 + 13880U);
    t2 = *((char **)t1);
    t1 = (t0 + 23104);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 22880);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_0660305774_3640575771_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(957, ng1);

LAB3:    t1 = (t0 + 15320U);
    t2 = *((char **)t1);
    t1 = (t0 + 23168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 1U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 22896);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_datamover_v3_00_a_a_0660305774_3640575771_init()
{
	static char *pe[] = {(void *)axi_datamover_v3_00_a_a_0660305774_3640575771_p_0,(void *)axi_datamover_v3_00_a_a_0660305774_3640575771_p_1,(void *)axi_datamover_v3_00_a_a_0660305774_3640575771_p_2,(void *)axi_datamover_v3_00_a_a_0660305774_3640575771_p_3};
	static char *se[] = {(void *)axi_datamover_v3_00_a_a_0660305774_3640575771_sub_3041300734_2560086426,(void *)axi_datamover_v3_00_a_a_0660305774_3640575771_sub_546429474_2560086426,(void *)axi_datamover_v3_00_a_a_0660305774_3640575771_sub_3163463501_2560086426,(void *)axi_datamover_v3_00_a_a_0660305774_3640575771_sub_646730446_2560086426,(void *)axi_datamover_v3_00_a_a_0660305774_3640575771_sub_1329798637_2560086426};
	xsi_register_didat("axi_datamover_v3_00_a_a_0660305774_3640575771", "isim/isim_system.exe.sim/axi_datamover_v3_00_a/a_0660305774_3640575771.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
