#include <stdio.h>

int main()
{
	char str[256];

	scanf_s("%s", str, sizeof(str));
	printf("�Է��� ���ڿ�: %s\n", str);

	return 0;
}