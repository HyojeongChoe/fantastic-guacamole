#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("���� �Է�: ");
	scanf("%d", &n);

	if (n < 0) {
		printf("%d��(��) 0���� �۴�. \n", n);
	}
	else {
		printf("%d��(��) 0���� �����ʴ�. \n", n);
	}
	printf("\n");
	printf("\n");
	printf("\n");

	//-------------------------------------------------------------
	//else if ����ؼ� ���� ���ϱ�.
	
	
	int opt;
	float n1, n2;		//������ ������ �ΰ��� �Ǽ�
	float result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����?: ");
	scanf("%d", &opt);
	printf("�ΰ��� �Ǽ��� �Է��ϼ���: \n");
	scanf("%f %f", &n1, &n2);

	if (opt == 1) {
		result = n1 + n2;
	}
	else if (opt == 2) {
		result = n1 - n2;
	}
	else if (opt == 3) {
		result = n1 * n2;
	}
	else{
		result = n1 / n2;

	}
	printf("���: %.2f \n", result);
}