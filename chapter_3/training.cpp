#include "std_lib_facilities.h"

int main()
{
  string operation;
  double first_operand, second_operand;
  cout << " Enter \"operation\", \"first_operand\", \"second_operand\"\n";
  cin >> operation >> first_operand >> second_operand;

  if(operation == "+" || operation == "plus")
    cout << first_operand << '+' << second_operand << '='
	 << first_operand+second_operand << '\n';
  else if(operation == "-" || operation == "minus")
    cout << first_operand << '-' << second_operand << '='
	 << first_operand-second_operand << '\n';
  else if(operation == "*" || operation == "mul")
    cout << first_operand << '*' << second_operand << '='
	 << first_operand*second_operand << '\n';
  else if(operation == "/" || operation == "div")
    cout << first_operand << '/' << second_operand << '='
	 << first_operand/second_operand << '\n';
}
