#include <stdio.h>

int main()
{
	// do-while���� �����ϱ� ���� int ���� ����
	int cnt = 0;

	// cnt�� 10���� ���� ������ �ݺ�
	do
	{
		// cnt�� ¦���� ���� continue�� ���� �ݺ����� ó������ ���ư�
		if (cnt % 2 == 0)
		{
			continue;
		}
		// cnt�� Ȧ���� ���� Hello World!�� ���
		printf("%d Hello World!\n", cnt);
	} 
	// ���ǹ��� cnt++�� �־ cnt�� 10�� �Ǹ� �ݺ����� ������������ ��
	while (cnt++ < 10);

	return 0;
}