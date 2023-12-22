#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//	//1개의 숫자를 입력받아 구구단 출력하는 프로그램
	//	//예) 3을 입력하면 구구단 3단 출력
	
		int d;
		int num = 1;
		printf("몇 단을 출력할까요? ");
		scanf("%d", &d);
		
		while (num < 10)
		{
			printf("%d x %d = %d \n", d, num, d * num);
			num++;
		}
	
		printf("\n");


		//시작값과 마지막값을 입력받아 합 구하는 프로그램
		//예) 1번째 입력:2, 2번째 입력:5
		//    2+3+4+5=14
		//조건) 만약에 2번째 수가 1번째 수 보다 작거나 같으면 다시 입력

	int n1, n2;			
	int total = 0;

	printf("1번째 값 부터 마지막 값 까지의 총 합은? \n");
	printf("1번째 값: ");
	scanf("%d", &n1);
	do {
		printf("마지막 값: ");
		scanf("%d", &n2);
	} while (n2 <= n1);

	/*for (total=0; n1 <= n2; n1++) {
		total += n1;
	}*/

	for (int i = n1; i <= n2; i++) {
		total += i;
	}
	printf("%d부터 %d까지의 총 합: %d\n", n1, n2, total);
	printf("\n");




	//구구단 전체 출력. (2~9)단 출력
	// 2x1=2 3x1=3 4x1=4..

	for (int i = 1; i < 10; i++)   //1~9
	{
		for (int j = 2; j < 10; j++) {   //2~9단

			printf("%d x %d = %d \t", j, i, i * j);
		}
		printf("\n");
	}
	
}
