#include <iostream>

using namespace std;

int getGCD(int a, int b)
{
  if (b == 0)
    return a;
  return getGCD(b, a % b);
}

int main()
{
  int ar[] = {2, 3, 4, 5};
  int n = 5;
  for (int k = 0; k < n - 1; k++)
  {
    int c = 0;
    for (int i = 0, d = 1; i < getGCD(n, d), i++; d++)
    {
      int temp = ar[i];
      int j = i;
      while (1)
      {
        int k = j + d;
        if (k >= n)
          k -= n;
        if (k == i)
          break;
        if(ar[j] == ar[k]) c++;
        j = k;
      }
      if(ar[j] == temp) c++;
    }
    cout << c << endl;
  }
}