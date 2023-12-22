#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lotto(int a[]);
int main()
{
	//1. 로또 생성(중복방지)-배열까지의 학습 내용
	//2. 함수로 처리- 함수학습

	//로또 번호를 저장할 배열 생성
	int lotto[6] = { 0 };	//로또를 저장할 배열
	srand(time(NULL));		
	int num = 0;			//배열에 넣을 숫자 변수

	for (int i = 0; i < 6; i++) {
		num = (rand() % 45) + 1;
		lotto[i] = num;		//배열에 집어넣음
		for (int j = 0; j < i; j++) {
			//배열에 있는 숫자와 새로 획득한 숫자 비교
			if (lotto[i] == lotto[j]) {
				i--;	
				break;
			}
		}printf("%d\t", lotto[i]);	//중복되서 나옴
	}
	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
}

//void lotto(int a[])
//{
//	for (int i = 0; i < 6; i++) {
//		a[i]=
//	}
//}