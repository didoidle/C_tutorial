#include <stdio.h>
#pragma warning(disable:4996)

void if_tuto()
{
	int input;

	printf("2 + 3�� �Է��ϼ��� : ");
	scanf("%d", &input);
	if (input == 5)
		puts("�����Դϴ�.");
}

void ifelse_tuto()
{
	int input;

	printf("2 + 3�� �Է��ϼ��� : ");
	scanf("%d", &input);
	if (input == 5)
		puts("�����Դϴ�.");
	else
		puts("Ʋ�Ƚ��ϴ�.");
}

void ifdlseif_tuto()
{
	int input;

	printf("2 + 3�� �Է��ϼ��� : ");
	scanf("%d", &input);
	if (input == 5)
		puts("�����Դϴ�.");
	else if (input == 6)
		puts("������ �ƴϰ� �����Դϴ�.");
	else
		puts("Ʋ�Ƚ��ϴ�.");
}

void and_tuto() {
	int blood;

	printf("���� ������ ���Դϱ�?");
	scanf_s("%d", &blood);

	if (blood >= 70 && blood <= 109)
	{
		puts("�����Դϴ�.");
	}
	else
	{
		puts("���� ���� �ϼ���.");
	}
}

void leapyear()
{
	int year;

	printf("���� �⵵�� �Է��Ͻÿ�. ");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		puts("�����Դϴ�.");
	}
	else {
		puts("������ �ƴմϴ�.");
	}
}
void condition_tuto()
{
	int kim = 182, lee = 174, tall;
	tall = kim > lee ? kim : lee;
	printf("ū ��� = %d\n", tall);
}

void oddeven()
{
	printf("���ڸ� �Է��ϼ��� : ");
	int num;
	scanf_s("%d", &num);

	printf("%d�� %s���Դϴ�.\n", num, num % 2 == 0 ? "¦" : "Ȧ");
}

void switch_tuto()
{
	int num;

	printf("������ �Է��ϼ���. : ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		puts("one");
		break;
	case 2:
		puts("two");
		break;
	case 3:
		puts("three");
		break;
	default:
		puts("others");
		break;
	}
}

void casefall()
{
	printf("���� ����� ���ðڽ��ϱ�?(Y/N) ");
	int ch = getch();
	puts("");

	switch (ch)
	{
	case 'y':
	case 'Y':
		puts("���ش� ��������� �� �̴� å�� ������ �а�..");
		break;
	case 'n':
	case 'N':
		puts("�̽� �� �ϴ´�.");
		break;
	}
}

void grade()
{
	int score;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);
	switch (score / 10) {
	case 10:
	case 9:
		puts("A ����");
		break;
	case 8:
		puts("B");
		break;
	case 7:
		puts("C");
		break;
	case 6:
		puts("D");
	case 5:
		puts("E");
		break;
	default:
		puts("F");
		break;
	}
}