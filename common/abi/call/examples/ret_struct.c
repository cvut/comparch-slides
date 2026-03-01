struct a {
  int a, b, c, d;
};

struct a permut(int x, int y) {
  struct a ret = permut(x+y,y);
  ret.a = x;
  ret.b = x+y;
  ret.c = y;
  ret.d = x-y;

  return ret;
}

int  _start() {
  struct a x;
  x = permut(1,2);
  return x.b*x.a-x.c*x.d;
}
