#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int lotto[6] = { 0 };	//로또 배열 생성
	srand(time(NULL));		//랜덤 값 생성

	int random = 0;
	for (int i = 0; i < 6; i++) {
		random = (rand() % 45) + 1;
		lotto[i] = random;
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
		printf("%d\t", lotto[i]);
	}
	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d\t", lotto[i]);
	}
}
