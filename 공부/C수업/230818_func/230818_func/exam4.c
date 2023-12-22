#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal(int n1, int n2, char c);
int main()
{
	int n1, n2;
	char c;

	printf("숫자 두개를 입력하세요. \n");
	printf("입력: ");
	scanf("%d", &n1);
	printf("입력: ");
	scanf("%d", &n2);
	printf("사칙연산자를 입력하세요.(+,-,*,/) \n");
	scanf(" %c", &c);

	int result = cal(n1, n2, c);
	printf("%d %c %d = %d \n",n1,c,n2, result);				//결과값에 변수 넣기
	printf("%d %c %d = %d \n", n1, c, n2, cal(n1, n2, c));	//결과값에 함수 넣기

}

//숫자 2개와 사칙연산자를 main()함수에서 입력받음
//사칙연산자는 문자로 입력받음(+,-,*,/)
//3개의 정보를 매개변수로 전달
//계산결과값을 return하여 메인함수에서 출력
//숫자 입력 후 문자 입력시에는 " %c" 사용

//int cal(int n1, int n2, char c)
//{
//	switch (c)
//	{
//	case '+': return n1 + n2;		//return을 중간에 쓴다면 break문도 딱히 필요가 x
//	case '-': return n1 - n2;		//n1+n2값을 리턴하면서 cal함수 종료
//	case '*': return n1 * n2;
//	case '/': return n1 / n2;
//	}
//}

int cal(int n1, int n2, char c)
{
	int result = 0;
	switch (c)
	{
	case '+': result = n1 + n2; break;
	case '-': result = n1 - n2; break;
	case '*': result = n1 * n2; break;
	case '/': result = n1 / n2; break;
	}
	
	return result;			//return붙여쓰면 가독성이 떨어짐
}
