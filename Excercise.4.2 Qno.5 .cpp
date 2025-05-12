#include <iostream>
using namespace std;
int main(){
 float  interest,numyears;
cout << "Enter the Year Plan" << endl;
cin >> numyears;
if(numyears>5){
interest=4.5 * numyears;
cout << "The Interest is "<<interest<<"%." << endl;
}
else{
 interest=3.0* numyears;
 cout<<"The Interest is "<<interest<<"%."<<endl;
}
cout << "So,The Interest for "<<numyears<<" Years is "<<interest<<"%."<< endl;
  return 0;
  }