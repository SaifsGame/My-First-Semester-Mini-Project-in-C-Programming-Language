#include <iostream>
#include<iomanip>
using namespace std;
int main(){
 string password;
 //cout << "Enter Your Password " << endl;
 //cin>>password;
 do{
 cout << "Enter Your Password " << endl;
 cin>>password;
if (password !="123456"){
 cout << "You Have Entered Wrong PAssword" << endl;
}
 } while (password !="123456");
cout << "Password Accepted" << endl;
return 0;
}