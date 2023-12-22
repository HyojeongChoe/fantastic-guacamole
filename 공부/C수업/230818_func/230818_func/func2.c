#include <stdio.h>
//2. void 매개변수(전달인자)o, 반환값x
void show_number(int n); //함수가 있다는 것을 알려줌, 정의
void show_number2(int n, int n2);

int main()
{
	// void 함수명()->  == (void) 같은의미, 괄호 안 void 생략가능
	// void가 붙어있는 함수는 괄호가 끝나면 소멸.
	// void 함수명(매개변수,...)	매개변수는 n개
	
	//매개변수가 있는 함수를 호출할 경우
	//반드시 ()안에 매개변수로 전달하는 값(변수,함수)을 넣어줌
	
	show_number(100);	
	
	int n = 100;			//숫자를 넣는거보다 변수값을 전달하는게 나음
	int n2 = 200;
	show_number2(n,n2);	// == show_number2(100,200) 
}

//코딩 스타일
//스네이크 방식: show_number -> 단어와 단어의 결합이 언더바 C언어
//카멜 방식: showNumber -> 자바(객체지향)
//파스칼 방식: ShowNumber -> C++, C#(객체지향)


//매개변수가 있는 함수의 정의
void show_number(int n)//int n: 매개변수 (인수, 인자)
{	
	int sum = n + 100;						//특정 중괄호 안에서 사용되는 변수: 지역변수
	printf("함수의 변수1 sum:%d\n", sum);	//중괄호 밖을 벗어나면 사라짐.....ㅂㅇ..
}

void show_number2(int n, int n2)//int n: 매개변수 
{
	int sum = n + n2;
	printf("함수의 변수2 sum:%d\n", sum);
}