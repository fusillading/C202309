#include <stdio.h>

int main()
{
	// x, y 에 각각 4, -2를 할당
	int x = +4;
	int y = -2;

	// x, y에 부호를 붙여서 연산 후 출력
	printf("x + (-y) = %d\n", x + (-y));
	printf("-x + (+y) = %d\n", -x + (+y));

	return 0;
}