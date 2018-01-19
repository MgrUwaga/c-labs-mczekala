//sprawdza czy prostokat miesci sie w prostokacie
#include<stdio.h>

struct point
{
  int x;
  int y;
};

struct rect
{
  struct point ll;
  struct point ur;
};

struct point makePoint(int x, int y)
{
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

struct rect setRectancle ( struct point ll,struct point ur)
{
  struct rect tmp;
  tmp.ll.x = ll.x;
  tmp.ll.y = ll.y;
  tmp.ur.x = ur.x;
  tmp.ur.y = ur.y;
  return tmp;
}
int ptinrect(struct point p, struct rect r)
{
  return p.x >= r.ll.x && p.x < r.ur.x && p.y >= r.ll.y && p.y < r.ur.y;
}

int rectinrect(struct rect r1, struct rect r2)
{
  return ptinrect(r1.ll,r2)&&ptinrect(r1.ur,r2);
}
int main(int argc, char const *argv[])
{
  printf("%d\n", rectinrect(setRectancle(makePoint(3,0),makePoint(5,5)),setRectancle(makePoint(0,0),makePoint(6,7))));
}
