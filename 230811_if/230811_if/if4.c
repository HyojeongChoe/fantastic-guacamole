#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0, num = 0;		//num부터 sum까지의 합 변수 선언

	while (1) 
	{					//무한반복 조건
		sum += num;
		if (sum > 5000) {		//sum이 5000이상이라면 
			break;				//break 실행! 자신이 속한 반복문 탈출
		}num++;
		/*printf("%d\n", num);*/	//->무한반복 출력
	}
	printf("sum: %d\n", sum);		//dead code(죽은코드)
	printf("num: %d\n", num);

}