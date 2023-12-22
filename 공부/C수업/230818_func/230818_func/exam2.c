#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_day(int n);
int main()
{
	int day = 0;
	printf("1에서 7 사이의 숫자를 입력하세요. \n");
	printf("입력: ");
	scanf("%d", &day);
	show_day(day);		//함수 호출
}

// main()에서 1~7사이의 숫자를 입력받아서
// 매개변수의 값이 1이면 월요일 출력...일요일 출력
// show_day()

void show_day(int n)
{
	switch (n) {
	case 1:
		printf("월요일"); break;
	case 2:
		printf("화요일"); break;
	case 3:
		printf("수요일"); break;
	case 4:
		printf("목요일"); break;
	case 5:
		printf("금요일"); break;
	case 6:
		printf("토요일"); break;
	case 7:
		printf("일요일"); break;
	}
	
	/*if (n == 1) {
		printf("월요일\n");
	}
	else if (n == 2) {
		printf("화요일\n");
	}
	else if (n == 3) {
		printf("수요일\n");
	}
	else if (n == 4) {
		printf("목요일\n");
	}
	else if (n == 5) {
		printf("금요일\n");
	}
	else if (n == 6) {
		printf("토요일\n");
	}
	else if (n == 7) {
		printf("일요일\n");
	}*/
}