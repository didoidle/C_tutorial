#include <stdio.h>
//#include <windows.h>
#include <time.h>
#include "11.h"
//#include "cursor.h"
//#define randomize() srand((unsigned)time(NULL))
//#define random(n) (rand() % (n))
//#define delay(n) Sleep(n)
//#define clrscr() system("cls")
//#define gotoxy(x,y) { COORD Cur = {x, y}; \
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);}
//#define showcursor(bShow) { CONSOLE_CURSOR_INFO CurInfo = {20, bShow}; \
//	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo); }

#pragma warning(disable:4996)
//123123123


//int cursor_tuto()
//{
//	printf("3�� �Ŀ� ȭ���� ����ϴ�.\n");
//	delay(3000);
//	clrscr();
//	gotoxy(20, 10);
//	printf("ȭ�� �߾ӿ� ���ڿ��� ����մϴ�.\n");
//}

//int pricision()
//{
//	double pie = 3.14;
//
//	printf("###%f###\n", pie);
//	printf("###%10f###\n", pie);
//	printf("###%.2f###\n", pie);
//	printf("###%10.2f###\n", pie);
//	return 0;
//}
//int widthalign()
//{
//	int value = 123;
//
//	printf("###%d###\n", value);
//	printf("###%5d###\n", value);
//	printf("###%05d###\n", value);
//	printf("###%-5d###\n", value);
//	return 0;
//}
//
//int PointerCopy()
//{
//	int value1 = 38, value2;
//	int* pi;
//
//	pi = &value1;
//	value2 = *pi;
//	printf("value1 = %d, value2 = %d\n", value1, value2);
//	return 0;
//}
//
//int scanf_tuto()
//{
//	int age;
//	float height;
//	char name[32];
//
//	printf("���̸� �Է��ϼ��� : ");
//	scanf("%d", &age);
//	printf("Ű�� �Է��ϼ��� : ");
//	scanf("%f", &height);
//	printf("�̸��� �Է��ϼ��� : ");
//	scanf("%s", name, sizeof(name) / sizeof(name[0]));
//
//	printf("�ȳ��ϼ���. %d��, Ű %.2fcm�� %s��\n", age, height, name);
//}
//int scanf_tuto2()
//{
//	int width, height;
//
//	printf("�簢���� ���� ���̸� �Է��ϼ��� : ");
//	scanf("%d%d", &width, &height);
//
//	printf("�簢���� ������ %d�Դϴ�. \n", width * height);
//}
//
//int arithmatic()
//{
//	printf("3+2 = %d\n", 3 + 2);
//	printf("3-2 = %d\n", 3 - 2);
//	printf("3*2 = %d\n", 3 * 2);
//	printf("3/2 = %d\n", 3 / 2);
//
//}
//
//int modular()
//{
//	int value = 386;
//
//	int h = value / 100;
//	int d = value / 10 % 10;
//	int n = value % 10;
//
//	printf("%d��%d��%d\n", h, d, n);
//}
//
//int prepost()
//{
//	int a, b;
//
//	a = 3;
//	b = ++a;
//	printf("���������� ���� �� : %d\n", b);
//
//	a = 3;
//	b = a++;
//	printf("���������� ���� �� : %d\n", b);
//}
//
//int priority()
//{
//	int a = 5;
//	a = a * 2 + 1;
//	printf("a = %d\n", a);
//
//	a = 5;
//	a *= 2 + 1;
//	printf("a = %d\n", a);
//}
//
//int cast()
//{
//	int sum = 427;
//	int num = 5;
//	printf("��� = %d\n", sum / num); 
//	printf("��� = %d\n", sum / (double)num);
//}
//int intconvert()
//{
//	short a = 20000;
//	short b = 30000;
//	int c = a + b;
//	printf("c = %d\n", c);
//}
//
//int convert()
//{
//	int a = 3;
//	double d = 2.41;
//
//	int b = a + d;
//	printf("b = %d\n", b);
//}
extern int utilglobal;

int main()
{
	/*cursor_tuto();
	scanf_tuto();
	scanf_tuto2();
	pricision();
	widthalign();
	PointerCopy();
	arithmatic();
	modular();
	prepost();
	priority();
	cast();
	convert();
	intconvert();*/
	/*int value = 38;
	int* pi;

	pi = &value;
	printf("value�� ���� %d�Դϴ�.\n", *pi);*/

	/*if_tuto();
	ifelse_tuto();
	ifdlseif_tuto();
	and_tuto();
	leapyear();*/
	/*condition_tuto();
	oddeven();
	switch_tuto();*/
	//casefall();
	//grade();
	//movesharp();
	//for_tuto();
	//sum100();
	//omp_sum();
	//sharpani();
	//comma();
	//relectsharp();
	//triangle();
	//printf("%d\n",Getsum(10, 20));
	//printf("%d", Getday());
	/*int a = 10, b = 20;
	call_by_ref1(a, b);
	call_by_ref2(&a, &b);*/
	//drawbox1();
	/*OutBoxMessage2("������");
	OutBoxMessage2("������Ӥ�wwwwwwwwwww��");*/
	//fread_tuto();
	printf("utilglobal = %d", utilglobal);


	return 0;
}