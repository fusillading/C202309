#include <stdio.h>

int main()
{
	// �� ���� ���� ����
	int x = 4;
	int y = 2;
	int z;

	// z�� (x + y) * (x - y)�� ���� �Ҵ�
	z = (x + y) * (x - y);
	// z�� �� ���
	printf("z = (x + y) * (x - y) = %d\n", z);

	// z�� (x * y) + (x / y)�� ���� �Ҵ�
	z = (x * y) + (x / y);
	// z�� �� ���
	printf("z = (x * y) + (x / y) = %d\n", z);

	// z�� x + y + 2004�� ���� �Ҵ�
	z = x + y + 2004;
	// z�� �� ���
	printf("z = x + y + 2004 = %d\n", z);

	return 0;
}