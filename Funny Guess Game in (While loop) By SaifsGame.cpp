#include <iostream>
using namespace std;
int main (){
int secrect_number,guess_num;
secrect_number=9;
cout<<"This is a Vey Funny NUmber Guess Game!"<<endl;
cout << "Enter a Number for 1 to 10" << endl;
cin >> guess_num;
while(guess_num!=secrect_number){
cout<<"Incorrect! Please Try Again"<<endl;
cin>>guess_num;
}
cout << "Congratulations! You have Guess it Right" << endl;

return 0;
}