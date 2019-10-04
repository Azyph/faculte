#include <stdio.h>
#include <stdlib.h>

int g1 = 1;
int g2;
int main(void) {
  printf("g1 dans .data est stocke a l'adresse %p\n", &g1);
  printf("g2 dans .bss est stocke a l'adresse %p\n", &g2);

  static int c1=1;
  static int c2;
  printf("c1 dans .data est stocke a l'adresse %p\n", &c1);
  printf("c2 dans .bss est stocke a l'adresse %p\n", &c2);
 
  int b1 = 0;
  int b2;
  printf("b1 dans la pile est stocke a l'adresse %p\n", &b1);
  printf("b2 dans la pile est stocke a l'adresse %p\n", &b2);
 
  return EXIT_SUCCESS;
}
