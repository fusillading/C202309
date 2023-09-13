#include <stdio.h>

// 원주율 상수 선언
const double PI = 3.141592;

int main()
{
	// C 언어에서는 상수를 대문자로 표기하는 것이 관례
	const int YEAR = 1972;

	// 상수의 값 출력
	printf("C 발표 연도: %d\n", YEAR);

	// 상수의 값을 변경하려고 하면 오류 발생
	//YEAR = 1973;

	// 원의 넓이 구하는 공식 출력
	printf("원의 넓이 구하는 공식: %.2f * 반지름^2\n", PI);
}