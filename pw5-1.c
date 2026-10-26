#include <stdio.h>
int main() {
float f1 = -2.0;
float fn = 2.0;
float d = 1.0;
int i = 1;
for (float n = f1;n <= fn;n += d) {
  float y = n*n + n*2 + 1;
  printf("%d\t%.4f\t%.4f\n", i, n, y);
  i++;
  }
return 0;
}
