#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int avg_func(int sum);
char hak_func(int avg);

int main()
{
	//구조체를 사용하여 처리하는것이 더 좋음
	//5명의 국, 영, 수 점수를 랜덤하게 생성(0~100)
	int score[5][3] = { 0 };
	srand(time(NULL));
	int sum = 0;	//총점 변수
	int avg = 0;
	for (int i = 0; i < 5; i++) {
		sum = 0;	//한바퀴 돌았으면 밖에서 다시 sum 초기화 시켜야 누적x
		for (int j = 0; j < 3; j++) {
			score[i][j] = (rand() % 101);//배열에 값 저장
			printf("%d점\t", score[i][j]);
			sum += score[i][j];
			avg = sum / 3;
		}
		avg = avg_func(sum);
		printf("총점: %d점\t평균: %d점\t", sum, avg);		//중괄호 옆에 적으면 가독성 떨어짐;
		printf("%c학점", hak_func(avg));
		printf("\n");
	}
}
int avg_func(int sum)
{
	return sum / 3;
}
char hak_func(int avg)
{
	char hak = 0;
	if (avg >= 90 && avg <= 100)
	{
		hak = 'A';
	}
	else if (avg >= 80 && avg <= 89)
	{
		hak = 'B';
	}
	else if (avg >= 70 && avg <= 79)
	{
		hak = 'C';
	}
	else if (avg >= 60 && avg <= 69)
	{
		hak = 'D';
	}
	else if (avg >= 50 && avg <= 59)
	{
		hak = 'E';
	}
	else
	{
		hak = 'F';
	}
	return hak;
}