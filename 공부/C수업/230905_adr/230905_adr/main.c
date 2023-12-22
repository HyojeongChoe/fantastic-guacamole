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
	char file[] = "address.bin";	//�����̸��� char�迭�� ���� //		== char*file="address.bin"
	srand(time(NULL));				//�����Լ� ����� ���� �õ� ����
	set_cursor_type(NOCURSOR);		
	font_color(LIGHT_RED);
	title();
	_getch();	//ȭ���� �Ͻ����� ���·� ����� ���� , system("pause") ��밡��

	system("cls");
	font_color(LIGHT_GRAY);
	set_cursor_type(NORMAL_CURSOR);
	while (1) {
		switch (main_menu()) {
		case MAIN_RAND_INS:
		{
			ADDR ad[RAND_SIZE] = { 0 };	//���ȣ�ȿ��� #define�ȰŸ� ��밡��, �Ϲݺ����� ��� x
			int len = sizeof(ad) / sizeof(ADDR);	//�迭�� ��üũ��/�迭�� �� ����
			for (int i = 0; i < len; i++) {
				ad[i].id = id[rand() % 5];
				strcpy(ad[i].name, name[rand() % 5]);
				strcpy(ad[i].addr, addr[rand() % 5]);
				strcpy(ad[i].tel, tel[rand() % 5]);
				strcpy(ad[i].email, email[rand() % 5]);
			}
			file_write_rand(ad, file, len);	//�ּҿ� ���� ���޹��
			printf("���� �����͸� �������Դϴ�......\n");
			Sleep(1000); // sec - ms - us - ns	//������
			system("pause");	//���������� break������ switch�� Ż�� ->������ �������� ȭ���� ������
			break;
		}
		case MAIN_DIR_INS:
		{
			ADDR ad = { 0 };
			printf("ID: ");
			scanf("%d", &ad.id);
			printf("�̸�: ");
			scanf("%s", ad.name);
			printf("��ȭ: ");
			scanf("%s", ad.tel);
			printf("�ּ�: ");
			getchar();
			gets(ad.addr);
			printf("Email: ");
			scanf("%s", ad.email);
			file_write(ad, file);	//���� ���� ���޹��
			printf("�����Ͱ� �Է����Դϴ�......\n");
			Sleep(1000);	//1�� ������
			system("pause");
			break;
		}
		case MAIN_ALL_DEL:
			file_del_all(file);
			printf("��ü �����Ͱ� �����Ǿ����ϴ�.....\n");
			Sleep(1000);
			system("pause");
			break;
		case MAIN_VIEW:
			printf("�����͸� �ҷ����� ���Դϴ�......\n");
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
					printf("�˻��� �̸��� �Է��ϼ���: ");
					scanf("%s", name);
					printf("�����͸� �����Դϴ�......\n");
					Sleep(1000);
					file_search(name, ID_EMPTY, STR_EMPTY, file);	//�ϵ��ڵ������ʱ�. ������� �ʴ� �ǹ̷� ID = -1 OR 0
					system("pause");
				}
				else if(menu == 2)
				{
					int id;
					printf("�˻��� ID�� �Է��ϼ���: ");
					scanf("%d", &id);
					printf("�����͸� �����Դϴ�......\n");
					Sleep(1000);
					file_search(STR_EMPTY, id, STR_EMPTY, file);
					system("pause");
				}
				else if(menu == 3)
				{
					char email[20];
					printf("�˻��� �̸����� �Է��ϼ���: ");
					scanf("%s", email);
					printf("�����͸� �����Դϴ�......\n");
					Sleep(1000);
					file_search(STR_EMPTY, ID_EMPTY, email, file);
					system("pause");
				}
				else if(menu == 4){
					system("pause");
					break;		//while ������ ��������
				}
				system("cls");
			}
		}
		break;	//case5���� ��������
		
		case MAIN_DELETE:	//����
		{
			char name[20] = { 0 };
			printf("������ �̸��� �Է��ϼ���: ");
			scanf("%s", name);
			printf("%s �����͸� �������Դϴ�......\n", name);
			Sleep(1000);
			file_delete(name, file);
			system("pause");
			break;
		}
		//case 7:	//����
		//{
		//	char name[20];		
		//	
		//	printf("������ �̸��� �Է��ϼ���:");
		//	scanf("%s", name);					//���� �� ������
		//	ADDR modify= { 0 };					//���ο� �̸��� ���� ����
		//	printf("������ �̸��� �Է��ϼ���:");
		//	scanf("%s", modify.name);			//�̸��� �־ ����.
		//	printf("%s �����͸� �������Դϴ�......\n", name);
		//	Sleep(1000);
		//	file_modify(file, name, modify);	//�Լ� ȣ��
		//	system("pause");
		//	break;
		//}
		case MAIN_UPDATE:	//����
		{
			char bname[20] = { 0 };
			printf("������ �̸��� �Է��ϼ���:");
			scanf("%s", bname);					//���� �� ������
			char aname[20] = { 0 };					//���ο� �̸��� ���� ����
			printf("������ �̸��� �Է��ϼ���:");
			scanf("%s", aname);			//�̸��� �־ ����.
			printf("%s �����͸� �������Դϴ�......\n", bname);
			Sleep(1000);
			file_update(file, bname, aname);	//�Լ� ȣ��
			system("pause");
			break;
		}
		case MAIN_EXIT:
			printf("���α׷� ����!\n");
			exit(0);
		default:
			printf("�߸��� �޴� ����!!\n");
		}
		system("cls");
	}
}