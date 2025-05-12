#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	int secret_num=5,num,i,j;
	int life =5;
	cout<<endl;
	cout<<"This is a Fun Guess Game"<<setw(40)<<"Note: You have Only "<<life<<" Lifes"<<endl;
	cout<<endl;
	cout<<"--------------------------"<<endl;	
	for(i=1,j=4;i<=5,j>=0;i++ && j--){
	    cout<<endl;
		cout<<"Enter a Number by Guessing"<<endl;
		cin>>num;
		life--;
		int same=num;
		if(same==num){
		j=5;  
		}
    if(num==5){
       cout<<"----------------------"<<endl;
       cout<<" Congratulations! You Got It! "<<endl;
	   break;	
    }
    else if(num>5){
    	cout<<"The Number was a bit Greater"<<setw(25)<<"Life Remaining:"<<life<<endl;
	}
    else if(num<5){
    	cout<<"The Number was a little bit Smaller"<<setw(25)<<"Life Remaining:"<<life<<endl;
	}
    else {
    		cout<<"====-------=======------======------======"<<endl;
    		cout<<"Better Luck Next Time!"<<endl;
	}
	}
   
		
    cout<<"===================="<<endl;
	cout<<"Number of Tries "<<i<<endl;
	
	return 0;
}
