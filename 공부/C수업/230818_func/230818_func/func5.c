#include <stdio.h>

int add(int n1, int n2);
int main()
{
	int result = add(3, 4);
	printf("�������1: %d\n", result);

	int n1 = 5;
	int n2 = 8;
	
	int result2 = add(n1, n2);
	printf("�������2: %d\n", result2);


}

int add(int n1, int n2) {	//�Լ�����
	return n1 + n2;
}
