#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//전역변수
const char* name[4] = { "홍길동","전우치","강감찬","유관순" };
const int age[4] = { 10,20,30,40 };
const char* tel[4] = { "010-1234-5678","010-5676-3218","010-9876-2341","010-7856-2105" };
const char* addr[4] = { "대구시 동구","대구시 중구","대구시 북구","대구시 남구" };

typedef struct _PERSON {
	char name[20];
	int age;
	char tel[20];
	char addr[20];
} PERSON;

int menu();
void write();
void read();

int main()
{
	while (1) {
		system("cls");
		switch (menu()) {
		case 1:
			write();
			break;
		case 2:
			read();
			break;
		case 3:
			printf("종료");
			exit(0);
		default:
			printf("Error!!!!");
			break;
		}
		system("pause");
	}
}

int menu()
{
	printf("-------------------------------\n");
	printf("파일 제어 프로그램 v1.0\n");
	printf("-------------------------------\n");
	printf("1.랜덤한 데이터 파일입력\n");
	printf("2.파일에서 읽어오기\n");
	printf("3.종료\n");
	printf("-------------------------------\n");
	printf("선택: ");
	int num;
	scanf("%d", &num);
	return num;
}

void write()
{
	PERSON son[10] = { 0 };
	FILE* fp = fopen("person_exam.bin", "wb");
	for (int i = 0; i < 10; i++)
	{
		if (fp == NULL) {
			printf("파일 쓰기 실패");
			return -1;
		}
		else {
			strcpy(son[i].name, name[rand() % 4]);
			son[i].age = age[rand() % 4];
			strcpy(son[i].tel, tel[rand() % 4]);
			strcpy(son[i].addr, addr[rand() % 4]);
			fwrite(&son[i], sizeof(son[i]), 1, fp);
		}
	}
	fclose(fp);
	printf("파일이 정상적으로 저장되었습니다.\n");
}
void read()
{
	PERSON son_read = { 0 };
	FILE* fp2 = fopen("person_exam.bin", "rb");
	while (fread(&son_read, sizeof(son_read), 1, fp2) == 1)		//sizeof 안에 구조체 씀(PERSON)
	{
		printf("----------------------------\n");
		printf("이름:%s\n", son_read.name);
		printf("나이:%d\n", son_read.age);
		printf("전화:%s\n", son_read.tel);
		printf("주소:%s\n", son_read.addr);
		printf("\n");
	}
	fclose(fp2);
}