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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/ALU/13_alu_8bit_tb.vhd";



static void work_a_1850933034_1985558087_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5341);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5349);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 5357);
    t4 = (t0 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(21, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5360);
    t10 = 1;
    if (8U == 8U)
        goto LAB10;

LAB11:    t10 = 0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5383);
    t4 = (t0 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(26, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 5368);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB9;

LAB10:    t11 = 0;

LAB13:    if (t11 < 8U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB11;

LAB15:    t11 = (t11 + 1);
    goto LAB13;

LAB16:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5386);
    t10 = 1;
    if (8U == 8U)
        goto LAB22;

LAB23:    t10 = 0;

LAB24:    if (t10 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5409);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5417);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5425);
    t4 = (t0 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(31, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t7 = (t0 + 5394);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB21;

LAB22:    t11 = 0;

LAB25:    if (t11 < 8U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB23;

LAB27:    t11 = (t11 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5428);
    t10 = 1;
    if (8U == 8U)
        goto LAB34;

LAB35:    t10 = 0;

LAB36:    if (t10 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5451);
    t4 = (t0 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(36, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t7 = (t0 + 5436);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB33;

LAB34:    t11 = 0;

LAB37:    if (t11 < 8U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB35;

LAB39:    t11 = (t11 + 1);
    goto LAB37;

LAB40:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5454);
    t10 = 1;
    if (8U == 8U)
        goto LAB46;

LAB47:    t10 = 0;

LAB48:    if (t10 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5476);
    t4 = (t0 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(41, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t7 = (t0 + 5462);
    xsi_report(t7, 14U, (unsigned char)2);
    goto LAB45;

LAB46:    t11 = 0;

LAB49:    if (t11 < 8U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB47;

LAB51:    t11 = (t11 + 1);
    goto LAB49;

LAB52:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5479);
    t10 = 1;
    if (8U == 8U)
        goto LAB58;

LAB59:    t10 = 0;

LAB60:    if (t10 == 0)
        goto LAB56;

LAB57:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5502);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5510);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5518);
    t4 = (t0 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(46, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    t7 = (t0 + 5487);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB57;

LAB58:    t11 = 0;

LAB61:    if (t11 < 8U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB59;

LAB63:    t11 = (t11 + 1);
    goto LAB61;

LAB64:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5521);
    t10 = 1;
    if (8U == 8U)
        goto LAB70;

LAB71:    t10 = 0;

LAB72:    if (t10 == 0)
        goto LAB68;

LAB69:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5544);
    t4 = (t0 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(51, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    t7 = (t0 + 5529);
    xsi_report(t7, 15U, (unsigned char)2);
    goto LAB69;

LAB70:    t11 = 0;

LAB73:    if (t11 < 8U)
        goto LAB74;
    else
        goto LAB72;

LAB74:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB71;

LAB75:    t11 = (t11 + 1);
    goto LAB73;

LAB76:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5547);
    t10 = 1;
    if (8U == 8U)
        goto LAB82;

LAB83:    t10 = 0;

LAB84:    if (t10 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5573);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5581);
    t4 = (t0 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(56, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t7 = (t0 + 5555);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB81;

LAB82:    t11 = 0;

LAB85:    if (t11 < 8U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB83;

LAB87:    t11 = (t11 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5584);
    t10 = 1;
    if (8U == 8U)
        goto LAB94;

LAB95:    t10 = 0;

LAB96:    if (t10 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5610);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5618);
    t4 = (t0 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5626);
    t4 = (t0 + 3496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(61, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t9);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t7 = (t0 + 5592);
    xsi_report(t7, 18U, (unsigned char)2);
    goto LAB93;

LAB94:    t11 = 0;

LAB97:    if (t11 < 8U)
        goto LAB98;
    else
        goto LAB96;

LAB98:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB95;

LAB99:    t11 = (t11 + 1);
    goto LAB97;

LAB100:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5629);
    t12 = 1;
    if (8U == 8U)
        goto LAB109;

LAB110:    t12 = 0;

LAB111:    if (t12 == 1)
        goto LAB106;

LAB107:    t10 = (unsigned char)0;

LAB108:    if (t10 == 0)
        goto LAB104;

LAB105:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5658);
    xsi_report(t2, 29U, (unsigned char)0);
    xsi_set_current_line(66, ng0);

LAB117:    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    t7 = (t0 + 5637);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB105;

LAB106:    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB108;

LAB109:    t11 = 0;

LAB112:    if (t11 < 8U)
        goto LAB113;
    else
        goto LAB111;

LAB113:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB110;

LAB114:    t11 = (t11 + 1);
    goto LAB112;

LAB115:    goto LAB2;

LAB116:    goto LAB115;

LAB118:    goto LAB116;

}


extern void work_a_1850933034_1985558087_init()
{
	static char *pe[] = {(void *)work_a_1850933034_1985558087_p_0};
	xsi_register_didat("work_a_1850933034_1985558087", "isim/alu_8bit_tb_isim_beh.exe.sim/work/a_1850933034_1985558087.didat");
	xsi_register_executes(pe);
}
