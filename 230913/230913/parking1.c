#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int select_menu();

int main()
{
	//걍 대충 틀만 짰어요 집가서 첨부터 생각ㅎㅐ볼게요? ㅜ
	while (1) {
		int num;

		printf("차량번호 네자리를 입력하세요\n");
		printf("차량번호: ");
		scanf("%d", &num);

		printf("=================================\n");
		printf("        차량 번호 선택\n");
		printf("=================================\n");
		printf("\n");
		printf("고객님의 차량번호가 맞습니까? \n");
		printf("\n");
		printf("%d\n", num);
		printf("\n");
		printf("1. 예			2. 아니오\n");
		printf("\n");
		printf("\n");

		int menu;
		scanf("%d", &menu);
		printf("\n");

		if (menu == 1) {
			//1번을 누르면 이용시간과 요금, 결제화면이 나와야함
			//while문 빠져 나가기
			break;
		}
		//2번 누르면 재입력 하는 화면 나옴
		else if (menu == 2) {

		}
	}
	printf("입차시간: \n");
	printf("출차시간: \n");
	printf("이용시간: \n");
	printf("요금: \n");
}
	

int select_menu() {
	
	/*int num;

	printf("차량번호: ");
	scanf("%d", &num);*/

}

