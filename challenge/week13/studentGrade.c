#include <stdio.h>
#include <stdlib.h>
#define STUDENTS_NUM 5

// �л� ����ü ����
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

// �л� ���� �� ���� ����ϴ� �Լ�
int sumScores(const STUDENT* students) {
  // ��ȯ�� ������ 0���� �ʱ�ȭ�ϰ� ����
  int ret = 0;

  // ���� �迭�� ��ȸ�ϸ� ���� ���ϴ� �κ�
  for (int i = 0; i < STUDENTS_NUM; i++) {
    ret += students[i].score;
  }

  // ���� ���� ���� ��ȯ
  return ret;
}

// �л� ���� ����� ����ϴ� �Լ�
double averageScores(const STUDENT* students) {
  return (double)sumScores(students) / STUDENTS_NUM;
}

void makeRanks(STUDENT* students) {  
  // �л��� ���� ������ ����ϴ� �κ�
  for (int i = 0; i < STUDENTS_NUM; i++) {
    for (int j = 0; j < STUDENTS_NUM; j++) {
      if (students[i].score < students[j].score) (students[i].rank)++;
    }
  }

  return;
}

// �л��� ���� ������ ����ϴ� �Լ�
void printRanks(const STUDENT* students) {

  // �л��� ���� ������ ����ϴ� �κ�
  printf("students ranking by score:\n");


  for (int i = 0; i < STUDENTS_NUM; i++) {
    printf("student %d's ranking is %d.\n", students[i].student_id, students[i].rank);
  }
}

// Ư�� grade�� ���� �л��� ����ϴ� �Լ�
void classifyStudents(const STUDENT* students, char targetGrade) {
  // �л� ���� �з��� ����ϴ� �κ�
  printf("\nstudents list by grade:\n");


  // �迭�� ��ȸ�ϸ� Ư�� grade�� �޾Ҵ��� Ȯ���ϰ� �޾Ҵٸ� ����ϴ� �κ�
  for (int i = 0; i < STUDENTS_NUM; i++) {
    if (students[i].grade == targetGrade)
      printf("student %d got a %c grade.\n", students[i].student_id, students[i].grade);
  }

  printf("end of %c grade students\n\n", targetGrade);
}

int main() {
  //// �л����� ������ �����ϴ� �迭. { 0 }���� �����Ͽ� �ʱ�ȭ��.
  //int scores[STUDENTS] = {0};

  // �л� ����ü�� �������� �Ҵ�
  STUDENT* students = (STUDENT*)malloc(STUDENTS_NUM * sizeof(STUDENT));

  // �л� ����ü �ʱ�ȭ
  init(students);

  // �л����� ������ �Է¹޴� �κ�
  scan(students);

  // ���ۿ� �����ִ� ���� ���ڸ� �����ϴ� �κ�
  char ch = getchar();

  // Ư�� grade�� �Է¹޴� �κ�
  char target;
  printf("input specific grade (A, B, C, D ,F): ");
  scanf_s("%c", &target);

  // classifyStudents �Լ��� ����ϴ� �κ�
  classifyStudents(students, target);

  int sum = sumScores(students);
  double average = averageScores(students);
  printf("sum of scores is %d, average is %lf.\n\n", sum, average);

  makeRanks(students);
  printRanks(students);

  return 0;
}