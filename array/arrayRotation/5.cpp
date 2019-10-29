#include <iostream>

using namespace std;

int searchElement(int a[], int n, int e) {
  int start = 0;
  int end = n - 1;
  int mid = (start + end) / 2;
  if(a[start] == e) return start;
  if(a[end] == e) return end;
  if(a[mid] == e) return mid;
    if(a[start] < e) end = mid + 1;
    else start = mid - 1;
  for(int i = start; i < end; i++) {
    if(e == a[i]) return i;
  }
  if(a[mid] == e) return mid;
  return -1;
}

int main() {
  int a[] = { 4, 5, 6, 7, 8, 1, 2, 3 };
  int n = 8;
  for (int i = 1; i <= 8; i++) {
    int ele = searchElement(a, n, i);
    cout << ele << endl;
  }
  return 0;
}