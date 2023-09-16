#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> //sleep
#include "menu.h"
#include "file.h"
#include "data.h"



int main() {
	char file[] = "parkingfee.bin";	//�����̸�
	srand(time(NULL));	//�����Լ�
	int hour = 0;	//�ð�
	int min = 0;	//��
	int fee = 0;	//�̿���
	int cost = 0;	//���Աݾ�
	PARKING car = { 0 }; //������ȣ 
	
	while (1) {
		system("cls");
		switch (main_menu()) {
		case MAIN_CAR_NUM:
			while (1) {
				system("cls");
				printf("==============================================\n");
				printf("\n");
				printf("	  ���� ���� ���α׷� v1.0\n");
				printf("\n");
				printf("==============================================\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("������ȣ 4�ڸ��� �Է��ϼ���. \n");
				printf("\n");
				printf("\n");
				scanf("	%d", &car.car_num);
				printf("\n");
				printf("\n");
				system("cls");
				if (car.car_num < CAR_NUM_MAX)	//���ڿ� ���� ���ǵ� �ɾ���� .. ����ġ�� ���ѹݺ�
					break;
			}
			for (int i = 0; i < 1; i++) {
				car.time.ent_hour = (rand() % 14) + 6;
				car.time.ent_min = rand() % 59;
				printf("==============================================\n");
				printf("\n");
				printf("	  ���� ���� ���α׷� v1.0\n");
				printf("\n");
				printf("==============================================\n");
				printf("\n");
				printf("\n");
				printf("	���� ��ȣ: %d \n", car.car_num);
				printf("\n");
				printf("	���� �ð�: %d�� %d��\n", car.time.ent_hour, car.time.ent_min);
				file_write(car, file);
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("==============================================\n");
				printf("\n");
				int num;
				printf(">>> 1 �Է½� ó������ �ǵ��ư��ϴ�. \n");
				scanf("%d", &num);
				if (num == 1) {
					break;
				}

		case MAIN_PAYMENT:
			system("cls");
			while (1) {
				printf("==============================================\n");
				printf("\n");
				printf("	  ���� ���� ���α׷� v1.0\n");
				printf("\n");
				printf("==============================================\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("������ȣ 4�ڸ��� �Է��ϼ���. \n");
				printf("\n");
				printf("\n");
				scanf("	%d", &car.car_num);
				printf("\n");
				printf("\n");
				system("cls");
				if (car.car_num < CAR_NUM_MAX) {
					printf("==============================================\n");
					printf("\n");
					printf("	  ���� ���� ���α׷� v1.0\n");
					printf("\n");
					printf("==============================================\n");
					printf("\n");
					printf("\n");
					printf("	���� ��ȣ�� Ȯ�����ּ��� \n");
					printf("\n");
					printf("	%d", car.car_num);
					printf("\n");
					printf("	���� �ð�: %d�� %d��\n", car.time.ent_hour, car.time.ent_min);
					printf("\n");
					printf("\n");
					printf("==============================================\n");
					int num;
					printf(">>> 1 �Է½� �������� �Ѿ�ϴ�. \n");
					printf(">>> 2 �Է½� ó��ȭ������ �ǵ��ư��ϴ�. \n");
					scanf("%d", &num);
					system("cls");
					if (num == 1) {
						printf("==============================================\n");
						printf("\n");
						printf("	  ���� ���� ���α׷� v1.0\n");
						printf("\n");
						printf("==============================================\n");
						printf("\n");
						printf("���� �ð��� �Է��ϼ��� =>  ");
						scanf("%d : %d", &car.time.exit_hour, &car.time.exit_min);
						hour = car.time.exit_hour - (car.time.ent_hour);
						min = car.time.exit_min - (car.time.ent_min);
						if (car.time.exit_min < car.time.ent_min) {
							hour = (car.time.exit_hour - (car.time.ent_hour)) - 1;
							min = ((car.time.exit_min - car.time.ent_min)) + 60;
							printf("\n");
							printf("�̿� �ð� : %d�ð� %d�� \n", hour, min);
							printf("\n");
							printf("\n");
							printf(">����: %d�� %d��<\n", car.time.exit_hour, car.time.exit_min);
							printf("\n");
							printf(">����: %d�� %d��<\n", car.time.ent_hour, car.time.ent_min);
							printf("\n");
							printf("\n");
							printf("\n");
						}
						if (min == 0) {
						fee = ((hour * 60) + min) / 30 * 500;
						printf("���: %d��\n", fee);
						}
						else if (min > 0 && min <= 30) {
							fee = ((hour * 60) + 30) / 30 * 500;
							printf("���: %d��", fee);
						}else {
							fee = (((hour + 1) * 60)) / 30 * 500;
							printf("���: %d��", fee);
						}
						printf("\n");
					}
				}
					}
				}

				/*	else {
					}
					break;*/
			}
		}
	}

//void receipt() {
//	printf("------------------------------\n");
//	printf("   ���� �̿� �ý��� ������\n");
//	printf("------------------------------\n");
//	printf("���� ��ȣ : %d \n", car.car_num);
//	printf("���� �ð� : %d�� %d�� \n", car.time.ent_hour, car.time.ent_min);
//	printf("���� �ð� : %d�� %d�� \n", car.time.exit_hour, car.time.exit_min);
//	printf("�̿� �ð� : %d�ð� %d��\n", hour, min);
//	printf("���� �ݾ� : %d�� \n", fee);
//	printf("------------------------------\n");
//	printf("�̿� ���ּż� �����մϴ�\n");
//	printf("------------------------------\n");
//}

							//printf("�����̳� ī�带 �־��ּ���\n");
							//printf("1.����	2.ī��	3.Ȩȭ��");
							//scanf("%d", &num);
							//if (num == 1) {
							//	printf("�ݾ��� �����ϼ���: ");   // �̿� �ݾ� ����
							//	scanf("%d", &cost);              // ������ �ݾ� �Է� 
							//	printf("�ݾ��� ���� �Ͽ����ϴ�.\n"); // ���������� �ݾ� �����Ͽ����� ���

							//	if (fee == cost) {  // �̿�ݾװ� ���� �ݾ��� ������ ���� �Ϸᰡ �Ǿ��ٴ� ���ǹ��� �ۼ�
							//		printf("������ �Ϸ� �Ǿ����ϴ�.\n");
							//	}
							//	else if (fee < cost) {  // ���� �ݾ��� �̿� �ݾ׺��� ���� �� �Ž����� �ݾ��� ���
							//		printf("�Ž����� %d���Դϴ�.\n", cost - fee);
							//	}
							//	else if (fee > cost) { // ���� �ݾ��� ������ �� �ݾ��� �����ϴٴ� ������ ���
							//		printf("���� �ݾ��� �����մϴ�.\n");
							//	}
							//	else if (STR_EMPTY) {
							//		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է� ���ּ���\n");
							//	}
							//	else if (num == 2) {
							//		printf("ī�带 �־��ּ���.");
							//		printf("���� ���Դϴ�.ī�带 ���� ������.\n");
							//		Sleep(2000);
							//		printf("������ �Ϸ�Ǿ����ϴ�.");
							//		system("pause");	//���������� break������ switch�� Ż�� ->������ �������� ȭ���� ������
							//		break;
							//	}
							//	else if (num == 3) {
							//		break;
							//	}

