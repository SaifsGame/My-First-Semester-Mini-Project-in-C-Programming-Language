#include <iostream>
#include <iomanip>
using namespace std;
int main (){
int  num,meter;
float result;
num=3;
cout << "Meter"<<setw(10)<< "Feet" << endl;
cout << "-------------------" << endl;
while(num<=30){
result=num*3.28;
cout << num <<setw(16)<< result<<endl;
num=num+2;
}
cout << "-------------------" << endl;
return 0;
}