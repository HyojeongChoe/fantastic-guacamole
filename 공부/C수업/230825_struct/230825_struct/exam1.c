#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char grade_func(int avg);
//�л� 5���� ��,��,�� ������ ����, ���, ������ �����ϴ� ����ü 
struct person {		
	int kor;
	int eng;
	int math;	//�ϳ��� ���� ����
	int sum;
	int avg;
	char name[20];
	char grade;
};
int main()
{
	char* name[5] = { "������","�󸶹�","���ڻ�","��īŸ","����" };
	int s[] = { 10,20,30,40,50,60,70,80,90,100 };
	struct person sc_arr[5] = { 0 };	//�ټ����� ������ ������ �迭 ����
	
	srand(time(NULL));		//���� �������� ����
	
	for (int i = 0; i < 5; i++)
	{
		strcpy(sc_arr[i].name, name[rand() % 5]);
		sc_arr[i].kor = s[rand() % 10];
		sc_arr[i].eng = s[rand() % 10];
		sc_arr[i].math = s[rand() % 10];
		sc_arr[i].sum = sc_arr[i].kor + sc_arr[i].kor + sc_arr[i].kor;
		sc_arr[i].avg = sc_arr[i].sum / 3;
	}
	//�Է�
	/*for (int i = 0; i < 5; i++)
	{
		sc_arr[i].kor = (rand() % 101);
		sc_arr[i].eng = (rand() % 101);
		sc_arr[i].math = (rand() % 101);
		sc_arr[i].sum = sc_arr[i].kor + sc_arr[i].kor + sc_arr[i].kor;
		sc_arr[i].avg = sc_arr[i].sum / 3;
	}*/
	//���
	for (int i = 0; i < 5; i++) {
		printf("�̸�: %s\n", sc_arr[i].name);
		printf("����: %d��\n", sc_arr[i].kor);
		printf("����: %d��\n", sc_arr[i].eng);
		printf("����: %d��\n", sc_arr[i].math);
		printf("����: %d��\n", sc_arr[i].sum);
		printf("���: %d��\n", sc_arr[i].avg);
		printf("%c����\n", grade_func(sc_arr[i].avg));
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
