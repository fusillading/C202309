#include <stdio.h>

// 함수를 먼저 선언
int hapf(int value);

void main()
{
	// 10, 100, 1000까지의 합을 출력하는 부분
	printf("1부터   10까지의 합은 %d\n", hapf(10));
	printf("1부터  100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
}

// 함수를 정의
int hapf(int value)
{
	// hap에 더할 변수 i, 마지막에 반환할 hap을 선언
	int i = 1;
	int hap = 0;

	// hap에 i를 더하고 i를 1씩 증가시키는 부분을 value만큼 반복
	while(i <= value)
	{
		hap += i;
		i++;
	}

	// hap을 반환
	return hap;
}