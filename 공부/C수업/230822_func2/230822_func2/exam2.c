#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main_menu();
void ggd(int n);

//void ggd_even();
//void ggd_odd();
//void ggd_full();

int main()
{
	

	//------------------------------
	//�������� ����ϴ� �Լ�����v1.0
	//------------------------------
	//1. ������ ¦���� ���(2,4,6,8)
	//2. ������ Ȧ���� ���(3,5,7,9)
	//3. ������ ��ü ���(2~9)
	//4. ����
	// -----------------------------
	//�޴� ����: 
	
	while (1) {
		int menu=main_menu();		//main_menu�� �Լ��� ��ȯ��Ŵ /->����ġ �ȿ� main_menu()�� ��ȯ���ѵ� ��.
		
		switch (menu)			
		{
		case 1:
			ggd(menu);		//¦���� ���	���ڷ� �������� ���� 'e'  const char CHECK_EVEN = 'e';
			break;
		case 2:
			ggd(menu);		//Ȧ���� ���						'o'
			break;
		case 3:
			ggd(menu);			//��ü�� ���
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
//
//void ggd_full()
//{
//	for (int i = 1; i < 10; i++) {	//1~9�� ��
//		for (int j = 2; j < 10; j++){ 	//2~9��
//			printf("%d x %d = %d\t", j, i, i * j);
//		}printf("\n");
//	}
//}
//void ggd_even()		//¦����
//{
//	for (int i = 1; i < 10; i++) {	//1~9�� ��
//		for (int j = 2; j < 10; j++) { 	//2~9��
//			if (j % 2 == 0) {
//				printf("%d x %d = %d\t", j, i, i * j);
//			}
//		}printf("\n");
//	}
//}
//void ggd_odd()		//Ȧ����
//{
//	for (int i = 1; i < 10; i++) {	//1~9�� ��
//		for (int j = 2; j < 10; j++){ //2~9��
//			if (j % 2 == 1) {
//				printf("%d x %d = %d\t", j, i, i * j);
//			}
//		}printf("\n");
//	}
//}

void ggd(int n)		//-> char n
{
	for (int i = 1; i < 10; i++) {	//1~9�� ��
		for (int j = 2; j < 10; j++) { 	//2~9��
			if (j % 2 == 0 && n == 1) {	//¦�� n=='e'/ CHEAK_EVEN =='e'
				printf("%d x %d = %d\t", j, i, i * j);
			}
			else if (j % 2 == 1 && n == 2) {	//Ȧ�� n=='o' CHEAK_ODD =='o'
				printf("%d x %d = %d\t", j, i, i * j);
			}
			else if (n == 3) {	//��ü CHEAK_FULL =='f'
				printf("%d x %d = %d\t", j, i, i * j);
			}
		}printf("\n");
	}
}