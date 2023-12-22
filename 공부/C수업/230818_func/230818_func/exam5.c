#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ggd(int n);
int max(int n1, int n2, int n3);
int min(int n1, int n2, int n3);

int main()
{
	//1. 구구단을 출력하는 숫자를 main()에서 입력받음
	//2. 예) 3을 입력받아 매개변수로 전달하면 3단출력
	//3. 입력받은 숫자를 매개변수로 전달하여 구구단 출력
	int n;
	printf("출력할 단을 입력하세용.\n");
	printf("입력: ");
	scanf("%d", &n);
	ggd(n);			//함수 호출

	//int n1, n2, n3;
	//printf("3개의 숫자를 입력받으세요.\n");
	//printf("입력: ");
	//scanf("%d", &n1);
	//printf("입력: ");
	//scanf("%d", &n2);
	//printf("입력: ");
	//scanf("%d", &n3);
	//int a = max(n1, n2, n3);
	//printf("최댓값: %d \n", a);						//변수 호출
	//printf("최소값: %d \n", min(n1, n2, n3));		//함수 바로 호출
}


void ggd(int n)		//함수 정의
{
	for (int i = 1; i < 10; i++)
	{
		printf("%d x %d = %d \n", n, i, n * i);
	}
}

int max(int n1, int n2, int n3)
{
	//n1>n2>n3
	//n1>n3>n2
	//n2>n1>n3
	//n2>n3>n1
	//n3>n1>n2
	//n3>n2>n1
	int result = 0;
	if (n1 > n2 && n2 > n3) {
		result = n1;
	}
	else if (n1 > n3 && n3 > n2) {
		result= n1;
	}
	else if (n2 > n1 && n1 > n3) {
		result = n2;
	}
	else if (n2 > n3 && n3 > n2) {
		result = n2;
	}
	else if (n3 > n1 && n1 > n2) {
		result = n3;
	}
	else if (n3 > n2 && n2 > n1) {
		result = n3;
	}
	return result;
}

int min(int n1, int n2, int n3)
{
	//n1>n2>n3
	//n1>n3>n2
	//n2>n1>n3
	//n2>n3>n1
	//n3>n1>n2
	//n3>n2>n1
	int result = 0;
	if (n1 < n2 && n2 < n3) {
		result = n1;
	}
	else if (n1 < n3 && n3 < n2) {
		result = n1;
	}
	else if (n2 < n1 && n1 < n3) {
		result = n2;
	}
	else if (n2 < n3 && n3 < n1) {
		result = n2;
	}
	else if (n3 < n1 && n1 < n2) {
		result = n3;
	}
	else if (n3 < n2 && n2 < n1) {
		result = n3;
	}
	return result;
}

