#include <stdio.h>

int main()
{
	// �� ���� ���� ����
	int x = 4;
	int y = 2;
	int z;

	// z�� x + y�� ���� �Ҵ�
	z = x + y;
	// z�� �� ���
	printf("z = x + y = %d\n", z);

	// z�� x - y�� ���� �Ҵ�
	z = x - y;
	// z�� �� ���
	printf("z = x - y = %d\n", z);

	// z�� x * y�� ���� �Ҵ�
	z = x * y;
	// z�� �� ���
	printf("z = x * y = %d\n", z);

	// z�� x / y�� ���� �Ҵ�
	// z�� ������ �����̹Ƿ� �Ҽ��� ������ ���� ����
	z = x / y;
	// z�� �� ���
	printf("z = x / y = %d\n", z);

	return 0;
}