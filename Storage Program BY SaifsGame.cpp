#include <iostream>
using namespace std;
int main(){
   int code,capacity;
   cout<<"Enter Code [1 to 4]"<<endl;
   cin >> code;
   switch (code){
   case 1: capacity=2; cout <<capacity<< "GB" << endl;
   break;
   case 2:  capacity=4; cout <<capacity<< "GB" << endl;   
   break;
   case 3:  capacity=16; cout <<capacity<< "GB" << endl;   
   break;
   case 4:  capacity=32; cout <<capacity<< "GB" << endl;   
   break;
   default: cout << "Please Enter Valid Value" << endl;
   }
return 0;
 }