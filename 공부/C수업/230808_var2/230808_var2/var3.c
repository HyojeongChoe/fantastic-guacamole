#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;

	a = 90, b = 80, c = 70, d = 60;

	printf("국어:%d점\n", a);
	printf("영어:%d점\n", b);
	printf("수학:%d점\n", c);
	printf("과학:%d점\n", d);

	int e = (a + b + c + d) / 4;
	int f = a + b + c + d;

	printf("평균:%d\n", e);
	printf("총점:%d\n", f);

	return 0;




}