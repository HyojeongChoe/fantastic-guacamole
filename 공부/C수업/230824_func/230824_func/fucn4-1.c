#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void score_func(int a[5][3]);

int main()
{
	srand(time(NULL));
	int score[5][3] = { 0 };	
	score_func(score);			//�迭�� ������ �� ȣ��
}

void score_func(int a[5][3])
{
	int sum, avg;
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 3; j++) {
			a[i][j] = (rand() % 101);
			printf("%d��\t", a[i][j]);
			sum += a[i][j];
		}
		printf("\n");
	}
}	//���� ���� �Լ�


