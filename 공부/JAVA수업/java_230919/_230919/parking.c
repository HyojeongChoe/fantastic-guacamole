#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	printf("------------------------------------------- \n");
	printf("\n");
	printf("	    주차 요금 정산기\n");
	printf("\n");
	printf("------------------------------------------- \n");
	printf("\n");
	printf("원하는 담배를 메뉴에서 선택하세요. \n");
	printf("1.에쎄 골든 리프	6,000원 \n");
	printf("2.에쎄 스페셜 골드	5,000원 \n");
	printf("3.더원 블루		4,500원 \n");
	printf("4.더원 오렌지		4,500원 \n");
	printf("5.더원 화이트		4,500원 \n");
	printf("\n");

	int n;
	int money = 0;
	printf("------------------------------------------- \n");
	printf("\n");
	printf("담배를 선택하세요 : ");
	scanf("%d", &n);
	switch (n) {
	case 1:
		printf("에쎄 골든 리프를 선택하셨습니다. \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("담배 금액을 입금하세요: ");
		scanf("%d", &money);
		printf("에쎄 골든 리프를 구매했습니다. 거스름돈 %d 원을 받으세요. \n", money - 6000);
		break;
	case 2:
		printf("에쎄 스페셜 골드를 선택하셨습니다. \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("담배 금액을 입금하세요: ");
		scanf("%d", &money);
		printf("에쎄 스페셜 골드를 구매했습니다. 거스름돈 %d 원을 받으세요. \n", money - 5000);
		break;
	case 3:
		printf("더원 블루를 선택하셨습니다. \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("담배 금액을 입금하세요: ");
		scanf("%d", &money);
		printf("더원 블루를 구매했습니다.거스름돈 %d 원을 받으세요. \n", money - 4500);
		break;
	case 4:
		printf("더원 오렌지를 선택하셨습니다. \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("담배 금액을 입금하세요: ");
		scanf("%d", &money);
		printf("더원 오렌지를 구매했습니다. 거스름돈 %d 원을 받으세요. \n", money - 4500);
		break;
	case 5:
		printf("더원 화이트를 선택하셨습니다. \n");
		printf("\n");
		printf("------------------------------------------- \n");
		printf("담배 금액을 입금하세요: ");
		scanf("%d", &money);
		printf("더원 화이트를 구매했습니다. 거스름돈 %d 원을 받으세요. \n", money - 4500);
		break;
	}

}
