#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*1차원 배열을 만들고 초기값을 20, 34, 22, 11, 27 설정
	배열안에 들어있는 모든값들의 합을 구하기
	조건)반복문 사용*/

	int arr[] = { 20, 34, 22, 11, 27 };		//첫번째 요소~네번째 요소의 값 초기화
	int sum = 0;

	for (int i = 0; i <5; i++) {
		printf("arr[%d]:%d \n", i, arr[i]);
		sum += arr[i];
	}
	printf("배열값의 합 : % d\n", sum);
	printf(" \n");

	/*1~100까지의 숫자를 1차원 배열에 저장
	조건 1) 배열에 저장된 값에서 3의 배수만 출력
	조건 2) 배열의 위치가 90번째일때 반복문 탈출*/

	int arr1[100] = { 0 };
	for (int i = 0; i < 100; i++) {		//0~99까지 
		arr1[i] = i + 1;			//배열에 값을 저장 
		if (arr1[i] % 3 == 0) {
			printf("arr[%d]:%d \n", i, arr1[i]);
		}
		if (arr1[i] == 90) {
			break;
		}
	}
	printf("\n");

	//1. 1차원 배열에 2, 4, 6, 8, 10을 저장
	//2. 2의 배수이면서 3의 배수인 값만 출력
	//3. 배열의 3번째 위치에서 탈출.

	int arr2[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		arr2[i] = 2 * (i + 1);			//배열에 값을 저장
		if (arr2[i] % 2 == 0 && arr2[i] % 3 == 0) {
			printf("%d \n", arr2[i]);
		}
		if (arr[i] == 2) break;		//배열의 3번째 위치. 0부터 시작이므로 arr[2]에서 탈출
	}
	printf("\n");

	int arr3[] = { 20, 34, 22, 14, 36, 23, 67 };
	int sum3 = 0;
	int avg;

	for (int i = 0; i < 7; i++) {
		printf("arr3[%d]:%d \n", i, arr3[i]);
		sum3 += arr3[i];
		avg = sum3 / 4;

	}
	printf("배열의 합: %d \n", sum3);
	printf("배열의 평균: %d \n", avg);
	printf("\n");
	
	//새로운 1차원 배열 a 생성
	//arr4에 있는 값들을 a 배열에 {50, 40, 30, 20, 10 순서로 저장


	//어렵다...^=^
	int arr4[] = { 10, 20, 30, 40, 50 };
	int a[5] = { 0 };
	for (int i = 0; i < 5; i++) {	
		/*printf("arr4[%d]: %d \n", i, arr4[i]);	*/	//arr4에 값 넣어 출력. 굳이 출력할 필요 없음
		a[i] = arr4[4 - i];							//역순으로 저장
		printf("a[%d]: %d \n", i, a[i]);
	}
	
}

		


	


