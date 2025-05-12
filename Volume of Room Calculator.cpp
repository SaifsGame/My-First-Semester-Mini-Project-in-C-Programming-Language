#include<iostream>
using namespace std;

int main()
{
float A,B,C;
cout << "Enter Length of the Room" << endl;
cin >> A;
cout << "Enter Width of the Room" << endl;
cin >> B;
cout << "Now at Last, Enter Height of the Room" << endl;
cin >> C;
float Volume= A*B*C;
cout << "Here is the Volume of Room" << endl<<Volume;
return 0;
    }