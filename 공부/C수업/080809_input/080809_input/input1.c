#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int result;
	int num1, num2;

	printf("정수 one: ");    
	
	//최신 비주얼스튜디오에서는 scanf를 사용불가.
	//scanf_s 라는 함수로 대체되었음
	//하지만 c언어 표준함수는 scanf가 맞음
	
	scanf_s("%d", &num1);   //첫번째 정수입력
	printf("정수 two: ");
	scanf_s("%d", &num2);    //두번째 정수입력

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);

	int n1, n2, results;

	printf("1) ");
	scanf_s("%d", &n1);   //첫번째 정수입력
	printf("2) ");
	scanf_s("%d", &n2);   //두번째 정수입력

	results = n1 + n2;

	printf("총점: %d + %d = %d \n", n1, n2, results);




}
