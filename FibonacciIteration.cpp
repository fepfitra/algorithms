#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

int main() {
  int num=5, n1=1, n2=1;
  int fib=0;
  
  for (int i=1; i<num; i++) {
    fib = n1 + n2;
    n1 = n2;
    n2 = fib;
  }

  printf("%d %d", num, fib);
}
