#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int arr2[3][3] = {
		{10, 20, 30},
		{40, 50, 60},
		{70, 80, 90}
	};

	int arr3[3][3] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			printf("arr3[%d][%d]= %d\t", i, j, arr3[i][j]);
		}printf("\n");
	}
	printf("\n");

	int arr4[9][8] = { 0 };
	for (int i = 0; i < 9; i++) {			//1~9까지의 곱할 값: 행
		for (int j = 0; j < 8; j++) {		//2~9까지의 단: 열 
			arr4[i][j] = (i+1) * (j+2);		//구구단 배열에 값 저장
			printf("%dx%d=%d \t", (j+2), (i+1), arr4[i][j]);	//저장된 값 출력

		}printf("\n");
	}
	printf("\n");


	int arr5[3][9] = { 0 };
	

	for (int i = 0; i < 3; i++) {				
		for (int j = 0; j < 9; j++) {
			arr5[i][j] = (i + 2) * (j + 1);			//배열에 값 저장 
			printf("%dx%d=%d \t", (i+2), (j+1), arr5[i][j]);	//저장된 값 출력
		}
		printf("\n");
	}
	printf("\n");

	int arr6[2][4] = { 
		{1,2,3,4},
		{5,6,7,8}
	};
		
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("arr6[%d][%d]=%d \t", i, j, arr6[i][j]);
		}printf("\n");
	}


}