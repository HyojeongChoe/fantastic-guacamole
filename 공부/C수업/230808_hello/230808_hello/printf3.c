#include <stdio.h>

int main()
{
	printf("이름: %s \n", "최효정");
	printf("나이: %d \n", 29);
	
	printf("전화: %s-%d-%d \n", "010", 6339, 2099);  //정수표현으로 010하면 8진수로 표현
	printf("전화: %s \n", "010-6339-2099");          //문자열로 표현하기
	printf("전화: %s-%s-%s \n", "010", "6339", "2099");
	
	printf("주소: %s \n", "대구시 동구 신평로3, 6동 502호");
	printf("키: %.1fcm \n", 170.6);     //소수점 한자리까지 표시
	printf("몸무게: %.1fkg \n", 57.5);   
	printf("혈액형: %c형 \n", 'A');
	printf("MBTI: %s \n", "ISTP");

	return 0;
}

