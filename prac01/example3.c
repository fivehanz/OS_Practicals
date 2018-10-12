#include <stdio.h>

int main(int argc, char *argv[]) {
  int first, second;

  printf("example> ");
  scanf("%d %d", &first, &second);
  printf("Input was: %d, %d\n", second, first);

  return 0;
}
