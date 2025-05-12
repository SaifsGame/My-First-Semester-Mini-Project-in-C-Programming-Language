/*#include <iostream>
using namespace std;
int main(){
	int count;
	cout<<"Enter a Number"<<endl;
	cin>>count;
	while (count<=50){
		cout<<"Number ="<<count<<endl;
		count= count +1;
	}
	return 0;
}
*/	
	
/*#include <iostream>
using namespace std;int main(){
	int count,sum;
	sum=0;
	count=1;
	while(count<=4){
		sum=sum +count;
		count++;
		
	}
	cout<<sum;
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
	int count;
	count=5;
	while (count<0){	
	cout<<"Good Luck"<<endl;
	count=count-1;
	}
   return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(){
	int num,count,ans;
	count=1;
	ans=1;
	cout<<"Enter a Number"<<endl;
	cin>>num;
	while(count<=num){
		ans=ans*count;
		count= count +1;
	}
	cout<<"factorial of a number "<<num<<" is "<<ans;
	return 0;
}
*/
/*#include <iostream>
using namespace std;
int main(){
	int num,power,ans,count;
	ans=1;
	count=1;
	cout<<"Enter Number"<<endl;
	cin>>num;
	cout<<"Enter Power"<<endl;
	cin>>power;
	while(count<=power){
		ans=ans*num;
		count++;
	}
	cout<<"The Answer is "<<ans;
	return 0;
}	
*/
/*
	Name: 
	Copyright: 
	Author: 
	Date: 07/11/24 22:24
	Description: 
*/


/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	 int num;
	 cout<<"NUMBER  SQUARE  CUBE"<<endl;
	 cout<<"------  ------  ----- "<<endl;
	 while(num<=5){
	   
	   cout<< setw(3)<<num<<"     ";
	   cout<< setw(3)<<num * num<<"     ";
	   cout<< setw(4)<<num * num *num<<endl;
	   num++; 	
	
	 }
	 return 0;
}
*/
/*#include <iostream>
using namespace std;
int main(){
	 int count;
	 count=2;
	 while(count<=10){
	 	cout<<count<<"---";
	 	count=count +2;
	 	
	 }
	 return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	const int MAXCELSIUS=60;
	const int STARVEL=-10;
	const int STEPSIZE=10;
	int celsius;
	double fahren;
	cout<<"    Degrees    Degrees"<<endl;
	cout<<"    Celsius    Fahrenheit"<<endl;
    cout<<"    -------    ----------"<<endl;
    celsius=STARVEL;
    while(celsius<=MAXCELSIUS){
    	fahren= (9.0/5.0)* celsius +32.0;
    	cout<<setw(8)<< celsius
    	<<setw(15)<< fahren<<endl;
    	celsius= celsius + STEPSIZE;
    }
    return 0;
}
*/
#include <iostream>
#include <iomanip>
using namespace std;
int  main(){
	int gallon;
	float liter;
	const int MAX=10;
	const int MIN=10;
	gallon= 3.785;
	cout<<"No. of Gallons     Total Liter"<<endl;
	cout<<"--------------     ------------"<<endl;
	while(liter<=MAX){
	 cout<< setw(4)<<liter;
	 cout<<setw(8)<<gallon;
	 liter= liter +1 ;
	 
	}
	
	return 0;
}


