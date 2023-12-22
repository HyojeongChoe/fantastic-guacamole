#include <stdio.h>

void call_by_addr(int a[]);

int main()
{
	//call by value (값에 의한 전달)
	//call by address (주소값에 의한 전달)		//
	int arr[2] = { 10, 20 };
	printf("1.main()=> arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);	//위의 값을 바로 출력
	call_by_addr(arr);												//주소값에 의한 전달
	printf("2.main()=> arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);	//주소값에 의한 전달 밑에 나와서 값이 바뀜
}
void call_by_addr(int a[])			//중괄호가 닫히는 시점에서 변수들은 다 죽음 -> Call by value  
									//공간은 소멸되는게 아니라서 바뀐 배열 유지 -> Call by address
{
	//a[0]과 a[1]의 값을 서로 바꿔치기
	int temp = a[0];		//a[0]의 값을 임시변수에 백업
	a[0] = a[1];
	a[1] = temp;
	printf("call_by_addr()=> arr[0]:%d, arr[1]:%d\n", a[0], a[1]);
}