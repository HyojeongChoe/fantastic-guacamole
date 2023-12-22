#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//	//1개의 숫자를 입력받아 구구단 출력하는 프로그램
	//	//예) 3을 입력하면 구구단 3단 출력

int main()
{
	printf("구구단 입력: ");

	int ggd;
	scanf("%d", &ggd);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 1);			//반복문 안썼을 경우.
	//printf("%d x %d = %d \n", ggd, 1, ggd * 2);			//
	//printf("%d x %d = %d \n", ggd, 1, ggd * 3);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 4);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 5);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 6);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 7);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 8);
	//printf("%d x %d = %d \n", ggd, 1, ggd * 9);
	//printf("\n");

	for (int i = 1; i < 10; i++)								//디버깅 연슴 중요
	{
		printf("%d x %d = %d \n", ggd, i , ggd* i);
	}
	printf("\n");

	for (int j = 1; j<10; j=j+2)		    //홀수만 출력
	{
		printf("%d x %d = %d \n", ggd, j, ggd * j);
	}
	printf("\n");

	for (int n = 2; n < 10; n = n + 2)		//짝수만 출력
	{
		printf("%d x %d = %d \n", ggd, n, ggd * n);
	}
	printf("\n");


}