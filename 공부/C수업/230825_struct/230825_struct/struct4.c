#include <stdio.h>
//5.c�߰��ؼ� scanf����Ͽ� ó�� (�ʱⰪ ��� x)
struct person
{
	char name[20];
	char tel[20];	//����ü ����
	int age;
};

int main()
{
	struct person arr[3] = {	//����ü ������ �迭��
		{"�̽±�", "010-1234-4567", 21},
		{"������", "010-4534-4564", 24},
		{"������", "010-7852-8537", 20}
	};
	for (int i = 0; i < 3; i++) {
		printf("�̸�: %s ����ó: %s ����: %d \n", arr[i].name, arr[i].tel, arr[i].age);
	}
	
}