#include <stdio.h>

int main()
{
	// num�̶�� ������ �����ϰ� 0�� �Ҵ�
	int num = 0;

	// ����ڿ��� ���ڸ� �Է��϶�� ���� ���
	printf("���ڸ� �Է��Ͻÿ�: ");

	// ����ڿ��� �Է� �ް�, ���� ���� num�� �Ҵ�
	scanf_s("%d", &num);

	// if���� ����Ͽ� num�� ���� ���� �´� ���� ���
	if (num == 0)
	{
		printf("zero");
	}
	else if (num ==1)
	{
		printf("one");
	}
	else if (num == 2)
	{
		printf("two");
	}
	else
	{
		printf("not 0 ~ 2");
	}

	return 0;
}