#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int villa[4][2];						//4�� 2�� �� 8���� �迭���(�Ϲݺ���)
	int popu, i, j;

	/*������ �����ο� �Է¹ޱ�*/

	for (i = 0; i < 4; i++)					//1��~4�� (��)
	{
		for (j = 0; j < 2; j++)				//1ȣ~2ȣ (��)
		{
			printf("%d�� %dȣ �α���: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}
	/*������ ���� �α��� ����ϱ�*/
	for (i = 0; i < 4; i ++ )
	{
		popu = 0;							//  �ʱⰪ=0
		popu = villa[i][0]+villa[i][1] ;				//  i�� 1ȣ �α���
														// +i�� 2ȣ �α���
		printf("%d�� �α���: %d \n", i + 1, popu);
	}
}