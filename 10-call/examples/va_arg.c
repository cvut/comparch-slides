#include <stdarg.h>

int secti(int n, ...) {
  int souc = 0;
  int i;
  va_list ap;
  
  va_start(ap, n);
  for (i=0; i<n; i++) {
    souc+=va_arg(ap,int);
  }
  va_end(ap);
  return souc;
}

int  main() {
  printf("Soucet %d\n", secti(10, 1,2,3,4,5,6,7,8,9,10);
  printf("Soucet %d\n", secti(2, 1,2);
  printf("Soucet %d\n", secti(8, 1,2,3,4,5,6,7,8);
}
