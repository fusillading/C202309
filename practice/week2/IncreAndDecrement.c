#include <stdio.h>

int main()
{
	int x = 1;

	// x의 값을 출력하고 1 증가
	printf("x = %d\n", x++);
	printf("x = %d\n", x++);
	// x의 값 1 증가 후 출력
	printf("x = %d\n", ++x);

	// x의 값을 출력하고 1 감소
	printf("x = %d\n", x--);
	printf("x = %d\n", x--);
	// x의 값 1 감소 후 출력
	printf("x = %d\n", --x);

	return 0;
}