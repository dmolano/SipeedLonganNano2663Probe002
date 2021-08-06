/* 
 * This file is part of the Sipeed Longan Nano Initium.
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
#include "device/sln2663/sln2663.h"
#include "device/sln2663/sln2663_led1.h"
#include "device/sln2663/sln2663_time.h"

// ---------------------------------------------------------------------
// Public Constants
// ---------------------------------------------------------------------
#define RED_LED1 led1.gpio_red     /*!< red LED_1615 on board (OB) = LED1 */
#define GREEN_LED1 led1.gpio_green /*!< green LED_1615 on board (OB) = LED1 */
#define BLUE_LED1 led1.gpio_blue   /*!< blue LED_1615 on board (OB) = LED1 */

// ---------------------------------------------------------------------
// Public Structures
// ---------------------------------------------------------------------
/*!
    \brief      Sipeed Longan Nano 2663 data (http://dl.sipeed.com/shareURL/LONGAN/Nano)
*/
typedef struct _SLN2663_DATA
{
    // LED1
    struct
    {
        sln2663_led1 device;         /*!< Longan nano 2663(Schematic).pdf */
        sln2663_gpio_led gpio_red;   /*!< http://dl.sipeed.com/shareURL/LONGAN/Nano/DOC/GD32VF103_User_Manual_EN_V1.2.pdf#7.-General-purpose and alternate-function I/Os (GPIO and AFIO) */
        sln2663_gpio_led gpio_green; /*!< http://dl.sipeed.com/shareURL/LONGAN/Nano/DOC/GD32VF103_User_Manual_EN_V1.2.pdf#7.-General-purpose and alternate-function I/Os (GPIO and AFIO) */
        sln2663_gpio_led gpio_blue;  /*!< http://dl.sipeed.com/shareURL/LONGAN/Nano/DOC/GD32VF103_User_Manual_EN_V1.2.pdf#7.-General-purpose and alternate-function I/Os (GPIO and AFIO) */
    } led1;
} sln2663, *sln2663_ptr;
