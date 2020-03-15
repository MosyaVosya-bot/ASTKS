/*******************************************************************************
* Copyright (C) 2020 TUSUR FB
* File              : Dispmean.c
* Compiler          : Microsoft Visual Studio 2019
* Version           : 16.4
* Created File      : 20.02.2020
* Last modified     : 12.03.2020
* Support mail      : tsimnbalovkirill@bk.ru ( Tsimbalov K.I.)
*
* Target MCU        : MDR1986
*
* Description       : The program which calculates dispersion and mean
*                   :
*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <locale.h>
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
int main()
{
	float disp, means;
	disp = dispersion(A);
	means = mean(d);
	printf("\tDispersion is:%5.4f", disp);
	printf("\n\tMean is:%5.4f", means);
	return 0;
}
