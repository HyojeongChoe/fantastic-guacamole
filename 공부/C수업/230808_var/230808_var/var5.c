#include <stdio.h>

int main()
{
	float pi = 3.14, r = 15;   //원주율 pi와 반지름r의 변수 설정
	float S = r * r * pi;

	printf("원주율=%.2f \n", pi);
	printf("반지름=%.0fcm \n", r);
	printf("원넓이=%.2f㎠ \n", S);
	printf("\n");

	int kor = 90, eng = 80, math = 70, sci = 60;   //국어,영어,수학,과학 변수 설정
	int sum = kor + eng + math + sci;              //총점과 평균 변수 설정
	double avg = sum / 4.0;

	printf("국어=%d점 \n", kor);
	printf("영어=%d점 \n", eng);
	printf("수학=%d점 \n", math);
	printf("과학=%d점 \n", sci);
	printf("\n");
	printf("총점=%d점 \n", sum);
	printf("평균=%1.f점 \n", avg);                 //float %f  double %1f
	printf("\n");


	int F = 40;
	float C = 0;     //float C = (F-32)/1.8;

	printf("℉=%d \n", F);
	printf("℃=(℉-32)/1.8 \n");
	printf("%.1f℃ \n", (F - 32) / 1.8);   
	printf("\n");

	int n1 = 2, n2 = 4, n3 = 6;

	n1 += 3;
	n2 *= 4;
	n3 %= 5;

	printf("result: %d, %d, %d \n", n1, n2, n3);

	return 0;


}