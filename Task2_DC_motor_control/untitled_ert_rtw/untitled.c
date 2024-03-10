/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Feb  2 19:15:23 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (8-bit)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "untitled.h"
#include "rtwtypes.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void untitled_step(void)
{
  uint8_T rtb_Add1;

  /* Sum: '<Root>/Add1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   */
  rtb_Add1 = (uint8_T)((uint16_T)(uint8_T)((uint16_T)rtU.In1 + rtU.In2) +
                       rtU.In3);

  /* Outport: '<Root>/Out1' */
  rtY.Out1 = rtb_Add1;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In4'
   *  Sum: '<Root>/Add'
   */
  rtY.Out2 = (uint8_T)(rtU.In4 - rtb_Add1);

  /* Outport: '<Root>/Output_1' incorporates:
   *  Inport: '<Root>/Input_1'
   */
  rtY.Output_1 = rtU.Input_1;

  /* Outport: '<Root>/Output_2' incorporates:
   *  Inport: '<Root>/Input_2'
   */
  rtY.Output_2 = rtU.Input_2;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
