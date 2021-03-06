/*
 * WPS LED (include LAN leds control functions) header file
 *
 * Broadcom Proprietary and Confidential. Copyright (C) 2016,
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom.
 *
 *
 * <<Broadcom-WL-IPTag/Proprietary:>>
 *
 * $Id: wps_led.h 525052 2015-01-08 20:18:35Z $
 */

#ifndef _WPS_LED_H_
#define _WPS_LED_H_

#define WPS_LED_FLASH_FAST	0
#define WPS_LED_FLASH_SLOW	3
#define WPS_LED_FLASH_DEFAULT	2

int wps_led_wl_select_on();
int wps_led_wl_select_off();
void wps_led_wl_selecting(int led_id);
void wps_led_wl_confirmed(int led_id);
void wps_led_update();
int wps_led_init();
void wps_led_deinit();

#endif /* _WPS_LED_H_ */
