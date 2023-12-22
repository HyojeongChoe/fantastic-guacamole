#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	//문자열 처리 관련

struct person	//구조체 정의(정의로는 동작x)
{
	char name[20];
	char phoneNum[20];	//->구조의 멤버 변수
	int age;
};

int main()
{
	struct person man1, man2;	//구조체 변수 man1,man2  person->내가정의한 데이터 타입/ 사용자 정의 데이터 타입
	//"안성준을 man1.name에 복사
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneNum, "010-1234-5678");
	man1.age = 23;

	//이름을 키보드로 직접 입력받음
	printf("이름 입력: "); 
	scanf("%s", man2.name);	//배열변수이므로 scanf쓸때 &연산자 x
	printf("번호 입력: "); 
	scanf("%s", man2.phoneNum);	//배열변수이므로 scanf쓸때 &연산자 x
	printf("나이 입력: "); 
	scanf("%d", &man2.age);		//일반변수라서 &붙음
	
	printf("이름: %s \n", man1.name); 
	printf("번호: %s \n", man1.phoneNum);
	printf("나이: %d \n", man1.age);

	printf("이름: %s \n", man2.name);
	printf("번호: %s \n", man2.phoneNum);
	printf("나이: %d \n", man2.age);
	return 0;
}