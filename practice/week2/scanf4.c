#include <stdio.h>

int main()
{
	// ���ڿ��� ������ �迭 ����
	char str[256];

	// ���ڿ��� �Է��� �޶�� ��û ���
	scanf_s("%s", str, sizeof(str));

	// �Է��� ���ڿ� ���
	printf("�Է��� ���ڿ�: %s\n", str);

	return 0;
}