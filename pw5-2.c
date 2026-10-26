#include <stdio.h>
int main() {
int const height = 5;
for (int i = 1;i <= height;i++) {
  for (int n = 1;n <= height;n++) {
    if (i == 1 || i == height || n == 1 || n == height) {
      printf("=");
    }
    else {
    printf(" ");
    }
  }
printf("\n");
}
return 0;
}
