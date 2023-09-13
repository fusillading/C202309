#include <stdio.h>

int main()
{
	// 변수 선언과 동시에 초기화
	int a = 10;
	int b = 15;

	// 덧셈 연산 후 출력
	printf("%d\n", a + b);

	// 두 개의 문자열을 저장하기 위한 배열 선언, 초기화(할당)
	char text1[10] = "Hello";
	char text2[10] = "World";

	// 두 개의 문자열 출력
	printf("%s!\n", text1);
	printf("%s!\n", text2);

	return 0;
}