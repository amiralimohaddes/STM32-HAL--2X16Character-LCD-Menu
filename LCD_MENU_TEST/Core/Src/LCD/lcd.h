
#ifndef _LCD_H
#define _LCD_H

#include "stm32f1xx_hal.h"

#define T  1  

#define D0_PIN_NUMBER  0

#define DATA_PORT_D4  GPIOC
#define DATA_PORT_D5  GPIOC
#define DATA_PORT_D6  GPIOC
#define DATA_PORT_D7  GPIOC
#define D4_PIN_NUMBER  GPIO_PIN_3
#define D5_PIN_NUMBER  GPIO_PIN_4
#define D6_PIN_NUMBER  GPIO_PIN_5
#define D7_PIN_NUMBER  GPIO_PIN_6


#define CTRL_PORT_RS  GPIOC
#define CTRL_PORT_E   GPIOC
#define CTRL_PORT_RW  GPIOC
#define RS_PIN_NUMBER  GPIO_PIN_0
#define E_PIN_NUMBER   GPIO_PIN_2
#define RW_PIN_NUMBER  GPIO_PIN_1




#define T  1

void lcd_init(void);
void lcd_clear(void);
void lcd_gotoxy(unsigned char x, unsigned char y);
void lcd_puts(char *str);
void DelayUS(uint32_t us);
#endif
