/*
 * lcd.h
 *
 *  Created on: Dec 12, 2019
 *      Author: goura
 */

#ifndef LCD_H_
#define LCD_H_

#include "main.h"

typedef struct {
    GPIO_TypeDef* Port;
    uint16_t Pin;
} LCD_GPIOPair;

typedef struct {
    LCD_GPIOPair RS;
    LCD_GPIOPair EN;
    LCD_GPIOPair DB4;
    LCD_GPIOPair DB5;
    LCD_GPIOPair DB6;
    LCD_GPIOPair DB7;
} LCD_HandleTypeDef;

void LCD_SetPosition(uint8_t line,uint8_t position);

void LCD_sendCmd(LCD_HandleTypeDef *lcd, uint8_t data);

void LCD_sendChar(LCD_HandleTypeDef *lcd, uint8_t data);

void LCD_sendNibble(LCD_HandleTypeDef *lcd, uint8_t data);

void LCD_sendByte(LCD_HandleTypeDef *lcd, uint8_t data);

void LCD_puts(LCD_HandleTypeDef *lcd, char * data);

#endif /* LCD_H_ */
