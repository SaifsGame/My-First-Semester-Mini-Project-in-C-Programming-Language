#include <iostream>
using namespace std;
int main(){
const int Max=8;
int count;
double num,total;
cout << "This Program will Ask you to Enter "<< Max <<" Numbers "<< endl;
total=0;
for(count=1; count<=Max; count++){
cout << "Enter a Number" << endl;
cin >> num;
total= num + total;
}
cout << "The Final Total is "<<total<<"."  << endl;
return 0;
}