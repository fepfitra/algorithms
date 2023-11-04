
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define NO_OF_CHARS 256

bool areAnagram(char* str1, char* str2) {
  int count[NO_OF_CHARS] = {0};
  int i;

  for (i=0; str1[i] && str2[i]; i++) {
    count[str1[i]]++;
    count[str2[i]]--;
  }

  if (str1[i] || str2[i]) return false;

  for (i=0; i<NO_OF_CHARS; i++) {
    if (count[i] != 0) return false;
  }

  return true;
}

int main (int argc, char *argv[]) {
  char str1[] = "test";
  char str2[] = "tset";
  
  printf("%s %s %d", str1, str2, areAnagram(str1, str2));
}
