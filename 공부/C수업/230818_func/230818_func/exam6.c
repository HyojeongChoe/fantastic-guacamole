#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		//exit()

void sum(int n1, int n2, int n3);
void avg(int n1, int n2, int n3);

int main()
{
	int kor, math, eng;		//국영수 저장하는 변수선언

	printf("국어점수: ");
	scanf("%d", &kor);
	if (kor < 0 || kor>100) 
	{
		printf("Error!");
		exit(0);
	}
	printf("수학점수: ");
	scanf("%d", &math);
	if (math < 0 || math>100)
	{
		printf("Error!");
		exit(0);		//프로그램 강제종료
	}
	printf("영어점수: ");
	scanf("%d", &eng);
	if (eng < 0 || eng>100)
	{
		printf("Error!");
		exit(0);
	}
	sum(kor, math, eng);
	avg(kor, math, eng);
}

void sum(int n1, int n2, int n3)
{
	printf("총점: %d\n", n1 + n2 + n3);
}

void avg(int n1, int n2, int n3)
{
	printf("평균: %d\n", (n1 + n2 + n3) / 3);
}

