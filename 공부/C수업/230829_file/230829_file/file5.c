#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* src = fopen("src.txt", "rt");	//src������ �о
	FILE* des = fopen("dst.txt", "wt");	//dst���Ͽ� ��� -> ���� ����
	int ch;
	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}
	//���� ������ ���� 1���� ����
	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}
	//������ ���� �����ߴٸ�=0�̾ƴϴ�.
	if (feof(src) != 0)	
	{
		puts("���Ϻ��� �Ϸ�!");
	}
	else {
		puts("���Ϻ��� ����!");
	}
	fclose(src);
	fclose(des);
	return 0;
}