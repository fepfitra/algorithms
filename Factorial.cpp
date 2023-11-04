#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

unsigned int factorial(unsigned int n) {
  return n == 1 ? 1 : n*factorial(n-1);
}

int main() {
  int num = 5;
  printf("%d %d", num, factorial(num));
}
