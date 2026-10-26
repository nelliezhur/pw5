#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
while (n > 0) {
  double c = 0.0;
  for (int i = 1;i <= n;i++){
    float h = (float)i / (i + 1);
    c += h;
  }
printf("SUM: %.6f\n", c);
scanf("%d", &n);
}
return 0;
}
