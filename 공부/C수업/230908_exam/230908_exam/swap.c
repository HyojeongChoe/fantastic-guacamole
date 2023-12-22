#include <stdio.h>

int main()
{
	//C언어 문제
	int a = 10;
	int b = 20;

	printf("a= %d\n", a);
	printf("b= %d\n", b);

	int temp = a;
	a = b;
	b = temp;

	printf("a= %d\n", a);
	printf("b= %d\n", b);
}