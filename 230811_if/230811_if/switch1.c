#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("1~5 중 입력 :");
	scanf("%d", &n);
	
	switch (n) {

	case 1:							//1 입력 시 
		printf("1은 ONE \n");
		break;

	case 2:							//2 입력 시
		printf("2는 TWO \n");
		break;

	case 3:							//3 입력 시
		printf("3은 THREE \n");
		break;

	case 4:							//4 입력 시
		printf("4는 FOUR \n");
		break;

	case 5:							//5 입력 시
		printf("5는 FIVE \n");
		break;
	
	default:
		printf("I don't know!\n");
	}
}
