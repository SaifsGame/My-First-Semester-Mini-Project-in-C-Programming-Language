#include <iostream>
#include <conio.h> // that also not gonna work on mobile!
using namespace std;
int main(){
int num;
char ch;
do{
cout << "Enter a Number" << endl;
cin >> num;
if(num==5){
cout<<"Congratulation, You have Unlocked a Unique Number"<<endl;
}
cout << "Do You Want to Continue ?  [y/n]" << endl;
cin >>ch ; //getche is not working on compiler on a mobile
}while(ch=='y');
return 0;
}