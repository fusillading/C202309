#include <stdio.h>

// �Լ��� ���� ����
int hapf(int value);

void main()
{
	// 10, 100, 1000������ ���� ����ϴ� �κ�
	printf("1����   10������ ���� %d\n", hapf(10));
	printf("1����  100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
}

// �Լ��� ����
int hapf(int value)
{
	// hap�� ���� ���� i, �������� ��ȯ�� hap�� ����
	int i = 1;
	int hap = 0;

	// hap�� i�� ���ϰ� i�� 1�� ������Ű�� �κ��� value��ŭ �ݺ�
	while(i <= value)
	{
		hap += i;
		i++;
	}

	// hap�� ��ȯ
	return hap;
}