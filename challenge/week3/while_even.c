#include <stdio.h>

int main()
{
	// while���� �����ϱ� ���� int ���� ����
	int cnt = 0;

	// cnt�� 10���� ���� ������ �ݺ�
	// ���ǹ��� cnt++�� �־ cnt�� 10�� �Ǹ� �ݺ����� ������������ ��
	while (cnt++ < 10)
	{
		// cnt�� ¦���� ���� continue�� ���� �ݺ����� ó������ ���ư�
		if (cnt % 2 == 0)
		{
			continue;
		}
		// cnt�� Ȧ���� ���� Hello World!�� ���
		printf("%d Hello World!\n", cnt);
	}

	return 0;
}