#include<iostream>
#include <cmath>
using namespace std;

int main()
{
     int num;
     cout << "Enter any Number to Check that Its Even or Odd" << endl;
    cin >> num;
    if (num %2==0)
    {
    cout << "The Given Number is Even" << endl;
    }
    else {
   cout << "No, That's a Odd Number You Given!" << endl;
    }
    
    return 0;
}