#include <stdio.h>
//1. void 매개변수(전달인자) x, 반환값x
void greeting();	//메인함수 아래에 정의가 있으면 적어줌

int main()	//메인함수
{
	greeting();		// greeting 함수 정의를 호출함
	printf("main함수의 다른 동작\n");
	greeting();
}

//함수의 정의는 실행되지 못함
//-> 사용하기 위해서는 호출이 필요

//매개변수가 없는 함수의 정의
void greeting()		
{
	printf(">>>>함수시작<<<<\n");
	printf("안녕하세요\n");
	printf("반갑습니다\n");
	printf(">>>>함수종료<<<<\n");
}

void greeting2() {
	void greeting();
}