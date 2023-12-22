#define _CRT_SECURE_NO_WARNINGS	//fopen, fclose
#include <stdio.h>	//printf()
#include <stdlib.h>	//exit(0)
#include <string.h>	// strcpy()
#include "file.h"

void file_write_rand(ADDR ad[], char filename[], int len)
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}

void file_write(ADDR ad, char filename[])	//정의에 있는 매개변수는 빈껍데기. 메인에서 호출할 때 채워짐
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_read(char filename[])
{
	// 데이터가 없으면 "데이터가 존재하지 않습니다" 에러 메시지를 출력!
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 읽기 오류!\n");
	}
	ADDR ad = { 0 };	//비어있는 임시 변수 생성
	int count = 1;
	int check = 0;	//while수행하면 1로바뀌고, 수행안하면 0	check 플래그변수
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		printf("번호: %d\n", count++);
		printf("ID: %d\n", ad.id);
		printf("이름: %s\n", ad.name);
		printf("전화: %s\n", ad.tel);
		printf("주소: %s\n", ad.addr);
		printf("이메일: %s\n", ad.email);
		printf("==========================\n");
		check = 1;
	}
	fclose(fp);
	if (check == 0) {
		printf("데이터가 존재하지 않습니다.\n");
	}
}

void file_del_all(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("파일 삭제 오류!\n");
		exit(0);
	}
	fclose(fp);
}

