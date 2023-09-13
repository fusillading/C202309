#include <stdio.h>

int main()
{
	// 세 개의 변수 선언
	int x = 4;
	int y = 2;
	int z;

	// z에 (x + y) * (x - y)의 값을 할당
	z = (x + y) * (x - y);
	// z의 값 출력
	printf("z = (x + y) * (x - y) = %d\n", z);

	// z에 (x * y) + (x / y)의 값을 할당
	z = (x * y) + (x / y);
	// z의 값 출력
	printf("z = (x * y) + (x / y) = %d\n", z);

	// z에 x + y + 2004의 값을 할당
	z = x + y + 2004;
	// z의 값 출력
	printf("z = x + y + 2004 = %d\n", z);

	return 0;
}