#include <stdio.h>
#define STUDENTS 5

// Ư�� grade�� ���� �л��� ����ϴ� �Լ�
void classifyStudents(int scores[], char targetGrade)
{
	// �л� ���� �з��� ����ϴ� �κ�
	printf("�л� ���� �з�:\n");

	// �л��� � grade�� �޾Ҵ��� �ӽ÷� �����ϴ� ����
	char grade = ' ';

	// �迭�� ��ȸ�ϸ� Ư�� grade�� �޾Ҵ��� Ȯ���ϰ� �޾Ҵٸ� ����ϴ� �κ�
	for (int i = 0; i < STUDENTS; i++)
	{
		if (scores[i] >= 90)
			grade = 'A';
		else if (scores[i] >= 80)
			grade = 'B';
		else if (scores[i] >= 70)
			grade = 'C';
		else if (scores[i] >= 60)
			grade = 'D';
		else
			grade = 'F';

		if (grade == targetGrade)
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
	}
}


int main()
{
	// �л����� ������ �����ϴ� �迭. { 0 }���� �����Ͽ� �ʱ�ȭ��.
	int scores[STUDENTS] = { 0 };

	// �л����� ������ �Է¹޴� �κ�
	for (int i = 0; i < STUDENTS; i++)
	{
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	// ���ۿ� �����ִ� ���� ���ڸ� �����ϴ� �κ�
	char ch = getchar();

	// Ư�� grade�� �Է¹޴� �κ�
	char target;
	printf("Ư�� ���� (A, B, C, D ,F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target);

	// classifyStudents �Լ��� ����ϴ� �κ�
	classifyStudents(scores, target);

	return 0;
}