#include <stdio.h>

int main()
{
	// 문자열을 저장할 배열 선언
	char str[256];

	// 문자열을 입력해 달라는 요청 출력
	scanf_s("%s", str, sizeof(str));

	// 입력한 문자열 출력
	printf("입력한 문자열: %s\n", str);

	return 0;
}