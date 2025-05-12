#include <iostream>
using namespace std;
int main()
{
    int time;
    cout << "Enter Current Time in 24-Hour Format!" << endl;
    cin >> time;
    if (time <12 ) {
    cout << "Good Morning,Fellas!" << endl;
    }
    else if ( time <18 ){
    cout<<"Good Day!"<<endl;}
    else {
    cout << "Good Night World!" << endl;
    return 0;
    }

}