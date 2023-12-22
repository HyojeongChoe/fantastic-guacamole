#include <stdio.h>
//전역변수 이용
int a = 3;
int b = 5;

void swap();

int main() 
{
	printf("a =%d, b = %d\n", a, b);
	swap();
	printf("a =%d, b = %d\n", a, b);
}

void swap()
{
	int temp = a;
	a = b;
	b = temp;
}
