#include <iostream>
#include <iomanip>
using namespace std;
int main (){
int num,litre,total;
float gallon;
num=10;
cout << "Type"<<setw(13)<<"Numbers" << setw(10) <<"Litres" << endl;
cout <<setw(6)<< "------"<<setw(7)<<"---------------------------" << endl;

while(num<=20){
gallon=3.785 * num;
cout <<setw(6)<< "Gallon "<<setw(7)<< num<< " "<<setw(9)<<gallon <<endl;
num++;
}
return 0;
}