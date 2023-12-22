#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//전역변수
char* name[5] = { "최효정","최규태","지정미","최현희","최범수" };
char* model[5] = { "그랜저","포터","아반떼","K5","K9" };
char* ma_name[4] = { "도지수","성다애","손한별","김예진" };
	//고객이름, 차량모델, 매니저명
	//------------------------------
	//	고객 차량관리 프로그램 v1.6
	//------------------------------
	// 1. 고객정보 직접 입력
	// 2. 고객정보 랜덤 입력
	// 3. 고객정보 보기
	// 4. 종료
	//------------------------------
	// 선택: 
struct car {
	char model[20];
};
struct manager {
	char ma_name[20];
};
struct customer {
	char name[20];	
	struct car ca;
	struct manager ma;
};

int show_menu();
void ran_input(struct customer data[]);		//랜덤입력
void ran_output(struct customer data[]);	//랜덤호출
void input_cus(struct customer data[]);		//수동입력

int main()
{
	struct customer data[10] = { 0 };	//구조체이자 배열변수
	
	srand(time(NULL));
	while (1) {
		system("cls");
		int num = show_menu();
		switch (num) {

		case 1:
			input_cus(data);
			break;
		case 2:
			ran_input(data);
			break;
		case 3:
			ran_output(data);
			break;
		case 4:
			printf("프로그램 종료");
			exit(0);
		default:
			printf("Error!!!!\n");
		}
		system("pause");
	}
}
int show_menu()
{
	printf("------------------------------\n");
	printf("고객 차량관리 프로그램 v1.6\n");
	printf("------------------------------\n");
	printf("1.고객정보 직접 입력\n");
	printf("2.고객정보 랜덤 입력\n");
	printf("3.고객정보 보기\n");
	printf("4.종료\n");
	printf("------------------------------\n");
	printf("선택: ");
	int num;	//입력받을 번호
	scanf("%d", &num);
	return num;
}
void input_cus(struct customer data[])
{
	memset(data, 0, sizeof(data)*10);
	printf("------------------------------\n");	//고객정보
	printf("고객 차량관리 프로그램 v1.6\n");
	printf("------------------------------\n");
	printf("이름: ");
	scanf("%s", data[0].name);
	printf("차량모델: ");
	scanf("%s", data[0].ca.model);
	printf("매니저: ");
	scanf("%s", data[0].ma.ma_name);
	printf("고객정보가 수동으로 입력되었습니다.\n");
}

void ran_input(struct customer data[])
{
	for (int i = 0; i < 10; i++) {
		strcpy(data[i].name, name[(rand())%5]);
		strcpy(data[i].ca.model, model[(rand()) % 5]);
		strcpy(data[i].ma.ma_name, ma_name[(rand()) % 4]);
	}
	printf("고객정보가 랜덤으로 입력되었습니다.");
	printf("\n");
}
void ran_output(struct customer data[])	
{
	for (int i = 0; i < 10; i++) {
		// data[i].name의 값이 ""와 같다면
		// 즉, 고객정보가 없으면 탈출함
		if (strcmp(data[i].name, "") == 0)
		{
			break;
		}
		else {
			printf("------------------------------\n");	//고객정보
			printf("고객 차량관리 프로그램 v1.6\n");
			printf("------------------------------\n");
			printf("이름: %s\n", data[i].name);
			printf("차량모델 :%s\n", data[i].ca.model);		//하나하나 변수이름 바꾸기 귀찮아서 걍 data로 씀.
			printf("매니저: %s\n", data[i].ma.ma_name);
		}
	}
	printf("\n");
}