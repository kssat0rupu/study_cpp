#include "std_lib_facilities.h"

int main()
{
  string previous = " ";
  string current;
  while(cin >> current){
    //入力終了文字は、通常はEOF(End of File)と呼ばれている。
    //WindowsマシンではCtrl+Zとそれに続くEnter(Return)キー
    //UNIXまたはLinuxマシンではCtrl+Dキー
    if(previous == current)
      cout << "repeated word: " << current << '\n';
    previous = current;
  }
}
