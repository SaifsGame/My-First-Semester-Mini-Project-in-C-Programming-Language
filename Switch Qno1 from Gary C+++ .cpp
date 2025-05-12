#include <iostream>
using namespace std;
int main(){
    char grade;
    cout << "Enter our Grade in Lettes   " << endl;
    cin >> grade;
    switch (grade){
    case 'A':  cout << "The Numerical Grade is Between 90 and 100" << endl;
    break;
    case 'B':  cout << "The Numerical Grade is Between 80 and 89.9" << endl;
    break;
    case 'C':  cout << "The Numerical Grade is Between 70 and 79.9" << endl;
    break;
    case 'D':  cout << "How are you Going to Explain this One" << endl;
    break;
    default: cout << "Of Course i have nothing to do with My Grade" << endl;
    cout << "It must have been the Professors' Fault" << endl;
    
                
    }
return 0;
 }