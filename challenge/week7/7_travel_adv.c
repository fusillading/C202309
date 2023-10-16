#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

// 여행자 이름을 입력하는 배열 선언, 최대 이름 길이는 10
char names[NUMPEOPLE][10];
// 도시명을 입력하는 배열 선언, 최대 도시명의 길이는 10
char cities[NUMCITY][10];

// 여행 일 수를 계산하는 함수 선언
void calculateTravelDays();

// 각 도시에서 보낸 총 일수를 계산하는 함수 선언
int getSum(int numArray[]);

// 각 도시에서 보낸 평균 일수를 계산하는 함수 선언
double getAverage(int numArray[]);

// 도시 별 머문 평균 일수를 기반으로 가장 인기있는 도시를 출력하는 함수 선언
void getFamousCity(double dayArray[]);


int main()
{

	// 도시명을 입력받음
	printf("%d개의 도시명을 차례대로 입력해주세요. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	// 여행자 이름을 입력받음
	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	// 여행 일 수를 계산함
	calculateTravelDays();

	// 프로그램 종료
	return 0;
}

void calculateTravelDays() {
	// 어떤 사람이 어떤 도시에 방문했을 때 보내는 일 수를 저장하는 이중 배열
	int travelDays[NUMCITY][NUMPEOPLE];

	// 각 도시에서 각 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMCITY; i++)
	{
		for (int j = 0; j < NUMPEOPLE; j++)
		{
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	// 도시에 다른 평균 여행일을 저장하는 배열 선언
	double averageDays[NUMCITY];

	// 각 도시마다 보낸 총 일 수 및 평균 일 수 계산, 출력
	for (int i = 0; i < NUMCITY; i++)
	{
		int totalDay = getSum(travelDays[i]);
		double averageDay = getAverage(travelDays[i]);

		printf("도시 %s에서 보낸 총 일 수: %d, 평균 일 수: %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}

	// 가장 인기있는 도시 출력
	getFamousCity(averageDays);
}


int getSum(int numArray[])
{
	// 배열의 합을 저장할 변수 선언
	int sum = 0;

	// 배열의 모든 요소를 더한다.
	for (int i = 0; i < NUMPEOPLE; i++)
	{
		sum += numArray[i];
	}

	// 배열의 합을 반환한다.
	return sum;
}

double getAverage(int numArray[])
{
	// 배열의 평균을 저장할 변수 선언과 동시에 배열의 합을 사람 수로 나눈다.
	double average = getSum(numArray) / (float)NUMPEOPLE;

	// 배열의 평균을 반환한다.
	return average;
}

void getFamousCity(double dayArray[])
{
	// 가장 인기있는 도시의 평균 일 수를 저장할 변수 선언
	double most = 0;

	// 가장 인기있는 도시의 평균 일 수를 찾는다.
	for (int i = 0; i < NUMCITY; i++)
	{
		if (most < dayArray[i])
		{
			most = dayArray[i];
		}
	}

	// 가장 인기있는 도시를 출력한다.
	printf("평균일 기준으로 가장 인기있었던 도시는 ");

	// 가장 인기있는 도시가 몇 개 있는지 모르기 때문에 여러 도시를 출력할 수 있도록 for문을 사용한다.
	for (int i = 0; i < NUMCITY; i++)
	{
		if (dayArray[i] == most)
		{
			printf("%s ", cities[i]);
		}
	}

	printf("입니다. (평균 머문 일 수): %.2f", most);
}

