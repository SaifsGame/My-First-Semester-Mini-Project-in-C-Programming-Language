#include<iostream>
#include <cmath>
using namespace std;

int main()
{
     int age;
     char health,written_test,physical_test;
    cout << "Enter Your Age " << endl;
    cin >> age;
    cout << "Enter You Health Status as [H or UH]" << endl;
    cin >> health;
    cout << "Enter You Written Test Status as [P or F]" << endl;
    cin >> written_test;
    cout << "Enter You PhysicalTest Status as [P or F]" << endl;
    cin >> physical_test;
    if (age >=18  && health=='H' && written_test=='P' && physical_test=='P'){
    cout << "You are Eligible For Driving Licence" << endl;
    cout << "Congratulations ! and Best of Luck" << endl;
    }
    else {
    cout << "Sorry, You Are Not Eligible for this Application " << endl;
    cout << "Better to try Again" << endl;
    }
    return 0;
}