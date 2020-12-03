#ifndef med_system_clock_H
#define med_system_clock_H
//-----------------------------------------------------------------------------
#ifndef snail_data_types
    #include ".\depend\snail_data_types.h"
#endif
//-----------------------------------------------------------------------------
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//name：系统时钟配置
//-----------------------------------------------------------------------------
//名称:系统时钟配置
//入口:
//出口   
void mde_systemClock_cfg(void);
//名称:获取系统时钟频率
//入口:
//出口：  sdt_int32u 当前频率
sdt_int32u mde_pull_hisFrequency(void);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#endif
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++