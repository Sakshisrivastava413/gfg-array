#include <iostream>
#include <vector>

using namespace std;

int findGCD(int a, int b) {
  if(b == 0) return a;
  return findGCD(b, a % b);
}

int arrayRotate(int ar[], int n, int d) {
  int GCD = findGCD(d, n);
  for(int i = 0; i < GCD; i++) {
    int temp = ar[i];
    int j = i;
    while(1) {
      int k = j + d;
      if(k >= n) {
        k -= n;
      }
      if(k == i) {
        break;
      }
      ar[j] = ar[k];
      j = k;
    }
    ar[j] = temp;
  }
}

int printRotatedArr(int ar[], int n) {
  for (int i = 0; i < n; i++) {
    cout << ar[i];
  }
}

int main() {
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int n = 10, d = 4;
  cout << "Length: " << n << endl;
  cout << "Rotate by: " << d << endl;
  arrayRotate(arr, n, d);
  printRotatedArr(arr, n);
  return 0;
}