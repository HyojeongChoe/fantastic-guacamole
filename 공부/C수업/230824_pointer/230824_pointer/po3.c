#include <stdio.h>

int main()
{
	int n = 100;
	int* p = &n;	//일반변수는 주소값을 표현할때 반드시 & 붙임 / 포인터변수 p에 변수n의 주소값을 참조
	//int *p=NULL;
	//p= &n;

	int arr[5] = { 10, 20, 30, 40, 50 };

	//포인터 변수 p에 배열변수 arr의 주소값을 참조
	p = arr;
	//printf("p[0]:%d\n", p[0]);	//배열로 표시
	//printf("p:%d\n", *p);	//포인터로 표시		*p= p가 가리키는 주소의 실제값.
	//printf("arr[0]:%d\n", arr[0]); //배열로 표시

	//printf("p[1]:%d\n", p[1]);	//배열로 표시
	//printf("*(p+1):%d\n", *(p + 1));	//포인터로 표시 이\ㅣ 때의 1은 메모리값
	//printf("arr[1]:%d\n", arr[1]); //배열로 표시

	//반복문을 사용해서 위의 printf출력

	for (int i = 0; i < 5; i++) {
		printf("*(p+%d):%d\n", i, *(p + i));	//포인터로 표시
		printf("p[%d]:%d\n", i, p[i]);			
		printf("arr[%d]:%d\n", i, arr[i]);
	}
}