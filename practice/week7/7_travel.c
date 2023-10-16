#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

// 여행자 이름을 입력하는 배열 선언, 최대 이름 길이는 10
char names[NUMPEOPLE][10];
// 도시명을 입력하는 배열 선언, 최대 도시명의 길이는 10
char cities[NUMCITY][10];

// 여행 일 수를 계산하는 함수를 먼저 선언
void calculateTravelDays();

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

	// 각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++)
	{
		int totalDays = 0;

		// 도시마다 보낸 일 수를 전부 더한다.
		for (int j = 0; j < NUMPEOPLE; j++)
		{
			totalDays += travelDays[i][j];
		}

		// 각 도시에서 평균 며칠을 보냈는지 계산
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("도시 %s에서 보낸 총 일수 : %d, 평균 일수 : %.2f\n", cities[i], totalDays, averageDays);
	}
}