#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

bool isPalindrome(string s) {
  for (int i=0; i < s.length()/2; i++) if (s[i] != s[s.length()-1-i]) return false;
  return true;
}

int main (int argc, char *argv[]) {
  string S="kasurusak";
  printf("%s %d", S.c_str(), isPalindrome(S));
}
