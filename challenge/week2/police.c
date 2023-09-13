#include <stdio.h>

int main()
{
	// 이름 변수 선언
	char name[128];
	// 입력해 달라고 요청
	printf("이름?: ");
	// 이름을 입력
	scanf_s("%s", name, sizeof(name));
	// 줄바꿈
	printf('\n');


	// 나이 변수 선언
	int age;
	// 입력해 달라고 요청
	printf("나이?: ");
	// 나이를 입력
	scanf_s("%d", &age);
	// 줄바꿈
	printf('\n');

	// 몸무게 변수 선언
	double weight;
	// 입력해 달라고 요청
	printf("몸무게?: ");
	// 몸무게를 입력
	scanf_s("%lf", &weight);
	// 줄바꿈
	printf('\n');

	// 키 변수 선언
	double height;
	// 입력해 달라고 요청
	printf("키?: ");
	// 키를 입력
	scanf_s("%lf", &height);

	// 줄바꿈
	printf('\n');

	// 범죄명 변수 선언
	char crime[512];
	// 입력해 달라고 요청
	printf("범죄?: ");
	// 범죄명을 입력
	scanf_s("%s", &crime, sizeof(crime));

	// 줄바꿈
	printf('\n');

	//정보가 나오는 부분
	printf("-----범죄자 정보-----\n");
	// 이름 출력
	printf("이름 \t: %s\n", name);
	// 나이 출력
	printf("나이 \t: %d\n", age);
	// 몸무게 출력
	printf("몸무게 \t: %lf\n", weight);
	// 키 출력
	printf("키 \t: %lf\n", height);
	// 범죄명 출력
	printf("죄목 \t: %s\n", crime);
}