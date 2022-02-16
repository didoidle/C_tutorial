#include <stdio.h>
#include "cursor.h"
#include <omp.h>
#include <time.h>
#include <conio.h>

#pragma warning(disable:4996)

void for_tuto()
{
	for (int i = 0; i < 5; i++)
		printf("숫자 = %d\n", i);
}

void sum100()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++) sum += i;
	printf("1~100의 합 = %d", sum);
}

void sharpani()
{
	clrscr();

	for (int i = 1; i < 80; i++)
	{
		gotoxy(i, 10);
		putch('X');
		gotoxy(i - 1, 10);
		putch(' ');
		delay(100);
	}
}

void comma()
{
	int a, b;
	
	a = 2;
	b = a + 3;

	printf("a = %d, b = %d\n", a, b);
}


void omp_sum()
{
	clock_t start, end;
	double time1;

	long long sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	long long i = 1;
	start = clock();

	
	/*for (i = 1; i < 4000000001; i++)
	{

		sum += i;
	}*/
	omp_set_num_threads(4);
#pragma omp parallel sections
	{
#pragma omp section
		{
			for (i = 1; i < 1000000001; i++)
			{

				sum1 += i;
			}
		}
		#pragma omp section
		{
			for (long long j = 1000000001; j < 2000000001; j++)
			{

				sum2 += j;
			}
		}
#pragma omp section
		{
			for (long long k = 2000000001; k < 3000000001; k++)
			{

				sum3 += k;
			}
		}
#pragma omp section
		{
			for (long long l = 3000000001; l < 4000000001; l++)
			{

				sum4 += l;
			}
		}
	}
	sum = sum1 + sum2 + sum3 + sum4;
	end = clock();
	time1 = (end - start);
	printf("합 = %lld /// %f", sum, time1);
	
}

void relectsharp()
{
	int x = 40, y = 12;
	int dx = 1, dy = 1;

	clrscr(); showcursor();
	while (kbhit() == FALSE) {
		gotoxy(x, y); putch(' ');
		x += dx;
		y += dy;
		gotoxy(x, y); putch('#');
		if (x == 79 || x == 0) {
			dx = -dx;
		}
		if (y == 24 || y == 0) {
			dy = -dy;
		}
		delay(30);
	}
}
void triangle()
{
	for (int a = 1; a <= 20; a++) {
		for (int b = 1; b <= 20 - a; b++) {
			if (a <= b / 2 || b < a)
				printf("*");
			else if (a < b)
				printf(" ");
			else
				printf("*");
		}
		for (int b = 1; b <= a * 2 - 1; b++) {
			if (a < b)
				printf("*");
			else if (a <= b  && b > a)
				printf("*");
			else
				printf(" ");
		}
		puts("");
	}
}