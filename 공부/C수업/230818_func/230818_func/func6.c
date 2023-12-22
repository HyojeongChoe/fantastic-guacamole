#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void HowToUseThisProg();
int ReedNum();
void ShowAddResult(int num);
int Add(int num1, int num2);

int main()
{
	HowToUseThisProg();
	int num1 = ReedNum();
	int num2 = ReedNum();
	int result = Add(num1, num2);
	ShowAddResult(result);
}

void HowToUseThisProg()			//매개변수 x 반환값 x
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("두 개의 정수를 입력하세요. \n");
}
int ReedNum()					//매개변수 x 반환값 o
{
	int num;
	scanf("%d", &num);
	return num;
}
int Add(int num1, int num2)		//매개변수 o 반환값 o
{
	return num1 + num2;
}
void ShowAddResult(int num)		//매개변수 o 반환값 x
{
	printf("덧셈 결과 출력: %d \n", num);
}

