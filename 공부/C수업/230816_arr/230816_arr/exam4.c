#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//if (dmz[0] == '*') {
	//	printf("안전지대\n");
	//}
	//if (dmz[1] == 'B') {
	//	printf("지뢰\n");
	// 
	// 
	//1차원 배열 dmz에 지뢰가 아래처럼 매설되었음
	// * B * B *		왼쪽, 자기자신, 오른쪽 검사
	// 1 1 2 1 1
	char dmz[] = { 'B', 'B', '*', 'B', '*' };

	int arr[5] = { 0 };
	const int START = 0;		//상수변수(변수의 값을 변경X)
	//#define  END 4			//END를 4로 정의
	const int END = 4;			
	//값을 저장
	for (int i = 0; i < 5; i++)
	{
		if (dmz[i] == 'B') {
			arr[i] += 1;
		}
		if (dmz[i - 1] == 'B' && i!=START ) {
			arr[i] += 1;
		}
		if (dmz[i + 1] == 'B' && i!=END ) {
			arr[i] += 1;
		}
		
	}
	//값을 출력
	for (int i = 0; i < 5; i++) {
		printf("%d \t", arr[i]);
	}

	int n, result;
	n = 1;
	result = !n;
	
	printf("결과값: %d", result);
}


	