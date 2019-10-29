#include <iostream>

using namespace std;

int reverseArr(int arr[], int start, int end) {
  for (int i = start; i < end / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[end - i - 1];
    arr[end - i - 1] = temp;
  }
}

void printArr(int ar[], int n) {
  cout << "Rotated Array: \n";
  for(int i = 0; i < n; i++) {
    cout << ar[i] << " ";
  }
}

int main() {
  int n = 8, d = 14;
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  d %= n;
  reverseArr(arr, 0, d);
  reverseArr(arr, d + 1, n);
  reverseArr(arr, 0, n);
  printArr(arr, n);
  return 0;
}