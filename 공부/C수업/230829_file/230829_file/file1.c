#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1. 파일 오픈
	FILE* fp = fopen("data.txt", "wt"); // d:/-> d드라이브 바로밑에는 가능.
			//경로를 지정하지 않으면 소스파일이 들어있느 프로젝트폴더에 만들어짐
			//c:/ 바로 밑에는 관리자 권한으로 생성 불가!
			//c:/폴더에는 가능함.
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;		//비정상적 종료를 의미하기 위해서 -1을 반환
	}
	fputc('k', fp);		//문자K를fp가 가리키는 파일에 저장해라
	fputc('l', fp);
	fputc('m', fp);
	fclose(fp);		//스트림의 종료
	return 0;
}