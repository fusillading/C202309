#include <stdio.h>

// multiF �Լ��� ����
long multiF(int value);

void main()
{
	// 2, 3, 5������ ���� ����ϴ� �κ�
	printf("1���� 2������ ���� %lld\n", multiF(2));
	printf("1���� 3������ ���� %lld\n", multiF(3));
	printf("1���� 5������ ���� %lld\n", multiF(5));
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