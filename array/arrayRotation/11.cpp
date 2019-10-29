#include <iostream>

using namespace std;

int main() {
  int ar[] = { 4, 5, 6, 7, 1, 2, 3 };
  int n = 7;
  int beg = 0, end = n - 1;
  while(beg <= end) {
    int mid = (beg + end) / 2;
    if(ar[beg] + ar[mid] >= ar [end] + ar[mid]) {
      beg = mid + 1;
    } else {
      end = mid - 1;
    }
    if(ar[mid] < ar[beg] && ar[mid] < ar[end]) cout << ar[mid];
  }
}