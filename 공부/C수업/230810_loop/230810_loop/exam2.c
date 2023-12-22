#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j = 1;

	printf("¸î ´Ü?: ");
	scanf("%d", &i);

	for (j; j < 10; j++)
	{
		printf("%d x %d = %d \n", i, j, i * j);
	}
	/*while (j < 10)
	{
		printf("%d x %d = %d \n", i, j, i * j);
		j++;
	}*/
	return 0;


}