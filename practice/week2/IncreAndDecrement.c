#include <stdio.h>

int main()
{
	int x = 1;

	// x�� ���� ����ϰ� 1 ����
	printf("x = %d\n", x++);
	printf("x = %d\n", x++);
	// x�� �� 1 ���� �� ���
	printf("x = %d\n", ++x);

	// x�� ���� ����ϰ� 1 ����
	printf("x = %d\n", x--);
	printf("x = %d\n", x--);
	// x�� �� 1 ���� �� ���
	printf("x = %d\n", --x);

	return 0;
}