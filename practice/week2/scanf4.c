#include <stdio.h>

int main()
{
	char str[256];

	scanf_s("%s", str, sizeof(str));
	printf("입력한 문자열: %s\n", str);

	return 0;
}