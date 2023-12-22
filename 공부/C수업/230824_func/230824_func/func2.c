#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void show_lotto(int lotto[]);

int main()
{
	int lotto[6] = { 0 };	//로또를 저장할 배열
	srand(time(NULL));		//매번 다른 시드값 생성
	show_lotto(lotto);		//함수 호출
	for (int i = 0; i < 6; i++) {
		printf("%d\t",lotto[i]);
	}
}

void show_lotto(int lotto[])
{
	for (int i = 0; i < 6; i++) {
		int num = (rand() % 45) + 1;
		lotto[i] = num;		//배열에 집어넣음
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}
}
