#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	while (1) {
		system("cls");	//cls: ȭ���� û���ϴ� ������ɾ�
		printf("------------------------------------------- \n");
		printf("\n");
		printf("�Ĵ� �޴� �ڵ� �ֹ� ���α׷� v1.0 \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("\n");
		printf("a. ��ġ�	: 5,000��\n");
		printf("b. �����	: 5,000��\n");
		printf("c. Į����	: 4,500��\n");
		printf("d. ��ġ����	: 4,000��\n");
		printf("e. �����	: 5,000��\n");
		printf("x. ���α׷� ����\n");

		char opt;		//���� ���� ����

		printf("�޴��� �����ϼ��� : ");
		scanf(" %c", &opt);				//a~e���� ���� �Է�   //%c�տ� ������ ��..

		switch (opt) {
		case 'a': case 'A':
			printf("��ġ��� �ֹ��߽��ϴ�.\n"); break;
		case 'b': case 'B':
			printf("������� �ֹ��߽��ϴ�.\n"); break;
		case 'c': case 'C':
			printf("Į������ �ֹ��߽��ϴ�.\n"); break;
		case 'd': case 'D':
			printf("��ġ������ �ֹ��߽��ϴ�.\n"); break;
		case 'e': case 'E':
			printf("������� �ֹ��߽��ϴ�.\n"); break;
		case 'x': case 'X':
			printf("���� �����մϴ�. \n");
			exit(0);		//������ ���� ����

			//�ܺ� ���α׷��� C��� ������ ���۽�Ű�� �Լ�
		}system("pause");		//������ �Ͻ�����

	}
}