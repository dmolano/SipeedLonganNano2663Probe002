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
#include "device/led/single_led.h"

#ifndef __SLN2663_GPIO_LED_H
#define __SLN2663_GPIO_LED_H

// ---------------------------------------------------------------------
// Public Constants
// ---------------------------------------------------------------------
/*!< description */

// ---------------------------------------------------------------------
// Public Structures
// ---------------------------------------------------------------------
/*!
    \brief      Single LED data. https://en.wikipedia.org/wiki/Light-emitting_diode#Physics_of_light_production_and_emission
*/
typedef struct _SLN2663_GPIO_LED
{
    single_led_ptr led_device_ptr; /*!< Led device */
    rcu_periph_enum rcu_periph;
    uint32_t gpio_port;
    uint32_t gpio_pin;
    uint32_t gpio_frequency;
} sln2663_gpio_led, *sln2663_gpio_led_ptr;

// ---------------------------------------------------------------------
// Public Prototypes
// ---------------------------------------------------------------------
/*!
    \brief      LED SLN2663 init function
    \param[in]  led_device_ptr 
    \param[in]  led_ptr 
    \param[in]  rcu_periph 
    \param[in]  gpio_port 
    \param[in]  gpio_pin 
    \param[in]  gpio_frequency 
    \param[out]  led_ptr 
    \retval     none
*/
void sln2663_gpio_led_init(single_led_ptr led_device_ptr,
                           sln2663_gpio_led_ptr led_ptr,
                           uint32_t gpio_port,
                           uint32_t gpio_pin,
                           uint32_t gpio_frequency);

/*!
    \brief   Turns off an LED through a GPIO port.   
    \param[in]  led_gpio_ptr 
    \param[out]  none 
    \retval     none
*/
void sln2663_gpio_led_turn_off(sln2663_gpio_led_ptr led_gpio_ptr);

/*!
    \brief   Turns on an LED through a GPIO port.   
    \param[in]  led_gpio_ptr 
    \param[out]  none 
    \retval     none
*/
void sln2663_gpio_led_turn_on(sln2663_gpio_led_ptr led_gpio_ptr);

#endif // __SLN2663_GPIO_LED_H