#include <stdio.h>

int main()
{
	// 세 개의 변수 선언
	int x = 4;
	int y = 2;
	int z;

	// z에 x + y의 값을 할당
	z = x + y;
	// z의 값 출력
	printf("z = x + y = %d\n", z);

	// z에 x - y의 값을 할당
	z = x - y;
	// z의 값 출력
	printf("z = x - y = %d\n", z);

	// z에 x * y의 값을 할당
	z = x * y;
	// z의 값 출력
	printf("z = x * y = %d\n", z);

	// z에 x / y의 값을 할당
	// z는 정수형 변수이므로 소수점 이하의 값은 버림
	z = x / y;
	// z의 값 출력
	printf("z = x / y = %d\n", z);

	return 0;
}