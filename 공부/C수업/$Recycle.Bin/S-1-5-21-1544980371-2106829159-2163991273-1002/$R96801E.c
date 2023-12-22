#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int menu();
int main()
{
	int num = menu();
}

int menu()
{
	printf("---------------------------\n");
	printf("파일 제어 프로그램 v1.0\n");
	printf("---------------------------\n");
	printf("1.친구 정보 쓰기 \n");
	printf("2.친구 정보 읽기 \n");
	printf("3.종료 \n");
	printf("---------------------------\n");
	printf("메뉴 선택: \n");
	int num;
	scanf("%d", &num);
	return num;
}