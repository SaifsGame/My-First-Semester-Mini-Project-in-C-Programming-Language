#include <iostream>
using namespace std;
int main () 
{
float T,R;
cout << "Enter Torque of Your Car" << endl;
cin >> T;
cout << "Enter RPM of Your Car" << endl;
cin >> R;
float HP= T * R / 5253 ;
cout << "The Horsepower of Your Car is " << endl<< HP;
return 0;

}