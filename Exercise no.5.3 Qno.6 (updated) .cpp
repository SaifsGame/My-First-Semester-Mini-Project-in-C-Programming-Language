// Meter to Feet Converter of your own Choice Number!
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	 float finalr;
	 int x,y;
	 cout<<"Enter Value from Which Meter Starts"<<endl;
	 cin>>x;
     cout << "Enter Value from Which Meter End...." << endl;
	 cin >> y;
     cout<<"Number  Meter    Feet"<<endl;
	 cout<<"-----   -----    ----"<<endl;
     if(x<=10 && y<=10 ){
     for( int i=x  ;i<=y;i++){
	 	finalr= i *3.218;
	 	cout<<setw(2)<<i<<setw(10)<<i<<setw(11)<<finalr<<endl;
	  }
      }
         if(x>10 || y>10) // Used OR Operator, You Can Use AND Operator Also....
         {
	    for(int j=1;j<=10;j++){
	 	finalr= j * 3.218;
	 	cout<<setw(2)<<j<<setw(10)<<j<<setw(11)<<finalr<<endl;
       } 
	   }
	return 0;
}
