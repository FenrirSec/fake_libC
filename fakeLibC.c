#include <stdio.h>

int strcmp(char *str1, char* str2) {
  return 0;
}

char *fgets(char *s, int size, FILE *stream) {
  write(1, "FGETS called\n", 13);
  write(1, *s, size);
  return s;
}
