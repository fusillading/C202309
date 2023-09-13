#include <stdio.h>

int main()
{
	// 한 번에 세 개의 변수 선언
	int one, two, three;

	// 세 개의 변수를 입력해 달라는 요청 출력
	printf("정수 3개를 입력하세요\n");

	// 세 개의 변수에 값을 입력 받아 저장
	scanf_s("%d %d %d", &one, &two, &three);

	// 세 개의 변수의 값을 차례로 출력
	printf("첫 번째 값: %d\n", one);
	printf("두 번째 값: %d\n", two);
	printf("세 번째 값: %d\n", three);

	return 0;

}