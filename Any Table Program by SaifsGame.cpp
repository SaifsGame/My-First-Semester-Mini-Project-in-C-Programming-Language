#include<iostream>
using namespace std;
int main(){
int num,i;
int result;
i=1;
cout << "Enter the Table Number" << endl;
cin>>num;

do{
result=num * i;
cout << num<<" x " <<i<<" is "<<result<< endl;
i++;
}while(i<=10);



return 0;
}