#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int avg_func(int sum);
char hak_func(int avg);

int main()
{
	//����ü�� ����Ͽ� ó���ϴ°��� �� ����
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
		avg = avg_func(sum);
		printf("����: %d��\t���: %d��\t", sum, avg);		//�߰�ȣ ���� ������ ������ ������;
		printf("%c����", hak_func(avg));
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