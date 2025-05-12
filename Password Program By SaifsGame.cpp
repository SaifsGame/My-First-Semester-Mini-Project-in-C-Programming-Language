#include <iostream>
using namespace std;
int main()
{
    int pass;
    cout << "Enter Password" << endl;
    cin>>pass;
    if (pass==12345) 
    {
    cout << "Password is Correct, Welcome to the Panel!" << endl;
    }
    else {
    cout << "Password Incorrect! " << endl;
    };
    return 0;
    

}