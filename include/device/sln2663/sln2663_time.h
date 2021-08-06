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
#include "gd32vf103.h"

#ifndef __SLN2663_TIME_H
#define __SLN2663_TIME_H

// ---------------------------------------------------------------------
// Public Constants
// ---------------------------------------------------------------------
#define ONE_SECOND_TIME 1000        /*!< in milliseconds */
#define HALF_SECOND_TIME 500        /*!< in milliseconds */
#define HUNDRED_MILISECOND_TIME 100 /*!< in milliseconds */
#define ONE_MILISECOND_TIME 1       /*!< in milliseconds */
#define FIVE_MILISECOND_TIME 5      /*!< in milliseconds */
#define TEN_MILISECOND_TIME 10      /*!< in milliseconds */
// TIME
#define DELAY_ONE_MILISECOND sln2663_time_delay_ms(ONE_MILISECOND_TIME)
#define DELAY_FIVE_MILISECOND sln2663_time_delay_ms(FIVE_MILISECOND_TIME)
#define DELAY_TEN_MILISECOND sln2663_time_delay_ms(TEN_MILISECOND_TIME)
#define DELAY_HALF_SECOND sln2663_time_delay_ms(HALF_SECOND_TIME)
#define DELAY_HUNDRED_MILISECOND sln2663_time_delay_ms(HUNDRED_MILISECOND_TIME)
#define DELAY_ONE_SECOND sln2663_time_delay_ms(ONE_SECOND_TIME)

// ---------------------------------------------------------------------
// Public Prototypes
// ---------------------------------------------------------------------

/*!
    \brief      delay a time in milliseconds
    \param[in]  count: count in milliseconds
    \param[out] none
    \retval     none
*/
void sln2663_time_delay_ms(uint32_t count);

#endif // __SLN2663_TIME_H