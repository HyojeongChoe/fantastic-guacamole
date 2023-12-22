#include <stdio.h>
int main()
{
	//1차원 배열
	int arr[5] = { 10, 20, 30, 40, 50 }; //배열 선언과 동시에 초기화
	int sum = 0;
	
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;	//개선할 수 있는 방법 

	for (int i = 0; i < 5; i++) {
		/*arr[i] = (i + 1) * 10;*/	//--> 규칙적일 경우에. 사용가능.
		printf("arr[%d]:%d\n", i, arr[i]);
		sum += arr[i];
	}
	printf("배열요소에 저장된 값의 합: %d \n", sum);
}