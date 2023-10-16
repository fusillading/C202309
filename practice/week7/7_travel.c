#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

// ������ �̸��� �Է��ϴ� �迭 ����, �ִ� �̸� ���̴� 10
char names[NUMPEOPLE][10];
// ���ø��� �Է��ϴ� �迭 ����, �ִ� ���ø��� ���̴� 10
char cities[NUMCITY][10];

// ���� �� ���� ����ϴ� �Լ��� ���� ����
void calculateTravelDays();

int main()
{

	// ���ø��� �Է¹���
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	// ������ �̸��� �Է¹���
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	// ���� �� ���� �����
	calculateTravelDays();

	// ���α׷� ����
	return 0;
}

void calculateTravelDays() {
	// � ����� � ���ÿ� �湮���� �� ������ �� ���� �����ϴ� ���� �迭
	int travelDays[NUMCITY][NUMPEOPLE];

	// �� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++)
	{
		for (int j = 0; j < NUMPEOPLE; j++)
		{
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	// �� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++)
	{
		int totalDays = 0;

		// ���ø��� ���� �� ���� ���� ���Ѵ�.
		for (int j = 0; j < NUMPEOPLE; j++)
		{
			totalDays += travelDays[i][j];
		}

		// �� ���ÿ��� ��� ��ĥ�� ���´��� ���
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("���� %s���� ���� �� �ϼ� : %d, ��� �ϼ� : %.2f\n", cities[i], totalDays, averageDays);
	}
}