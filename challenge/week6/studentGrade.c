#include <stdio.h>
#define STUDENTS 5

// �л� ���� �� ���� ����ϴ� �Լ�
int sumScores(int scores[])
{
	// ��ȯ�� ������ 0���� �ʱ�ȭ�ϰ� ����
	int ret = 0;

	// ���� �迭�� ��ȸ�ϸ� ���� ���ϴ� �κ�
	for (int i = 0; i < STUDENTS; i++)
	{
		ret += scores[i];
	}

	// ���� ���� ���� ��ȯ
	return ret;
}

// �л� ���� ����� ����ϴ� �Լ�
double averageScores(int scores[])
{
	return (double)sumScores(scores)/STUDENTS;
}

// �л��� ���� ������ ����ϴ� �Լ�
void printRanks(int scores[])
{
	// �л��� ���� ������ ����ϴ� �κ�
	printf("�л��� ���� ����:\n");

	// �л��� ���� ������ �����ϴ� �迭
	int ranks[STUDENTS] = { 0 };

	// �л��� ���� ������ ����ϴ� �κ�
	for (int i = 0; i < STUDENTS; i++)
	{
		for (int j = 0; j < STUDENTS; j++)
		{
			if (scores[i] < scores[j])
				ranks[i]++;
		}
	}

	// �л��� ���� ������ ����ϴ� �κ�
	for (int i = 0; i < STUDENTS; i++)
	{
		printf("%d �л��� ���� ������ %d�� �Դϴ�.\n", i + 1, ranks[i] + 1);
	}
}

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

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("�л��� ������ �� ���� %d�̰�, ����� %lf�Դϴ�.\n", sum, average);

	printRanks(scores);

	return 0;
}