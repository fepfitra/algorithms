#include<bits/stdc++.h> 
#include <cstdio>

using namespace std;

bool isPrime(int n) {
  int i=2;
  if (n<=1||n%2==0||n%3==0) return false;
  if (n==2||n==3) return true;
  for (int i=5; i*i <= n; i+=6) {
    if (n%i==0||n%(i+2)==0) return false;
  }
  return true;
}

int main() {
  int num=97;
  printf("%d %d", num, isPrime(num));
}
