#include <stdio.h>

int main() {

	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = { 1, 2 };
	int ar1len, ar2len, ar3len, i;

	printf("배열 arr1의 크기: %d \n", sizeof(arr1));
	printf("배열 arr2의 크기: %d \n", sizeof(arr2));
	printf("배열 arr3의 크기: %d \n", sizeof(arr3));

	ar1len = sizeof(arr1) / sizeof(int);	//배열 arr1의 길이계산
	ar2len = sizeof(arr2) / sizeof(int);	//배열 arr2의 길이계산
	ar3len = sizeof(arr3) / sizeof(int);	//배열 arr3의 길이계산

	for (i = 0; i < ar1len; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < ar2len; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < ar3len; i++) {
		printf("%d ", arr3[i]);
	}
	printf("\n");
	printf("\n");
	printf("\n");
	char str[] = "Good morning!";
	printf("배열 str의 크기: %d \n", sizeof(str));
	printf("널 문자 문자형 출력: %c \n", str[13]);
	printf("널 문자 정수형 출력: %d \n", str[13]);

	str[12] = '?';		//배열 str에 저장된 문자열 데이터는 변경 가능!
	printf("문자열 출력: %s \n", str);



}
