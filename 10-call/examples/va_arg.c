#include <stdarg.h>

int fce(int a, int b) {
  volatile int c;
  c = a+b*a-b;
  return c;
}

int secti(int n, ...) {
  int souc = 0;
  volatile int i;
  int last;
  va_list ap;
  
  va_start(ap, n);
  last = -1;
  for (i=0; i<n; i++) {
    souc+=va_arg(ap,int);
    souc+=fce(last, i);
    last = i;
  }
  va_end(ap);
  return souc;
}

int  main() {
  return secti(10, 1,2,3,4,5,6,7,8,9,10)+secti(2, 1,2)+secti(8, 1,2,3,4,5,6,7,8);
}
