#include <stdio.h>

// multiF 함수를 선언
long multiF(int value);

int main()
{
	// 2, 3, 5까지의 곱을 출력하는 부분
	printf("1부터 2까지의 곱은 %ld\n", multiF(2));
	printf("1부터 3까지의 곱은 %ld\n", multiF(3));
	printf("1부터 5까지의 곱은 %ld\n", multiF(5));

	return 0;
}

// multiF 함수를 정의
long multiF(int value)
{
	// multi에 곱할 변수 i, 마지막에 반환할 multi를 선언
	int i = 1;
	long long multi = 1;

	// multi에 i를 곱하고 i를 1씩 증가시키는 부분을 value만큼 반복
	while(i <= value)
	{
		multi *= i;
		i++;
	}

	// multi를 반환
	return multi;
}