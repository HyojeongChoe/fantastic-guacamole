#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("1~5 �� �Է� :");
	scanf("%d", &n);
	
	switch (n) {

	case 1:							//1 �Է� �� 
		printf("1�� ONE \n");
		break;

	case 2:							//2 �Է� ��
		printf("2�� TWO \n");
		break;

	case 3:							//3 �Է� ��
		printf("3�� THREE \n");
		break;

	case 4:							//4 �Է� ��
		printf("4�� FOUR \n");
		break;

	case 5:							//5 �Է� ��
		printf("5�� FIVE \n");
		break;
	
	default:
		printf("I don't know!\n");
	}
}
