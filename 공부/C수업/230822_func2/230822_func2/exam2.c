#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main_menu();
void ggd(int n);

//void ggd_even();
//void ggd_odd();
//void ggd_full();

int main()
{
	

	//------------------------------
	//구구단을 출력하는 함수연습v1.0
	//------------------------------
	//1. 구구단 짝수단 출력(2,4,6,8)
	//2. 구구단 홀수단 출력(3,5,7,9)
	//3. 구구단 전체 출력(2~9)
	//4. 종료
	// -----------------------------
	//메뉴 선택: 
	
	while (1) {
		int menu=main_menu();		//main_menu의 함수를 반환시킴 /->스위치 안에 main_menu()를 반환시켜도 됨.
		
		switch (menu)			
		{
		case 1:
			ggd(menu);		//짝수단 출력	문자로 보낼수도 있음 'e'  const char CHECK_EVEN = 'e';
			break;
		case 2:
			ggd(menu);		//홀수단 출력						'o'
			break;
		case 3:
			ggd(menu);			//전체단 출력
			break;
		case 4:
			printf("프로그램 종료\n");
			exit(0);		//프로그램을 강제로 종료
		default:
			printf("잘못된 입력!\n");
		}
	}
}

int main_menu()	 //매개변수x반환o
{
	//함수내에서 정보가 만들어졌기 때문에 매개변수 x
	printf("--------------------------------\n");
	printf("구구단을 출력하는 함수연습 v1.0\n");
	printf("--------------------------------\n");
	printf("1.구구단 짝수단 출력(2,4,6,8)\n");
	printf("2.구구단 홀수단 출력(3,5,7,9)\n");
	printf("3.구구단 전체단 출력(1~9)\n");
	printf("4.종료 \n");
	printf("--------------------------------\n");
	printf("선택:");
	int menu;
	scanf("%d", &menu);			//입력받은 메뉴값은 메인함수에x 반환해야함
	
	return menu;	//함수가 종료되면서 리턴
}
//
//void ggd_full()
//{
//	for (int i = 1; i < 10; i++) {	//1~9의 곱
//		for (int j = 2; j < 10; j++){ 	//2~9단
//			printf("%d x %d = %d\t", j, i, i * j);
//		}printf("\n");
//	}
//}
//void ggd_even()		//짝수단
//{
//	for (int i = 1; i < 10; i++) {	//1~9의 곱
//		for (int j = 2; j < 10; j++) { 	//2~9단
//			if (j % 2 == 0) {
//				printf("%d x %d = %d\t", j, i, i * j);
//			}
//		}printf("\n");
//	}
//}
//void ggd_odd()		//홀수단
//{
//	for (int i = 1; i < 10; i++) {	//1~9의 곱
//		for (int j = 2; j < 10; j++){ //2~9단
//			if (j % 2 == 1) {
//				printf("%d x %d = %d\t", j, i, i * j);
//			}
//		}printf("\n");
//	}
//}

void ggd(int n)		//-> char n
{
	for (int i = 1; i < 10; i++) {	//1~9의 곱
		for (int j = 2; j < 10; j++) { 	//2~9단
			if (j % 2 == 0 && n == 1) {	//짝수 n=='e'/ CHEAK_EVEN =='e'
				printf("%d x %d = %d\t", j, i, i * j);
			}
			else if (j % 2 == 1 && n == 2) {	//홀수 n=='o' CHEAK_ODD =='o'
				printf("%d x %d = %d\t", j, i, i * j);
			}
			else if (n == 3) {	//전체 CHEAK_FULL =='f'
				printf("%d x %d = %d\t", j, i, i * j);
			}
		}printf("\n");
	}
}