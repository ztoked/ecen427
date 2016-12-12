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
extern char *PROC_COMMON_V3_00_A_P_2444876401;
static const char *ng2 = "Function required_btt_width ended without a return statement";
static const char *ng3 = "Function calculated_mm2s_tdata_width ended without a return statement";
static const char *ng4 = "Function calculated_s2mm_tdata_width ended without a return statement";
static const char *ng5 = "Function get_num_registers ended without a return statement";
static const char *ng6 = "Function hertz_prmtr_select ended without a return statement";
static const char *ng7 = "Function enable_snf ended without a return statement";
static const char *ng8 = "Function convert_base_index ended without a return statement";
static const char *ng9 = "Function convert_regdir_index ended without a return statement";
static const char *ng10 = "Function enable_internal_genloc ended without a return statement";

int proc_common_v3_00_a_p_2444876401_sub_639815527_3834616973(char *, int );


int axi_vdma_v5_00_a_p_3854302438_sub_1996063389_1070274669(char *t1, int t2, int t3, int t4)
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
    int t16;
    int t17;
    int t18;
    int t19;
    char *t20;
    char *t21;
    unsigned char t22;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 384);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 4U;
    t13 = (t6 + 4U);
    *((int *)t13) = t2;
    t14 = (t6 + 8U);
    *((int *)t14) = t3;
    t15 = (t6 + 12U);
    *((int *)t15) = t4;
    t16 = (t2 / 8);
    t17 = (t16 * t3);
    t18 = proc_common_v3_00_a_p_2444876401_sub_639815527_3834616973(PROC_COMMON_V3_00_A_P_2444876401, t17);
    t19 = (t18 + 1);
    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    *((int *)t20) = t19;
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t16 = *((int *)t9);
    t22 = (t16 > t4);
    if (t22 != 0)
        goto LAB2;

LAB4:    t0 = t4;

LAB1:    return t0;
LAB2:    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t17 = *((int *)t11);
    t0 = t17;
    goto LAB1;

