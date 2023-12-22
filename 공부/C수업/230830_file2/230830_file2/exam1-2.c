#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//전역변수
const char* name[4] = { "도지수","성다애","김예진","손한별" };
const int age[4] = { 10,15,20,25 };
const char* tel[4] = { "010-1234-5678","010-5676-3218","010-9876-2341","010-7856-2105" };
const char* addr[4] = { "대구시 동구","대구시 중구","대구시 북구","대구시 남구" };

typedef struct _SON {
	char name[20];
	int age;
	char tel[20];
	char addr[20];
} SON;

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
	SON son_write[10] = { 0 };
	FILE* fp = fopen("person_exam_2.bin", "wb");
	for (int i = 0; i < 10; i++) {
		if (fp == NULL) {
			printf("파일 읽기 실패!!!");
			return -1;
		}
		else if (fp != NULL)
		{
			strcpy(son_write[i].name, name[rand() % 4]);
			son_write[i].age = age[rand() % 4];
			strcpy(son_write[i].tel, tel[rand() % 4]);
			strcpy(son_write[i].addr, addr[rand() % 4]);
			fwrite(&son_write[i], sizeof(son_write[i]), 1, fp);
		}
	}
	fclose(fp);
}
void read()
{
	//정상적으로 구조체 1개를 읽었다면
	SON read = { 0 };
	FILE* fp3 = fopen("person_exam_2.bin", "rb");
	while (fread(&read, sizeof(read), 1, fp3) == 1)		//sizeof 안에 구조체 씀(PERSON)
	{
		printf("----------------------------\n");
		printf("이름:%s\n", read.name);
		printf("나이:%d\n", read.age);
		printf("전화:%s\n", read.tel);
		printf("주소:%s\n", read.addr);
		printf("\n");
	}
	fclose(fp3);
}