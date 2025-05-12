#include <iostream>
#include <iomanip>
using namespace std;
int main (){
int num,depreciation,deduct,finalD;
int carValue = 28000;
num=1;
cout << "YEAR   DEPRICIATION   END-OF-YEAR VALUE   ACCUMULATED DEPRECIATION" << endl;
cout<<"----  --------------  -----------------   -----------------------"<<endl;
while(num<=7){
deduct= 4000 * num;
depreciation= carValue - deduct;
finalD= deduct;
cout<<num<<setw(16)<<4000<<setw(16)<<depreciation<<setw(20)<<finalD<<endl;
num++;
}
return 0;
}