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
#include "device/lcd/lh096t_ig01.h"

#ifndef __SLN2663_TFT_H
#define __SLN2663_TFT_H

// ---------------------------------------------------------------------
// Public Constants
// ---------------------------------------------------------------------
/*!
    \brief      Automatic Framebuffer Refresh Status.
*/
typedef enum _AFBR_STATUS
{
    ENABLED, /*!< enabled */
    DISABLED /*!< disabled */
} afbr_status;

/*!
    \brief      Automatic Framebuffer Refresh Status.
*/
typedef enum _AFBR_WAIT_STATUS
{
    NONE,     /*!< none */
    READ_U24, /*!< read unsigned 24 bits */
    WRITE_U24 /*!< write unsigned 24 bits */
} afbr_wait_status;

// ---------------------------------------------------------------------
// Public Structures
// ---------------------------------------------------------------------
/*!
    \brief      SLN2663 LCD.
*/
typedef lh096t_ig01 sln2663_lcd, *sln2663_lcd_ptr;

/*!
    \brief      TFT & DMA.
*/
typedef struct _TFT_DMA
{
    struct
    {
        afbr_status status;
        afbr_wait_status wait_status;
    } afbr; /*!< Automatic Framebuffer Refresh Status */
    sln2663_lcd_ptr lcd_device_ptr;
} sln2663_tft_dma, *sln2663_tft_dma_ptr;

// ---------------------------------------------------------------------
// Public Prototypes
// ---------------------------------------------------------------------
/*!
    \brief      .
    \param[in]  none
    \param[out] none
    \retval     none
*/
void sln2663_spi_tft_wait_idle();

/*!
    \brief      Clear LCD
    \param[in]  tft_dma_ptr:
    \param[in]  backgroundcolor
    \param[out] none
    \retval     none
*/
void sln2663_lcd_tft_clear(sln2663_tft_dma_ptr tft_dma_ptr, uint16_t backgroundcolor);

/*!
    \brief      Initializes an LCD module.
    \param[in]  lcd_device_ptr
    \param[in]  tft_dma_ptr
    \param[out] lcd_device_ptr
    \param[out] tft_dma_ptr
    \retval     none
*/
void sln2663_tft_dma_init(sln2663_lcd_ptr lcd_device_ptr,
                          sln2663_tft_dma_ptr tft_dma_ptr);

/*!
    \brief      set pixel
    \param[in]  tft_dma_ptr:
    \param[in]  x: x position
    \param[in]  y: y position
    \param[out] none
    \retval     none
*/
void sln2663_lcd_tft_setpixel(sln2663_tft_dma_ptr tft_dma_ptr, int x, int y, uint16_t color);

#endif // __SLN2663_TFT_H