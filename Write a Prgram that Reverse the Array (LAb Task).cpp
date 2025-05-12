#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int fivenum[5]={5,4,3,2,1};
	int i,j;
	cout<<"Here are the Reverse Numbers of Array: "<<endl;
	for(i=5;i>0;i--){ 
	fivenum[i]= fivenum[i-1];
	cout<<setw(5)<<fivenum[i]<<endl;	
	}
		cout<<"The Original Values of array"<<endl;
	for(j=1;j<=5;j++){
	
		cout<<setw(5)<<fivenum[j]<<endl;
	}

	
	
	
	
	return 0;
}
