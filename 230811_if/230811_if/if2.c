#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int opt;			
	float n1, n2;		//¿¬»êÀ» ¼öÇàÇÒ µÎ°³ÀÇ ½Ç¼ö
	float result;

	printf("1.µ¡¼À 2.»¬¼À 3.°ö¼À 4.³ª´°¼À \n");
	printf("¼±ÅÃ?: ");
	scanf("%d", &opt);
	printf("µÎ°³ÀÇ ½Ç¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä: \n");
	scanf("%f %f", &n1, &n2);

	if (opt == 1) {
		result = n1 + n2;
	}
	if (opt == 2) {
		result = n1 - n2;
	}
	if (opt == 3) {
		result = n1 * n2;
	}
	if (opt == 4) {
		result = n1 / n2;

	}
	printf("°á°ú: %.2f \n", result);


}