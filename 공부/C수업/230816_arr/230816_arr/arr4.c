#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int villa[4][2];						//4행 2열 총 8개의 배열요소(일반변수)
	int popu, i, j;

	/*가구별 거주인원 입력받기*/

	for (i = 0; i < 4; i++)					//1층~4층 (행)
	{
		for (j = 0; j < 2; j++)				//1호~2호 (열)
		{
			printf("%d층 %d호 인구수: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}
	/*빌라의 층별 인구수 출력하기*/
	for (i = 0; i < 4; i ++ )
	{
		popu = 0;							//  초기값=0
		popu = villa[i][0]+villa[i][1] ;				//  i층 1호 인구수
														// +i층 2호 인구수
		printf("%d층 인구수: %d \n", i + 1, popu);
	}
}