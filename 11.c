#include <stdio.h>
#pragma warning(disable:4996)

void if_tuto()
{
	int input;

	printf("2 + 3을 입력하세요 : ");
	scanf("%d", &input);
	if (input == 5)
		puts("정답입니다.");
}

void ifelse_tuto()
{
	int input;

	printf("2 + 3을 입력하세요 : ");
	scanf("%d", &input);
	if (input == 5)
		puts("정답입니다.");
	else
		puts("틀렸습니다.");
}

void ifdlseif_tuto()
{
	int input;

	printf("2 + 3을 입력하세요 : ");
	scanf("%d", &input);
	if (input == 5)
		puts("정답입니다.");
	else if (input == 6)
		puts("곱셈이 아니고 덧셈입니다.");
	else
		puts("틀렸습니다.");
}

void and_tuto() {
	int blood;

	printf("현재 혈당은 얼마입니까?");
	scanf_s("%d", &blood);

	if (blood >= 70 && blood <= 109)
	{
		puts("정상입니다.");
	}
	else
	{
		puts("혈당 관리 하세요.");
	}
}

void leapyear()
{
	int year;

	printf("현재 년도를 입력하시오. ");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		puts("윤년입니다.");
	}
	else {
		puts("윤년이 아닙니다.");
	}
}
void condition_tuto()
{
	int kim = 182, lee = 174, tall;
	tall = kim > lee ? kim : lee;
	printf("큰 사람 = %d\n", tall);
}

void oddeven()
{
	printf("숫자를 입력하세요 : ");
	int num;
	scanf_s("%d", &num);

	printf("%d는 %s수입니다.\n", num, num % 2 == 0 ? "짝" : "홀");
}

void switch_tuto()
{
	int num;

	printf("정수를 입력하세요. : ");
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
	printf("토정 비결을 보시겠습니까?(Y/N) ");
	int ch = getch();
	puts("");

	switch (ch)
	{
	case 'y':
	case 'Y':
		puts("올해는 운수대통할 수 이니 책을 열심히 읽고..");
		break;
	case 'n':
	case 'N':
		puts("미신 안 믿는다.");
		break;
	}
}

void grade()
{
	int score;
	printf("성적을 입력하세요 : ");
	scanf("%d", &score);
	switch (score / 10) {
	case 10:
	case 9:
		puts("A 학점");
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