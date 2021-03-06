/****************************************************************************
 *
 * MODULE              Generic interface to bulb hardware
 *
 * DESCRIPTION         Driver Public Interface
 *
 ****************************************************************************
 *
 * This software is owned by NXP B.V. and/or its supplier and is protected
 * under applicable copyright laws. All rights are reserved. We grant You,
 * and any third parties, a license to use this software solely and
 * exclusively on NXP products [NXP Microcontrollers such as JN5148, JN5142, JN5139].
 * You, and any third parties must reproduce the copyright and warranty notice
 * and any other legend of ownership on each copy or partial copy of the
 * software.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Copyright NXP B.V. 2012. All rights reserved
 *
 ****************************************************************************/
#ifndef  DRIVERBULB_H_INCLUDED
#define  DRIVERBULB_H_INCLUDED

#if defined __cplusplus
extern "C" {
#endif

/****************************************************************************/
/***        Include files                                                 ***/
/****************************************************************************/
/* SDK includes */
#include <jendefs.h>
#include "App_MultiLight.h"

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

#define NUM_BULBS		    ((NUM_MONO_LIGHTS) + (NUM_RGB_LIGHTS))
#define BULB_NUM_MONO(x)	((x))
#define BULB_NUM_RGB(x)		((x) + (NUM_MONO_LIGHTS))

#ifdef VARIANT_MINI
/* This isn't 4 because one timer channel is used as a phase timer */
#define NUM_CHANNELS		5
#else
#define NUM_CHANNELS		12
#endif

/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/

/****************************************************************************/
/***        Public Function Prototypes                                    ***/
/****************************************************************************/

/* Mandatory Interface functions */
PUBLIC void 		DriverBulb_vInit(void);
PUBLIC void 		DriverBulb_vOn(uint8 u8Bulb);
PUBLIC void 		DriverBulb_vOff(uint8 u8Bulb);
PUBLIC bool_t		DriverBulb_bOn(uint8 u8Bulb);

PUBLIC void 	 	DriverBulb_vSetLevel(uint8 u8Bulb, uint32 u32Level);
PUBLIC void         DriverBulb_vSetOnOff(uint8 u8Bulb, bool_t bOn);
PUBLIC void         DriverBulb_vSetColour(uint8 u8Bulb, uint32 u32Red, uint32 u32Green, uint32 u32Blue);
PUBLIC void	        DriverBulb_vOutput(uint8 u8Bulb);

/****************************************************************************/
/***        Exported Variables                                            ***/
/****************************************************************************/

#if defined __cplusplus
}
#endif

#endif  /* DRIVERBULB_H_INCLUDED */
/****************************************************************************/
/***        END OF FILE                                                   ***/
/****************************************************************************/
