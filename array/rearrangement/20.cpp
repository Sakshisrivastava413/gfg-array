#include <iostream>

using namespace std;

int main() {
  int a[] = {1, -1, 3, 2, -7, -5, 11, 6};
  int n = 8;
  int temp[100];
  int ctr = 0;
  for (int i = 0; i < n; i++) {
    if(a[i] > 0) {
      a[i - ctr] = a[i];
    } else {
      temp[ctr] = a[i];
      ctr++;
    }
  }
  for (int i = n - ctr, j = 0; i < n; i++, j++) {
    a[i] = temp[j];
  }

  for (int i = 0; i < n; i++)
    cout << a[i] << endl;

}