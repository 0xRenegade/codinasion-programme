// Write a programme to find area of triangle.

#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c, s, area;

  printf("a : ");
  scanf("%lf", &a);
  printf("b : ");
  scanf("%lf", &b);
  printf("c : ");
  scanf("%lf", &c);
  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("\ns : %lf\n", s);
  printf("\narea : %lf\n", area);

  return 0;
}
