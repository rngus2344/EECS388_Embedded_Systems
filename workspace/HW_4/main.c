#include <stdio.h>

void func_ref(int *a) {
  *a++;
}
int main () {
  int x = 10;
  func_ref(&x);
  printf("x=%d\n", x);
  return 0;
}
