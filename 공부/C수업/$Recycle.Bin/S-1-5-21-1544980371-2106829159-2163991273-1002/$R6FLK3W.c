#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _PERSON
{
	char name[20];
	int age;
	char tel[20];
	char addr[50];
} PERSON;
int main()
{
	PERSON son = { "최효정",29,"010-1234-5678","대구시 동구 방촌동" };
	PERSON son2 = { "도지수",29,"010-5678-1234","경산시 하양읍" };

	//파일쓰기
	FILE* fp = fopen("person.bin", "wb");
	if (fp == NULL) {
		printf("파일 오픈 실패!!\n");
		return -1;
	}

	fwrite(&son, sizeof(son), 1, fp);
	fread(&son2, sizeof(son2), 1, fp);
	printf("파일에 정상적으로 저장되었습니다.\n");
	fclose(fp);
	
	//파일열기
	FILE* fp2 = fopen("person.bin", "rb");
	if (fp == NULL) {
		printf("파일 읽기 오픈 실패!!\n");
		return -1;
	}
	PERSON temp = { 0 };	//파일에서 구조체 정보를 읽어 저장하는 빈 구조체
	fread(&temp, sizeof(temp), 1, fp2);
	printf("이름: %s 나이: %d 연락처: %s 주소: %s\n", temp.name, temp.age, temp.tel, temp.addr);
	fclose(fp2);
	fread(&temp, sizeof(temp), 1, fp2);
	printf("이름: %s 나이: %d 연락처: %s 주소: %s\n", temp.name, temp.age, temp.tel, temp.addr);
	fclose(fp2);

	//파일읽기2
	FILE* fp3 = fopen("person.bin", "rb");
	if (fp == NULL) {
		printf("파일 읽기 오픈 실패!!\n");
		return -1;
	}
	PERSON temp3 = { 0 };	//파일에서 구조체 정보를 읽어 저장하는 빈 구조체
	//파일에서 정사적으로 구조체1개를 읽었다면
	while (fread(&temp3, sizeof(temp3), 1, fp3) == 1) {
		printf("이름: %s 나이: %d 연락처: %s 주소: %s\n", temp.name,
			temp.age, temp.tel, temp.addr);
	}
	fclose(fp3);

}