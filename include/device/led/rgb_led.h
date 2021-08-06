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
#include "device/led/tricolor_led.h"

#ifndef __LED_RGB_H
#define __LED_RGB_H

// ---------------------------------------------------------------------
// Public Constants
// ---------------------------------------------------------------------
/*!< description */

// ---------------------------------------------------------------------
// Public Structures
// ---------------------------------------------------------------------
/*!
    \brief      RGB LED data. https://en.wikipedia.org/wiki/Light-emitting_diode#RGB_tri-color
*/
typedef tricolor_led rgb_led, *rgb_led_ptr;

// ---------------------------------------------------------------------
// Public Prototypes
// ---------------------------------------------------------------------
/*!
    \brief      Returns blue LED function
    \param[in]  led_ptr 
    \param[out] none
    \retval     single_led_ptr
*/
single_led_ptr rgb_led_get_blue(rgb_led_ptr led_ptr);

/*!
    \brief      Returns green LED function
    \param[in]  led_ptr 
    \param[out] none
    \retval     single_led_ptr
*/
single_led_ptr rgb_led_get_green(rgb_led_ptr led_ptr);

/*!
    \brief      Returns red LED function
    \param[in]  led_ptr 
    \param[out] none
    \retval     single_led_ptr
*/
single_led_ptr rgb_led_get_red(rgb_led_ptr led_ptr);

/*!
    \brief      RGB LED value init function
    \param[in]  led_ptr 
    \param[out] led_ptr
    \retval     none
*/
void rgb_led_values_init(rgb_led_ptr led_ptr);

#endif // __LED_RGB_H