#include <stdio.h>

int main()
{
	// while문을 제어하기 위한 int 변수 선언
	int cnt = 0;

	// cnt가 10보다 작을 때까지 반복
	// 조건문에 cnt++을 넣어서 cnt가 10이 되면 반복문을 빠져나오도록 함
	while (cnt++ < 10)
	{
		// cnt가 짝수일 때는 continue를 통해 반복문의 처음으로 돌아감
		if (cnt % 2 == 0)
		{
			continue;
		}
		// cnt가 홀수일 때만 Hello World!를 출력
		printf("%d Hello World!\n", cnt);
	}

	return 0;
}