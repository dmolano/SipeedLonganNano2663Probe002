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

// ---------------------------------------------------------------------
// Private Constants
// ---------------------------------------------------------------------
#define RED_ENUM FIRST    /*!< RED => FIRST */
#define GREEN_ENUM SECOND /*!< GREEN => SECOND */
#define BLUE_ENUM THIRD   /*!< BLUE => THIRD */

// ---------------------------------------------------------------------
// Private Structures
// ---------------------------------------------------------------------
/*!
    \brief      brief.
*/

// ---------------------------------------------------------------------
// Private Prototypes
// ---------------------------------------------------------------------
/*!
    \brief      function
    \param[in]  none
    \param[out] none
    \retval     system error
*/

// ---------------------------------------------------------------------
// Public Bodies
// ---------------------------------------------------------------------
/*!
    \brief      Returns blue LED function
    \param[in]  led_ptr 
    \param[out] none
    \retval     single_led_ptr
*/
single_led_ptr rgb_led_get_blue(rgb_led_ptr led_ptr)
{
    return tricolor_led_get_led((tricolor_led_ptr)led_ptr, BLUE_ENUM); // BLUE => THIRD
}

/*!
    \brief      Returns green LED function
    \param[in]  led_ptr 
    \param[out] none
    \retval     single_led_ptr
*/
single_led_ptr rgb_led_get_green(rgb_led_ptr led_ptr)
{
    return tricolor_led_get_led((tricolor_led_ptr)led_ptr, GREEN_ENUM); // GREEN => SECOND
}

/*!
    \brief      Returns red LED function
    \param[in]  led_ptr 
    \param[out] none
    \retval     single_led_ptr
*/
single_led_ptr rgb_led_get_red(rgb_led_ptr led_ptr)
{
    return tricolor_led_get_led((tricolor_led_ptr)led_ptr, RED_ENUM); // RED => FIRST
}

/*!
    \brief      RGB LED value init function
    \param[in]  led_ptr 
    \param[out] led_ptr
    \retval     none
*/
void rgb_led_values_init(rgb_led_ptr led_ptr)
{
    // RED
    rgb_led_get_red(led_ptr)->id = RED_ENUM;
    // GREEN
    rgb_led_get_green(led_ptr)->id = GREEN_ENUM;
    // BLUE
    rgb_led_get_blue(led_ptr)->id = BLUE_ENUM;
}

// ---------------------------------------------------------------------
// Private Bodies
// ---------------------------------------------------------------------
/*!
    \brief      main function
    \param[in]  none
    \param[out] none
    \retval     none
*/
