#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

unsigned int factorial(unsigned int n) {
  if (n==0) return 1;
  int i=n, fact=1;
  while (i != 1) {
    fact*=i;
    i--;
  }
  return fact;

}

int main() {
  int num=5;
  printf("%d %d", num, factorial(num));
}
