#include <stdio.h>
#define STUDENTS 5

// 특정 grade를 받은 학생을 출력하는 함수
void classifyStudents(int scores[], char targetGrade)
{
	// 학생 성적 분류를 출력하는 부분
	printf("학생 성적 분류:\n");

	// 학생이 어떤 grade를 받았는지 임시로 저장하는 변수
	char grade = ' ';

	// 배열을 순회하며 특정 grade를 받았는지 확인하고 받았다면 출력하는 부분
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
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
	}
}


int main()
{
	// 학생들의 성적을 저장하는 배열. { 0 }으로 선언하여 초기화함.
	int scores[STUDENTS] = { 0 };

	// 학생들의 성적을 입력받는 부분
	for (int i = 0; i < STUDENTS; i++)
	{
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	// 버퍼에 남아있는 개행 문자를 제거하는 부분
	char ch = getchar();

	// 특정 grade를 입력받는 부분
	char target;
	printf("특정 점수 (A, B, C, D ,F)를 입력하시오: ");
	scanf_s("%c", &target);

	// classifyStudents 함수를 사용하는 부분
	classifyStudents(scores, target);

	return 0;
}