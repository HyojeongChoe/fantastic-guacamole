#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void show_num(int n);

int main()
{
	//함수 호출

	/*숫자 바로 대입*/
	show_num(1);
	show_num(2);
	show_num(3);
	show_num(4);
	show_num(5);
;
	/*변수 값 대입*/
	int n1 = 1;
	show_num(n1);
	int n2 = 2;
	show_num(n2); 
	int n3 = 3;
	show_num(n3);
	int n4 = 4;
	show_num(n4);
	int n5 = 5;
	show_num(n5);

	//가장 효율적인 방법 
	for (int i = 1; i <= 5; i++)
	{
		show_num(i);
	}


}

//1~10까지 연속적으로 매개변수로 전달하며 
//출력하는 함수
//Show_num()

//함수 정의
void show_num(int n)		//동일안 이름의 변수가 같은 함수안에 있으면 오류.
{
	printf("숫자를 출력하세요: %d \n", n);
}