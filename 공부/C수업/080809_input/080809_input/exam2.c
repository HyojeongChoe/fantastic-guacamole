#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money;                   //교환할 돈 변수 선언
	int c500, c100, c50, c10;    //각 동전의 변수 선언

	printf("------------------------------------------ \n");
	printf("\n");
	printf("동전 교환기 프로그램 1.0 \n");
	printf("\n");
	printf("------------------------------------------ \n");
	printf("\n");
	printf("교환할 돈을 입력하세요. \n");
	printf("\n");
	scanf("%d", &money);                //입력
	printf("\n");

	printf("교환중.........");
	printf("\n");
	printf("\n");

	//나머지 구하는 작업
	//int nmg= moeny%500	->새로운 변수 사용 가능

	int nmg;				//나머지 변수 설정

	c500 = money / 500;		//500원의 갯수 구하기
	nmg = money % 500;		//500원의 나머지    
	c100 = nmg / 100;		
	nmg = nmg % 100;
	c50 = nmg / 50;
	nmg = nmg % 50;
	c10 = nmg / 10;			
	nmg = nmg % 10;

	
	printf("오백원	갯수: %d개\n", c500);
	printf("백  원	갯수: %d개\n", c100);
	printf("오십원	갯수: %d개\n", c50);
	printf("십  원	갯수: %d개\n", c10);
	printf("\n");
	printf("바꾸지 못한 잔돈: %d개\n", nmg);


	//변수에 값은 이월되서 하나의 변수만 사용해도 가능!!

	//c500 = money / 500;		//500원 갯수 
	//money = money % 500;	//500원 나머지
	//c100 = money / 100;		//100원 갯수
	//money = money % 100;	//100원 나머지
	//c50 = money / 50;
	//money = money % 50;
	//c10 = money / 10;
	//money = money % 10;






}

