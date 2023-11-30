#include <stdio.h>
#include <stdlib.h>
#define STUDENTS_NUM 5

// 학생 구조체 선언
typedef struct STUDENT {
  int score;
  int student_id;
  int rank;
  char grade;
} STUDENT;

void init(STUDENT* students)
{
  for (int i = 0; i < STUDENTS_NUM; i++) {
    students[i].rank = 1;
  }

  return;
}

void scan(STUDENT* students) {
  for (int i = 0; i < STUDENTS_NUM; i++) {
    printf("input student %d's score: ", i + 1);
    students[i].student_id = i+1;
    scanf_s("%d", &students[i].score);
    if (students[i].score >= 90)
      students[i].grade = 'A';
    else if (students[i].score >= 80)
      students[i].grade = 'B';
    else if (students[i].score >= 70)
      students[i].grade = 'C';
    else if (students[i].score >= 60)
      students[i].grade = 'D';
    else
      students[i].grade = 'F';
  }

  return;
}

// 학생 성적 총 합을 출력하는 함수
int sumScores(const STUDENT* students) {
  // 반환할 변수를 0으로 초기화하고 선언
  int ret = 0;

  // 성적 배열을 순회하며 전부 더하는 부분
  for (int i = 0; i < STUDENTS_NUM; i++) {
    ret += students[i].score;
  }

  // 전부 더한 값을 반환
  return ret;
}

// 학생 성적 평균을 출력하는 함수
double averageScores(const STUDENT* students) {
  return (double)sumScores(students) / STUDENTS_NUM;
}

void makeRanks(STUDENT* students) {  
  // 학생별 성적 순위를 계산하는 부분
  for (int i = 0; i < STUDENTS_NUM; i++) {
    for (int j = 0; j < STUDENTS_NUM; j++) {
      if (students[i].score < students[j].score) (students[i].rank)++;
    }
  }

  return;
}

// 학생별 성적 순위를 출력하는 함수
void printRanks(const STUDENT* students) {

  // 학생별 성적 순위를 출력하는 부분
  printf("students ranking by score:\n");


  for (int i = 0; i < STUDENTS_NUM; i++) {
    printf("student %d's ranking is %d.\n", students[i].student_id, students[i].rank);
  }
}

// 특정 grade를 받은 학생을 출력하는 함수
void classifyStudents(const STUDENT* students, char targetGrade) {
  // 학생 성적 분류를 출력하는 부분
  printf("\nstudents list by grade:\n");


  // 배열을 순회하며 특정 grade를 받았는지 확인하고 받았다면 출력하는 부분
  for (int i = 0; i < STUDENTS_NUM; i++) {
    if (students[i].grade == targetGrade)
      printf("student %d got a %c grade.\n", students[i].student_id, students[i].grade);
  }

  printf("end of %c grade students\n\n", targetGrade);
}

int main() {
  //// 학생들의 성적을 저장하는 배열. { 0 }으로 선언하여 초기화함.
  //int scores[STUDENTS] = {0};

  // 학생 구조체를 동적으로 할당
  STUDENT* students = (STUDENT*)malloc(STUDENTS_NUM * sizeof(STUDENT));

  // 학생 구조체 초기화
  init(students);

  // 학생들의 성적을 입력받는 부분
  scan(students);

  // 버퍼에 남아있는 개행 문자를 제거하는 부분
  char ch = getchar();

  // 특정 grade를 입력받는 부분
  char target;
  printf("input specific grade (A, B, C, D ,F): ");
  scanf_s("%c", &target);

  // classifyStudents 함수를 사용하는 부분
  classifyStudents(students, target);

  int sum = sumScores(students);
  double average = averageScores(students);
  printf("sum of scores is %d, average is %lf.\n\n", sum, average);

  makeRanks(students);
  printRanks(students);

  return 0;
}