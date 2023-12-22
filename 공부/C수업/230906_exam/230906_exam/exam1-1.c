#include <stdio.h>

int main()
{
	int arr[] = { 8,5,6,4,2 };
	int j;
	for (int i = 1; i < 5; i++) {
		int key = arr[i];
		for (j = i - 1; j >= 0 && arr[j]>key ; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
}