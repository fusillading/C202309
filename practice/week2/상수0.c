#include <stdio.h>

int main(void)
{
	// 상수 선언과 동시에 초기화
	const int YEAR = 1972;

	// 상수의 값 출력
	printf("%d\n", YEAR);

	// 상수의 값을 변경하려고 하면 오류 발생
    //YEAR = 1973;

	return 0;
}