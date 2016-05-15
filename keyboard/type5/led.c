/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <avr/io.h>
#include "stdint.h"
#include "led.h"


void led_set(uint8_t usb_led)
{
    DDRB |= (1<<0);
    DDRB |= (1<<1);
    DDRC |= (1<<6);
    DDRB |= (1<<3);
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        // output low
        PORTB &= ~(1<<0);
        PORTB &= ~(1<<1);
        PORTC &= ~(1<<6);
        PORTB &= ~(1<<3);
    } else {
        // Hi-Z
        PORTB |= (1<<0);
        PORTB |= (1<<1);
        PORTC |= (1<<6);
        PORTC |= (1<<3);
    }
}
