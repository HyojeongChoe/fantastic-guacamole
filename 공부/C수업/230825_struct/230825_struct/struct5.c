#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct person
{
	char name[20];
	char tel[20];	
	int age;
	char addr[20];
};

int main()
{
	struct person arr[3];	//����ü �迭 ����; 3���� ���� 3���� ���� ����
	//�Է�
	for (int i = 0; i < 3; i++) {
		system("cls");		//ȭ���� û��
		printf("�̸�: ");
		scanf("%s", arr[i].name);	//scanf�� ���ڿ� ���� ©��
		printf("����ó: ");
		scanf("%s", arr[i].tel);
		printf("����: ");
		scanf("%d", &arr[i].age);	//���� ������ ����Ǵ� ���� �Ϲݺ��� age�̹Ƿ� &���� 
		printf("����: ");
		scanf("%s", arr[i].addr);
		printf("\n");
		system("pause");
	}
	/*���*/
	for (int i = 0; i < 3; i++) {
		printf("�̸�:%s\n", arr[i].name);
		printf("����ó:%s\n", arr[i].tel);
		printf("����:%d\n", arr[i].age);
		printf("����:%s\n", arr[i].addr);
		printf("-----------------------\n");
	}
	//struct person man;	//����ü ����
	////�Է�
	//for (int i = 0; i < 3; i++) {
	//	printf("�̸�: ");
	//	scanf("%s", man.name);
	//	printf("����ó: ");
	//	scanf("%s", man.tel);
	//	printf("����: ");
	//	scanf("%d", &man.age);
	//	printf("�ּ�: ");
	//	scanf("%s", man.addr);
	//}
	////���
	//for (int i = 0; i < 3; i++) {
	//	printf("�̸�: %s", man.name);
	//	printf("����ó: %s", man.tel);
	//	printf("����: %s", man.age);
	//	printf("�ּ�: %s", man.addr);
	//}
}
//struct person man;	//����ü ����
/*for (int i = 0; i < 3; i++) {
	printf("�̸�: ");
	scanf("%s", man.name);
	printf("����ó: ");
	scanf("%s", man.tel);
	printf("����: ");
	scanf("%d", &man.age);
	printf("����: ");
	scanf("%s", man.addr);
	printf("\n");
}*/