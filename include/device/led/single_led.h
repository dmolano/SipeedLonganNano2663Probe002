/* 
 * This file is part of the Sipeed Longan Nano 2663 Initium.
 * Copyright (c) 2021 Dionisio Molano Robledo.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include "gd32vf103.h"

#ifndef __LED_SINGLE_H
#define __LED_SINGLE_H

// ---------------------------------------------------------------------
// Public Constants
// ---------------------------------------------------------------------
/*!< description */

// ---------------------------------------------------------------------
// Public Structures
// ---------------------------------------------------------------------
/*!
    \brief      Configuration of the PIN electrode.
*/
typedef enum _ELECTRODE
{
    ANODE,  /*!< + (long pin) */
    CATHODE /*!< - (short pin) */
} electrode;

/*!
    \brief      Single LED data. https://en.wikipedia.org/wiki/Light-emitting_diode#Physics_of_light_production_and_emission
*/
typedef struct _SINGLE_LED
{
    uint8_t id;                /*!< Led identifier.
                                     Normally it will be an enum that identifies the color of the led, because this characteristic
                                     will be its valid identifier both when it is presented in individual format and in packages.
                                */
    electrode pin_to_host;     /*!< Pin terminal connected to the host. */
    uint8_t max_milli_current; /*!< (value in milliampere x 10) Maximum current allowed with forward bias. */
    uint8_t mid_milli_current; /*!< (value in milliampere x 10) Middle current allowed with forward bias. */
    uint8_t max_led_voltage;   /*!< (value x 10) Maximum LED voltage drop with forward bias. https://en.wikipedia.org/wiki/Voltage_drop */
    uint8_t min_led_voltage;   /*!< (value x 10) Minimum LED voltage drop with forward bias. https://en.wikipedia.org/wiki/Voltage_drop */
    uint8_t breakdown_voltage; /*!< (value x 10) LED breakdown voltage. https://en.wikipedia.org/wiki/Breakdown_voltage */
} single_led, *single_led_ptr;

// ---------------------------------------------------------------------
// Public Prototypes
// ---------------------------------------------------------------------
/*!
    \brief      function
    \param[in]  none
    \param[out] none
    \retval     none
*/

#endif // __LED_SINGLE_H