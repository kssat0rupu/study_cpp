//ファーストネームの読み取りと書き込み
#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter your first name and age\n";
  string first_name = "???"; //first_nameはstring型の変数
  double age = -1;
  //cin : chapter input
  cin >> first_name >> age; //文字をfirst_nameに読み込む
  cout << "Hello, " << first_name << " (age " << age << ")\n";
  cout << "月齢 : " << age * 12 << "\n";
}
