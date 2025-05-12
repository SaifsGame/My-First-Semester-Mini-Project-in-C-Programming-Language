#include <iostream>
using namespace std;
int main(){
int senior_salary,junior_salary;
senior_salary=800;
junior_salary=500;
char status;
cout << "Enter Status of Your Designation [s/j]" << endl;
cin>>status;
if (status=='s'){
cout << "This is Your Weekly Salary $"<< senior_salary<< endl;
}
else if(status=='j'){
cout<<"This is Your Weekly Salary $"<<junior_salary<<endl; 
}
else{
cout<<"Please Input Valid Character"<<endl;
}
  return 0;
  }