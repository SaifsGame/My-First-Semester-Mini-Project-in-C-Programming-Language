#include <iostream>
using namespace std;
int main(){
int model_year,weight,w_class;
float registration_fee;
cout << "Enter Model Year of AutoMobile" << endl;
cin >> model_year;
cout<<"Enter Weight of AutoMobile"<<endl;
cin >> weight;
cout << "Enter Weight Class of AutoMobile" << endl;
cin >> w_class;
// First Portion of IF 
if (model_year<=1990 && weight<2700 && w_class==1){
registration_fee=26.50;
cout<<"The Registration Fee is "<<registration_fee<< endl;
}
else if (weight>=2700 && weight<=3800 && w_class==2 ){
registration_fee=35.50;
cout<<"The Registration Fee is "<< registration_fee<<endl;
}
else if (weight>3800 && w_class==3){
registration_fee=56.50;
cout << "The Registration fee is " << registration_fee<< endl;
}
// Second Portion of IF
 if (model_year<=1999 && model_year>=1991 && weight<2700 && w_class==4){
registration_fee=35.00;
cout<<"The Registration Fee is "<<registration_fee<< endl; }
else if (weight>=2700 && weight<=3800 && w_class==5){
registration_fee=45.50;
cout<<"The Registration Fee is "<< registration_fee<<endl;
}
else if (weight>=3800 && w_class==6){
registration_fee=62.50;
cout << "The Registration fee is " << registration_fee<< endl;
}
// Third and Final Portion of IF
if (model_year>=2000 && weight<3500 && w_class==7){
registration_fee=49.50;
cout<<"The Registration Fee is "<<registration_fee<< endl;
}
else if ( weight>3500 && w_class==8 ){
registration_fee=62.50;
cout<<"The Registration Fee is "<< registration_fee<<endl;
}
return 0;
 }