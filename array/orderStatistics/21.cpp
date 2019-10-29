#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main() {
  int arr[] = {3, 1, 4, 4, 5, 2, 6, 1};
  int k = 2;
  map <int, int> m;
  pair <int, char> n ;
  for(int i = 0; i < 8; i++) {
    if(m.find(arr[i]) != m.end()) m[arr[i]] += 1;
    else m[arr[i]] = 1;
  }

  for (int i = m.begin(); i != m.end(); i++) 
    n.insert( make_pair(i->first, i->second) );
  for(auto i = m.begin(); i != m.end(); i++) {
    cout << n->first << " " << v->second << endl;
  }
 
}