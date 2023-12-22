#include <stdio.h>

int main()
{
	int num1 = 100, num2 = 100, num3 = 100;
	int* pnum = NULL;	//포인터변수 초기화

	pnum = &num1;	//포인터 pnum이 num1을 가리킴
	*pnum += 30;	//num1+=30;과 동일	=>*가 붙으면 pnum이 가리키는 주소의 실제 값, 기존 100에 +30

	pnum = &num2;	//포인터 pnum이 mum2를 가리킴
	*pnum -= 30;

	pnum = &num3;	//(*pnum)=(*pnum)-30
	*pnum += 20;

	printf("num1:%d, num2:%d, num3:%d\n", num1, num2, num3);	//*pnum = num1과 결국 같음
}