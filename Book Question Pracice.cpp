// Merge All Program in One program 

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	 float finalr;
	 int x;
	 cout<<"Enter Value from Which Meter Starts"<<endl;
	 cin>>x;
	 cout<<"Number  Meter    Feet"<<endl;
	 cout<<"-----   -----    ----"<<endl;
	 for(int i=1;i<=x;i++){
	 	finalr= i *3.218;
	 	cout<<setw(2)<<i<<setw(10)<<i<<setw(11)<<finalr<<endl;
	  }
         if(x>10){
	 			
	    for(int i=1;i>=10;i--){
	 	finalr= i * 3.218;
	 	//cout<<setw(2)<<i<<setw(10)<<i<<setw(11)<<finalr<<endl;
		cout<<finalr<<endl;
		 } 
	 
	  }
	 
	 
	return 0;
}
