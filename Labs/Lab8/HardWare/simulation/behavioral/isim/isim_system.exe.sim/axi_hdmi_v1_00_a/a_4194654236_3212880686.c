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
static const char *ng0 = "C:/EE427/Atlys_BSB_Support_v_3_4/Atlys_AXI_BSB_Support/lib/Digilent/pcores/axi_hdmi_v1_00_a/hdl/vhdl/twi_slave_rom.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void axi_hdmi_v1_00_a_a_4194654236_3212880686_p_0(char *t0)
{
    char t11[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3640);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 1672U);
    t8 = *((char **)t4);
    t4 = (t0 + 6904U);
    t9 = (t0 + 7971);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 7;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (7 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t4, t9, t11);
    t3 = t16;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(101, ng0);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(97, ng0);
    t13 = (t0 + 7979);
    t18 = (t0 + 3736);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_fast(t18);
    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = (t0 + 6904U);
    t8 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t5, t1, (unsigned char)3);
    t9 = (t11 + 12U);
    t15 = *((unsigned int *)t9);
    t23 = (1U * t15);
    t6 = (8U != t23);
    if (t6 == 1)
        goto LAB13;

LAB14:    t10 = (t0 + 3736);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB6;

LAB13:    xsi_size_not_matching(8U, t23, 0);
    goto LAB14;

}

static void axi_hdmi_v1_00_a_a_4194654236_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 6904U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 127, 1, t4);
    t7 = (8U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 3800);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 8U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 3656);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_hdmi_v1_00_a_a_4194654236_3212880686_init()
{
	static char *pe[] = {(void *)axi_hdmi_v1_00_a_a_4194654236_3212880686_p_0,(void *)axi_hdmi_v1_00_a_a_4194654236_3212880686_p_1};
	xsi_register_didat("axi_hdmi_v1_00_a_a_4194654236_3212880686", "isim/isim_system.exe.sim/axi_hdmi_v1_00_a/a_4194654236_3212880686.didat");
	xsi_register_executes(pe);
}
