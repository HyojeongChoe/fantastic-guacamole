#include <stdio.h>

int main()
{
	//C��� ����
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