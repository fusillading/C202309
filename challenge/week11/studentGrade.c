#include <stdio.h>
#define STUDENTS 5

// 학생 성적 총 합을 출력하는 함수
int sumScores(int* scores) {
  // 반환할 변수를 0으로 초기화하고 선언
  int ret = 0;

  // 성적 배열을 순회하며 전부 더하는 부분
  for (int i = 0; i < STUDENTS; i++) {
    ret += *(scores + i);
  }

  // 전부 더한 값을 반환
  return ret;
}

// 학생 성적 평균을 출력하는 함수
double averageScores(int* scores) {
  return (double)sumScores(scores) / STUDENTS;
}

// 학생별 성적 순위를 출력하는 함수
void printRanks(int* scores) {
  // 학생별 성적 순위를 출력하는 부분
  printf("학생별 성적 순위:\n");

  // 학생별 성적 순위를 저장하는 배열
  int ranks[STUDENTS] = {0};

  // 학생별 성적 순위를 계산하는 부분
  for (int i = 0; i < STUDENTS; i++) {
    for (int j = 0; j < STUDENTS; j++) {
      if (*(scores + i) < *(scores + j)) (*(ranks + i))++;
    }
  }

  // 학생별 성적 순위를 출력하는 부분
  for (int i = 0; i < STUDENTS; i++) {
    printf("%d 학생의 성적 순위는 %d등 입니다.\n", i + 1, (*(ranks + i)) + 1);
  }
}

// 특정 grade를 받은 학생을 출력하는 함수
void classifyStudents(int* scores, char targetGrade) {
  // 학생 성적 분류를 출력하는 부분
  printf("\n학생 성적 분류:\n");

  // 학생이 어떤 grade를 받았는지 임시로 저장하는 변수
  char grade = ' ';

  // 배열을 순회하며 특정 grade를 받았는지 확인하고 받았다면 출력하는 부분
  for (int i = 0; i < STUDENTS; i++) {
    if (*(scores + i) >= 90)
      grade = 'A';
    else if (*(scores + i) >= 80)
      grade = 'B';
    else if (*(scores + i) >= 70)
      grade = 'C';
    else if (*(scores + i) >= 60)
      grade = 'D';
    else
      grade = 'F';

    if (grade == targetGrade)
      printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
  }

  printf("%c 점수를 받은 학생 출력 끝\n\n", targetGrade);
}

int main() {
  // 학생들의 성적을 저장하는 배열. { 0 }으로 선언하여 초기화함.
  int scores[STUDENTS] = {0};

  // 학생들의 성적을 입력받는 부분
  for (int i = 0; i < STUDENTS; i++) {
    printf("학생 %d의 성적을 입력하세요: ", i + 1);
    scanf_s("%d", scores + i);
  }

  // 버퍼에 남아있는 개행 문자를 제거하는 부분
  char ch = getchar();

  // 특정 grade를 입력받는 부분
  char target;
  printf("특정 점수 (A, B, C, D ,F)를 입력하시오: ");
  scanf_s("%c", &target);

  // classifyStudents 함수를 사용하는 부분
  classifyStudents(scores, target);

  int sum = sumScores(scores);
  double average = averageScores(scores);
  printf("학생들 점수의 총 합은 %d이고, 평균은 %lf입니다.\n\n", sum, average);

  printRanks(scores);

  return 0;
}