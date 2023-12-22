#include <stdio.h>
//5.c추가해서 scanf사용하여 처리 (초기값 사용 x)
struct person
{
	char name[20];
	char tel[20];	//구조체 정의
	int age;
};

int main()
{
	struct person arr[3] = {	//구조체 변수를 배열로
		{"이승기", "010-1234-4567", 21},
		{"정지영", "010-4534-4564", 24},
		{"한지수", "010-7852-8537", 20}
	};
	for (int i = 0; i < 3; i++) {
		printf("이름: %s 연락처: %s 나이: %d \n", arr[i].name, arr[i].tel, arr[i].age);
	}
	
}