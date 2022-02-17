#include <iostream>
using namespace std;

void call_by_ref1(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	coun
}

void call_by_ref2(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
