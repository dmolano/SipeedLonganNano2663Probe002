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
#include "device/led/single_led.h"

#ifndef __LED_TRICOLOR_H
#define __LED_TRICOLOR_H

// ---------------------------------------------------------------------
// Public Constants
// ---------------------------------------------------------------------
#define TRI_LED_NUMBER 3 /*!< Number of LEDs */

// ---------------------------------------------------------------------
// Public Structures
// ---------------------------------------------------------------------
/*!
    \brief      Configuration of the PIN electrode.
*/
typedef enum _TRICOLOR_ENUM
{
    FIRST,  /*!< first LED */
    SECOND, /*!< second LED */
    THIRD   /*!< third LED */
} tricolor_enum;

/*!
    \brief      Tricolor LED data. https://en.wikipedia.org/wiki/Light-emitting_diode#RGB_tri-color
*/
typedef struct _TRICOLOR_LED
{
    single_led led[TRI_LED_NUMBER];
} tricolor_led, *tricolor_led_ptr;

// ---------------------------------------------------------------------
// Public Prototypes
// ---------------------------------------------------------------------
/*!
    \brief      Returns 'color_enum' LED function
    \param[in]  led_ptr 
    \param[in]  color_enum 
    \param[out] none
    \retval     single_led_ptr
*/
single_led_ptr tricolor_led_get_led(tricolor_led_ptr led_ptr, tricolor_enum color_enum);

#endif // __LED_TRICOLOR_H