#include <stdio.h>

int main()
{
	// ������ ���� ����
	char one, two, three;

	// �� ���� ������ �Է��� �޶�� ��û ���
	printf("���� 3���� �Է��ϼ���(���� ����)\n");

	// �� ���� ������ ���� �Է� �޾� ����
	scanf_s("%c", &one);
	scanf_s("%c", &two);
	scanf_s("%c", &three);

	// �� ���� ������ ���� ���ʷ� ���
	printf("ù ��° ��: %c\n", one);
	printf("�� ��° ��: %c\n", two);
	printf("�� ��° ��: %c\n", three);

	return 0;
}