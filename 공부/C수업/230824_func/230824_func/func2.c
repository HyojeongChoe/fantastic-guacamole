#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void show_lotto(int lotto[]);

int main()
{
	int lotto[6] = { 0 };	//�ζǸ� ������ �迭
	srand(time(NULL));		//�Ź� �ٸ� �õ尪 ����
	show_lotto(lotto);		//�Լ� ȣ��
	for (int i = 0; i < 6; i++) {
		printf("%d\t",lotto[i]);
	}
}

void show_lotto(int lotto[])
{
	for (int i = 0; i < 6; i++) {
		int num = (rand() % 45) + 1;
		lotto[i] = num;		//�迭�� �������
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				i--;
				break;
			}
		}
	}
}
