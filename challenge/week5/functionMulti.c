#include <stdio.h>

// multiF �Լ��� ����
long multiF(int value);

int main()
{
	// 2, 3, 5������ ���� ����ϴ� �κ�
	printf("1���� 2������ ���� %ld\n", multiF(2));
	printf("1���� 3������ ���� %ld\n", multiF(3));
	printf("1���� 5������ ���� %ld\n", multiF(5));

	return 0;
}

// multiF �Լ��� ����
long multiF(int value)
{
	// multi�� ���� ���� i, �������� ��ȯ�� multi�� ����
	int i = 1;
	long long multi = 1;

	// multi�� i�� ���ϰ� i�� 1�� ������Ű�� �κ��� value��ŭ �ݺ�
	while(i <= value)
	{
		multi *= i;
		i++;
	}

	// multi�� ��ȯ
	return multi;
}