


int secti(int a, int b) {
  volatile int i;
  volatile int j=a*b;
  volatile int pole[2];
  for (i=0; i<2; i++) {
    pole[i]=j+b*i;
  }
  if (a!=1) {
    secti(1,a+b);
  } else {
    pole[11]=&secti;
  }
  return pole[0]+pole[1];
}


int  _start() {
  int x;
  x = secti(1,2);
  return x;
}
