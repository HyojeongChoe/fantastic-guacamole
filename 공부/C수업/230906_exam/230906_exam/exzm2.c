#include <stdio.h>

int main()
{
	//��������
	int arr[] = { 8,5,6,4,2 };

	for (int i = 0; i < 5; i++) {
		for (int j=i+1; j<5 ; j++){
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}		
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
}