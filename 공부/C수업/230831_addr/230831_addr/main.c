#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const int id[5] = { 111,222,333,444,555 };	
const char* name[5] = { "윤성우","이주연","조수진","박성은","김민지" };
const char* tel[5] = { "010-6339-2099","010-3517-1541","010-9776-1544","010-7205-4830","010-4005-8742" };
const char* addr[5] = { "대구광역시 동구 방촌동","부산광역시 동구 초량동","울산광역시 중구 우정동","대구광역시 중구 동인동","대구광역시 군위군 효령면" };
const char* email[5] = { "gywjd1544@naver.com","sdf1544@naver.com","tvxq202@gmail.com","bbs8@hanmail.net","love486@gmail.com" };

typedef struct _ADDR {
	int id;	//고유한 숫자..
	char name[20];
	char tel[20];
	char addr[30];
	char email[50];
}ADDR;

int menu();
void ran_write(char filename[]);
void write(char filename[]);
void delete(char filename[]);
void read(char filename[]);
int main()
{
	char filename[] = "address.bin";	//파일명변수
	srand(time(NULL));	//값 랜덤 입력
	
	while (1) {
		int num = menu();	//num 값 반환
		switch (num)
		{
		case 1:
			ran_write(filename);
			break;
		case 2:
			write(filename);
			break;
		case 3:
			delete(filename);
			break;
		case 4:
			read(filename);
			break;
		case 5:
			printf("프로그램 종료");
			exit(0);
		default:
			printf("Error!!!\n");
			break;
		}
	}
}

//메뉴선택 함수
int menu()
{
	printf("===========================\n");
	printf("주소록 관리 프로그램 v1.0\n");
	printf("===========================\n");
	printf("1.주소록 자동 생성\n");
	printf("2.주소록 직접 입력\n");
	printf("3.주소록 전체 삭제\n");
	printf("4.주소록 보기\n");
	printf("5.종료\n");
	printf("---------------------------\n");
	printf("선택: ");
	int num;
	scanf("%d", &num);
	return num;
}
//주소록 자동 입력 함수
void ran_write(char filename[])
{
	ADDR per[10] = { 0 };	//값을 저장할 배열변수 
	FILE* fp = fopen(filename, "ab");	//파일오픈
	for (int i = 0; i < 10; i++)
	{
		if (fp == NULL) {
			printf("파일 쓰기 실패!!!\n");
			return -1;
		}
		else {
			per[i].id = id[rand() % 5];
			strcpy(per[i].name, name[rand() % 5]);
			strcpy(per[i].tel, tel[rand() % 5]);
			strcpy(per[i].addr, addr[rand() % 5]);
			strcpy(per[i].email, email[rand() % 5]);
			fwrite(&per[i], sizeof(per[i]), 1, fp);
		}
	}
	fclose(fp);
	printf("파일이 랜덤으로 입력되었습니다.\n");
}
//주소록 수동입력 함수
void write(char filename[])
{
	ADDR per[10] = {0};
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 쓰기 실패!!!\n");
		return -1;
	}
	else {
		printf("ID: ");
		scanf("%d", &per[0].id);
		printf("이름: ");
		scanf("%s", per[0].name);
		printf("연락처: ");
		scanf("%s", per[0].tel);
		printf("주소: ");
		getchar();
		gets(per[0].addr);
		printf("이메일: ");
		scanf("%s", per[0].email);
		fwrite(&per[0], sizeof(per[0]), 1, fp);
	}
	fclose(fp);
	printf("파일이 정상적으로 입력되었습니다.\n");
}
//주소록 삭제 함수
void delete(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	fclose(fp);
	printf("전체파일이 삭제되었습니다.\n");
}
//주소록 읽기 함수
void read(char filename[])
{
	FILE* fp = fopen(filename, "rb");
	ADDR temp = { 0 };
	if (fp == NULL) {
		printf("파일 읽기 실패!!!!\n");
		return -1;
	}
	else{
		while (fread(&temp, sizeof(temp), 1, fp) == 1) {
			printf("-------------------------------\n");
			printf("ID: %d\n", temp.id);
			printf("이름: %s\n", temp.name);
			printf("연락처: %s\n", temp.tel);
			printf("주소: %s\n", temp.addr);
			printf("이메일: %s\n", temp.email);
			printf("\n");
		}
	}
	fclose(fp);
}

