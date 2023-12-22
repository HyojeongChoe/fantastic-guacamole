#define _CRT_SECURE_NO_WARNINGS	//fopen, fclose
#include <stdio.h>	//printf()
#include <stdlib.h>	//exit(0)
#include <string.h>	// strcpy()
#include "file.h"

void file_write_rand(ADDR ad[], char filename[], int len)
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}
	for (int i = 0; i < len; i++) {
		fwrite(&ad[i], sizeof(ADDR), 1, fp);
	}
	fclose(fp);
}

void file_write(ADDR ad, char filename[])	//���ǿ� �ִ� �Ű������� �󲮵���. ���ο��� ȣ���� �� ä����
{
	FILE* fp = fopen(filename, "ab");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}
	fwrite(&ad, sizeof(ADDR), 1, fp);
	fclose(fp);
}

void file_read(char filename[])
{
	// �����Ͱ� ������ "�����Ͱ� �������� �ʽ��ϴ�" ���� �޽����� ���!
	FILE* fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("���� �б� ����!\n");
	}
	ADDR ad = { 0 };	//����ִ� �ӽ� ���� ����
	int count = 1;
	int check = 0;	//while�����ϸ� 1�ιٲ��, ������ϸ� 0	check �÷��׺���
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		printf("��ȣ: %d\n", count++);
		printf("ID: %d\n", ad.id);
		printf("�̸�: %s\n", ad.name);
		printf("��ȭ: %s\n", ad.tel);
		printf("�ּ�: %s\n", ad.addr);
		printf("�̸���: %s\n", ad.email);
		printf("==========================\n");
		check = 1;
	}
	fclose(fp);
	if (check == 0) {
		printf("�����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

void file_del_all(char filename[])
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		exit(0);
	}
	fclose(fp);
}

