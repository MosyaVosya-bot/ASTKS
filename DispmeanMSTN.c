/*******************************************************************************
* Copyright (C) 2020 TUSUR FB
* File              : DispmeanMSTN.c
* Compiler          : NetBeans 
* Version           : 8.2
* Created File      : 29.03.2020
* Last modified     : 29.03.2020
* Support mail      : tsimnbalovkirill@bk.ru ( Tsimbalov K.I.)
*
* Target MCU        : MDR1986
*
* Description       : The program which calculates dispersion and mean using MSTN M 100
*                   :

*******************************************************************************/
#include "main.h" 
#include <stdlib.h> 
#include <stdio.h> 
#include <math.h>
#include <locale.h>
#include "mstn_clk.h" 
#include "mstn_led.h" 
#include "mstn_adc.h" 
#include "mstn_button.h" 
#include "mstn_usb.h" 

#define N 5
#define M 2
float A[N][M] = {1,2,3,4,5,6,7,8,9,10};
int i, j;
float k, d, g;
float cnt = sizeof(A) / sizeof(float);
float dispersion(float B[N][M])
{
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < M; ++j)
        {
            k += B[i][j];
        }
    }
    k = k / cnt;
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < M; ++j)
        {
            d += (B[i][j] - k) * (B[i][j] - k);
        }
    }
    d = d / (cnt - 1);
    return d;
}

float mean(float c)
{
    c = sqrt(d);
    return c;
}

int main(int argc, char *argv[]) 
{
    float disp, means;
    BTN_UserButtonInit();
    while(1) 
    {
        if ((BTN_UserButtonRead() == PRESSED))
        {
            disp = dispersion(A);
            means = mean(d);
            printf("\tDispersion is:%5.4f", disp);
            printf("\n\tMean is:%5.4f", means);
        
            for (int i=0;i<10;++i){
            LED_SetGreenState(TURN_ON); 
            Delay (1000); 
            LED_SetGreenState(TURN_OFF); 
            Delay (1000);
            }
        }   
    }
return EXIT_SUCCESS; 
}
