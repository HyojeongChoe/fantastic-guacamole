#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dan, num = 1;
	printf("몇 단?: ");
	scanf("%d", &dan);

	while (num<10)   //1~9까지 반복
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
		num++;
	}
	return 0;

}