#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	// 1. �Է¹��� num ���� ��					//�� 3�� ��  ���� if��
	if (num > 0) {
		printf("%d��(��) 0���� ũ�� \n", num);	//num�� 0���� ũ�� ���� ����
	}

	// 2. �Է¹��� num ���� ��
	if (num < 0) {
		printf("%d��(��) 0���� �۴� \n", num);	//num�� 0���� ������ ���� ����
	}

	// 3. �Է¹��� num ���� ��
	if (num == 0) {
		printf("%d��(��) 0�̴� \n", num);		//num�� 0�̸� ���� ����
	}

	//--------------------------------------------------------------------------------------------//
	
	//3���� ����� ���� ����
	//if ������ ���̾ƴϸ� �Ʒ��� �Ѿ

	if (num < 0) {
		printf("�Է°��� 0���� �۴� \n");			//num�� 3�̸� �Ʒ��������� �Ѿ
	}

	else if (num > 0) {
		printf("�Է°��� 0���� ũ�� \n");			//
	}
	else {										//if���ǰ� elseif������ ������ ��� ����
		printf("�Է°��� 0�̴� \n");				//else�� ���� else if �� �ᵵ ��
	}

	//--------------------------------------------------------------------------------------------

	//���������� ��� if - else ����(yes/no Ȧ/¦)
	if (num < 0) {								//0���� ���� ����
		printf("�Է°��� 0���� �۴� \n");
	}
	else {										//���� ��츦 ������ ��� ����
		printf("�Է°��� 0���� ũ�ų� ���� \n");

	}
}