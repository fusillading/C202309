#include <stdio.h>

int main()
{
	// choice��� ������ ����
	int choice;

	// ����ڿ��� � �Է��� �ִ��� �˷���
	printf("1. ��������\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");

	// ������� �Է��� �޾� choice�� ����
	scanf_s("%d", &choice);

	// if���� ����Ͽ� ������� �Է¿� ���� �´� ����� ��
	if (choice == 1)
	{
		printf("������ �����մϴ�.");
	}
	else if (choice == 2)
	{
		printf("���� ���� �ݽ��ϴ�.");
	}
	else if (choice == 3)
	{
		printf("�����մϴ�.");
	}
	else
	{
		printf("�߸��� �Է��Դϴ�.");
	}

}