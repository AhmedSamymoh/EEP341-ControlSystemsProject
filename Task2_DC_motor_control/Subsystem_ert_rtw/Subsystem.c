/*
 * File: Subsystem.c
 *
 * Code generated for Simulink model 'Subsystem'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Feb  6 19:16:01 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Subsystem.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Subsystem_step(void)
{
  /* Outport: '<Root>/y' incorporates:
   *  Constant: '<S2>/Constant'
   *  Inport: '<Root>/u'
   *  RelationalOperator: '<S2>/Compare'
   */
  rtY.y = (rtU.u >= 0.0);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   *  RelationalOperator: '<S1>/Relational Operator'
   */
  rtY.Out2 = (rtU.In2 > rtU.In3);
}

/* Model initialize function */
void Subsystem_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
