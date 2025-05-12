#include<iostream>
#include<iomanip>
using namespace std;
int main(){
 // Making a Array Program.
 const int Asize=5;
 int list[Asize];
 int sum=0;
 for(int i=0;i<Asize;i++){
 cout<<"Enter Value of Index "<<i<<endl;
 cin>>list[i];
sum= sum + list[i];
 }
 
 cout << "This is the sum of Array "<<sum << endl;
 
 
 
return 0;
}