#include <stdio.h>
//3. ��ȯ��(int,char)o,  �Ű�����(��������) x
int get_number();
char get_char();

void main()	//void main()���� ����ص� ���x
{
	//��ȯ�� ������Ÿ�� �Լ���(){void�� �ƴ� ���return�ʿ�} -> �Ű�����x
	//return�� 200�� ���� ���� n�� ����
	int n = get_number();
	printf("���Ϲ��� �� :%d\n", n);
	char c = get_char();
	printf("���Ϲ��� ���� :%c\n", c);

	//������ ����ؼ� ���ϰ��� ���� �ʰ�
	//���� �Լ� ���ϰ��� %c�� ����
	printf("�Լ� ���ϰ�:%c\n", get_char());
}

int get_number()	//������ ����, ���ڸ� ���� ���
{
	int n = 200;
	//�Լ��� ����Ǳ����� return���� ȣ���� ������ �ǵ�����
	//return���� 1���� ���� ����
	return n;	
}

char get_char()
{
	char c = 'B';
	return c;
}