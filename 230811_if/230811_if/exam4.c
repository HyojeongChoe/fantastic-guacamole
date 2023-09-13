#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //system 함수

int main()
{
	//음식 주문 프로그램
	
	/*while (1) {
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
		
	} */

	//---------------------------------------------------------------------------------------------

	//담배 자판기 프로그램 방법1
	
	printf("------------------------------------------- \n");
	printf("\n");
	printf("담배 자판기 프로그램 v1.0 \n");
	printf("\n");
	printf("------------------------------------------- \n");
	printf("\n");
	printf("원하는 담배를 메뉴에서 선택하세요. \n");
	printf("1.에쎄 골든 리프	6,000원 \n");
	printf("2.에쎄 스페셜 골드	5,000원 \n");
	printf("3.더원 블루		4,500원 \n");
	printf("4.더원 오렌지		4,500원 \n");
	printf("5.더원 화이트		4,500원 \n");
	printf("\n");

	int n;
	int money = 0;
	printf("------------------------------------------- \n");
	printf("\n");
	printf("담배를 선택하세요 : ");
	scanf("%d", &n);
	switch (n) {
	case 1:
		printf("에쎄 골든 리프를 선택하셨습니다. \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("담배 금액을 입금하세요: ");
		scanf("%d", &money);
		printf("에쎄 골든 리프를 구매했습니다. 거스름돈 %d 원을 받으세요. \n", money - 6000);
		break;
	case 2:
		printf("에쎄 스페셜 골드를 선택하셨습니다. \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("담배 금액을 입금하세요: ");
		scanf("%d", &money);
		printf("에쎄 스페셜 골드를 구매했습니다. 거스름돈 %d 원을 받으세요. \n", money - 5000);
		break;
	case 3:
		printf("더원 블루를 선택하셨습니다. \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("담배 금액을 입금하세요: ");
		scanf("%d", &money);
		printf("더원 블루를 구매했습니다.거스름돈 %d 원을 받으세요. \n", money - 4500);
		break;
	case 4:
		printf("더원 오렌지를 선택하셨습니다. \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("담배 금액을 입금하세요: ");
		scanf("%d", &money);
		printf("더원 오렌지를 구매했습니다. 거스름돈 %d 원을 받으세요. \n", money - 4500);
		break;
	case 5:
		printf("더원 화이트를 선택하셨습니다. \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("담배 금액을 입금하세요: ");
		scanf("%d", &money);
		printf("더원 화이트를 구매했습니다. 거스름돈 %d 원을 받으세요. \n", money - 4500);
		break;
	}


	//---------------------------------------------------------------------------------------------


	
	//담배 자판기 프로그램 방법2

	//printf("------------------------------------------- \n");
	//printf("\n");
	//printf("담배 자판기 프로그램 v1.0 \n");
	//printf("\n");
	//printf("------------------------------------------- \n");
	//printf("\n");
	//printf("원하는 담배를 메뉴에서 선택하세요. \n");
	//printf("1.에쎄 골든 리프	6,000원 \n");
	//printf("2.에쎄 스페셜 골드	5,000원 \n");
	//printf("3.더원 블루		4,500원 \n");
	//printf("4.더원 오렌지		4,500원 \n");
	//printf("5.더원 화이트		4,500원 \n");
	//printf("\n");

	//int n;
	//printf("------------------------------------------- \n");
	//printf("\n");
	//printf("담배를 선택하세요 : ");
	//scanf("%d", &n);
	//switch (n) {
	//case 1:
	//	printf("에쎄 골든 리프를 선택하셨습니다. \n");
	//	break;
	//case 2:
	//	printf("에쎄 스페셜 골드를 선택하셨습니다. \n");
	//	break;
	//case 3:
	//	printf("더원 블루를 선택하셨습니다. \n");
	//	break;
	//case 4:
	//	printf("더원 오렌지를 선택하셨습니다. \n");
	//	break;
	//case 5:
	//	printf("더원 화이트를 선택하셨습니다. \n");
	//	break;
	//default: 
	//	printf("잘못된 메뉴 선택!\n");
	//}
	//printf("\n");
	//printf("------------------------------------------- \n");
	//int money;
	//printf("담배 금액을 입금하세요: ");
	//scanf("%d", &money);
	//printf("\n");
	//switch (n) {
	//	//값을 소스코드에 직접 표기하는 방식- 하드코딩(hard coding)
	//	//하드코딩방식은 비효율적-->변수를 이용(효율적)
	//case 1: 
	//	printf("에쎄 골든 리프를 구매하셨습니다.\n");
	//	printf("거스름돈 %d를 받으세요.\n", money - 6000);
	//	break;
	//case 2:
	//	printf("에쎄 스페셜 골드를 구매하셨습니다.\n");
	//	printf("거스름돈 %d를 받으세요.\n", money - 5000);
	//	break;
	//case 3:
	//	printf("더원블루를 구매하셨습니다.\n");
	//	printf("거스름돈 %d를 받으세요.\n", money - 4500);
	//	break;
	//case 4:
	//	printf("더원 오렌지를 구매하셨습니다.\n");
	//	printf("거스름돈 %d를 받으세요.\n", money - 4500);
	//	break;
	//case 5:
	//	printf("더원 화이트를 구매하셨습니다.\n");
	//	printf("거스름돈 %d를 받으세요.\n", money - 4500);
	//	break;
	//}
	
	//변수: 정보(데이터)를 저장하는 공간
	//정보: 숫자(정수, 실수), 문자(문자, 문자열)
	//정수:int(%d), 실수:float(%f), 문자:char(%c), 문자열:char*(%s)
	//연산자: %(나머지), 비교(관계)연산자, 논리연산자
	//출력:printf함수, 입력scanf함수
	//반복문(for, while, do-while)
	//제어문(if, switch)
}