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
extern char *UNISIM_P_0947159679;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void unisim_a_0712746438_2278234289_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t6 = (2 != 1);
    if (t6 == 1)
        goto LAB13;

LAB14:    t5 = (unsigned char)0;

LAB15:    if (t5 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB4;

LAB6:
LAB5:
LAB20:    *((char **)t1) = &&LAB21;

LAB1:    return;
LAB4:    if ((unsigned char)0 == 0)
        goto LAB16;

LAB17:    goto LAB5;

LAB7:    t9 = (2 != 4);
    t3 = t9;
    goto LAB9;

LAB10:    t8 = (2 != 3);
    t4 = t8;
    goto LAB12;

LAB13:    t7 = (2 != 2);
    t5 = t7;
    goto LAB15;

LAB16:    t2 = (t0 + 11945);
    xsi_report(t2, 74U, (unsigned char)3);
    goto LAB17;

LAB18:    goto LAB2;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

}

static void unisim_a_0712746438_2278234289_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (2 == 1);
    if (t1 != 0)
        goto LAB2;

LAB4:    t1 = (2 == 2);
    if (t1 != 0)
        goto LAB5;

LAB6:    t1 = (2 == 3);
    if (t1 != 0)
        goto LAB7;

LAB8:    t1 = (2 == 4);
    if (t1 != 0)
        goto LAB9;

LAB10:
LAB3:    t2 = (t0 + 7528);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    t2 = ((UNISIM_P_0947159679) + 3752U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 7784);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t2 = ((UNISIM_P_0947159679) + 3912U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 7784);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = ((UNISIM_P_0947159679) + 4072U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 7784);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB9:    t2 = ((UNISIM_P_0947159679) + 4232U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 7784);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void unisim_a_0712746438_2278234289_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (2 == 1);
    if (t1 != 0)
        goto LAB2;

LAB4:    t1 = (2 == 2);
    if (t1 != 0)
        goto LAB5;

LAB6:    t1 = (2 == 3);
    if (t1 != 0)
        goto LAB7;

LAB8:    t1 = (2 == 4);
    if (t1 != 0)
        goto LAB9;

LAB10:
LAB3:    t2 = (t0 + 7544);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 7848);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 7912);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 7976);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB9:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 8040);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void unisim_a_0712746438_2278234289_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = ((UNISIM_P_0947159679) + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8104);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7560);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_0712746438_2278234289_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    char *t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:
LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = ((UNISIM_P_0947159679) + 3272U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = ((UNISIM_P_0947159679) + 2952U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t10);
    t1 = (t0 + 2792U);
    t12 = *((char **)t1);
    t13 = *((unsigned char *)t12);
    t1 = ((UNISIM_P_0947159679) + 3272U);
    t14 = *((char **)t1);
    t15 = *((unsigned char *)t14);
    t16 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t13, t15);
    t1 = ((UNISIM_P_0947159679) + 2632U);
    t17 = *((char **)t1);
    t18 = *((unsigned char *)t17);
    t19 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t16, t18);
    t20 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t11, t19);
    t1 = (t0 + 2792U);
    t21 = *((char **)t1);
    t22 = *((unsigned char *)t21);
    t1 = ((UNISIM_P_0947159679) + 2952U);
    t23 = *((char **)t1);
    t24 = *((unsigned char *)t23);
    t25 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t22, t24);
    t1 = ((UNISIM_P_0947159679) + 2632U);
    t26 = *((char **)t1);
    t27 = *((unsigned char *)t26);
    t28 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t25, t27);
    t29 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t20, t28);
    t1 = (t0 + 8168);
    t30 = (t1 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = t29;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t34 = (t0 + 7576);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_0712746438_2278234289_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = ((UNISIM_P_0947159679) + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8232);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7592);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_0712746438_2278234289_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = ((UNISIM_P_0947159679) + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8296);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7608);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_0712746438_2278234289_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8360);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7624);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_0712746438_2278234289_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = ((UNISIM_P_0947159679) + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8424);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7640);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_0712746438_2278234289_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = ((UNISIM_P_0947159679) + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8488);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7656);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_0712746438_2278234289_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = ((UNISIM_P_0947159679) + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8552);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7672);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_0712746438_2278234289_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = ((UNISIM_P_0947159679) + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8616);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7688);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void unisim_a_0712746438_2278234289_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = ((UNISIM_P_0947159679) + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8680);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7704);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void unisim_a_0712746438_2278234289_init()
{
	static char *pe[] = {(void *)unisim_a_0712746438_2278234289_p_0,(void *)unisim_a_0712746438_2278234289_p_1,(void *)unisim_a_0712746438_2278234289_p_2,(void *)unisim_a_0712746438_2278234289_p_3,(void *)unisim_a_0712746438_2278234289_p_4,(void *)unisim_a_0712746438_2278234289_p_5,(void *)unisim_a_0712746438_2278234289_p_6,(void *)unisim_a_0712746438_2278234289_p_7,(void *)unisim_a_0712746438_2278234289_p_8,(void *)unisim_a_0712746438_2278234289_p_9,(void *)unisim_a_0712746438_2278234289_p_10,(void *)unisim_a_0712746438_2278234289_p_11,(void *)unisim_a_0712746438_2278234289_p_12};
	xsi_register_didat("unisim_a_0712746438_2278234289", "isim/isim_system.exe.sim/unisim/a_0712746438_2278234289.didat");
	xsi_register_executes(pe);
}
