#include <stdio.h>

int main()
{
	// x, y �� ���� 4, -2�� �Ҵ�
	int x = +4;
	int y = -2;

	// x, y�� ��ȣ�� �ٿ��� ���� �� ���
	printf("x + (-y) = %d\n", x + (-y));
	printf("-x + (+y) = %d\n", -x + (+y));

	return 0;
}