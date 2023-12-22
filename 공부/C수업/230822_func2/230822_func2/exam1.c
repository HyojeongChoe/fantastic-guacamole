#include <stdio.h>
#include <stdlib.h> //rand(),srand() 포함 라이브러리
#include <time.h>	//time() 라이브러리

void show_arr(int a[]);
int main()
{
	// 1. main()에서 10개의 숫자를 저장하는 1차원배열 생성
	// 2. 랜덤하게 10개의 숫자를 배열에 저장
	// 3. 배열의 주소값을 매개변수로 전달하여 홀, 짝을 구분하여 출력하는 함수

	srand(time(NULL));	//매번 다른 시드 생성
	

	int random = 0;		//난수를 저장할 random이라는 변수 선언 및 초기화
	int arr[10] = { 0 };
	
	for (int i = 0; i < 10; i++) {
		random = (rand() % 45)+1;	//난수 생성 1~45
		arr[i] = random;
		/*printf("arr[%d]=%d\n", i,random);*/
	}
	show_arr(arr);
}

void show_arr(int a[])
{
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			printf("arr[%d]=%d\t(짝)\n", i, a[i]);
		}
		else {
			printf("arr[%d]=%d\t(홀)\n", i, a[i]);
		}
	}
}