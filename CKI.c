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
	setlocale(LC_ALL, "Rus");
	float disp, means;
	disp = dispersion(A);
	means = mean(d);
	printf("\tДисперсия равна:%5.4f", disp);
	printf("\n\tСреднеквадратическое отклонение равно:%5.4f", means);
	return 0;
}