#include <stdio.h>

int main() {

	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = { 1, 2 };
	int ar1len, ar2len, ar3len, i;

	printf("�迭 arr1�� ũ��: %d \n", sizeof(arr1));
	printf("�迭 arr2�� ũ��: %d \n", sizeof(arr2));
	printf("�迭 arr3�� ũ��: %d \n", sizeof(arr3));

	ar1len = sizeof(arr1) / sizeof(int);	//�迭 arr1�� ���̰��
	ar2len = sizeof(arr2) / sizeof(int);	//�迭 arr2�� ���̰��
	ar3len = sizeof(arr3) / sizeof(int);	//�迭 arr3�� ���̰��

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
	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("�� ���� ������ ���: %c \n", str[13]);
	printf("�� ���� ������ ���: %d \n", str[13]);

	str[12] = '?';		//�迭 str�� ����� ���ڿ� �����ʹ� ���� ����!
	printf("���ڿ� ���: %s \n", str);



}
