#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	 int num;
	 float finalr;
	 int x;
	 cout<<"Enter Value from Which Meter Starts"<<endl;
	 cin>>x;
	 cout<<"Number  Meter  Feet"<<endl;
	 cout<<"----- -----   -----"<<endl;
	 for(int i=1;i<=x;i++){
	 	finalr= i *3.218;
	 	cout<<i<<setw(4)<<i<<setw(6)<<finalr<<endl;
	  }
         if(x>10){
	 			
	    for(int i=1;i>=10;i++){
	 	finalr=x*3.218;
	 	cout<<i<<setw(4)<<i<<setw(6)<<finalr<<endl;
		 }
	 
	  }
	 
	 
	return 0;
}
