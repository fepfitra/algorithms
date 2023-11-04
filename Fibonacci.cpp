#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

int fib(int n) {
  if (n==0 || n==1) return 1;
  return fib(n-1)+fib(n-2);
}

int main() {
  int num=5;
  printf("%d %d", num, fib(num));
}
