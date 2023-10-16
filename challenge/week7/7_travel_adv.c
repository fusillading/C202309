#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

// ������ �̸��� �Է��ϴ� �迭 ����, �ִ� �̸� ���̴� 10
char names[NUMPEOPLE][10];
// ���ø��� �Է��ϴ� �迭 ����, �ִ� ���ø��� ���̴� 10
char cities[NUMCITY][10];

// ���� �� ���� ����ϴ� �Լ� ����
void calculateTravelDays();

// �� ���ÿ��� ���� �� �ϼ��� ����ϴ� �Լ� ����
int getSum(int numArray[]);

// �� ���ÿ��� ���� ��� �ϼ��� ����ϴ� �Լ� ����
double getAverage(int numArray[]);

// ���� �� �ӹ� ��� �ϼ��� ������� ���� �α��ִ� ���ø� ����ϴ� �Լ� ����
void getFamousCity(double dayArray[]);


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

	// ���ÿ� �ٸ� ��� �������� �����ϴ� �迭 ����
	double averageDays[NUMCITY];

	// �� ���ø��� ���� �� �� �� �� ��� �� �� ���, ���
	for (int i = 0; i < NUMCITY; i++)
	{
		int totalDay = getSum(travelDays[i]);
		double averageDay = getAverage(travelDays[i]);

		printf("���� %s���� ���� �� �� ��: %d, ��� �� ��: %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}

	// ���� �α��ִ� ���� ���
	getFamousCity(averageDays);
}


int getSum(int numArray[])
{
	// �迭�� ���� ������ ���� ����
	int sum = 0;

	// �迭�� ��� ��Ҹ� ���Ѵ�.
	for (int i = 0; i < NUMPEOPLE; i++)
	{
		sum += numArray[i];
	}

	// �迭�� ���� ��ȯ�Ѵ�.
	return sum;
}

double getAverage(int numArray[])
{
	// �迭�� ����� ������ ���� ����� ���ÿ� �迭�� ���� ��� ���� ������.
	double average = getSum(numArray) / (float)NUMPEOPLE;

	// �迭�� ����� ��ȯ�Ѵ�.
	return average;
}

void getFamousCity(double dayArray[])
{
	// ���� �α��ִ� ������ ��� �� ���� ������ ���� ����
	double most = 0;

	// ���� �α��ִ� ������ ��� �� ���� ã�´�.
	for (int i = 0; i < NUMCITY; i++)
	{
		if (most < dayArray[i])
		{
			most = dayArray[i];
		}
	}

	// ���� �α��ִ� ���ø� ����Ѵ�.
	printf("����� �������� ���� �α��־��� ���ô� ");

	// ���� �α��ִ� ���ð� �� �� �ִ��� �𸣱� ������ ���� ���ø� ����� �� �ֵ��� for���� ����Ѵ�.
	for (int i = 0; i < NUMCITY; i++)
	{
		if (dayArray[i] == most)
		{
			printf("%s ", cities[i]);
		}
	}

	printf("�Դϴ�. (��� �ӹ� �� ��): %.2f", most);
}

