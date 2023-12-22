#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//국어, 영어, 수학, 과학 정수형 변수 생성
	//국어, 영어, 수학, 과학 점수 입력받기
	//모든 과목의 평균값과 총점을 저장할 변수를 설정
	//평균값과 총점을 출력

	int avg;
	int sum;
	int kor, eng, math, sci;

	printf("국어: ");
	scanf("%d", &kor);    //국어 점수 입력
	printf("영어: ");
	scanf("%d", &eng);    //영어 점수 입력
	printf("수학: ");
	scanf("%d", &math);   //수학 점수 입력
	printf("과학: ");
	scanf("%d", &sci);    //과학 점수 입력

	sum = kor + eng + math + sci;
	avg = sum / 4;
	printf("총점:%d 평균:%d \n", sum, avg);
	printf("\n");


	//화씨 온도를 저장하는 정수형 변수 생성(선언)
	//화씨 온도 입력받기
	//섭씨 온도를 저장하는 실수형 변수 생성
	//화씨 온도를 섭씨온도로 변환 C=(F-32)/1.8
	//C 출력

	int f;
	float c;

	printf("℉: ");
	scanf("%d", &f);
	
	c = (f - 32) / 1.8;   //화씨를 섭씨로 변환

	printf("%.1f℃ \n", c);
	printf("\n");

	// 

	const float PI = 3.14;  //상수형 변수 (대문자로 표시)
	float r, s;

	printf("반지름: ");
	scanf("%f", &r);

	s = r * r * PI;

	printf("원넓이: %.1f㎠ \n", s);



	

}

