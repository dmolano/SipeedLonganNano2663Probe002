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
#include "device/led/rgb_led.h"

#ifndef __LED_1615_H
#define __LED_1615_H

// ---------------------------------------------------------------------
// Public Constants
// ---------------------------------------------------------------------
/*!< description */

// ---------------------------------------------------------------------
// Public Structures
// ---------------------------------------------------------------------
/*!
    \brief      1615 LED data. https://www.globalsources.com/si/AS/Shenzhen-RigDoo/6008848276112/pdtl/LED-SMD-Light-Emitting-Diode/1129712526.htm
*/
typedef rgb_led led_1615, *led_1615_ptr;

// ---------------------------------------------------------------------
// Public Prototypes
// ---------------------------------------------------------------------
/*!
    \brief      Returns blue LED function
    \param[in]  led_ptr 
    \param[out] none
    \retval     single_led_ptr
*/
single_led_ptr led_1615_get_blue_led(led_1615_ptr led_ptr);

/*!
    \brief      Returns green LED function
    \param[in]  led_ptr 
    \param[out] none
    \retval     single_led_ptr
*/
single_led_ptr led_1615_get_green_led(led_1615_ptr led_ptr);

/*!
    \brief      Returns red LED function
    \param[in]  led_ptr 
    \param[out] none
    \retval     single_led_ptr
*/
single_led_ptr led_1615_get_red_led(led_1615_ptr led_ptr);

/*!
    \brief      1615 LED value init function
    \param[in]  led_ptr 
    \param[out] led_ptr
    \retval     none
*/
void led_1615_values_init(led_1615_ptr led_ptr);

#endif // __LED_1615_H