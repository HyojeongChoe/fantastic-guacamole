#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void score_func(int a[5][3]);

int main()
{
	srand(time(NULL));
	int score[5][3] = { 0 };	
	score_func(score);			//배열에 저장한 값 호출
}

void score_func(int a[5][3])
{
	int sum, avg;
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 3; j++) {
			a[i][j] = (rand() % 101);
			printf("%d점\t", a[i][j]);
			sum += a[i][j];
		}
		printf("\n");
	}
}	//점수 저장 함수


