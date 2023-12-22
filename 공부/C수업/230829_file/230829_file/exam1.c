#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct fren
{
	char name[10];
	char sex[10];
	int age;
}Friend;

int menu();
void write();
void read();
int main()
{	
	while (1) {
		int num = menu();
		switch (num) 
		{
		case 1:
			write();
			break;
		case 2:
			read();
			break;
		case 3:
			printf("종료\n");
			exit(0);
		default:
			printf("Error!!!\n");
		}
	}
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

void write()
{
	//파일쓰기
	FILE* fp;		//매개변수가 반드시 필요한 건 아님
	Friend myfren1;	
	fp = fopen("friend2.bin", "wb");
	printf("이름: ");
	scanf("%s", myfren1.name);
	printf("성별: ");
	scanf("%s", myfren1.sex);
	printf("나이: ");
	scanf("%d", &myfren1.age);
	fwrite(&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);
}
void read()
{
	//파일읽기
	FILE* fp;
	Friend myfren2;
	fp = fopen("friend2.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s\n", myfren2.name);
	printf("%s\n", myfren2.sex);
	printf("%d\n", myfren2.age);
	fclose(fp);
}