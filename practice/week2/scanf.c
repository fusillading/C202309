#include <stdio.h>

int main()
{
	// input이라는 변수 선언
	int input;
	// 값을 입력해 달라는 요청 출력
	printf("값을 입력하세요: ");
	
	// 정수 값을 입력 받아 input 변수에 저장
	scanf_s("%d", &input);

	// input 변수의 값 출력
	printf("입력값: %d\n", input);

	return 0;
}