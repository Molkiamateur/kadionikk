#ifndef __INCLUDES_H__
#define __INCLUDES_H__
/*
*********************************************************************************************************
*                                              uC/OS-II
*                                        The Real-Time Kernel
*
*                    Copyright 1992-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*                                           MASTER INCLUDE FILE
*********************************************************************************************************
*/

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#include    "os_cpu.h"
#include    "os_cfg.h"
#include    "ucos_ii.h"

#ifdef      ONT_GLOBALS
#define     ONT_EXT
#else
#define     ONT_EXT  extern
#endif

/*
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*/

typedef struct {
    char    TaskName[30];
    INT16U  TaskCtr;
    INT16U  TaskExecTime;
    INT32U  TaskTotExecTime;
} TASK_USER_DATA;

/*
*********************************************************************************************************
*                                              VARIABLES
*********************************************************************************************************
*/

ONT_EXT  TASK_USER_DATA  TaskUserData[10];

/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

void   DispTaskStat(INT8U id);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __INCLUDES_H__ */

