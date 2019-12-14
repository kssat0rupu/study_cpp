#include "std_lib_facilities.h"

int main()
{
  string first_name;
  string send_name;
  string another_person;
  char friend_gender = 0;
  int age;
  
  cout << "Please enter your first name (followed by 'enter'):\n";
  cin >> first_name;
  cout << "Please enter the name of the person you want to write to\n";
  cin >> send_name;
  cout << "Please enter the name of the another person you want to write to\n";
  cin >> another_person;
  cout << "If your friend is male, please enter 'm'.\n"
       << "If your friend is female, please enter 'f'.\n";
  cin >> friend_gender;
  cout << "Enter your friend's age\n";
  cin >> age;

  
  //print mail
  cout << "Hello, " << first_name << "!\n";
  cout << "Dear " << send_name << ',';
  cout << '\n' << "How are you? I am fine. I miss you.\n";
  cout << "Have you seen " << another_person << " lately?";
  if(friend_gender == 'm')
    cout << "If you see friend_name please ask him to call me\n";
  else
    cout << "If you see friend_name please ask her to call me\n";
  if(age <= 0 || age >= 110)
    simple_error("you're kidding!");
  else
    cout << "I hear you just had a birthday and you are age years old.\n";

  if(age < 12) cout << "Next year you will be age+1\n";
  else if(age == 17) cout << "Next year you will be able to vote\n";
  else if(age >= 70) cout << "I hope you are enjoying retirement\n";

  cout << "Yours sincerely" << "\n\n\n"
       << first_name << '\n';
}
