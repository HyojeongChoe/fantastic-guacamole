#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//5���� ��, ��, �� ������ �����ϰ� ����(0~100)

	int score[5][3] = { 0 };
	srand(time(NULL));
	int sum = 0;	//���� ����
	int avg = 0;
	for (int i = 0; i < 5; i++) {
		sum = 0;	//�ѹ��� �������� �ۿ��� �ٽ� sum �ʱ�ȭ ���Ѿ� ����x
		for (int j = 0; j < 3; j++) {
			score[i][j] = (rand() % 101);//�迭�� �� ����
			printf("%d��\t", score[i][j]);
			sum += score[i][j];
			avg = sum / 3;
		}
		printf("����: %d��\t���: %d��\t", sum, avg);		//�߰�ȣ ���� ������ ������ ������;
		if(avg>=90 && avg<=100)
		{
			printf("����: A");
		}
		else if (avg >= 80 && avg <= 89)
		{
			printf("����: B");
		}
		else if (avg >= 70 && avg <= 79)
		{
			printf("����: C");
		}
		else if (avg >= 60 && avg <= 69)
		{
			printf("����: D");
		}
		else if (avg >= 50 && avg <= 59)
		{
			printf("����: E");
		}
		else if (avg >= 0 && avg <= 49)
		{
			printf("����: F");
		}printf("\n");
	}
	
}



