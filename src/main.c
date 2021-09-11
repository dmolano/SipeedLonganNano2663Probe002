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

#include "main.h"

// ---------------------------------------------------------------------
// Private Constants
// ---------------------------------------------------------------------
#define FOREVER 1 /*!< for all time */
// LEDS 1615
#define TURN_ON_RED_LED1 sln2663_gpio_led_turn_on(&(sln_data_ptr->RED_LED1))
#define TURN_OFF_RED_LED1 sln2663_gpio_led_turn_off(&(sln_data_ptr->RED_LED1))
#define TURN_ON_GREEN_LED1 sln2663_gpio_led_turn_on(&(sln_data_ptr->GREEN_LED1))
#define TURN_OFF_GREEN_LED1 sln2663_gpio_led_turn_off(&(sln_data_ptr->GREEN_LED1))
#define TURN_ON_BLUE_LED1 sln2663_gpio_led_turn_on(&(sln_data_ptr->BLUE_LED1))
#define TURN_OFF_BLUE_LED1 sln2663_gpio_led_turn_off(&(sln_data_ptr->BLUE_LED1))
// ---------------------------------------------------------------------
// Private Variables
// ---------------------------------------------------------------------
// ---------------------------------------------------------------------
// Private Prototypes
// ---------------------------------------------------------------------
/*!
    \brief      main init function
    \param[in]  sln_data_ptr Sipeed Longan Nano data
    \param[out] none
    \retval     system error
*/
int sln2663_main_init(sln2663_ptr sln_data_ptr);

/*!
    \brief      main loop function
    \param[in]  sln_data_ptr Sipeed Longan Nano data
    \param[out] none
    \retval     system error
*/
int sln2663_main_loop(sln2663_ptr sln_data_ptr);

// ---------------------------------------------------------------------
// Bodies
// ---------------------------------------------------------------------
/*!
    \brief      main function
    \param[in]  none
    \param[out] none
    \retval     none
*/
int main(void)
{
    int result = 0;
    sln2663 sln_data;

    result = sln2663_main_init(&sln_data);
    if (result == NO_ERROR_INIT_SLN2663)
    {
        result = sln2663_main_loop(&sln_data);
    }
    return result;
}

// ---------------------------------------------------------------------
// Private Bodies
// ---------------------------------------------------------------------
/*!
    \brief      main init function
    \param[in]  sln_data_ptr Sipeed Longan Nano data
    \param[out] none
    \retval     system error
*/
int sln2663_main_init(sln2663_ptr sln_data_ptr)
{
    int result = NO_ERROR_INIT_SLN2663;

    // LED1 --> LED1615
    sln2663_led1_init(&(sln_data_ptr->led1.device),
                      &(sln_data_ptr->led1.gpio_red),
                      &(sln_data_ptr->led1.gpio_green),
                      &(sln_data_ptr->led1.gpio_blue));
    rcu_periph_enum rcu_periph;

    rcu_periph = calculate_rcu_periph(GPIOA);
    sln2663_rcu_periph_clock_enable(rcu_periph);
    gpio_init(GPIOA, GPIO_MODE_IN_FLOATING, GPIO_OSPEED_50MHZ, GPIO_PIN_8); // Keeps the input “High”. More commonly used.
    // gpio_init(GPIOA, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, GPIO_PIN_12); // Keeps the input “High”. More commonly used.
    // gpio_init(GPIOA, GPIO_MODE_IPD, GPIO_OSPEED_50MHZ, GPIO_PIN_12); // Keeps the input “Less”. Less commonly used.
    return result;
}

/*!
    \brief      main loop function
    \param[in]  sln_data_ptr Sipeed Longan Nano data
    \param[out] none
    \retval     system error
*/
int sln2663_main_loop(sln2663_ptr sln_data_ptr)
{
    int result = NO_ERROR_INIT_SLN2663;
    int condition = FOREVER;
    uint16_t switch_boot0_state;

    while (condition == FOREVER)
    {
        switch_boot0_state = gpio_input_bit_get(GPIOA, GPIO_PIN_8);

        if (switch_boot0_state)
        {
            // ------------------------------------------>rrrrrggggggbbbbb
            TURN_ON_RED_LED1;
            DELAY_ONE_SECOND;
            TURN_OFF_RED_LED1;
            // ------------------------------------------>rrrrrggggggbbbbb
            // ------------------------------------------>rrrrrggggggbbbbb
            TURN_ON_RED_LED1;
            DELAY_HUNDRED_MILISECOND;
            TURN_OFF_RED_LED1;
            // ------------------------------------------>rrrrrggggggbbbbb

            DELAY_HALF_SECOND;

            // ------------------------------------------>rrrrrggggggbbbbb
            TURN_ON_GREEN_LED1;
            DELAY_ONE_SECOND;
            TURN_OFF_GREEN_LED1;
            // ------------------------------------------>rrrrrggggggbbbbb
            TURN_ON_GREEN_LED1;
            DELAY_HUNDRED_MILISECOND;
            TURN_OFF_GREEN_LED1;
            // ------------------------------------------>rrrrrggggggbbbbb

            DELAY_HALF_SECOND;

            // ------------------------------------------>rrrrrggggggbbbbb
            TURN_ON_BLUE_LED1;
            DELAY_ONE_SECOND;
            TURN_OFF_BLUE_LED1;
            // ------------------------------------------>rrrrrggggggbbbbb
            // ------------------------------------------>rrrrrggggggbbbbb
            TURN_ON_BLUE_LED1;
            DELAY_HUNDRED_MILISECOND;
            TURN_OFF_BLUE_LED1;
            // ------------------------------------------>rrrrrggggggbbbbb
            DELAY_ONE_SECOND;
        }
    }
    return result;
}
