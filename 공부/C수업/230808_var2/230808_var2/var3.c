#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;

	a = 90, b = 80, c = 70, d = 60;

	printf("����:%d��\n", a);
	printf("����:%d��\n", b);
	printf("����:%d��\n", c);
	printf("����:%d��\n", d);

	int e = (a + b + c + d) / 4;
	int f = a + b + c + d;

	printf("���:%d\n", e);
	printf("����:%d\n", f);

	return 0;




}