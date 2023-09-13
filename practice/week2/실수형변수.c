#include <stdio.h>

int main()
{
	// 실수형 변수 선언과 동시에 초기화
	float pi1 = 3.1415926f;

	// 소수점 다섯 번째 자리까지 출력
	printf("%.5f\n", pi1);

	// 실수형 변수 선언과 동시에 초기화
	double pi2 = 3.141;

	// 소수점 세 번째 자리까지 출력
	printf("%.3lf", pi2);

	return 0;
}