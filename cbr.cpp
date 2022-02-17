#include <iostream>
#include <stdio.h>
using namespace std;

void call_by_ref1(int &a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;
}

void call_by_ref2(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << *a << " " << *b << endl;
}
