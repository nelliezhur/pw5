#include <stdio.h>
int main() {
double f[8];
double c = 0.0;
for (int i = 0;i <= 7;i++) {
  double n;
  scanf("%lf", &n);
  f[i] = n;
}
for (int i = 0;i <= 7;i++) {
  printf("%.2lf ", f[i]);
}
printf("\n");
for (int i = 0;i <= 7;i++) {
  if (f[i] > 0) {
  c += f[i];
  }
}
printf("%.2lf\n", c);
return 0;
}
