#include <stdio.h>

int main()
{
	// �� ���� �� ���� ���� ����
	int one, two, three;

	// �� ���� ������ �Է��� �޶�� ��û ���
	printf("���� 3���� �Է��ϼ���\n");

	// �� ���� ������ ���� �Է� �޾� ����
	scanf_s("%d %d %d", &one, &two, &three);

	// �� ���� ������ ���� ���ʷ� ���
	printf("ù ��° ��: %d\n", one);
	printf("�� ��° ��: %d\n", two);
	printf("�� ��° ��: %d\n", three);

	return 0;

}