#include <stdio.h>

const double PI = 3.141592;

int main()
{
	const YEAR = 1972;
	printf("C ��ǥ ����: %d\n", YEAR);

	//YEAR = 1973; // error: assignment of read-only variable ��YEAR��

		
	printf("���� ���� ���ϴ� ����: %.2f * ������^2\n", PI);
}