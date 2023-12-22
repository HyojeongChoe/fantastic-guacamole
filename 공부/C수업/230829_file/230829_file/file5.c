#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* src = fopen("src.txt", "rt");	//src파일을 읽어서
	FILE* des = fopen("dst.txt", "wt");	//dst파일에 써라 -> 파일 복사
	int ch;
	if (src == NULL || des == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	//파일 끝까지 문자 1개씩 읽음
	while ((ch = fgetc(src)) != EOF) {
		fputc(ch, des);
	}
	//파일의 끝에 도달했다면=0이아니다.
	if (feof(src) != 0)	
	{
		puts("파일복사 완료!");
	}
	else {
		puts("파일복사 실패!");
	}
	fclose(src);
	fclose(des);
	return 0;
}