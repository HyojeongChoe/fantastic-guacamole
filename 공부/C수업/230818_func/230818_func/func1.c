#include <stdio.h>
//1. void �Ű�����(��������) x, ��ȯ��x
void greeting();	//�����Լ� �Ʒ��� ���ǰ� ������ ������

int main()	//�����Լ�
{
	greeting();		// greeting �Լ� ���Ǹ� ȣ����
	printf("main�Լ��� �ٸ� ����\n");
	greeting();
}

//�Լ��� ���Ǵ� ������� ����
//-> ����ϱ� ���ؼ��� ȣ���� �ʿ�

//�Ű������� ���� �Լ��� ����
void greeting()		
{
	printf(">>>>�Լ�����<<<<\n");
	printf("�ȳ��ϼ���\n");
	printf("�ݰ����ϴ�\n");
	printf(">>>>�Լ�����<<<<\n");
}

void greeting2() {
	void greeting();
}