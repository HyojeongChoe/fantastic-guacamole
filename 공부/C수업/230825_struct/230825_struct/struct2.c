#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	//���ڿ� ó�� ����

struct person	//����ü ����(���Ƿδ� ����x)
{
	char name[20];
	char phoneNum[20];	//->������ ��� ����
	int age;
};

int main()
{
	struct person man1, man2;	//����ü ���� man1,man2  person->���������� ������ Ÿ��/ ����� ���� ������ Ÿ��
	//"�ȼ����� man1.name�� ����
	strcpy(man1.name, "�ȼ���");
	strcpy(man1.phoneNum, "010-1234-5678");
	man1.age = 23;

	//�̸��� Ű����� ���� �Է¹���
	printf("�̸� �Է�: "); 
	scanf("%s", man2.name);	//�迭�����̹Ƿ� scanf���� &������ x
	printf("��ȣ �Է�: "); 
	scanf("%s", man2.phoneNum);	//�迭�����̹Ƿ� scanf���� &������ x
	printf("���� �Է�: "); 
	scanf("%d", &man2.age);		//�Ϲݺ����� &����
	
	printf("�̸�: %s \n", man1.name); 
	printf("��ȣ: %s \n", man1.phoneNum);
	printf("����: %d \n", man1.age);

	printf("�̸�: %s \n", man2.name);
	printf("��ȣ: %s \n", man2.phoneNum);
	printf("����: %d \n", man2.age);
	return 0;
}