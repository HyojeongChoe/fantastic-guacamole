#include <stdio.h>

void call_by_addr(int a[]);

int main()
{
	//call by value (���� ���� ����)
	//call by address (�ּҰ��� ���� ����)		//
	int arr[2] = { 10, 20 };
	printf("1.main()=> arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);	//���� ���� �ٷ� ���
	call_by_addr(arr);												//�ּҰ��� ���� ����
	printf("2.main()=> arr[0]:%d, arr[1]:%d\n", arr[0], arr[1]);	//�ּҰ��� ���� ���� �ؿ� ���ͼ� ���� �ٲ�
}
void call_by_addr(int a[])			//�߰�ȣ�� ������ �������� �������� �� ���� -> Call by value  
									//������ �Ҹ�Ǵ°� �ƴ϶� �ٲ� �迭 ���� -> Call by address
{
	//a[0]�� a[1]�� ���� ���� �ٲ�ġ��
	int temp = a[0];		//a[0]�� ���� �ӽú����� ���
	a[0] = a[1];
	a[1] = temp;
	printf("call_by_addr()=> arr[0]:%d, arr[1]:%d\n", a[0], a[1]);
}