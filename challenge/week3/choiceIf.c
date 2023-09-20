#include <stdio.h>

int main()
{
	// choice라는 변수를 선언
	int choice;

	// 사용자에게 어떤 입력이 있는지 알려줌
	printf("1. 파일저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");

	// 사용자의 입력을 받아 choice에 저장
	scanf_s("%d", &choice);

	// if문을 사용하여 사용자의 입력에 따라 맞는 출력을 함
	if (choice == 1)
	{
		printf("파일을 저장합니다.");
	}
	else if (choice == 2)
	{
		printf("저장 없이 닫습니다.");
	}
	else if (choice == 3)
	{
		printf("종료합니다.");
	}
	else
	{
		printf("잘못된 입력입니다.");
	}

}
