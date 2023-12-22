#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char grade_func(int avg);
//학생 5명의 국,영,수 점수와 총점, 평균, 학점을 정의하는 구조체 
struct person {		
	int kor;
	int eng;
	int math;	//하나에 관한 정의
	int sum;
	int avg;
	char name[20];
	char grade;
};
int main()
{
	char* name[5] = { "가나다","라마바","아자사","차카타","파하" };
	int s[] = { 10,20,30,40,50,60,70,80,90,100 };
	struct person sc_arr[5] = { 0 };	//다섯명의 정보를 저장할 배열 선언
	
	srand(time(NULL));		//값을 랜덤으로 저장
	
	for (int i = 0; i < 5; i++)
	{
		strcpy(sc_arr[i].name, name[rand() % 5]);
		sc_arr[i].kor = s[rand() % 10];
		sc_arr[i].eng = s[rand() % 10];
		sc_arr[i].math = s[rand() % 10];
		sc_arr[i].sum = sc_arr[i].kor + sc_arr[i].kor + sc_arr[i].kor;
		sc_arr[i].avg = sc_arr[i].sum / 3;
	}
	//입력
	/*for (int i = 0; i < 5; i++)
	{
		sc_arr[i].kor = (rand() % 101);
		sc_arr[i].eng = (rand() % 101);
		sc_arr[i].math = (rand() % 101);
		sc_arr[i].sum = sc_arr[i].kor + sc_arr[i].kor + sc_arr[i].kor;
		sc_arr[i].avg = sc_arr[i].sum / 3;
	}*/
	//출력
	for (int i = 0; i < 5; i++) {
		printf("이름: %s\n", sc_arr[i].name);
		printf("국어: %d점\n", sc_arr[i].kor);
		printf("영어: %d점\n", sc_arr[i].eng);
		printf("수학: %d점\n", sc_arr[i].math);
		printf("총점: %d점\n", sc_arr[i].sum);
		printf("평균: %d점\n", sc_arr[i].avg);
		printf("%c학점\n", grade_func(sc_arr[i].avg));
		printf("------------------------\n");
	}
}
char grade_func(int avg)
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
