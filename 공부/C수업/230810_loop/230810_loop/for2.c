#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int total = 0;
	int num;
	
	printf("0���� num������ ����, num��?: ");
	scanf("%d", &num);

	//for(int i=1; i<=num; i++)
	for(int i = 0; i < num + 1; i++) {
		total += i;
	}
	printf("0���� %d������ �������: %d \n", num, total);

}
