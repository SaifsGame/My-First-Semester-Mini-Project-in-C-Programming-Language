#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
double  taxable, taxes;
cout << "Please Enter the Taxable Income" << endl;
cin >> taxable;
if (taxable<= 20000.0) 
taxes= 0.02 * taxable; 
else
taxes = 0.025* (taxable - 20000.0) + 400;
cout << "Taxes are Here $"<<taxes  << endl;
    return 0;
  
  
  
  }