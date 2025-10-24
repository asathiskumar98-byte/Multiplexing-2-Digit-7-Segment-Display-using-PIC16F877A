/*
 * File:   Multiplex 7 Segment.c
 * Author: asath
 *
 * Created on 24 October, 2025, 11:55 AM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000
#define Segment_ON 0  // Hardware change 1
#define Segment_OFF 1 // Hardware change 0
// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

unsigned char number = 98;
unsigned char i,j;
unsigned char segment[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7c,0x07,0x7f,0x6f};

void main() 
{
    TRISB = 0x00;
    TRISC = 0x00;
    while(1)
    {
        i = number / 10;
        j = number % 10;
        PORTCbits.RC0 = Segment_ON; PORTCbits.RC1 = Segment_OFF;
        PORTB = segment[i];
        __delay_ms(10);
        PORTCbits.RC1 = Segment_ON; PORTCbits.RC0 = Segment_OFF;
        PORTB = segment[j];
        __delay_ms(10);
    }
}

