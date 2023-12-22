#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	printf("A ~ E 중 입력 :");
	scanf("%c", &c);

	switch (c) {

	case 'A': case 'a':							//1 입력 시 
		printf("A는 ONE \n");
		break;

	case 'B': case 'b':							//2 입력 시
		printf("B는 TWO \n");
		break;

	case 'C': case 'c' :						//3 입력 시
		printf("C는 THREE \n");
		break;

	case 'D': case 'd':							//4 입력 시
		printf("D는 FOUR \n");
		break;

	case 'E': case 'e':							//5 입력 시
		printf("E는 FIVE \n");
		break;

	default:
		printf("I don't know!\n");
	}
}
