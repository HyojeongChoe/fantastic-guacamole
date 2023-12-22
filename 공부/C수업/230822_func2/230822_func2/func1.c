#include <stdio.h>

void show_arr(int a[]);

int main()
{
		//1. 배열 변수를 매개변수로 전달하는 방법
		//2. 지역변수, 전역변수 개념 이해 및 활용
		//3. Call by Value(값에 의한 전달)
		//4. Call by Address(주소값에 의한 전달)
		
	
		//배열: 정보를 저장할수있는 연속적인 공간
	
	int arr[10];	//정수값을 10개 저장할수있는 arr배열 변수	->실제공간이 확보
	int a;			//정수값을 1개만 저장하는 일반 변수 a

	for (int i = 0; i < 10; i++){
		arr[i] = i + 1;				//배열의이름에 의해서 배열공간으로 접근가능	
	}
	show_arr(arr);	//배열변수의 이름을 던져주면 됨 (아래쪽의 int a[])로
}

void show_arr(int a[])		//크기와 상관없이 빈칸으로 두기	->빈껍데기. 주소를 던져주면 그제서야 공간을 사용가능
{
	//main()에서 만든 배열을 이 함수에서 출력
	//arr배열 변수의 주소값을 매개변수로 전달
	for (int i = 0; i < 10; i++) {
		printf("a[%d]=%d\n", i, a[i]);
	}
}