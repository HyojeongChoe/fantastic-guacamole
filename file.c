#define _CRT_SECURE_NO_WARNINGS	//fopen, fclose
#include <stdio.h>	//printf()
#include <stdlib.h>	//exit(0)
#include <string.h>	// strcpy()
#include "file.h"

void file_write(PARKING car , char filename[])	//���ǿ� �ִ� �Ű������� �󲮵���. ���ο��� ȣ���� �� ä����
{
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL) {
		printf("���� ���� ����!\n");
		return;
	}
	fwrite(&car, sizeof(PARKING), 1, fp);
	fclose(fp);
}
