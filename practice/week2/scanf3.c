#include <stdio.h>

int main()
{
	char one, two, three;

	printf("문자 3개를 입력하세요\n");

	scanf_s("%c", &one);
	scanf_s("%c", &two);
	scanf_s("%c", &three);

	printf("첫 번째 값: %c\n", one);
	printf("두 번째 값: %c\n", two);
	printf("세 번째 값: %c\n", three);

	return 0;
}