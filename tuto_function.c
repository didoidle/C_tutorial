#include <stdio.h>
#include <time.h>

#pragma warning(disable:4996)

int Getsum(int a, int b)
{
	int sum = 0;
	for (int i = a; i <= b; i++)sum += i;
	return sum;
}

int Getday()
{
	time_t t;
	time(&t);
	struct tm* pt = localtime(&t);
	return pt->tm_mday;
}