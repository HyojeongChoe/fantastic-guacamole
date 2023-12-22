#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct fren 
{
	char name[10];
	char sex;
	int age;
} Friend;	//구조체 정의

int main()
{
	FILE* fp;
	Friend myfren1;	//구조체변수
	Friend myfren2;	//초기화는 ={0};
	/***file write ***/
	fp = fopen("friend.bin", "wb");	//여러가지 정보들이 있는 경우 binary로 만드는게 ㄴㅏㅡ음
	printf("이름, 성별, 나이 순 입력: ");
	scanf("%s %c %d", myfren1.name, &myfren1.sex, &myfren1.age);
	fwrite(&myfren1, sizeof(myfren1), 1, fp);	//주소를 던져줌 한 덩어리(이름 성별 나이) 를
	fclose(fp);
	/***file read***/
	fp = fopen("friend.bin", "rb");
	fread(&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
	return 0;
}