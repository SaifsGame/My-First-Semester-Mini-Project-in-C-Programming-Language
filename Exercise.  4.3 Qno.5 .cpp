#include <iostream>
using namespace std;
int main(){
  int reynolds_num;
  cout << "Enter the Reynolds Number to Check Flow" << endl;
  cin >> reynolds_num;
  if(reynolds_num>3000){
  cout << "The Flow is Turbulent." << endl;
  }
  else if (reynolds_num<2000){
  cout<<"The Flow is Laminar."<<endl;
  }
  else if(reynolds_num <=3000 && reynolds_num >=2000){
  cout << "The Flow is Transitional." << endl;
  }
return 0;
 }