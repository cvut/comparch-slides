int secti4(int a, int b, int c, int d) {
  volatile int x, y, z, w;
  x = (a+b)/5;
  y= (x+c+d)/9;
  z = x*x-a*y+b*x;
  w= c*x-d*y+x*x-y*y+z;
  return x+y-a*b+z-w;
}

int secti(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
  volatile int x1, x2, x3, x4;
  x1 = secti4(b,c,d,f);
  x2 = secti4(g,h,i,j);
  x3 = x1+a-b*x2;
  x4 = x2-c*x3;
  return x1+x2+x3+x4;
}


int  _start() {
  int x;
  x = secti(1,2,3,4,5,6,7,8,9,10);
  return x;
}
