#include <stdio.h>

void test_func();
//주의>>>전역변수는 무조건 함수 밖에 선언!!!
//1. 파일 내의 모든 함수에 값을 전달 가능
//2. 하지만 함수간의 값 전달은 매가변수 사용을 우선

int b = 100;	//전역변수b 공통으로 사용가능.
				//1차적으로 고려되는 건 매개변수.
				//전역변수 왠만해서는 사용x 

int main()
{
	int a = 10;		//main() 지역변수 a
	printf("main()=> a:%d b:%d \n", a, b);	//%d는 바로 주변에 있는 변수a를 찾음 
	b = 200;	//메인함수에서 b값을 변경하면 변경 된 값으로
	test_func();
	
}

void test_func()
{
	int a = 20;		//test_func() 지역변수 a
	printf("test_func()=> a:%d b:%d \n", a, b);
}