/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;


int isim_run(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    work_m_00000000000866782574_2073120511_init();
    unisims_ver_m_00000000000847167281_1668249201_init();
    unisims_ver_m_00000000000179858743_2161410271_init();
    unisims_ver_m_00000000003912143520_2316096324_init();
    work_m_00000000004032837128_1870555602_init();
    unisims_ver_m_00000000004137231468_3342441346_init();
    unisims_ver_m_00000000000084376409_3411452309_init();
    work_m_00000000002370600350_0983080260_init();
    work_m_00000000001472710994_3306708044_init();


    xsi_register_tops("work_m_00000000001472710994_3306708044");
    xsi_register_tops("work_m_00000000000866782574_2073120511");


    return xsi_run_simulation(argc, argv);

}
