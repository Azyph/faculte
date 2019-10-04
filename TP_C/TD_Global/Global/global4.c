#include <stdio.h>
#include <stdlib.h>

int a = 1;
int main(void) {
  int b = 0;
  printf("a=%d est stocke a l'adresse %p\n", a, &a);
  printf("b=%d est stocke a l'adresse %p\n", b, &b);
  return EXIT_SUCCESS;
}
