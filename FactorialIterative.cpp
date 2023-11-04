#include <bits/stdc++.h>
#include <cstdio>

unsigned int factorial(unsigned int n) {
  int res=1;
  for (int i=2; i<=n; i++) {
    res*=i;
  }
  return res;
}

int main() {
  int num=5;
  printf("%d %d", num, factorial(num));
}
