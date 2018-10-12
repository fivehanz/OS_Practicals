#include <stdio.h>

void swap(int *, int *);

int main(int argc, char *argv[]) {
  int first = 10;
  int second = 20;

  printf ( "swap: first = %d, second = %d\n", first, second ) ;

  swap ( &first, &second ) ;

  printf ( "swapped: first = %d, second = %d\n", first, second ) ;

  return 0;
}


void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
