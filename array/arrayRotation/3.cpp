// Block Swap Algorithm
#include <iostream>

using namespace std;

void leftRotate(int ar, int n, int d) {

  if(n == d) {
    return;
  }

  if(n - d == d) {
    return;
  }

// b is larger
  if(n - d > d) {
    swap(ar, n - d, n - d);
  }

  // a is larger
  if(n - d < d) {
    swap(ar + n - d, n, d);    
  }
  
}

void swap(int beg, int end, int d) {
  for(int i = 0; i < d; i++) {
    int temp = ar[i + beg];
    ar[i + beg] = ar[i + end];
    ar[end + i] = temp;
  }
}

int main() {
  int ar[] = { 1, 2, 3, 4, 5, 6, 7 };
  int n = 7, d = 5;
  leftRotate(ar, n, d);

  for(int i = 0; i < n; i++) {
    cout << ar[i] << endl;
  }
}