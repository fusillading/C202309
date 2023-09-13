#include <stdio.h>

const double PI = 3.141592;

int main()
{
	const YEAR = 1972;
	printf("C 발표 연도: %d\n", YEAR);

	//YEAR = 1973; // error: assignment of read-only variable ‘YEAR’

		
	printf("원의 넓이 구하는 공식: %.2f * 반지름^2\n", PI);
}