#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	printf("M 오전, A 오후, E 저녁 \n");		
	printf("입력 : ");						//문자 입력
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