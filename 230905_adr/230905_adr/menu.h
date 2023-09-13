/*#pragma once*/	//한번만 사용을 하겠다. (윈도우전용), 

#ifndef __MENU_H__		//->헤더 파일 중복 사용을 방지 , 이름은 사용자가 만듦 == 
#define __MENU_H__

typedef enum {
	MAIN_RAND_INS=1,		//랜덤 생성 메뉴												//소스관리도구:형상관리도구
	MAIN_DIR_INS,		//직접 입력 메뉴												//github,Perforce,SVN,NAS
	MAIN_ALL_DEL,		//전체 삭제
	MAIN_VIEW,			//전체 보기
	MAIN_SEARCH,		//검색
	MAIN_DELETE,		//삭제
	MAIN_UPDATE,		//수정
	MAIN_EXIT			//종료
} MAIN_MENU;

extern int main_menu();		//extern 외부에 보여주도록 하는 기능. 생략가능 컴파일러가 자동으로 붙여줌
extern int search_menu();
#endif

//menu.h에는 프로토타입 