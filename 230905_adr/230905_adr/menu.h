/*#pragma once*/	//�ѹ��� ����� �ϰڴ�. (����������), 

#ifndef __MENU_H__		//->��� ���� �ߺ� ����� ���� , �̸��� ����ڰ� ���� == 
#define __MENU_H__

typedef enum {
	MAIN_RAND_INS=1,		//���� ���� �޴�												//�ҽ���������:�����������
	MAIN_DIR_INS,		//���� �Է� �޴�												//github,Perforce,SVN,NAS
	MAIN_ALL_DEL,		//��ü ����
	MAIN_VIEW,			//��ü ����
	MAIN_SEARCH,		//�˻�
	MAIN_DELETE,		//����
	MAIN_UPDATE,		//����
	MAIN_EXIT			//����
} MAIN_MENU;

extern int main_menu();		//extern �ܺο� �����ֵ��� �ϴ� ���. �������� �����Ϸ��� �ڵ����� �ٿ���
extern int search_menu();
#endif

//menu.h���� ������Ÿ�� 