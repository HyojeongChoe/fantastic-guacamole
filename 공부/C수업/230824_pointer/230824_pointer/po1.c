#include <stdio.h>

int main()
{
	int num = 10;		//어디에 저장되는지는 컴퓨터가 알아서, //포인트변수: 주소를 참조(저장)
	printf("1.num(변수에 저장된 값):%d\n", num);
	printf("2.num(num변수의 실제 주소값):0x%d\n", &num);
	

	//포인터변수 pnum에 num변수의 주소값 저장
	int* pnum = &num;
	printf("3.*pnum(저장된 주소에 들어있는 값):%d\n", *pnum);
	
	*pnum = 20;	//num=20 동일	//주소값을 참조한 경우에 별표가 붙어있을 경우
								//pnum이 저장한 메모리 주소로 가서 메모리 주소에 들어있는 실제 값을 의미
	printf("4.*pnum(저장된 주소에 들어있는 값):%d\n", *pnum);

	printf("5.num(변수에 저장된 값):%d\n", num);
	printf("6.pnum(pnum변수의 저장된 주소값):0x%d\n", pnum);
}