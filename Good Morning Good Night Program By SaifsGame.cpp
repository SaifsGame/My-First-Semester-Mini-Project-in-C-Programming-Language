#include <iostream>
using namespace std;
int main()
{
    int time;
    cout << "Enter Current Time in 24-Hour Format!" << endl;
    cin >> time;
    if (time <18 ) {
    cout << "Good Morning,Fellas!" << endl;
    }
    else {
    cout << "Good Night World!" << endl;
    return 0;
    }

}