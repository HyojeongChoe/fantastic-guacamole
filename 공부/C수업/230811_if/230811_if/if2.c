#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
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
	if (opt == 2) {
		result = n1 - n2;
	}
	if (opt == 3) {
		result = n1 * n2;
	}
	if (opt == 4) {
		result = n1 / n2;

	}
	printf("���: %.2f \n", result);


}