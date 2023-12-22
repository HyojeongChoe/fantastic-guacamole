#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//전역변수: 함수 밖에서 선언되는 변수(모든 함수에 값을 전달할 수 있음)
//지역변수: 함수 안에서만 사용 가능한 변수
const char CHECK_FULL = 'f';	//const - 상수 변수 (값을 변경할 수 없는 변수)
// #define CHECK+FULL 'f'
const char CHECK_EVEN = 'e';	
const char CHECK_ODD = 'o';

int main_menu();
void ggd(char n);

int main()
{
	while (1) {	//무한 반복
		int menu = main_menu();		//main_menu의 함수를 반환시킴 /->스위치 안에 main_menu()를 반환시켜도 됨.

		switch (menu){
		case 1:	
			ggd(CHECK_EVEN);	//짝수단 출력
			break;
		case 2:
			ggd(CHECK_ODD);		//홀수단 출력			
			break;
		case 3:
			ggd(CHECK_FULL);	//전체단 출력
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

void ggd(char n)		//-> char n
{
	for (int i = 1; i < 10; i++) {	//1~9의 곱
		for (int j = 2; j < 10; j++) { 	//2~9단
			if (j % 2 == 0 && n == CHECK_EVEN) {	//짝수 n=='e'/ CHEAK_EVEN =='e'
				printf("%d x %d = %d\t", j, i, i * j);
			}
			else if (j % 2 != 0 && n == CHECK_ODD) {	//홀수 n=='o' CHEAK_ODD =='o'
				printf("%d x %d = %d\t", j, i, i * j);
			}
			else if (n == CHECK_FULL) {	//전체 CHEAK_FULL =='f'
				printf("%d x %d = %d\t", j, i, i * j);
			}
		}printf("\n");
	}
}