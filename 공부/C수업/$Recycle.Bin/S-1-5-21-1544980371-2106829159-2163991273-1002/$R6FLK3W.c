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
	PERSON son = { "��ȿ��",29,"010-1234-5678","�뱸�� ���� ���̵�" };
	PERSON son2 = { "������",29,"010-5678-1234","���� �Ͼ���" };

	//���Ͼ���
	FILE* fp = fopen("person.bin", "wb");
	if (fp == NULL) {
		printf("���� ���� ����!!\n");
		return -1;
	}

	fwrite(&son, sizeof(son), 1, fp);
	fread(&son2, sizeof(son2), 1, fp);
	printf("���Ͽ� ���������� ����Ǿ����ϴ�.\n");
	fclose(fp);
	
	//���Ͽ���
	FILE* fp2 = fopen("person.bin", "rb");
	if (fp == NULL) {
		printf("���� �б� ���� ����!!\n");
		return -1;
	}
	PERSON temp = { 0 };	//���Ͽ��� ����ü ������ �о� �����ϴ� �� ����ü
	fread(&temp, sizeof(temp), 1, fp2);
	printf("�̸�: %s ����: %d ����ó: %s �ּ�: %s\n", temp.name, temp.age, temp.tel, temp.addr);
	fclose(fp2);
	fread(&temp, sizeof(temp), 1, fp2);
	printf("�̸�: %s ����: %d ����ó: %s �ּ�: %s\n", temp.name, temp.age, temp.tel, temp.addr);
	fclose(fp2);

	//�����б�2
	FILE* fp3 = fopen("person.bin", "rb");
	if (fp == NULL) {
		printf("���� �б� ���� ����!!\n");
		return -1;
	}
	PERSON temp3 = { 0 };	//���Ͽ��� ����ü ������ �о� �����ϴ� �� ����ü
	//���Ͽ��� ���������� ����ü1���� �о��ٸ�
	while (fread(&temp3, sizeof(temp3), 1, fp3) == 1) {
		printf("�̸�: %s ����: %d ����ó: %s �ּ�: %s\n", temp.name,
			temp.age, temp.tel, temp.addr);
	}
	fclose(fp3);

}