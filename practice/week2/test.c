#include <stdio.h>

int main()
{
	// ���� ����� ���ÿ� �ʱ�ȭ
	int a = 10;
	int b = 15;

	// ���� ���� �� ���
	printf("%d\n", a + b);

	// �� ���� ���ڿ��� �����ϱ� ���� �迭 ����, �ʱ�ȭ(�Ҵ�)
	char text1[10] = "Hello";
	char text2[10] = "World";

	// �� ���� ���ڿ� ���
	printf("%s!\n", text1);
	printf("%s!\n", text2);

	return 0;
}