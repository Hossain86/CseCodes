//write a function that will be calculated gcd of two values

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", gcd(a, b));
  return 0;
}