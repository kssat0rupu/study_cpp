#include "../std_lib_facilities.h"

int main()
{
  double a;
  vector<double> v;
  string unit = "";
  vector<string> disliked(5);
  disliked[0] = "y";
  disliked[1] = "yard";
  disliked[2] = "meter";
  disliked[3] = "km";
  disliked[4] = "gallons";

  vector<string> like(4);
  like[0] = "cm";
  like[1] = "in";
  like[2] = "fn";
  like[3] = "m";
  
  while(cin >> a >> unit){

    if(unit != "cm" && unit != "in" && unit != "fn" && unit != "m")
      cout << "error!\n";


    //cout << a << ":" << unit << endl;
    // for (int i;i<disliked.size();++i){
    //   if(unit == " " || disliked[i] == unit)
    // 	cout << "disliked!\n";
    // }
    
    // v.push_back(a);
    // sort(v.begin(),v.end());
    // if(v[0]== a)
    //   cout << a << unit << " the smallest so far\n";
    // else if(v[v.size()-1] == a)
    //   cout << a << unit << " the largest so far\n";
    // else if(v[0]==v[v.size()-1])
    //   cout << "the numbers are equal\n";
    
  //   if(a>b){
  //     if(a-b < 1.0/10000000)
  // 	cout << "the numbvers are almost equal";
  //     else
  // 	cout << "the smaller value is:" << b << endl
  // 	     << "the larger value is:" << a << endl;
  //   }
  //   else if(a<b){
  //     if(b-a < 1.0/10000000)
  // 	cout << "the numbvers are almost equal";
  //     else
  // 	cout << "the smaller value is:" << a << endl
  // 	     << "the larger value is:" << b << endl;
  //   }
  //   else
  //     cout << "the numbers are equal" << endl; 
  }
}

// int main()
// {
//   string dislike = "yard";
//   string unit = "";
//   cin >> unit;
//   if(unit == dislike)
//     cout << "dislike" << endl;
// }
