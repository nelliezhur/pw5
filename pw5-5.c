#include <stdio.h>
#include <math.h>
double calc(double a, double b) {
  return sin(a) + cos(b);
  }
int main() {
double a, b;
while (scanf("%lf %lf", &a, &b) == 2) {
  printf("%.4lf\n", calc(a, b));
  }
return 0;
}
