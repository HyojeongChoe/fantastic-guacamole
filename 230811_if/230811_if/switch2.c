#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	printf("A ~ E �� �Է� :");
	scanf("%c", &c);

	switch (c) {

	case 'A': case 'a':							//1 �Է� �� 
		printf("A�� ONE \n");
		break;

	case 'B': case 'b':							//2 �Է� ��
		printf("B�� TWO \n");
		break;

	case 'C': case 'c' :						//3 �Է� ��
		printf("C�� THREE \n");
		break;

	case 'D': case 'd':							//4 �Է� ��
		printf("D�� FOUR \n");
		break;

	case 'E': case 'e':							//5 �Է� ��
		printf("E�� FIVE \n");
		break;

	default:
		printf("I don't know!\n");
	}
}
