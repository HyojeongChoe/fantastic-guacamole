#include <stdio.h>

void show_arr_comm(int a[2][3]);

int main()
{
	int arr1[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	show_arr_comm(arr1);	//arr1호출. 호출할 때 변수명만호출.

	int arr2[2][3] = {
		{10},
		{20,30},
	};
	show_arr_comm(arr2);	//arr2호출

	int arr3[2][3] = { 100,200,300,400 };
	show_arr_comm(arr3);	//arr3 매개변수 전달 int a[][]로.
	 
}



void show_arr_comm(int a[][3])	//열 값이 생략이 되면 안됨. 최소한 열 명시 .행은 생략가능
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}printf("\n");
	}printf("\n");
}