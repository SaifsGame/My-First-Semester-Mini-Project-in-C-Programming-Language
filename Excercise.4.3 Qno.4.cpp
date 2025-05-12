#include <iostream>
using namespace std;
int main(){
float time_fund,interest;
cout<<"Enter the Time Funds Left on the Deposit"<<endl;
cin>>time_fund; 
if (time_fund >=5){
interest=0.040;
cout << "The Interest Will Be "<<interest<<"%"<< endl;
}
else if (time_fund<5 && time_fund>=4){
interest=0.035;
cout << "The interest Will Be "<<interest<<"%" << endl;
}
else if (time_fund<4 && time_fund>=3)
{
interest=0.030;
cout << "The interest Will Be "<<interest<<"%" << endl;
}
else if (time_fund<3 && time_fund>=2){
interest=0.025;
cout<< "The interest Will Be "<<interest <<"%"<< endl; 
}
else if (time_fund<2 && time_fund>=1){
interest=0.020;
cout << "The Interest Will Be "<<interest<<"%"<< endl;
}
else if(time_fund<1){
interest=0.015;
cout<<"The Interest Will Be "<<interest<<"%"<<endl;
}
return 0;
 }