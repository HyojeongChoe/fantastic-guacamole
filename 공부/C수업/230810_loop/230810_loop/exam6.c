#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



  //���۰��� ���������� �Է¹޾� �� ���ϴ� ���α׷�
  //��) 1��° �Է�:2, 2��° �Է�:5
  //    2+3+4+5=14
  //����) ���࿡ 2��° ���� 1��° �� ���� �۰ų� ������ �ٽ� �Է�


int main()
{
	//int start, end;//ù���� �������� ���� ����

	/*do-while�� ���� ��,*/

	//printf("���� ��: ");
	//scanf("%d", &start);
	//int backup = start;			//for ������ ������ start�� ����� �� ��� /���� 1��° �Է°��� ���
	//do
	//{									//do ��� while������ ������� ������ ���� �Է� ���̶� �����Ⱚ�� ��
	//	printf("������ ��: ");
	//	scanf("%d", &end);
	//} while (end <= start);

	//int hap = 0;
	///*for (; start <= end; start++) {
	//	hap = hap + start;
	//}*/

	//for (int i = start; i <= end; i++) {
	//	hap = hap + i;
	//}

	//printf("%d���� %d������ �� �� :%d \n", backup, end, hap);
	//printf("\n");

	//while�� ���� ��

	//printf("���� ��: ");
	//scanf("%d", &start);
	//int backup = start;			
	//printf("������ ��: ");			//while�� ������ �տ� ���� �� �� ���� �� �ʿ� �ѹ� �� ������.
	//scanf("%d", &end);
	//while (start > end) {
	//	printf("������ ��: ");
	//	scanf("%d", &end);
	//}
	//int hap = 0;
	///*for (; start <= end; start++) {
	//	hap = hap + start;
	//}*/

	//for (int i = start; i <= end; i++) {
	//	hap = hap + i;
	//}

	//printf("%d���� %d������ �� �� :%d \n", backup, end, hap);
	//printf("\n");


	//��� ���� ������ �ݵ�� 2�� �ݺ������� ����

	//for (int i = 0; i < 3; i++) {
	//	printf("1���� %d\t", i + 1);
	//}

	//for (int i = 0; i < 8; i++) {				 //�� ���		
	//	for (int j = 0; j < 8; j++) {			 //�� ���
	//		printf("%d�� %d�� \t", i + 1, j + 1);	 //
	//	}printf("\n");
	//}


	//������ ��� 2~9�ܱ���
	for (int i = 1; i < 10; i++) {				//2~9�� ���� ���ϰ� �ؾ��� *1�� ����
		for (int j = 2; j < 10; j++) {			//���� ������ ���ʿ�
			printf("%d x %d = %d \t", j, i, i * j);

		}printf("\n");
	}
}

