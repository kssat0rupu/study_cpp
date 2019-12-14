//演算子を使用する単純なプログラム
#include "std_lib_facilities.h"

int main()
{
  // cout << "Please enter a floating-point value: ";
  // int n;
  // cin >> n;
  // cout << "n == " << n
  //      << "\nn+1 == " << n+1
  //      << "\nthree times n == " << 3*n
  //      << "\ntwice n == " << n+n
  //      << "\nn squared == " << n/2
  //      << "\nsquare root of n == " << sqrt(n)
  //      << endl; //("end of line")

  // cout << "Please enter your first and second name\n";
  // string first;
  // string second;
  // cin >> first >> second;
  // string name = first + ' ' + second;
  // cout << "Hello, " << name << '\n';

  cout << "Please enter two names\n";
  string first;
  string second;
  cin >> first >> second;
  if (first < second)
    cout << first << " is alphabetically before" << second << '\n';
  if (first > second)
    cout << first << " is alphabetically after" << second << '\n';
}
