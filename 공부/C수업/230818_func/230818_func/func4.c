#include <stdio.h>
//4. 반환값 (int,char) o, 매개변수(전달인자) o
int add(int n1, int n2);
int sub(int n1, int n2);

int main()
{
	//리턴값의 데이터타입 함수명(매개변수,....)
	int n1 = 200;	//지역변수
	int n2 = 50;
	
	int a = add(n1, n2);	// == int a = add(200,50)		//호출할 떄는 int 쓰지 x
	printf("add반환 값: %d\n", a);
	
	int b = sub(n1, n2);	// == int b = sub(200,50)		
	printf("sub반환 값 : %d\n", b);
	printf("sub2반환 값 : %d\n", sub(n1,n2));

	int result = sub(n1, n2);
	printf("sub3반환 값 : %d\n", result);
}

	//add()함수 호출해서 리턴값을 main에서 출력
	//sub()함수 호출해서 리턴값을 main에서 출력

int add(int n1, int n2)		//빈껍데기 -> 호출했을 때 값이 채워짐
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	int result = n1 - n2;
	return n1 - n2;
}

