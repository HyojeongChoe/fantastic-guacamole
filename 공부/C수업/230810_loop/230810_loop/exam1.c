#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//	//1���� ���ڸ� �Է¹޾� ������ ����ϴ� ���α׷�
	//	//��) 3�� �Է��ϸ� ������ 3�� ���
	
		int d;
		int num = 1;
		printf("�� ���� ����ұ��? ");
		scanf("%d", &d);
		
		while (num < 10)
		{
			printf("%d x %d = %d \n", d, num, d * num);
			num++;
		}
	
		printf("\n");


		//���۰��� ���������� �Է¹޾� �� ���ϴ� ���α׷�
		//��) 1��° �Է�:2, 2��° �Է�:5
		//    2+3+4+5=14
		//����) ���࿡ 2��° ���� 1��° �� ���� �۰ų� ������ �ٽ� �Է�

	int n1, n2;			
	int total = 0;

	printf("1��° �� ���� ������ �� ������ �� ����? \n");
	printf("1��° ��: ");
	scanf("%d", &n1);
	do {
		printf("������ ��: ");
		scanf("%d", &n2);
	} while (n2 <= n1);

	/*for (total=0; n1 <= n2; n1++) {
		total += n1;
	}*/

	for (int i = n1; i <= n2; i++) {
		total += i;
	}
	printf("%d���� %d������ �� ��: %d\n", n1, n2, total);
	printf("\n");




	//������ ��ü ���. (2~9)�� ���
	// 2x1=2 3x1=3 4x1=4..

	for (int i = 1; i < 10; i++)   //1~9
	{
		for (int j = 2; j < 10; j++) {   //2~9��

			printf("%d x %d = %d \t", j, i, i * j);
		}
		printf("\n");
	}
	
}
