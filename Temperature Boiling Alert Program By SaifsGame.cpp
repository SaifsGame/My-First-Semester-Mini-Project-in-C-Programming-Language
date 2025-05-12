// Temperature Program 
#include <iostream>
using namespace std;
int main() {
int temperature;
cout << "Enter Temperature to Get Boiling Point Alert!" << endl;
cin>>temperature; 
if (temperature >=100){
    cout<<"Warnig!  Above the Boiling Point";
}
else {
cout << "below the Boiling Point" << endl;
}
return  0;
}