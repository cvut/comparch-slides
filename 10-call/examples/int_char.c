char secti(char a, int b) {
  volatile int ch;
  ch = a+b;
  return ch;
}

unsigned char secti_unsigned(unsigned char a, int b) {
  volatile unsigned int ch;
  ch = a+b;
  return ch;
}


int  _start() {
  volatile int x = 10;
  volatile short int c = -1;
  x = c*5;
  c = secti(c, x);
  volatile unsigned int ux = 10;
  volatile unsigned char uc = -1;
  uc = secti_unsigned(uc, ux);
  return c+uc;
}
