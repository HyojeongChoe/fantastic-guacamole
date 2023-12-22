#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int cur = 2; cur <= 9; cur++)		//2단~9단까지 반복
	{
		for (int is = 1; is <= 9; is++) {		//1~9까지 곱하기
			printf(" % d X % d = % d \n", cur, is, cur * is);
		}											
		printf("\n");
	}
}