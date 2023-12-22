#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct person
{
	char name[20];
	char tel[20];	
	int age;
	char addr[20];
};

int main()
{
	struct person arr[3];	//구조체 배열 선언; 3개의 공간 3명의 정보 저장
	//입력
	for (int i = 0; i < 3; i++) {
		system("cls");		//화면을 청소
		printf("이름: ");
		scanf("%s", arr[i].name);	//scanf는 문자열 공백 짤림
		printf("연락처: ");
		scanf("%s", arr[i].tel);
		printf("나이: ");
		scanf("%d", &arr[i].age);	//실제 정보가 저장되는 것은 일반변수 age이므로 &붙음 
		printf("지역: ");
		scanf("%s", arr[i].addr);
		printf("\n");
		system("pause");
	}
	/*출력*/
	for (int i = 0; i < 3; i++) {
		printf("이름:%s\n", arr[i].name);
		printf("연락처:%s\n", arr[i].tel);
		printf("나이:%d\n", arr[i].age);
		printf("지역:%s\n", arr[i].addr);
		printf("-----------------------\n");
	}
	//struct person man;	//구조체 선언
	////입력
	//for (int i = 0; i < 3; i++) {
	//	printf("이름: ");
	//	scanf("%s", man.name);
	//	printf("연락처: ");
	//	scanf("%s", man.tel);
	//	printf("나이: ");
	//	scanf("%d", &man.age);
	//	printf("주소: ");
	//	scanf("%s", man.addr);
	//}
	////출력
	//for (int i = 0; i < 3; i++) {
	//	printf("이름: %s", man.name);
	//	printf("연락처: %s", man.tel);
	//	printf("나이: %s", man.age);
	//	printf("주소: %s", man.addr);
	//}
}
//struct person man;	//구조체 선언
/*for (int i = 0; i < 3; i++) {
	printf("이름: ");
	scanf("%s", man.name);
	printf("연락처: ");
	scanf("%s", man.tel);
	printf("나이: ");
	scanf("%d", &man.age);
	printf("지역: ");
	scanf("%s", man.addr);
	printf("\n");
}*/