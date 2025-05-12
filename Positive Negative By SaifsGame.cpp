// Temperature Program 
#include <iostream>
using namespace std;
int main() {
int num,positivesum,negativesum;
cout << "Welcome to This Fun Game!" << endl;
cout << "What's Fun About?" << endl;
cout << "The Fun is You Enter any Positive Number" << endl;
cout << "Its Always Shows Added Number" << endl;
cout << "If you Enter Negative Number" << endl;
cout << "You Will Always Get 1 Number Subtracted" << endl;
positivesum = 1;
negativesum=-1;
cout << "Enter Number" << endl;
cin >> num;
if  (num>0){
   cout<<num + positivesum;
}
else {
cout << "The Number is Negative" << endl;
cout<<num - negativesum;
}
return  0;
}