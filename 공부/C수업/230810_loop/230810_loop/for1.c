#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int i = 0; i < 3; i++) //초기변수 /끝낼조건 / 증감변수
	{
		printf("Hi~\n");
	}

	int j = 0;					//초기 변수
	while (j < 3)				//조건이 거짓이라면 실행종료
	{
		printf("hi~\n");		//출력문
		j++;			
	}

	int n = 0;
	do {
		printf("HI~\n");
		n++;
	} while (n < 3);


}