#include <algorithm>
#include <bits/stdc++.h>
#include <string>

using namespace std;

bool isPalindrom(string s) {
  string p=s;
  reverse(p.begin(), p.end());
  return p == s ? true:false;
}

int main (int argc, char *argv[]) {
  string s="kasurusak";
  cout << s << "\n";
  cout << isPalindrom(s) << "\n";
}
