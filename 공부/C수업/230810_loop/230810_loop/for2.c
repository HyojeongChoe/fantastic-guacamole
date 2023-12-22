#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int total = 0;
	int num;
	
	printf("0부터 num까지의 덧셈, num은?: ");
	scanf("%d", &num);

	//for(int i=1; i<=num; i++)
	for(int i = 0; i < num + 1; i++) {
		total += i;
	}
	printf("0부터 %d까지의 덧셈결과: %d \n", num, total);

}
