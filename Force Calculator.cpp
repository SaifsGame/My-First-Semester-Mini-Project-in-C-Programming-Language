#include<iostream>
using namespace std;

int main()
{
float  x,y;
cout << "Force Calculator" << endl;
cout << "Enter the Value of Mass" << endl;
cin >> x;
cout << "Enter Acceleration" << endl;
cin >> y;
float force= x * y ;
cout << "Here is the Value of Force " << endl<<force ;
return 0;
    }