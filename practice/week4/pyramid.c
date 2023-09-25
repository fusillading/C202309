#include <stdio.h>

int main()
{
	// 몇 층을 쌓을 건지를 저장할 변수 선언
	int floor;

	// 사용자가 잘못된 층수를 입력했을 때를 대비한 while문
	while (1) {
		// 몇 층을 쌓을 건지를 입력받음
		printf("몇 층을 쌓겠습니까? (5~100)");
		scanf_s("%d", &floor);

		// 입력받은 층수가 5보다 작거나 100보다 크면 다시 입력받음
		if (floor < 5 || floor > 100)
		{
			printf("5~100 사이의 숫자를 입력해주세요.\n");
		}
		// 제대로 된 입력일 경우 while문을 탈출함
		else
		{
			break;
		}
	}

	// 입력받은 층수만큼 반복문을 돌림
	for (int i = 0; i < floor; i++)
	{
		// i층에서 왼쪽 부분은 floor-1-i 개의 S가 있어야 함.
		for (int j = 0; j < floor - 1 - i; j++)
		{
			printf("S");
		}

		// i층에서 별은 2*i+1개 있어야 함.
		for (int k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		// 다음 층으로 넘어가는 줄바꿈
		printf("\n");
	}

	return 0;
}