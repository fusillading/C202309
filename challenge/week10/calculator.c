#include <stdio.h>

void plus(double *a, double *b, double *result);

void minus(double *a, double *b, double *result);

void multiply(double *a, double *b, double *result);

void divide(double *a, double *b, double *result);

int main() {
  double a, b, result;

  a = 2;
  b = 3;

  plus(&a, &b, &result);
  printf("%.0lf + %.0lf = %.2lf\n", a, b, result);

  minus(&a, &b, &result);
  printf("%.0lf - %.0lf = %.2lf\n", a, b, result);

  multiply(&a, &b, &result);
  printf("%.0lf * %.0lf = %.2lf\n", a, b, result);

  divide(&a, &b, &result);
  printf("%.0lf / %.0lf = %.2lf\n", a, b, result);

  return 0;
}

void plus(double *a, double *b, double *result) { *result = *a + *b; }

void minus(double *a, double *b, double *result) { *result = *a - *b; }

void multiply(double *a, double *b, double *result) { *result = *a * *b; }

void divide(double *a, double *b, double *result) { *result = *a / *b; }