LAB3:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int axi_vdma_v5_00_a_p_3854302438_sub_3898055241_1070274669(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    int t23;
    unsigned int t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    char *t36;
    static char *nl0[] = {&&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19, &&LAB19};

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = (t3 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = 1;
    t18 = t16;

LAB4:    if (t17 <= t18)
        goto LAB5;

LAB7:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = *((int *)t8);
    t0 = t17;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    t19 = (t3 + 0U);
    t20 = *((int *)t19);
    t21 = (t3 + 8U);
    t22 = *((int *)t21);
    t23 = (t17 - t20);
    t24 = (t23 * t22);
    t25 = (t3 + 4U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_index(t20, t26, t22, t17);
    t27 = (1U * t24);
    t28 = (0 + t27);
    t29 = (t2 + t28);
    t30 = *((unsigned char *)t29);
    t31 = (char *)((nl0) + t30);
    goto **((char **)t31);

LAB6:    if (t17 == t18)
        goto LAB7;

LAB20:    t20 = (t17 + 1);
    t17 = t20;
    goto LAB4;

LAB8:    goto LAB6;

LAB9:    t32 = (t6 + 56U);
    t33 = *((char **)t32);
    t34 = *((int *)t33);
    t35 = (t34 * 10);
    t32 = (t6 + 56U);
    t36 = *((char **)t32);
    t32 = (t36 + 0);
    *((int *)t32) = t35;
    goto LAB8;

LAB10:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t22 = (t20 * 10);
    t23 = (t22 + 1);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t23;
    goto LAB8;

LAB11:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t22 = (t20 * 10);
    t23 = (t22 + 2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t23;
    goto LAB8;

LAB12:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t22 = (t20 * 10);
    t23 = (t22 + 3);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t23;
    goto LAB8;

LAB13:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t22 = (t20 * 10);
    t23 = (t22 + 4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t23;
    goto LAB8;

LAB14:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t22 = (t20 * 10);
    t23 = (t22 + 5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t23;
    goto LAB8;

LAB15:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t22 = (t20 * 10);
    t23 = (t22 + 6);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t23;
    goto LAB8;

LAB16:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t22 = (t20 * 10);
    t23 = (t22 + 7);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t23;
    goto LAB8;

LAB17:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t22 = (t20 * 10);
    t23 = (t22 + 8);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t23;
    goto LAB8;

LAB18:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t22 = (t20 * 10);
    t23 = (t22 + 9);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t23;
    goto LAB8;

LAB19:    goto LAB8;

LAB21:;
}

int axi_vdma_v5_00_a_p_3854302438_sub_2863765010_1070274669(char *t1, int t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 <= 16);
    if (t6 != 0)
        goto LAB2;

LAB4:    t7 = (t2 > 16);
    if (t7 == 1)
        goto LAB8;

LAB9:    t6 = (unsigned char)0;

LAB10:    if (t6 != 0)
        goto LAB6;

LAB7:    t7 = (t2 > 32);
    if (t7 == 1)
        goto LAB14;

LAB15:    t6 = (unsigned char)0;

LAB16:    if (t6 != 0)
        goto LAB12;

LAB13:    t7 = (t2 > 64);
    if (t7 == 1)
        goto LAB20;

LAB21:    t6 = (unsigned char)0;

LAB22:    if (t6 != 0)
        goto LAB18;

LAB19:    t7 = (t2 > 128);
    if (t7 == 1)
        goto LAB26;

LAB27:    t6 = (unsigned char)0;

LAB28:    if (t6 != 0)
        goto LAB24;

LAB25:    t7 = (t2 > 256);
    if (t7 == 1)
        goto LAB32;

LAB33:    t6 = (unsigned char)0;

LAB34:    if (t6 != 0)
        goto LAB30;

LAB31:    t7 = (t2 > 512);
    if (t7 == 1)
        goto LAB38;

LAB39:    t6 = (unsigned char)0;

LAB40:    if (t6 != 0)
        goto LAB36;

LAB37:    t0 = 32;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = 32;
    goto LAB1;

LAB8:    t8 = (t2 <= 32);
    t6 = t8;
    goto LAB10;

LAB11:    goto LAB3;

LAB12:    t0 = 64;
    goto LAB1;

LAB14:    t8 = (t2 <= 64);
    t6 = t8;
    goto LAB16;

LAB17:    goto LAB3;

LAB18:    t0 = 128;
    goto LAB1;

LAB20:    t8 = (t2 <= 128);
    t6 = t8;
    goto LAB22;

LAB23:    goto LAB3;

LAB24:    t0 = 256;
    goto LAB1;

LAB26:    t8 = (t2 <= 256);
    t6 = t8;
    goto LAB28;

LAB29:    goto LAB3;

LAB30:    t0 = 512;
    goto LAB1;

LAB32:    t8 = (t2 <= 512);
    t6 = t8;
    goto LAB34;

LAB35:    goto LAB3;

LAB36:    t0 = 1024;
    goto LAB1;

LAB38:    t8 = (t2 <= 1024);
    t6 = t8;
    goto LAB40;

LAB41:    goto LAB3;

LAB42:    goto LAB3;

}

int axi_vdma_v5_00_a_p_3854302438_sub_1733999968_1070274669(char *t1, int t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 <= 16);
    if (t6 != 0)
        goto LAB2;

LAB4:    t7 = (t2 > 16);
    if (t7 == 1)
        goto LAB8;

LAB9:    t6 = (unsigned char)0;

LAB10:    if (t6 != 0)
        goto LAB6;

LAB7:    t7 = (t2 > 32);
    if (t7 == 1)
        goto LAB14;

LAB15:    t6 = (unsigned char)0;

LAB16:    if (t6 != 0)
        goto LAB12;

LAB13:    t7 = (t2 > 64);
    if (t7 == 1)
        goto LAB20;

LAB21:    t6 = (unsigned char)0;

LAB22:    if (t6 != 0)
        goto LAB18;

LAB19:    t7 = (t2 > 128);
    if (t7 == 1)
        goto LAB26;

LAB27:    t6 = (unsigned char)0;

LAB28:    if (t6 != 0)
        goto LAB24;

LAB25:    t7 = (t2 > 256);
    if (t7 == 1)
        goto LAB32;

LAB33:    t6 = (unsigned char)0;

LAB34:    if (t6 != 0)
        goto LAB30;

LAB31:    t7 = (t2 > 512);
    if (t7 == 1)
        goto LAB38;

LAB39:    t6 = (unsigned char)0;

LAB40:    if (t6 != 0)
        goto LAB36;

LAB37:    t0 = 32;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = 32;
    goto LAB1;

LAB8:    t8 = (t2 <= 32);
    t6 = t8;
    goto LAB10;

LAB11:    goto LAB3;

LAB12:    t0 = 64;
    goto LAB1;

LAB14:    t8 = (t2 <= 64);
    t6 = t8;
    goto LAB16;

LAB17:    goto LAB3;

LAB18:    t0 = 128;
    goto LAB1;

LAB20:    t8 = (t2 <= 128);
    t6 = t8;
    goto LAB22;

LAB23:    goto LAB3;

LAB24:    t0 = 256;
    goto LAB1;

LAB26:    t8 = (t2 <= 256);
    t6 = t8;
    goto LAB28;

LAB29:    goto LAB3;

LAB30:    t0 = 512;
    goto LAB1;

LAB32:    t8 = (t2 <= 512);
    t6 = t8;
    goto LAB34;

LAB35:    goto LAB3;

LAB36:    t0 = 1024;
    goto LAB1;

LAB38:    t8 = (t2 <= 1024);
    t6 = t8;
    goto LAB40;

LAB41:    goto LAB3;

LAB42:    goto LAB3;

}

int axi_vdma_v5_00_a_p_3854302438_sub_2644016652_1070274669(char *t1, int t2, int t3, int t4)
{
    char t6[16];
    int t0;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;

LAB0:    t7 = (t6 + 4U);
    *((int *)t7) = t2;
    t8 = (t6 + 8U);
    *((int *)t8) = t3;
    t9 = (t6 + 12U);
    *((int *)t9) = t4;
    t10 = (t2 == 1);
    if (t10 != 0)
        goto LAB2;

LAB4:    t0 = t4;

LAB1:    return t0;
LAB2:    t0 = t3;
    goto LAB1;

LAB3:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int axi_vdma_v5_00_a_p_3854302438_sub_502236014_1070274669(char *t1, int t2, int t3, int t4)
{
    char t6[16];
    int t0;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;

LAB0:    t7 = (t6 + 4U);
    *((int *)t7) = t2;
    t8 = (t6 + 8U);
    *((int *)t8) = t3;
    t9 = (t6 + 12U);
    *((int *)t9) = t4;
    t10 = (t2 == 1);
    if (t10 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t4;
    goto LAB1;

LAB3:    xsi_error(ng6);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int axi_vdma_v5_00_a_p_3854302438_sub_2956732208_1070274669(char *t1, int t2, int t3, int t4)
{
    char t6[16];
    int t0;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    t7 = (t6 + 4U);
    *((int *)t7) = t2;
    t8 = (t6 + 8U);
    *((int *)t8) = t3;
    t9 = (t6 + 12U);
    *((int *)t9) = t4;
    t11 = (t2 == 1);
    if (t11 == 1)
        goto LAB5;

LAB6:    t12 = (t3 != t4);
    t10 = t12;

LAB7:    if (t10 != 0)
        goto LAB2;

LAB4:    t0 = 0;

LAB1:    return t0;
LAB2:    t0 = 1;
    goto LAB1;

LAB3:    xsi_error(ng7);
    t0 = 0;
    goto LAB1;

LAB5:    t10 = (unsigned char)1;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    goto LAB3;

}

int axi_vdma_v5_00_a_p_3854302438_sub_532503356_1070274669(char *t1, int t2, int t3)
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
    int t15;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    *((int *)t12) = t2;
    t13 = (t5 + 8U);
    *((int *)t13) = t3;
    t14 = (t2 == 1);
    if (t14 != 0)
        goto LAB2;

LAB4:    t15 = (t3 + 12);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t15;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t15 = *((int *)t8);
    t0 = t15;

LAB1:    return t0;
LAB2:    t0 = t3;
    goto LAB1;

LAB3:    xsi_error(ng8);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int axi_vdma_v5_00_a_p_3854302438_sub_2097493630_1070274669(char *t1, int t2, int t3)
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
    int t15;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    *((int *)t12) = t2;
    t13 = (t5 + 8U);
    *((int *)t13) = t3;
    t14 = (t2 == 1);
    if (t14 != 0)
        goto LAB2;

LAB4:    t15 = (t3 + 20);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t15;
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t15 = *((int *)t8);
    t0 = t15;

LAB1:    return t0;
LAB2:    t0 = t3;
    goto LAB1;

LAB3:    xsi_error(ng9);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int axi_vdma_v5_00_a_p_3854302438_sub_2045686967_1070274669(char *t1, int t2, int t3, int t4)
{
    char t6[16];
    int t0;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;

LAB0:    t7 = (t6 + 4U);
    *((int *)t7) = t2;
    t8 = (t6 + 8U);
    *((int *)t8) = t3;
    t9 = (t6 + 12U);
    *((int *)t9) = t4;
    t10 = (t2 == 0);
    if (t10 != 0)
        goto LAB2;

LAB4:    t12 = (t3 == 0);
    if (t12 == 1)
        goto LAB11;

LAB12:    t11 = (unsigned char)0;

LAB13:    if (t11 == 1)
        goto LAB8;

LAB9:    t15 = (t3 == 1);
    if (t15 == 1)
        goto LAB14;

LAB15:    t14 = (unsigned char)0;

LAB16:    t10 = t14;

LAB10:    if (t10 != 0)
        goto LAB6;

LAB7:    t0 = 0;

LAB1:    return t0;
LAB2:    t0 = 0;
    goto LAB1;

LAB3:    xsi_error(ng10);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = 1;
    goto LAB1;

LAB8:    t10 = (unsigned char)1;
    goto LAB10;

LAB11:    t13 = (t4 == 1);
    t11 = t13;
    goto LAB13;

LAB14:    t16 = (t4 == 0);
    t14 = t16;
    goto LAB16;

LAB17:    goto LAB3;

LAB18:    goto LAB3;

}


extern void axi_vdma_v5_00_a_p_3854302438_init()
{
	static char *se[] = {(void *)axi_vdma_v5_00_a_p_3854302438_sub_1996063389_1070274669,(void *)axi_vdma_v5_00_a_p_3854302438_sub_3898055241_1070274669,(void *)axi_vdma_v5_00_a_p_3854302438_sub_2863765010_1070274669,(void *)axi_vdma_v5_00_a_p_3854302438_sub_1733999968_1070274669,(void *)axi_vdma_v5_00_a_p_3854302438_sub_2644016652_1070274669,(void *)axi_vdma_v5_00_a_p_3854302438_sub_502236014_1070274669,(void *)axi_vdma_v5_00_a_p_3854302438_sub_2956732208_1070274669,(void *)axi_vdma_v5_00_a_p_3854302438_sub_532503356_1070274669,(void *)axi_vdma_v5_00_a_p_3854302438_sub_2097493630_1070274669,(void *)axi_vdma_v5_00_a_p_3854302438_sub_2045686967_1070274669};
	xsi_register_didat("axi_vdma_v5_00_a_p_3854302438", "isim/isim_system.exe.sim/axi_vdma_v5_00_a/p_3854302438.didat");
	xsi_register_subprogram_executes(se);
}
