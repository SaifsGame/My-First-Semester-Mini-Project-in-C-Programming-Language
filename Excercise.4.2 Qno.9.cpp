#include <iostream>
using namespace std;
int main(){
int leap_year;
cout << "Enter Year to Check it is Leap Year or Not" << endl;
cin >> leap_year;
if(  leap_year%400==0 || leap_year%4==0  && leap_year%100!=0){
cout << "The Year "<<leap_year<<" is a Leap Year" << endl;
}
else{
cout<<"The Input Year is NOT a Leap Year";
}
  return 0;
  }