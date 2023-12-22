#include <stdio.h>

int main()
{
	char* name = "최효정";
	int age = 29;
	char* tel = "010-6339-2099";
	char* addr = "대구시 동구 신평로3, 6동 502호";
	float height = 170.6;
	float weight = 57.5;
	char blood = 'A';

	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("전화: %s\n", tel);
	printf("주소: %s\n", addr);
	printf("키: %.1fcm\n", height);
	printf("몸무게: %.1fkg\n", weight);
	printf("혈액형: %c형\n", blood);



	//정수형 변수 a에 100 저장, 정수형 변수 b에 200저장
    //정수형 변수 c에 a+B 결과값 저장하고 화면에 출력

	   
	int a, b, c; //변수를 선언만 한 상태, "int a = 100;" -> 선언과 동시에 초기화


	a = 100;
	b = 200;
	c = a + b; // or int c=0;   두줄로쓰냐 한줄로 쓰냐 차이
	           //    c=a+b;   

	
	printf("결과: %d\n", c);
	printf("%d+%d=%d\n", a, b, c);
	printf("%d과 %d의 합은 %d이다\n", a, b, c);


	
}



