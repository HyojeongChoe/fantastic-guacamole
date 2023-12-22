#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int i = 0;

	printf("몇 개를 출력할까요?: ");
	scanf("%d", &num);

	while (i<num)
	{
		printf("Hello world \n", num);
		i++;

	}
}