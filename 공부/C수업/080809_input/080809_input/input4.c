#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money, c500, c100, c50, c10;  

	printf("교환할 돈을 입력하세요 : ");
	scanf("%d", &money);         

	c500 = money / 500; money = money % 500;
	c100 = money / 100; money = money % 100;
	c50 = money / 50; money = money % 50;
	c10 = money / 10; money = money % 10;

	
	return 0;







}