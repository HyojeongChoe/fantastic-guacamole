#include <stdio.h>

void show_arr_comm(int a[2][4], int b[3][3], int c[2][2]);

//void show_arr1(int a[2][4]);
//void show_arr2(int a[3][3]);
//void show_arr3(int a[2][2]);

int main()
{

	//2차원 배열의 열의 크기가 다른 경우에는 매개변수 전달이 까다롭다
	int arr1[2][4] = {
		{1,2,3,30},
		{4,5,6,60}
	};
	/*show_arr1(arr1);*/		//arr1호출. 호출할 때 변수명만호출.
	
	int arr2[3][3] = {
		{10},
		{20,30},
		{40,50,60}
	};
	/*show_arr2(arr2);*/		//arr2호출

	int arr3[2][2] = { 100,200,300,400 };
	show_arr_comm(arr1,arr2,arr3);
	/*show_arr3(arr3);*/		//arr3 매개변수 전달 int a[][]로.
}

void show_arr_comm(int a[2][4], int b[3][3], int c[2][2])
{
	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", a[i][j]);
		}printf("\n");
	}printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", b[i][j]);
		}printf("\n");
	}printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", c[i][j]);
		}printf("\n");
	}printf("\n");
}

	

//void show_arr1(int a[2][4])	//열 값이 생략이 되면 안됨. 최소한 열 명시 .행은 생략가능
//{
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", a[i][j]);
//		}printf("\n");
//	}printf("\n");
//}
//void show_arr2(int a[3][3])	//열 값이 생략이 되면 안됨. 최소한 열 명시 .행은 생략가능
//{
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", a[i][j]);
//		}printf("\n");
//	}printf("\n");
//}
//void show_arr3(int a[2][2])	//열 값이 생략이 되면 안됨. 최소한 열 명시 .행은 생략가능
//{
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			printf("%d ", a[i][j]);
//		}printf("\n");
//	}printf("\n");
//}