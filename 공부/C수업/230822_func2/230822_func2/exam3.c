#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��������: �Լ� �ۿ��� ����Ǵ� ����(��� �Լ��� ���� ������ �� ����)
//��������: �Լ� �ȿ����� ��� ������ ����
const char CHECK_FULL = 'f';	//const - ��� ���� (���� ������ �� ���� ����)
// #define CHECK+FULL 'f'
const char CHECK_EVEN = 'e';	
const char CHECK_ODD = 'o';

int main_menu();
void ggd(char n);

int main()
{
	while (1) {	//���� �ݺ�
		int menu = main_menu();		//main_menu�� �Լ��� ��ȯ��Ŵ /->����ġ �ȿ� main_menu()�� ��ȯ���ѵ� ��.

		switch (menu){
		case 1:	
			ggd(CHECK_EVEN);	//¦���� ���
			break;
		case 2:
			ggd(CHECK_ODD);		//Ȧ���� ���			
			break;
		case 3:
			ggd(CHECK_FULL);	//��ü�� ���
			break;
		case 4:
			printf("���α׷� ����\n");
			exit(0);		//���α׷��� ������ ����
		default:
			printf("�߸��� �Է�!\n");
		}
	}
}

int main_menu()	 //�Ű�����x��ȯo
{
	//�Լ������� ������ ��������� ������ �Ű����� x
	printf("--------------------------------\n");
	printf("�������� ����ϴ� �Լ����� v1.0\n");
	printf("--------------------------------\n");
	printf("1.������ ¦���� ���(2,4,6,8)\n");
	printf("2.������ Ȧ���� ���(3,5,7,9)\n");
	printf("3.������ ��ü�� ���(1~9)\n");
	printf("4.���� \n");
	printf("--------------------------------\n");
	printf("����:");
	int menu;
	scanf("%d", &menu);			//�Է¹��� �޴����� �����Լ���x ��ȯ�ؾ���

	return menu;	//�Լ��� ����Ǹ鼭 ����
}

void ggd(char n)		//-> char n
{
	for (int i = 1; i < 10; i++) {	//1~9�� ��
		for (int j = 2; j < 10; j++) { 	//2~9��
			if (j % 2 == 0 && n == CHECK_EVEN) {	//¦�� n=='e'/ CHEAK_EVEN =='e'
				printf("%d x %d = %d\t", j, i, i * j);
			}
			else if (j % 2 != 0 && n == CHECK_ODD) {	//Ȧ�� n=='o' CHEAK_ODD =='o'
				printf("%d x %d = %d\t", j, i, i * j);
			}
			else if (n == CHECK_FULL) {	//��ü CHEAK_FULL =='f'
				printf("%d x %d = %d\t", j, i, i * j);
			}
		}printf("\n");
	}
}