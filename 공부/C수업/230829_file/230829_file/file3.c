#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char* name[] = { "ȫ�浿", "��浿", "�ڱ浿","�ֱ浿" };	//���ڿ� �迭
	FILE* fp = fopen("simple.txt", " wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Choe\n", fp);
	fputs("��������? \n", fp);
	for (int i = 0; i < 4; i++) {
		fputs(name[i], fp);
		fputc('\n', fp);
	}
	fclose(fp);
	return 0;
}