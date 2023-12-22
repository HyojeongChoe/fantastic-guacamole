#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		//exit()

void sum_avg(n1, n2, n3);
void avg(n1, n2, n3);

int main()
{
	int kor = 0, math = 0, eng = 0;

	/*while (1) {
		printf("국어 점수 입력: ");
		scanf("%d", &kor);
		if (kor < 0 || kor>100) {
			printf("Error!\n");
		}
	}*/
	
	do
	{
		printf("국어 점수 입력: ");
		scanf("%d", &kor);
	} while (kor <0 || kor>100);
	do
	{
		printf("수학 점수 입력: ");
		scanf("%d", &math);
	} while (math < 0 ||math>100);
	do
	{
		printf("영어 점수 입력: ");
		scanf("%d", &eng);
	} while (eng < 0 || eng>100);

	
	/*printf("국어 점수 입력: ");
	scanf("%d", &kor);
	if (kor < 0 || kor>100) {
		printf("Error!\n");
	printf("수학 점수 입력: ");
	scanf("%d", &math);
	if (math < 0 || math>100) {
		printf("Error!\n");
	}
	printf("영어 점수 입력: ");
	scanf("%d", &eng);
	if (eng < 0 || eng>100) {
		printf("Error!\n");
	}*/

	sum_avg(kor, math, eng);

}

void sum_avg(n1, n2, n3)
{
	printf("총점: %d\n", n1 + n2 + n3);
	printf("평균: %d\n", (n1 + n2 + n3) / 3);
}
