#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = fopen("simple.txt", "rt");
	int ch;
	if (fp == NULL) {
		printf("파일오픈 실패!");
		return -1;
	}
	while ((ch = fgetc(fp))!= EOF) {
		printf("%c", ch);
	}
	/*while(1)
		ch=fgetc(fp);
		if (ch==EOF) break;
		printf("%c", ch);
		*/
	fclose(fp);
}