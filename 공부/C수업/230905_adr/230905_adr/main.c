// main.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
#include <time.h>	// time()
#include <string.h>	// strcpy()
#include <windows.h> //sleep
#include <conio.h>	//gets
#include "menu.h"	
#include "ui.h"
#include "file.h"
#include "rdata.h"

int main()
{
	char file[] = "address.bin";	//파일이름을 char배열에 넣음 //		== char*file="address.bin"
	srand(time(NULL));				//랜덤함수 사용을 위한 시드 설정
	set_cursor_type(NOCURSOR);		
	font_color(LIGHT_RED);
	title();
	_getch();	//화면을 일시정지 상태로 만들기 위해 , system("pause") 사용가능

	system("cls");
	font_color(LIGHT_GRAY);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {
		case MAIN_RAND_INS:
		{
			ADDR ad[RAND_SIZE] = { 0 };	//대괄호안에는 #define된거만 사용가능, 일반변수는 사용 x
			int len = sizeof(ad) / sizeof(ADDR);	//배열의 전체크기/배열이 한 공간
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);	//주소에 의한 전달방식
			printf("랜덤 데이터를 생성중입니다......\n");
			Sleep(1000); // sec - ms - us - ns	//딜레이
			system("pause");	//쓰지않으면 break를통해 switch를 탈출 ->밑으로 내려가서 화면이 지워짐
			break;
		}
		case MAIN_DIR_INS:
		{
			ADDR ad = { 0 };
			printf("ID: ");
			scanf("%d", &ad.id);
			printf("이름: ");
			scanf("%s", ad.name);
			printf("전화: ");
			scanf("%s", ad.tel);
			printf("주소: ");
			getchar();
			gets(ad.addr);
			printf("Email: ");
			scanf("%s", ad.email);
			file_write(ad, file);	//값에 의한 전달방식
			printf("데이터가 입력중입니다......\n");
			Sleep(1000);	//1초 딜레이
			system("pause");
			break;
		}
		case MAIN_ALL_DEL:
			file_del_all(file);
			printf("전체 데이터가 삭제되었습니다.....\n");
			Sleep(1000);
			system("pause");
			break;
		case MAIN_VIEW:
			printf("데이터를 불러오는 중입니다......\n");
			Sleep(1000);
			file_read(file);
			system("pause");
			break;
		case MAIN_SEARCH:	
		{
			system("cls");
			while (1) {
				int menu = search_menu();
				if(menu == 1)
				{
					char name[20];
					printf("검색할 이름을 입력하세요: ");
					scanf("%s", name);
					printf("데이터를 비교중입니다......\n");
					Sleep(1000);
					file_search(name, ID_EMPTY, STR_EMPTY, file);	//하드코딩하지않기. 사용하지 않는 의미로 ID = -1 OR 0
					system("pause");
				}
				else if(menu == 2)
				{
					int id;
					printf("검색할 ID를 입력하세요: ");
					scanf("%d", &id);
					printf("데이터를 비교중입니다......\n");
					Sleep(1000);
					file_search(STR_EMPTY, id, STR_EMPTY, file);
					system("pause");
				}
				else if(menu == 3)
				{
					char email[20];
					printf("검색할 이메일을 입력하세요: ");
					scanf("%s", email);
					printf("데이터를 비교중입니다......\n");
					Sleep(1000);
					file_search(STR_EMPTY, ID_EMPTY, email, file);
					system("pause");
				}
				else if(menu == 4){
					system("pause");
					break;		//while 구문을 빠져나옴
				}
				system("cls");
			}
		}
		break;	//case5번을 빠져나옴
		
		case MAIN_DELETE:	//삭제
		{
			char name[20] = { 0 };
			printf("삭제할 이름을 입력하세요: ");
			scanf("%s", name);
			printf("%s 데이터를 삭제중입니다......\n", name);
			Sleep(1000);
			file_delete(name, file);
			system("pause");
			break;
		}
		//case 7:	//수정
		//{
		//	char name[20];		
		//	
		//	printf("수정할 이름을 입력하세요:");
		//	scanf("%s", name);					//변경 전 데이터
		//	ADDR modify= { 0 };					//새로운 이름을 넣을 공간
		//	printf("변경할 이름을 입력하세요:");
		//	scanf("%s", modify.name);			//이름을 넣어서 저장.
		//	printf("%s 데이터를 수정중입니다......\n", name);
		//	Sleep(1000);
		//	file_modify(file, name, modify);	//함수 호출
		//	system("pause");
		//	break;
		//}
		case MAIN_UPDATE:	//수정
		{
			char bname[20] = { 0 };
			printf("수정할 이름을 입력하세요:");
			scanf("%s", bname);					//변경 전 데이터
			char aname[20] = { 0 };					//새로운 이름을 넣을 공간
			printf("변경할 이름을 입력하세요:");
			scanf("%s", aname);			//이름을 넣어서 저장.
			printf("%s 데이터를 수정중입니다......\n", bname);
			Sleep(1000);
			file_update(file, bname, aname);	//함수 호출
			system("pause");
			break;
		}
		case MAIN_EXIT:
			printf("프로그램 종료!\n");
			exit(0);
		default:
			printf("잘못된 메뉴 선택!!\n");
		}
		system("cls");
	}
}