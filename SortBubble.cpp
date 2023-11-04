#include <bits/stdc++.h>
#include <cstdio>
#include <fstream>

using namespace std;

void bubbleSort(int *a, int n) {
  bool swapped;
  for (int i=0; i<n-1; i++) {
    swapped=false;
    for (int j=0; j<n-i-1; j++) {
      if (a[j] > a[j+1]) {
        swap(a[j], a[j+1]);
        swapped=true;
      }
    }
    if (!swapped) break;
  }
}

int main() {
  int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
  int n = sizeof(arr) / sizeof(int);

  bubbleSort(arr, n);

  for (int i=0; i<n; i++) {
    printf("%d ", *(arr+i));
  }
}
