#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Int: %d\nShort: %d\n", sizeof(int), sizeof(short));
  printf("Long: %d\nFloat: %d\n", sizeof(long), sizeof(float));
  printf("Double: %d\nLongDouble: %d\n", sizeof(double), sizeof(long double));
  return 0;
}
