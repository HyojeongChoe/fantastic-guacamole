#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int cur = 2; cur <= 9; cur++)		//2��~9�ܱ��� �ݺ�
	{
		for (int is = 1; is <= 9; is++) {		//1~9���� ���ϱ�
			printf(" % d X % d = % d \n", cur, is, cur * is);
		}											
		printf("\n");
	}
}