#include <stdio.h>

int main()
{
	float pi = 3.14, r = 15;   //������ pi�� ������r�� ���� ����
	float S = r * r * pi;

	printf("������=%.2f \n", pi);
	printf("������=%.0fcm \n", r);
	printf("������=%.2f�� \n", S);
	printf("\n");

	int kor = 90, eng = 80, math = 70, sci = 60;   //����,����,����,���� ���� ����
	int sum = kor + eng + math + sci;              //������ ��� ���� ����
	double avg = sum / 4.0;

	printf("����=%d�� \n", kor);
	printf("����=%d�� \n", eng);
	printf("����=%d�� \n", math);
	printf("����=%d�� \n", sci);
	printf("\n");
	printf("����=%d�� \n", sum);
	printf("���=%1.f�� \n", avg);                 //float %f  double %1f
	printf("\n");


	int F = 40;
	float C = 0;     //float C = (F-32)/1.8;

	printf("��=%d \n", F);
	printf("��=(��-32)/1.8 \n");
	printf("%.1f�� \n", (F - 32) / 1.8);   
	printf("\n");

	int n1 = 2, n2 = 4, n3 = 6;

	n1 += 3;
	n2 *= 4;
	n3 %= 5;

	printf("result: %d, %d, %d \n", n1, n2, n3);

	return 0;


}