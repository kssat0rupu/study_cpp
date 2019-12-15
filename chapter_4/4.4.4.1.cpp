#include "../std_lib_facilities.h"

int main()
{
  const double yen_per_dollar = 0.91;
  const double euro_per_dollar = 1.11;
  const double pond_per_dollar = 1.33;
  double money = 1;
  char unit = ' ';
  cout << "Please enter a money followed by a uint (y or e or p):\n";
  cin >> money >> unit;

  if(unit == 'y')
    cout << money << "yen== " << yen_per_dollar*money << "$\n";
  else if(unit == 'e')
    cout << money << "euro== " << euro_per_dollar*money << "$\n";
  else if(unit == 'p')
    cout << money << "pond== " << pond_per_dollar*money << "$\n";
  else
    cout << "Sorry, I don't know a unit called '" << unit << "'\n";
}
