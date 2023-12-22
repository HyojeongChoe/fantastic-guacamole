#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//주의: 파일에 저장할 때 기존 데이터가 계쏙 존재해야됨

//if (strcmp(data[i].name, "") == 0) {break;}

//상수변수
const char* name[5] = { "최효정","도지수","성다애","손한별","김예진" };
const char* tel[5] = { "010-5672-8123","010-7862-1058","010-6339-2099","010-4832-0578","010-8848-1071" };
const char* addr[5] = { "대구광역시 동구","대구광역시 중구","대구광역시 서구","대구광역시 남구","대구광역시 군위군" };
const char* model[5] = { "포터","아반떼","그랜저","k7","제네시스g80" };
const char* price[5] = { "이천만원","삼천만원","사천만원","육천만원","구천만원" };
const int year[5] = { 1,2,3,4,5 };

typedef struct _CAR {	//자동차 정보
	char model[20];
	char price[20];
	int year;
}CAR;

typedef struct _CUST {	//고객 정보
	char name[20];
	char tel[20];
	char addr[20];
	CAR ca;
}CUST;


int menu();
void write(CUST data[],char filename[]);		//수동입력함수
void ran_write(CUST data[],char filename[]);	//랜덤입력함수
void read(char filename[]);		//읽기
void del(char filename[]);		//삭제
int main()
{
	char filename[] = "person_car.bin";	//파일이름배열 선언
	CUST data[10] = { 0 };	//입력값을 넣을 공간 선언
	
	srand(time(NULL));		//랜덤 저장
	
	while (1) {
		int num = menu();
		system("cls");
		switch (num) {
		case 1:
			write(data, filename);
			break;
		case 2:
			ran_write(data, filename);
			break;
		case 3:
			read(filename);
			break;
		case 4:
			del(filename);
			break;
		default:
			printf("Error!!!\n");
			exit(0);
		}
		system("pause");
	}
}
	

int menu()
{
	printf("============================\n");
	printf("고객 차량 관리 프로그램v2.0\n");
	printf("============================\n");
	printf("1.고객 정보 직접 입력\n");
	printf("2.고객 정보 랜덤 입력\n");
	printf("3.고객 정보 보기\n");
	printf("4.고객 정보 전체 삭제\n");
	printf("----------------------------\n");
	printf("선택: ");
	int num;
	scanf("%d", &num);
	return num;
}
void write(CUST data[],char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 쓰기 실패!!\n");
		return -1;
	}
	else {
		printf("고객 이름: ");
		scanf("%s", data[0].name);
		printf("고객 연락처: ");
		scanf("%s", data[0].tel);
		printf("고객 주소: ");
		getchar();	//gets사용시 필수 위쪽에 입력
		gets(data[0].addr);	//공백까지 입력받기위해 gets사용
		printf("차량모델: ");
		scanf("%s", data[0].ca.model);
		printf("가격: ");
		scanf("%s", data[0].ca.price);
		printf("연식: ");
		scanf("%", &data[0].ca.year);
		fwrite(&data[0], sizeof(data[0]), 1, fp);
	}
	fclose(fp);
	printf("파일이 정상적으로 입력되었습니다\n");
}
void ran_write(CUST data[], char filename[])
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 쓰기 실패!!\n");
		return -1;
	}
	else {
		for (int i = 0; i < 10; i++) {
			strcpy(data[i].name, name[rand() % 5]);
			strcpy(data[i].tel, tel[rand() % 5]);
			strcpy(data[i].addr, addr[rand() % 5]);
			strcpy(data[i].ca.model, model[rand() % 5]);
			strcpy(data[i].ca.price, price[rand() % 5]);
			data[i].ca.year= year[rand() % 5];
			fwrite(&data[i], sizeof(data[i]), 1, fp);
		}
	}
	fclose(fp);
	printf("파일이 정상적으로 입력되었습니다.\n");
}
void read(char filename[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 실패!!!\n");
		return -1;
	}
	else {
		CUST temp = { 0 };
		while (fread(&temp, sizeof(temp), 1, fp) == 1) {
		/*	if (strcmp(temp.name, "") == 0) {
				break; 
			}*/
			printf("----------------------------\n");
			printf("이름: %s\n", temp.name);
			printf("연락처: %s\n", temp.addr);
			printf("차모델: %s\n", temp.ca.model);
			printf("가격: %s\n", temp.ca.price);
			printf("연식: %d\n", temp.ca.year);
			printf("\n");
		}
	}
	fclose(fp);
}
void del(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	fclose(fp);
	printf("파일 삭제 완료!!\n");
}