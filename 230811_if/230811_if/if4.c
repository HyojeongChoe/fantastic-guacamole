#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0, num = 0;		//num���� sum������ �� ���� ����

	while (1) 
	{					//���ѹݺ� ����
		sum += num;
		if (sum > 5000) {		//sum�� 5000�̻��̶�� 
			break;				//break ����! �ڽ��� ���� �ݺ��� Ż��
		}num++;
		/*printf("%d\n", num);*/	//->���ѹݺ� ���
	}
	printf("sum: %d\n", sum);		//dead code(�����ڵ�)
	printf("num: %d\n", num);

}