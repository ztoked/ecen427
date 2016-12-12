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
static const char *ng1 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_datamover_v3_00_a/hdl/vhdl/axi_datamover_cmd_status.vhd";



int axi_datamover_v3_00_a_a_4128977022_3640575771_sub_3025202248_2560086426(char *t1, int t2, int t3)
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
    *((int *)t9) = 1;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    *((int *)t12) = t2;
    t13 = (t5 + 8U);
    *((int *)t13) = t3;
    t14 = (t2 == 1);
    if (t14 != 0)
        goto LAB2;

LAB4:    t14 = (t3 <= 64);
    if (t14 != 0)
        goto LAB5;

LAB6:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 1;

LAB3:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = *((int *)t8);
    t0 = t17;

LAB1:    return t0;
LAB2:    t15 = (t6 + 56U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    *((int *)t15) = 1;
    goto LAB3;

LAB5:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 2;
    goto LAB3;

LAB7:;
}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(282, ng1);

LAB3:    t1 = (t0 + 2040U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11536);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11312);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(283, ng1);

LAB3:    t1 = (t0 + 2040U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11600);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11328);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(285, ng1);

LAB3:    t1 = (t0 + 1560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11664);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11344);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(286, ng1);

LAB3:    t1 = (t0 + 5880U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11728);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11360);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(287, ng1);

LAB3:    t1 = (t0 + 1560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11792);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11376);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(288, ng1);

LAB3:    t1 = (t0 + 5720U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11856);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11392);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(290, ng1);

LAB3:    t1 = (t0 + 1560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11920);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11408);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(291, ng1);

LAB3:    t1 = (t0 + 5720U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11984);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11424);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(292, ng1);

LAB3:    t1 = (t0 + 1560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12048);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11440);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(293, ng1);

LAB3:    t1 = (t0 + 5880U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12112);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 11456);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(408, ng1);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)3, 1U);
    t3 = (t0 + 12176);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_datamover_v3_00_a_a_4128977022_3640575771_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(409, ng1);

LAB3:    t1 = (t0 + 12240);
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


extern void axi_datamover_v3_00_a_a_4128977022_3640575771_init()
{
	static char *pe[] = {(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_0,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_1,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_2,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_3,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_4,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_5,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_6,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_7,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_8,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_9,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_10,(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_p_11};
	static char *se[] = {(void *)axi_datamover_v3_00_a_a_4128977022_3640575771_sub_3025202248_2560086426};
	xsi_register_didat("axi_datamover_v3_00_a_a_4128977022_3640575771", "isim/isim_system.exe.sim/axi_datamover_v3_00_a/a_4128977022_3640575771.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