void file_search(char serch_name[], int serch_id, char serch_email[], char filename[])
{
	//�Է¹��� ���ڿ�->�迭�ʿ� 
	//���Ͼ��� ���ڿ� ��/.
	FILE* fp = fopen(filename, "rb");	//���Ͽ���
	if (fp == NULL) {
		printf("���� �б� ����!!!\n");
	}
	ADDR ad = { 0 };						//���� ���� ���ڿ�
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {						//1. ������ �ݺ��ؼ� ������ �дµ���
		if (strcmp(ad.name, serch_name) == 0 || 
			strcmp(ad.email, serch_email) == 0 || ad.id==serch_id) {	//2. �Է��� ���ڿ� ���Ͼ��� ���ڰ� ���ٸ� (���� �����ϸ� ��ȯ���� 0)
			printf("��ȣ: %d\n", count++);								//3. ���� ���� ������ ����.
			printf("ID: %d\n", ad.id);
			printf("�̸�: %s\n", ad.name);
			printf("��ȭ: %s\n", ad.tel);
			printf("�ּ�: %s\n", ad.addr);
			printf("�̸���: %s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("���� �����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

//�̸��˻�
void file_search1(char serch_name[], char filename[])
{
	//�Է¹��� ���ڿ�->�迭�ʿ� 
	//���Ͼ��� ���ڿ� ��/.
	FILE* fp = fopen(filename, "rb");	//���Ͽ���
	if (fp == NULL) {
		printf("���� �б� ����!!!\n");
	}
	ADDR ad = { 0 };						//���� ���� ���ڿ�
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {						
		if (strcmp(ad.name, serch_name) == 0 ) {	
			printf("��ȣ: %d\n", count++);								
			printf("ID: %d\n", ad.id);
			printf("�̸�: %s\n", ad.name);
			printf("��ȭ: %s\n", ad.tel);
			printf("�ּ�: %s\n", ad.addr);
			printf("�̸���: %s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("���� �����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

//ID�˻�
void file_search2(int serch_id, char filename[])
{
	FILE* fp = fopen(filename, "rb");	
	if (fp == NULL) {
		printf("���� �б� ����!!!\n");
	}
	ADDR ad = { 0 };						
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {						
		if (ad.id == serch_id) {	
			printf("��ȣ: %d\n", count++);								
			printf("ID: %d\n", ad.id);
			printf("�̸�: %s\n", ad.name);
			printf("��ȭ: %s\n", ad.tel);
			printf("�ּ�: %s\n", ad.addr);
			printf("�̸���: %s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("���� �����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}	   

//�̸��ϰ˻�
void file_search3(char serch_email[], char filename[])
{
	FILE* fp = fopen(filename, "rb");	
	if (fp == NULL) {
		printf("���� �б� ����!!!\n");
	}
	ADDR ad = { 0 };						
	int count = 1;
	int check = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {						
		if (strcmp(ad.email, serch_email) == 0) {	
			printf("��ȣ: %d\n", count++);								
			printf("ID: %d\n", ad.id);
			printf("�̸�: %s\n", ad.name);
			printf("��ȭ: %s\n", ad.tel);
			printf("�ּ�: %s\n", ad.addr);
			printf("�̸���: %s\n", ad.email);
			printf("==========================\n");
			check = 1;
		}
	}
	fclose(fp);
	if (check == 0) {
		printf("���� �����Ͱ� �������� �ʽ��ϴ�.\n");
	}
}

//�˼����� �̻��� ������ �߸� static ADDR arr[1000]={0}; ����
//1. ������ �̸� �Է¹���
//2. ���Ͽ��� ���� �̸��� ������ �̸��� ��
//3. �̸��� �ٸ� ����ü���� �迭�� ����
void file_delete(char del_name[], char filename[])
{
	FILE* fp = fopen(filename, "rb");	//���Ͽ���
	if (fp == NULL) {
		printf("���� �б� ����!!!\n");
	}
	ADDR ad = { 0 };						//���� ���� ���ڿ�
	ADDR del_arr[50] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {		//1. ������ �ݺ��ؼ� ������ �дµ���
		if (strcmp(ad.name, del_name) != 0) {			//2. �Է��� ���ڿ� ���Ͼ��� ���ڰ� �����ʴٸ� //3. �������� �����͸� ������ ������ ������ ���.
			del_arr[i].id = ad.id;						//�� �迭�� ����
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
		printf("������ �����Ͱ� �������� �ʽ��ϴ�..\n");
		return;
	}

	/*�迭�� ����� ����ü ������ ���Ͽ� ����*/
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!!!\n");
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
/*������ ������ �̸� �ΰ��� �ʿ� */
//void file_modify(char filename[],char before_name[], ADDR modify)
//{
//	FILE* fp = fopen(filename, "rb");	//���Ͽ���
//	if (fp == NULL) {
//		printf("���� �б� ����!!!\n");
//	}
//	ADDR ad = { 0 };						//���� ���� ���ڿ�
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
//		printf("�����ҵ����Ͱ� �������� �ʽ��ϴ�.\n");
//		return;	//return �����ν� �ؿ����� ����x
//	}
//	
//	/*�迭�� ����� ����ü ������ ���Ͽ� ����*/
//	FILE* fp2 = fopen(filename, "wb");
//	if (fp2 == NULL) {
//		printf("���� ���� ����!!!\n");
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
		printf("���� �˻� ����!\n");
		exit(0);
	}
	ADDR ad = { 0 };
	ADDR del_arr[200] = { 0 };
	int count = 1;
	int check = 0;
	int i = 0;
	// �����Ͱ� 1�� �������� �̻��� �Ǵ� ���� [230905_mail]				side effect
	while (fread(&ad, sizeof(ad), 1, fp) == 1) {
		if (strcmp(ad.name, delName) != 0) { // ������ �̸��� �ƴ϶��
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
	printf("������ ����:%d\n", i);
	if (check == 0 && strcmp(ad.name, delName) != 0) {
		printf("������ �����Ͱ� �������� �ʽ��ϴ�.\n");
		return; // void �Լ� ����
	}

	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!\n");
		return;
	}
	for (int i = 0; i < 200; i++) {
		if (del_arr[i].id == 0) break;	//�迭�� ������ ���ٸ� Ż�� . �ݺ��� 200�� �����ʿ�x
		fwrite(&del_arr[i], sizeof(ADDR), 1, fp2);
	}
	fclose(fp2);

}
void file_update(char filename[], char beforename[], char aftername[])
{
	FILE* fp = fopen(filename, "rb");	//���Ͽ���
	if (fp == NULL) {
		printf("���� �б� ����!!!\n");
	}
	ADDR ad = { 0 };						//���� ���� ���ڿ�
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
		printf("������ �����Ͱ� �������� �ʽ��ϴ�.\n");
		return;	//return �����ν� �ؿ����� ����x
	}
	/*�迭�� ����� ����ü ������ ���Ͽ� ����*/
	FILE* fp2 = fopen(filename, "wb");
	if (fp2 == NULL) {
		printf("���� ���� ����!!!\n");
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