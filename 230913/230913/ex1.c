#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	while (1) {
		system("cls");	//cls: 화면을 청소하는 도스명령어
		printf("------------------------------------------- \n");
		printf("\n");
		printf("식당 메뉴 자동 주문 프로그램 v1.0 \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("\n");
		printf("a. 김치찌개	: 5,000원\n");
		printf("b. 된장찌개	: 5,000원\n");
		printf("c. 칼국수	: 4,500원\n");
		printf("d. 잔치국수	: 4,000원\n");
		printf("e. 비빔밥	: 5,000원\n");
		printf("x. 프로그램 종료\n");

		char opt;		//문자 변수 선언

		printf("메뉴를 선택하세요 : ");
		scanf(" %c", &opt);				//a~e까지 문자 입력   //%c앞에 공백을 둠..

		switch (opt) {
		case 'a': case 'A':
			printf("김치찌개를 주문했습니다.\n"); break;
		case 'b': case 'B':
			printf("된장찌개를 주문했습니다.\n"); break;
		case 'c': case 'C':
			printf("칼국수를 주문했습니다.\n"); break;
		case 'd': case 'D':
			printf("잔치국수를 주문했습니다.\n"); break;
		case 'e': case 'E':
			printf("비빔밥을 주문했습니다.\n"); break;
		case 'x': case 'X':
			printf("앱을 종료합니다. \n");
			exit(0);		//강제로 앱을 종료

			//외부 프로그램을 C언어 내에서 동작시키는 함수
		}system("pause");		//동작을 일시정지

	}
}