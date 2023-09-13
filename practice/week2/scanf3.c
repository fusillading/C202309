#include <stdio.h>

int main()
{
	// 문자형 변수 선언
	char one, two, three;

	// 세 개의 변수를 입력해 달라는 요청 출력
	printf("문자 3개를 입력하세요(공백 없이)\n");

	// 세 개의 변수에 값을 입력 받아 저장
	scanf_s("%c", &one);
	scanf_s("%c", &two);
	scanf_s("%c", &three);

	// 세 개의 변수의 값을 차례로 출력
	printf("첫 번째 값: %c\n", one);
	printf("두 번째 값: %c\n", two);
	printf("세 번째 값: %c\n", three);

	return 0;
}