#include<iostream>
using namespace std;

int main()
{
float P,CP;
cout << "Enter Your Profit" << endl;
cin >> P;
cout << "Enter Cost Price" << endl;
cin >> CP;
float profit_percentage= P / CP * 100 ;
cout << "Here is Profit Percentage" << endl<< profit_percentage;
   return 0 ;
}