#include <stdio.h>

int main()
{
	char* name = "��ȿ��";
	int age = 29;
	char* tel = "010-6339-2099";
	char* addr = "�뱸�� ���� �����3, 6�� 502ȣ";
	float height = 170.6;
	float weight = 57.5;
	char blood = 'A';

	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("��ȭ: %s\n", tel);
	printf("�ּ�: %s\n", addr);
	printf("Ű: %.1fcm\n", height);
	printf("������: %.1fkg\n", weight);
	printf("������: %c��\n", blood);



	//������ ���� a�� 100 ����, ������ ���� b�� 200����
    //������ ���� c�� a+B ����� �����ϰ� ȭ�鿡 ���

	   
	int a, b, c; //������ ���� �� ����, "int a = 100;" -> ����� ���ÿ� �ʱ�ȭ


	a = 100;
	b = 200;
	c = a + b; // or int c=0;   ���ٷξ��� ���ٷ� ���� ����
	           //    c=a+b;   

	
	printf("���: %d\n", c);
	printf("%d+%d=%d\n", a, b, c);
	printf("%d�� %d�� ���� %d�̴�\n", a, b, c);


	
}



