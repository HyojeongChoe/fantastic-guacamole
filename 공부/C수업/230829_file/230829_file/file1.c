#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1. ���� ����
	FILE* fp = fopen("data.txt", "wt"); // d:/-> d����̺� �ٷιؿ��� ����.
			//��θ� �������� ������ �ҽ������� ����ִ� ������Ʈ������ �������
			//c:/ �ٷ� �ؿ��� ������ �������� ���� �Ұ�!
			//c:/�������� ������.
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;		//�������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}
	fputc('k', fp);		//����K��fp�� ����Ű�� ���Ͽ� �����ض�
	fputc('l', fp);
	fputc('m', fp);
	fclose(fp);		//��Ʈ���� ����
	return 0;
}