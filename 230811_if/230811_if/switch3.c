#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	printf("M ����, A ����, E ���� \n");		
	printf("�Է� : ");						//���� �Է�
	scanf("%c", &c);

	switch (c) {
	case 'M': case 'm':
		printf("Morning \n"); break;
	case 'A': case 'a':		 
		printf("Afternoon \n"); break;
	case 'E': case 'e':
		printf("Evening \n");
	}

}