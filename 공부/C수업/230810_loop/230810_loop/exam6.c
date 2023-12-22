#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



  //시작값과 마지막값을 입력받아 합 구하는 프로그램
  //예) 1번째 입력:2, 2번째 입력:5
  //    2+3+4+5=14
  //조건) 만약에 2번째 수가 1번째 수 보다 작거나 같으면 다시 입력


int main()
{
	//int start, end;//첫값과 마지막값 변수 설정

	/*do-while문 썼을 때,*/

	//printf("시작 값: ");
	//scanf("%d", &start);
	//int backup = start;			//for 문에서 변수를 start로 사용할 시 백업 /선언 1번째 입력값을 백업
	//do
	//{									//do 대신 while문으로 써버리면 마지막 숫자 입력 전이라서 쓰레기값이 들어감
	//	printf("마지막 값: ");
	//	scanf("%d", &end);
	//} while (end <= start);

	//int hap = 0;
	///*for (; start <= end; start++) {
	//	hap = hap + start;
	//}*/

	//for (int i = start; i <= end; i++) {
	//	hap = hap + i;
	//}

	//printf("%d부터 %d까지의 총 합 :%d \n", backup, end, hap);
	//printf("\n");

	//while문 썼을 때

	//printf("시작 값: ");
	//scanf("%d", &start);
	//int backup = start;			
	//printf("마지막 값: ");			//while문 쓰려면 앞에 조건 쓴 후 구문 안 쪽에 한번 더 적어줌.
	//scanf("%d", &end);
	//while (start > end) {
	//	printf("마지막 값: ");
	//	scanf("%d", &end);
	//}
	//int hap = 0;
	///*for (; start <= end; start++) {
	//	hap = hap + start;
	//}*/

	//for (int i = start; i <= end; i++) {
	//	hap = hap + i;
	//}

	//printf("%d부터 %d까지의 총 합 :%d \n", backup, end, hap);
	//printf("\n");


	//행과 열의 개념은 반드시 2중 반복문에서 적용

	//for (int i = 0; i < 3; i++) {
	//	printf("1행의 %d\t", i + 1);
	//}

	//for (int i = 0; i < 8; i++) {				 //행 출력		
	//	for (int j = 0; j < 8; j++) {			 //열 출력
	//		printf("%d행 %d열 \t", i + 1, j + 1);	 //
	//	}printf("\n");
	//}


	//구구단 출력 2~9단까지
	for (int i = 1; i < 10; i++) {				//2~9의 단이 변하게 해야함 *1은 고정
		for (int j = 2; j < 10; j++) {			//열은 무조건 안쪽에
			printf("%d x %d = %d \t", j, i, i * j);

		}printf("\n");
	}
}

