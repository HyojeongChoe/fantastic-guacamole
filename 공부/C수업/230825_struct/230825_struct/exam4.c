#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
	//-------------------------------
	//	고객차량 관리 프로그램 v1.5
	//-------------------------------
	//1. 고객 및 구매차량 랜덤 입력
	//2. 고객 및 구매차량 보기
	//3. 종료
	//-------------------------------
	//메뉴 선택: 
char* name[5] = { "오승환","김지찬","구자욱","김하성","류지혁" };
char* tel[5] = { "010-1234-5678","010-3753-2189","010-7865-1235","010-9524-4155","010-2435-4568" };
char* addr[8] = { "대구시 동구","대구시 남구","대구시 중구","대구시 북구",
		"대구시 서구","대구시 달서구","대구시 달성군", "대구시 군위군" };
char* job[5] = { "야구선수","공무원","사업가","무직","회사원" };
char* birth[12] = { "1월","2월","3월","4월","5월","6월","7월","8월","9월","10월","11월","12월" };
char* model[5] = { "그랜저","포터","아반떼","K5","K9" };
int price[5] = { 2500, 3500, 5000, 7000, 9000 };
int year[3] = { 2021, 2022, 2023 };
char* color[4] = { "흰색","검정색","회색","빨간색" };
char* office[4] = { "동대구영업소","서대구영업소","북대구영업소","대구본점" };

int show_menu();
void input_menu(struct customer data[]);
void output_menu(struct customer data[]);
struct car {
	char model[20];
	int price;
	int year;
	char color[20];
	char office[20];
};

struct customer {
	char name[20];
	char tel[20];
	char addr[20];
	char job[20];
	char month_of_birth[20];
	struct car ca;	//구매차량
};

int main()
{
	struct customer data[100] = { 0 };	//열명의 정보를 넣을 배열 선언
	srand(time(NULL));		//랜덤하게 추
	
	while (1) {
		int num = show_menu();
		switch (num) 
		{
		case 1:
			input_menu(data);
			break;
		case 2:
			output_menu(data);
			break;
		case 3:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("Error!!!\n");
		}
	}
}

int show_menu()		//반환o, 매개변수x
{
	printf("-------------------------------\n");	//고객정보
	printf("차량 고객관리 프로그램 1.5\n");
	printf("-------------------------------\n");
	printf("1.고객 및 구매차량 랜덤 입력\n");
	printf("2.고객 및 구매차량 보기\n");
	printf("3.종료\n");
	printf("-------------------------------\n");
	printf("선택: ");
	int num;	//입력받을 번호 1~3
	scanf("%d", &num);
	return num;
}

void input_menu(struct customer data[])
{
	for (int i = 0; i < 10; i++)
	{
		strcpy(data[i].name, name[(rand() % 5)]);
		strcpy(data[i].tel, tel[(rand() % 5)]);
		strcpy(data[i].addr, addr[(rand() % 8)]);
		strcpy(data[i].job, job[(rand() % 5)]);
		strcpy(data[i].month_of_birth, birth[(rand() % 12)]);
		strcpy(data[i].ca.model, model[(rand() % 5)]);
		data[i].ca.price = price[(rand() % 5)];
		data[i].ca.year = year[(rand() % 3)];
		strcpy(data[i].ca.color, color[(rand() % 4)]);
		strcpy(data[i].ca.office, office[(rand() % 4)]);
	}
	printf("정상적으로 데이터가 입력되었습니다.\n");
}
void output_menu(struct customer data[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("-------------------------------\n");	//고객정보
		printf("차량 고객관리 프로그램 1.0\n");
		printf("-------------------------------\n");
		printf("이름: %s\n", data[i].name);
		printf("연락처: %s\n", data[i].tel);
		printf("주소: %s\n", data[i].addr);
		printf("직업: %s\n", data[i].job);
		printf("생일쿠폰 발행: %s\n", data[i].month_of_birth);
		printf("\n");
		printf("모델: %s\n", data[i].ca.model);				//차량정보
		printf("가격: %d만원\n", data[i].ca.price);
		printf("연식: %d년\n", data[i].ca.year);
		printf("색상: %s\n", data[i].ca.color);
		printf("영업소: %s\n", data[i].ca.office);
	}
	printf("\n");
}
