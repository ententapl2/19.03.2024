#include <iostream>

using namespace std;

int main(int n, int w) {

  int a = 1;

  for (int i=0; i<w; ++i) {

    a = a*n;
  }

  cout << a << endl;
  return 0;
  
}
