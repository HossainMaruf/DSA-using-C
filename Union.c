#include <stdio.h>
#include <string.h>

union List {
  int num1;
  double num2;
  char name[20];
};

int main() {
  union List l;

  printf("Size of num1: %d\n", sizeof(l.num1));
  printf("Size of num2: %d\n", sizeof(l.num2));
  printf("Size of union: %d\n", sizeof(l));
  l.num1 = 10;
  printf("Value of num1: %d\n", l.num1);
  printf("Value of num2: %lf\n", l.num2);
  // l.num2 = 20.40;
  // printf("Value of num1: %d\n", l.num1);
  // printf("Value of num2: %lf\n", l.num2);

  strcpy(l.name, "Maruf Hossain");
  printf("Value of num1: %d\n", l.num1);
  printf("Name: %s", l.name);

  return 0;
}