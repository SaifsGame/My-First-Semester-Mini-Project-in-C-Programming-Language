#include<iostream>
using namespace std;

int main()
{
    int C;
    cout << "Enter the Cash Amount You Own" << endl;
    cin >> C;
    int zakat= C * 2.5 / 100;
    cout << "Here is the amount of Your Zakat" << endl<<"Rs."<<zakat;
    return 0;
}