int secti4(int a, int b, int c, int d) {
  volatile int x, y, z, w;
  x = (a+b)/5;
  y= (x+c+d)/9;
  z = x*x-a*y+b*x;
  w= c*x-d*y+x*x-y*y+z;
  return x+y-a*b+z-w;
}

int virus() {
  // skodi
  return 0;
}

int secti(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
  volatile int ii,jj;
  volatile int pole[2];
  
  pole[0] = secti4(b,c,d,f);
  pole[1] = secti4(g,h,i,j);
  jj = i+j;
  for(ii=0; ii<2; ii++) {
    pole[ii] = pole[1-ii]*ii+jj;
  }
  pole[11] = (int)&virus;
  return pole[0]+pole[1];
}


int  _start() {
  int x;
  x = secti(1,2,3,4,5,6,7,8,9,10);
  return x;
}
