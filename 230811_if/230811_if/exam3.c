#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//if로 연습

	/*간단한 계산기 (if/switch 다 가능)
	 1. 2개의 숫자를 입력받고, 문자 +, -, *, / 입력받음
	 2. 출력 형태는 아래참고 
	
	 >>> 동작 예시 <<<
	 1번째 숫자 입력: 10
	 2번째 숫자 입력: 20
	 연산자 입력(+,-,*,/)

	 >>>출력 예시 <<<
	10 + 5 = 15*/
	
	int n1, n2;		//입력받을 두개의 숫자변수 선언
	char opt;
	printf(">>> 동작 <<<");
	printf("\n");
	printf("1번째 숫자 입력 : ");
	scanf("%d", &n1);
	printf("2번째 숫자 입력 : ");
	scanf("%d", &n2);
	//바로 위에서 숫자를 입력하고 엔터키를 치면 엔터키값이 
	//opt 변수에 자동으로 저장되어지는 오류 발생
	//해결방법: " &c" -> %c앞에 공백을 1칸 넣음

	printf("%연산자 입력(+,-,*,/) : ");
	scanf(" %c", &opt);
	
	printf(">>> 출력 <<<");
	printf("\n");
	if (opt == '+') {
		printf("%d + %d = %d \n", n1, n2, n1 + n2);
	}
	 if (opt == '-') {
		printf("%d - %d = %d \n", n1, n2, n1 - n2);
	}
	if (opt == '*') {
		printf("%d * %d = %d \n", n1, n2, n1 * n2);
	}
	if (opt == '/') {
		printf("%d / %d = %d \n", n1, n2, n1 / n2);
	}

	/*switch (opt) {
	case '+': printf("%d + %d = %d \n", n1, n2, n1 + n2); 
		break;
	case '-': printf("%d - %d = %d \n", n1, n2, n1 - n2); 
		break;
	case '*': printf("%d * %d = %d \n", n1, n2, n1 * n2); 
		break;
	case '/': printf("%d / %d = %d \n", n1, n2, n1 / n2); 
		break;

	}*/



 //--------------------------------------------------------------------------------------
	//윤년 구분하는프로그램(if만 가능)
	//1. 입력한 년도를 4로 나누면 나머지가 0이고 100으로 나누면 나머지가 0이 아님
	//2. 입력한 년도를 400으로 나누면 나머지가 0

	int year;
	printf("연도를 입력하세용: ");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0) {
		printf("%d년은 윤년입니다. \n", year);
	}
	else if (year % 400 == 0) {
		printf("%d년은 윤년입니다. \n", year);
	}
	else {
		printf("%d년은 평년입니다. \n", year);
	}
	                                                                                                                                                                                            
}