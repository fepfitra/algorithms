#include <algorithm>
#include <bits/stdc++.h>
#include <cstdio>
#include <string>

using namespace std;

bool areAnagram(string s1, string s2) {
  if (s1.length() != s2.length()) return false;
  int n = s1.length();

  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  for (int i=0; i<n; i++) {
    if (s1[i] != s2[i]) return false;
  }

  return true;
}

int main() {
  string str1 = "test";
  string str2 = "tset";

  printf("%s %s %d", str1.c_str(), str2.c_str(), areAnagram(str1, str2));
}
