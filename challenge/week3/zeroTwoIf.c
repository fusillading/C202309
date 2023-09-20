#include <stdio.h>

int main()
{
	// num이라는 변수를 선언하고 0을 할당
	int num = 0;

	// 사용자에게 숫자를 입력하라는 내용 출력
	printf("숫자를 입력하시오: ");

	// 사용자에게 입력 받고, 받은 값을 num에 할당
	scanf_s("%d", &num);

	// if문을 사용하여 num의 값에 따라 맞는 내용 출력
	if (num == 0)
	{
		printf("zero");
	}
	else if (num ==1)
	{
		printf("one");
	}
	else if (num == 2)
	{
		printf("two");
	}
	else
	{
		printf("not 0 ~ 2");
	}

	return 0;
}