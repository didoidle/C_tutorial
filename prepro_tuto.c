#include <stdio.h>
#pragma warning(disable:4996)

void drawbox1()
{
	for (int i = 0; i < 15; i++) putch('-');
	puts("");
	printf("| �ȳ��ϼ���. |\n");
	for (int i = 0; i < 15; i++) putch('-');
	puts("");

	for (int i = 0; i < 25; i++) putch('-');
	puts("");
	printf("| ��ſ� �Ϸ� ��������. |\n");
	for (int i = 0; i < 25; i++) putch('-');
	puts("");
}

void OutBoxMessage(char* str)
{
	int len = strlen(str);
	for (int i = 0; i < len + 4; i++) {
		putch('-');
	}
	puts("");

	printf("| %s |\n", str);

	for (int i = 0; i < len + 4; i++) {
		putch('-');
	}
	puts("");
}

void putchs(int ch, int n)
{
	for (int i = 0; i < n; i++) {
		putch(ch);
	}
	puts("");
}

void OutBoxMessage2(char* str)
{
	int len = strlen(str);
	putchs('-', len + 4);
	printf("| %s |\n", str);
	putchs('-', len + 4);
}