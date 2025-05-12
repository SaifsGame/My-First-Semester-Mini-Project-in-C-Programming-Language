#include<iostream>
using namespace std;
int main()
{
    int D,S;
    cout << "Enter Distance " << endl;
    cin >> D;
    cout << "Enter Speed " << endl;
    cin >> S;
    int time= D/ S;
    cout << "Time= " << endl<<time;
    return 0;
}