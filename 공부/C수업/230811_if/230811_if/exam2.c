#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//double n1, n2;

	//printf("두 개의 숫자를 입력하세요: \n");
	//printf("첫 번째: ");
	//scanf("%lf", &n1);					
	//printf("두 번쨰: ");
	//scanf("%lf", &n2);
	//
	//double result1, result2;
	//
	//result1 = n1 - n2;				//두 수의 뺄셈 결과
	//result2 = n1 * n2;				//두 수의 곱셈 결과

	//printf("뺄셈 결과: %lf\n", result1);
	//printf("곱셈 결과: %lf\n", result2);

	//------------------------------------------------------------------------

	/*int n1, n2, n3;
	int result;
	printf("첫번째 값: ");
	scanf("%d", &n1);
	printf("두번째 값: ");
	scanf("%d", &n2);
	printf("세번째 값: ");
	scanf("%d", &n3);

	result = n1 * n2 + n3;

	printf("%d*%d+%d=%d \n", n1, n2, n3, result);*/

	//----------------------------------------------------------------------

	//int n;
	//int result;

	//printf("제곱할 수: ");
	//scanf("%d", &n);				//제곱할 수 입력
	//
	//result = n * n;						//제곱값
	//printf("%d의 제곱: %d\n", n, result);		//값 출력

	//-----------------------------------------------------------------------

	//int n1, n2;
	//int result1, result2;

	//printf("첫번째 값: ");
	//scanf("%d", &n1);
	//printf("두번째 값: ");
	//scanf("%d", &n2);

	//result1 = n1 / n2;				//n1과 n2의 몫
	//result2 = n1 % n2;				//n1과 n2의 나머지

	//printf("%d와(과) %d의 몫: %d : \n", n1, n2, result1);
	//printf("%d와(과) %d의 나머지: %d: \n", n1, n2, result2);

	//------------------------------------------------------------------------

	int n;

	printf("양의 정수: ");
	scanf("%d", &n);

	while (n > 0)
	{
		printf("Hello world %d \n", n);
	}
}

