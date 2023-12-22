#include <stdio.h>
//3. 반환값(int,char)o,  매개변수(전달인자) x
int get_number();
char get_char();

void main()	//void main()으로 사용해도 상관x
{
	//반환값 데이터타입 함수명(){void가 아닌 경우return필요} -> 매개변수x
	//return한 200의 값을 변수 n에 저장
	int n = get_number();
	printf("리턴받은 값 :%d\n", n);
	char c = get_char();
	printf("리턴받은 문자 :%c\n", c);

	//변수를 사용해서 리턴값을 받지 않고
	//직접 함수 리턴값을 %c에 전달
	printf("함수 리턴값:%c\n", get_char());
}

int get_number()	//정수면 정수, 문자면 문자 사용
{
	int n = 200;
	//함수가 종료되기전에 return값을 호출한 곳으로 되돌려줌
	//return값은 1개의 값만 가능
	return n;	
}

char get_char()
{
	char c = 'B';
	return c;
}