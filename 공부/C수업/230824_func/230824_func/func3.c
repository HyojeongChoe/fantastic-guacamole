#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
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
		printf("총점: %d점\t평균: %d점\t", sum, avg);		//중괄호 옆에 적으면 가독성 떨어짐;
		if(avg>=90 && avg<=100)
		{
			printf("학점: A");
		}
		else if (avg >= 80 && avg <= 89)
		{
			printf("학점: B");
		}
		else if (avg >= 70 && avg <= 79)
		{
			printf("학점: C");
		}
		else if (avg >= 60 && avg <= 69)
		{
			printf("학점: D");
		}
		else if (avg >= 50 && avg <= 59)
		{
			printf("학점: E");
		}
		else if (avg >= 0 && avg <= 49)
		{
			printf("학점: F");
		}printf("\n");
	}
	
}



