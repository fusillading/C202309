#include <stdio.h>

int main()
{
	// �̸� ���� ����
	char name[128];
	// �Է��� �޶�� ��û
	printf("�̸�?: ");
	// �̸��� �Է�
	scanf_s("%s", name, sizeof(name));


	// ���� ���� ����
	int age;
	// �Է��� �޶�� ��û
	printf("����?: ");
	// ���̸� �Է�
	scanf_s("%d", &age);

	// ������ ���� ����
	double weight;
	// �Է��� �޶�� ��û
	printf("������?: ");
	// �����Ը� �Է�
	scanf_s("%lf", &weight);

	// Ű ���� ����
	double height;
	// �Է��� �޶�� ��û
	printf("Ű?: ");
	// Ű�� �Է�
	scanf_s("%lf", &height);


	// ���˸� ���� ����
	char crime[512];
	// �Է��� �޶�� ��û
	printf("����?: ");
	// ���˸��� �Է�
	scanf_s("%s", crime, sizeof(crime));


	//������ ������ �κ�
	printf("-----������ ����-----\n");
	// �̸� ���
	printf("�̸� \t: %s\n", name);
	// ���� ���
	printf("���� \t: %d\n", age);
	// ������ ���
	printf("������ \t: %lf\n", weight);
	// Ű ���
	printf("Ű \t: %lf\n", height);
	// ���˸� ���
	printf("�˸� \t: %s\n", crime);
}