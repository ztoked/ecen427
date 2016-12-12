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
extern char *PROC_COMMON_V3_00_A_P_4147123038;
extern char *STD_STANDARD;
static const char *ng2 = "Function native_bscan ended without a return statement";
static const char *ng3 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/mdm_v2_00_b/hdl/vhdl/mdm.vhd";

unsigned char proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(char *, char *, char *, unsigned int );


unsigned int mdm_v2_00_b_a_4283683583_3306564128_sub_4021089453_229454594(char *t1, char *t2, char *t3)
{
    char t5[24];
    char t13[16];
    char t15[16];
    unsigned int t0;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t12;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 12U);
    *((char **)t8) = t3;
    t9 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, 585U);
    if (t9 != 0)
        goto LAB4;

LAB6:    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, 14U);
    if (t7 != 0)
        goto LAB8;

LAB9:    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, 13U);
    if (t7 != 0)
        goto LAB11;

LAB12:    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, 12U);
    if (t7 != 0)
        goto LAB14;

LAB15:    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, 9U);
    if (t7 != 0)
        goto LAB17;

LAB18:    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, 7U);
    if (t7 != 0)
        goto LAB20;

LAB21:    t7 = proc_common_v3_00_a_p_4147123038_sub_4150234446_2651761233(PROC_COMMON_V3_00_A_P_4147123038, t2, t3, 6U);
    if (t7 != 0)
        goto LAB23;

LAB24:    if ((unsigned char)0 == 0)
        goto LAB26;

LAB27:    t0 = 585U;

LAB1:    return t0;
LAB3:    *((char **)t6) = t2;
    goto LAB2;

LAB4:    t0 = 585U;
    goto LAB1;

LAB5:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:    t0 = 14U;
    goto LAB1;

LAB10:    goto LAB5;

LAB11:    t0 = 13U;
    goto LAB1;

LAB13:    goto LAB5;

LAB14:    t0 = 12U;
    goto LAB1;

LAB16:    goto LAB5;

LAB17:    t0 = 9U;
    goto LAB1;

LAB19:    goto LAB5;

LAB20:    t0 = 7U;
    goto LAB1;

LAB22:    goto LAB5;

LAB23:    t0 = 6U;
    goto LAB1;

LAB25:    goto LAB5;

LAB26:    t10 = (t1 + 62156);
    t14 = ((STD_STANDARD) + 1008);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 47;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (47 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t12 = xsi_base_array_concat(t12, t13, t14, (char)97, t10, t15, (char)97, t2, t3, (char)101);
    t17 = (t3 + 12U);
    t19 = *((unsigned int *)t17);
    t19 = (t19 * 1U);
    t20 = (47U + t19);
    xsi_report(t12, t20, (unsigned char)2);
    goto LAB27;

LAB28:    goto LAB5;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(560, ng3);

LAB3:    t1 = (t0 + 23320U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 35520);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 35312);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(562, ng3);

LAB3:    t1 = (t0 + 26360U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 35584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 35328);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(563, ng3);

LAB3:    t1 = (t0 + 26200U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 35648);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 35344);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(564, ng3);

LAB3:    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 35712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 35360);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(565, ng3);

LAB3:    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 35776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 35376);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(566, ng3);

LAB3:    t1 = (t0 + 25400U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 35840);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 35392);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(567, ng3);

LAB3:    t1 = (t0 + 25080U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 35904);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 35408);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(568, ng3);

LAB3:    t1 = (t0 + 25240U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 35968);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 35424);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(628, ng3);

LAB3:    t1 = (t0 + 36032);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(629, ng3);

LAB3:    t1 = (t0 + 36096);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(762, ng3);

LAB3:    t1 = (t0 + 26840U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 36160);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 35440);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void mdm_v2_00_b_a_4283683583_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(958, ng3);

LAB3:    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t2 = t1;
    memset(t2, (unsigned char)2, 24U);
    t3 = (t0 + 36224);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 24U);
    xsi_driver_first_trans_delta(t3, 0U, 24U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void mdm_v2_00_b_a_4283683583_3306564128_init()
{
	static char *pe[] = {(void *)mdm_v2_00_b_a_4283683583_3306564128_p_0,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_1,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_2,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_3,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_4,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_5,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_6,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_7,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_8,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_9,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_10,(void *)mdm_v2_00_b_a_4283683583_3306564128_p_11};
	static char *se[] = {(void *)mdm_v2_00_b_a_4283683583_3306564128_sub_4021089453_229454594};
	xsi_register_didat("mdm_v2_00_b_a_4283683583_3306564128", "isim/isim_system.exe.sim/mdm_v2_00_b/a_4283683583_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