void file_search(char serch_name[], int serch_id, char serch_email[], char filename[])
{
	//입력받은 문자열->배열필요 
	//파일안의 문자열 비교/.
	FILE* fp = fopen(filename, "rb");	//파일오픈
	if (fp == NULL) {
		printf("파일 읽기 오류!!!\n");
	}
	ADDR ad = { 0 };						//파일 안의 문자열
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {						//1. 파일을 반복해서 끝까지 읽는동안
		if (strcmp(ad.name, serch_name) == 0 || 
			strcmp(ad.email, serch_email) == 0 || ad.id==serch_id) {	//2. 입력한 문자와 파일안의 문자가 같다면 (값이 동일하면 반환값은 0)
			printf("번호: %d\n", count++);								//3. 같은 값의 정보를 송출.
			printf("ID: %d\n", ad.id);
			printf("이름: %s\n", ad.name);
			printf("전화: %s\n", ad.tel);
			printf("주소: %s\n", ad.addr);
			printf("이메일: %s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("비교할 데이터가 존재하지 않습니다.\n");
	}
}

//이름검색
void file_search1(char serch_name[], char filename[])
{
	//입력받은 문자열->배열필요 
	//파일안의 문자열 비교/.
	FILE* fp = fopen(filename, "rb");	//파일오픈
	if (fp == NULL) {
		printf("파일 읽기 오류!!!\n");
	}
	ADDR ad = { 0 };						//파일 안의 문자열
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {						
		if (strcmp(ad.name, serch_name) == 0 ) {	
			printf("번호: %d\n", count++);								
			printf("ID: %d\n", ad.id);
			printf("이름: %s\n", ad.name);
			printf("전화: %s\n", ad.tel);
			printf("주소: %s\n", ad.addr);
			printf("이메일: %s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("비교할 데이터가 존재하지 않습니다.\n");
	}
}

//ID검색
void file_search2(int serch_id, char filename[])
{
	FILE* fp = fopen(filename, "rb");	
	if (fp == NULL) {
		printf("파일 읽기 오류!!!\n");
	}
	ADDR ad = { 0 };						
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {						
		if (ad.id == serch_id) {	
			printf("번호: %d\n", count++);								
			printf("ID: %d\n", ad.id);
			printf("이름: %s\n", ad.name);
			printf("전화: %s\n", ad.tel);
			printf("주소: %s\n", ad.addr);
			printf("이메일: %s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("비교할 데이터가 존재하지 않습니다.\n");
	}
}	   

//이메일검색
void file_search3(char serch_email[], char filename[])
{
	FILE* fp = fopen(filename, "rb");	
	if (fp == NULL) {
		printf("파일 읽기 오류!!!\n");
	}
	ADDR ad = { 0 };						
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {						
		if (strcmp(ad.email, serch_email) == 0) {	
			printf("번호: %d\n", count++);								
			printf("ID: %d\n", ad.id);
			printf("이름: %s\n", ad.name);
			printf("전화: %s\n", ad.tel);
			printf("주소: %s\n", ad.addr);
			printf("이메일: %s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("비교할 데이터가 존재하지 않습니다.\n");
	}
}

//알수없는 이상한 오류가 뜨면 static ADDR arr[1000]={0}; 적기
//1. 삭제할 이름 입력받음
//2. 파일에서 읽은 이름과 삭제할 이름을 비교
//3. 이름이 다른 구조체들을 배열에 복사
void file_delete(char del_name[], char filename[])
{
	FILE* fp = fopen(filename, "rb");	//파일오픈
	if (fp == NULL) {
		printf("파일 읽기 오류!!!\n");
	}
	ADDR ad = { 0 };						//파일 안의 문자열
	ADDR del_arr[50] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {		//1. 파일을 반복해서 끝까지 읽는동안
		if (strcmp(ad.name, del_name) != 0) {			//2. 입력한 문자와 파일안의 문자가 같지않다면 //3. 같은값의 데이터를 제외한 나머지 정보를 출력.
			del_arr[i].id = ad.id;						//빈 배열에 복사
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	int size = i;
	if (strcmp(ad.name, "") == 0)
	{
		printf("삭제할 데이터가 존재하지 않습니다..\n");
		return;
	}

	/*배열에 저장된 구조체 정보를 파일에 쓰기*/
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 오픈 실패!!!\n");
		return;
	}
	for (int i = 0; i < size; i++) {
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	//for (int i = 0; i < 50; i++) {
	//	if (strcmp(del_arr[i].name, "") == 0) {
	//		break;
	//	}
	//fwrite(&del_arr[i], sizeof(del_arr[i]), 1, fp2);
	//}
	fclose(fp2);
}
/*변경전 변경후 이름 두개가 필요 */
//void file_modify(char filename[],char before_name[], ADDR modify)
//{
//	FILE* fp = fopen(filename, "rb");	//파일오픈
//	if (fp == NULL) {
//		printf("파일 읽기 오류!!!\n");
//	}
//	ADDR ad = { 0 };						//파일 안의 문자열
//	ADDR modify_arr[50] = { 0 };
//	int count = 1;
//	int check = 0;
//	int i = 0;
//	while (fread(&ad, sizeof(ad), 1, fp) == 1) {		
//		if (strcmp(ad.name, before_name) != 0) {	
//			modify_arr[i].id = ad.id;
//			strcpy(modify_arr[i].name, ad.name);
//			strcpy(modify_arr[i].addr, ad.addr);
//			strcpy(modify_arr[i].tel, ad.tel);
//			strcpy(modify_arr[i].email, ad.email);
//			check = 1;
//			i++;
//		}
//		else if (strcmp(ad.name, before_name) == 0) {
//			modify_arr[i].id = ad.id;
//			strcpy(modify_arr[i].name, modify.name);
//			strcpy(modify_arr[i].addr, ad.addr);
//			strcpy(modify_arr[i].tel, ad.tel);
//			strcpy(modify_arr[i].email, ad.email);
//			check = 1;
//			i++;
//		}
//	}
//	fclose(fp);
//	if (check == 0) {
//		printf("변경할데이터가 존재하지 않습니다.\n");
//		return;	//return 함으로써 밑에파일 오픈x
//	}
//	
//	/*배열에 저장된 구조체 정보를 파일에 쓰기*/
//	FILE* fp2 = fopen(filename, "wb");
//	if (fp2 == NULL) {
//		printf("파일 오픈 실패!!!\n");
//		return;
//	}
//	int len = sizeof(modify_arr)/ sizeof(ADDR);
//	for (int i = 0; i < len; i++) {
//		if (strcmp(modify_arr[i].name, "") == 0) {
//			break;
//		}
//		/*if(del_arr[i].id!=0)*/
//		fwrite(&modify_arr[i], sizeof(modify_arr[i]), 1, fp2);
//	}
//	fclose(fp2);
//}
void file_delete2(char filename[], char delName[])
{
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("파일 검색 오류!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	// 데이터가 1개 남았으면 미삭제 되는 버그 [230905_mail]				side effect
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delName) != 0) { // 삭제할 이름이 아니라면
			del_arr[i].id = ad.id;
			strcpy(del_arr[i].name, ad.name);
			strcpy(del_arr[i].addr, ad.addr);
			strcpy(del_arr[i].tel, ad.tel);
			strcpy(del_arr[i].email, ad.email);
			check = 1;
			i++;
		}
	}
	fclose(fp);
	printf("복사한 개수:%d\n", i);
	if (check == 0 && strcmp(ad.name, delName) != 0) {
		printf("삭제할 데이터가 존재하지 않습니다.\n");
		return; // void 함수 종료
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	for (int i = 0; i < 200; i++) {
		if (del_arr[i].id == 0) break;	//배열에 정보가 없다면 탈출 . 반복문 200번 돌릴필요x
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);

}
void file_update(char filename[], char beforename[], char aftername[])
{
	FILE* fp = fopen(filename, "rb");	//파일오픈
	if (fp == NULL) {
		printf("파일 읽기 오류!!!\n");
	}
	ADDR ad = { 0 };						//파일 안의 문자열
	ADDR update_arr[50] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, beforename) == 0) {
			strcpy(update_arr[i].name, aftername);
			check = 1;
		}
		else {
			strcpy(update_arr[i].name, ad.name);
		}
		update_arr[i].id = ad.id;
		strcpy(update_arr[i].addr, ad.addr);
		strcpy(update_arr[i].tel, ad.tel);
		strcpy(update_arr[i].email, ad.email);
		check = 1;
		i++;
	}
	fclose(fp);
	if (check == 0) {
		printf("수정할 데이터가 존재하지 않습니다.\n");
		return;	//return 함으로써 밑에파일 오픈x
	}
	/*배열에 저장된 구조체 정보를 파일에 쓰기*/
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("파일 오픈 실패!!!\n");
		return;
	}
	int len = sizeof(update_arr) / sizeof(ADDR);
	for (int i = 0; i < len; i++) {
		if (strcmp(update_arr[i].name, "") == 0) {
			break;
		}
		/*if(del_arr[i].id!=0)*/
		fwrite(&update_arr[i], sizeof(update_arr[i]), 1, fp2);
	}
	fclose(fp2);
}