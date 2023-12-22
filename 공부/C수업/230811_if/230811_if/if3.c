#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("정수 입력: ");
	scanf("%d", &n);

	if (n < 0) {
		printf("%d은(는) 0보다 작다. \n", n);
	}
	else {
		printf("%d은(는) 0보다 작지않다. \n", n);
	}
	printf("\n");
	printf("\n");
	printf("\n");

	//-------------------------------------------------------------
	//else if 사용해서 연산 구하기.
	
	
	int opt;
	float n1, n2;		//연산을 수행할 두개의 실수
	float result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택?: ");
	scanf("%d", &opt);
	printf("두개의 실수를 입력하세요: \n");
	scanf("%f %f", &n1, &n2);

	if (opt == 1) {
		result = n1 + n2;
	}
	else if (opt == 2) {
		result = n1 - n2;
	}
	else if (opt == 3) {
		result = n1 * n2;
	}
	else{
		result = n1 / n2;

	}
	printf("결과: %.2f \n", result);
}