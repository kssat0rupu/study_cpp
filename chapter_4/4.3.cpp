#include "../std_lib_facilities.h"

int main()
{
  int i = 42;
  int j = ++i;
  int k = i++;
  cout << "i : " << i << '\n';
  cout << "j : " << j << '\n';
  cout << "k : " << k << '\n';
}
