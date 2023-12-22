#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct professor		//교수명
{
	char name[20];
	char major[20];
	int age;
};
struct student			//학생명
{
	char name[20];
	char tel[20];
	int age;
	char addr[20];
	struct professor pro;
};

int main()
{
	//1. 학생 정보 구조체 만들기
	//2. 학생 정보는 이름, 휴대폰번호, 나이, 주소가 있음
	//3. 100명의 학생 정보를 랜덤하게 저장하여 출력
	//4. 랜덤값은 배열에 값을 저장하고 랜덤하게 불러오게 처리
	struct student st[100];
	srand(time(NULL));		//계속 변화시켜줌

	//문자열을 배열에 저장하는 코드 char*
	char* name[5] = { "최효정", "김예진", "성다애", "도지수", "손한별" };
	char* tel[5] = { "010-1234-5678","010-8652-4138","010-7856-1238", "010-9872-0548", "010-3874-6547" };
	int age[5] = { 20,25,30,35,40 };
	char* addr[5] = { "대구", "서울", "부산", "인천","광주" };


	//입력
	for (int i = 0; i < 100; i++)
	{
		strcpy(st[i].name, name[rand() % 5]);	//뒤에 나눠주는 수는 데이터의 개수만큼
		strcpy(st[i].tel, tel[rand() % 5]);
		st[i].age = age[rand() % 5];
		strcpy(st[i].addr, addr[rand() % 5]);
	}
	//출력
	for (int i = 0; i < 100; i++)
	{
		printf("%d번째 학생 정보\n", i + 1);
		printf("\n");
		printf("이름: %s\n", st[i].name);
		printf("연락처: %s\n", st[i].tel);
		printf("나이: %d\n", st[i].age);
		printf("주소: %s\n", st[i].addr);
		printf("----------------------\n");
	}

	st[0].pro.age = 50;	//첫번째 학생의 담당교수의 나이
	strcpy(st[0].pro.name, "홍교수");	//첫번째학생의 담당교수의 이름
	printf("%s 학생의 담당교수: %s\n", st[0].name, st[0].pro.name);
}