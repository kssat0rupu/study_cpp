#include "../std_lib_facilities.h"

int main()
{
  int i = 0;
  while(i<30)
    {
      cout << char('a' + i) << '\t' << int(char('a' + i)) << endl;
      ++i;
    }
}
