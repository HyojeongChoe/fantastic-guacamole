#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dan, num = 1;
	printf("�� ��?: ");
	scanf("%d", &dan);

	while (num<10)   //1~9���� �ݺ�
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
		num++;
	}
	return 0;

}