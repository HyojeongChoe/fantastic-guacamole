#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	int results;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3); //scanf 쓸 때 공백 주의
	
	results = num1 + num2 + num3;
	printf("%d+%d+%d=%d \n", num1, num2, num3, results);

	//뭐가 잘못 된거지?

	float n1, n2, n3;
	float result;     //변수 설정

	printf("세 개의 실수 입력: ");
	scanf("%f %f %f ", &n1, &n2, &n3);

	result = n1 + n2 + n3;
	printf("%.1f + %.1f + %.1f = %.1f \n", n1, n2, n3, result);
}



