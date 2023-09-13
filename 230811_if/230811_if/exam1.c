#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//관계연산자, 논리연산자가 if문의 조건으로 많이 사용

	//연습1
	//1개의 숫자를 입력받아서 짝수, 홀수인지 체크하는 프로그램 
	//나머지 연산자 사용
	
	int n;							//정수형 변수 선언(생성)
	printf("-----------------------\n");
	printf("홀짝 프로그램 \n");
	printf("-----------------------\n");
	printf("\n");
	printf("\n");
	printf("입력할 정수: ");			//정수 입력
	scanf("%d", &n);
	printf("\n");
	if (n % 2 == 1) {				//나머지가 1이 되면 홀수 or if(n%2!=1)
		printf("결과: 홀\n");
	}
	else {
		printf("결과: 짝\n");		//그 외에는 짝수( <. <=, >=, ==, =! )
	}
	printf("\n");
	printf("\n");
	printf("\n");
	

	//----------------------------------------------------------------------------

	//연습2
	//2개의 숫자를 입력받아서 크다, 작다, 같다를 체크하는 프로그램

	printf("-----------------------\n");
	printf("숫자 크기 판별 프로그램 \n");
	printf("-----------------------\n");
	printf("\n");

	int n1, n2;								//정수형 변수 선언(생성)
	printf("두 개의 정수를 입력하세요: ");		
	scanf("%d %d", &n1, &n2);

	if (n1 > n2) {
		printf("%d은(는) %d보다 크다. \n", n1, n2);
	}
	else if (n1 < n2) {
		printf("%d은(는) %d보다 작다. \n", n1, n2);
	}
	else
	{
		printf("%d와(과) %d는 같다. \n", n1, n2);
	}
	printf("\n");
	printf("\n");
	printf("\n");


	//----------------------------------------------------------------------------

	//연습3
	//국어, 영어, 수학 점수를 입력받아서 총점, 평균, 학점을 구하는 프로그램
	//학점 : 100~90: A학점, 89~80:B학점 79~70:C학점 69~60:D학점 59~0:F학점
	//if (90 <= num <=100) -> if ( num >= 90 && num <= 100)

	int kor, eng, math;
	int sum;
	int avg;
	
	printf("-----------------------\n");
	printf("성적 프로그램\n");
	printf("-----------------------\n");
	printf("\n");
	printf("국어: ");						
	scanf("%d", &kor);						//국어 점수 입력
	printf("영어: ");
	scanf("%d", &eng);						//영어 점수 입력
	printf("수학: ");
	scanf("%d", &math);						//수학 점수 입력
	printf("\n");
	
	sum = kor + eng + math;						//총점
	avg = sum / 3;								//평균

	printf("총점: %d점 \t", sum);
	printf("평균: %d점 \n", avg);
	printf("\n");

	if (avg >= 90 && avg <= 100) {				//평균 90~100 A
		printf("학점: A \n");
	}
	else if (avg >= 80 && avg <= 89) {			//평균 80~89 B
		printf("학점: B \n");
	}
	else if (avg >= 70 && avg <= 79) {			//평균 70~79 C
		printf("학점: C \n");
	}
	else if (avg >= 60 && avg <= 69) {			//평균 60~69 D
		printf("학점: D \n");
	}
	else {	//59~0점까지							//그 외 F
		printf("학점: F \n");
	}

}