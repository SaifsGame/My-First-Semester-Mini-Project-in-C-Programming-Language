#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	int Arr[10]={5,4,8,3,4,8,4,7,3,1};
	int search,i,found;
	cout<<"Enter the Number you want to search in Array"<<endl;
	cin>>search;
	for(i=0;i<10;i++){
		Arr[i]= Arr[i+1];
		Arr[i]=found;
	if(found==search)
	{
		cout<<search<<endl;
	}
	}
	
	
	
	
	return 0;
}
