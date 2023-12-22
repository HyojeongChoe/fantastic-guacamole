#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//시작값과 마지막값을 입력받아 합 구하는 프로그램
//예) 1번째 입력:2, 2번째 입력:5
//    2+3+4+5=14
//조건) 만약에 2번째 수가 1번째 수 보다 작거나 같으면 다시 입력

int main()
{
	int n1, n2;
	int total = 0;
	printf("1번째 값: ");
	scanf("%d", &n1);
	do
	{
		printf("2번째 값: ");
		scanf("%d", &n2);
	} while (n1 >= n2);

	for (int i = n1; i <= n2; i++)
	{
		total += i;

	} printf("1번째 값 %d 와(과) 2번째 값 %d의 총 합은?: %d\n", n1, n2, total);



	//	//1개의 숫자를 입력받아 구구단 출력하는 프로그램
	//	//예) 3을 입력하면 구구단 3단 출력

	

}