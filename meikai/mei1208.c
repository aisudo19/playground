#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))

typedef struct {
  double x;
  double y;
}Point;

double distance_of(Point pa, Point pb)
{
  return sqrt(sqr(pa.x - pb.x) - sqr(pa.y - pb.y));
}

int main (void)
{
  Point a ={0.0, 0.0};
  Point b ={3.0, 4.0};

  printf("%.2f", distance_of(a,b));

  return 0;
}
