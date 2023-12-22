#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char* name[] = { "홍길동", "김길동", "박길동","최길동" };	//문자열 배열
	FILE* fp = fopen("simple.txt", " wt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Choe\n", fp);
	fputs("누구세용? \n", fp);
	for (int i = 0; i < 4; i++) {
		fputs(name[i], fp);
		fputc('\n', fp);
	}
	fclose(fp);
	return 0;
}