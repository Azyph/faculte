#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char* s1 = "Hello";
  char s2[] = "Hello";  
  char s3[] = {'H','e','l','l','o','\0'};
  printf("s1=%s a pour adresse %p\n", s1, s1); 
  printf("s2=%s a pour adresse %p\n", s2, s2); 
  printf("s3=%s a pour adresse %p\n", s3, s3); 
  return EXIT_SUCCESS;
}
