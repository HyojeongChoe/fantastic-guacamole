#define _CRT_SECURE_NO_WARNINGS	//fopen, fclose
#include <stdio.h>	//printf()
#include <stdlib.h>	//exit(0)
#include <string.h>	// strcpy()
#include "file.h"

void file_write(PARKING car , char filename[])	//정의에 있는 매개변수는 빈껍데기. 메인에서 호출할 때 채워짐
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		return;
	}
	fwrite(&car, sizeof(PARKING), 1, fp);
	fclose(fp);
}
