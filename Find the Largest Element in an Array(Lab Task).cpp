#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	//             0,1,2,3,4,5,6,7,8,9 this will equal to array[10]
	int array[10]={5,8,7,6,9,4,6,15,2,1};
	int i;
	int largest=INT_MIN;
	for(i=0;i<10;i++){
		if(array[i]>largest){
			largest=array[i];
		}
			
	}
	cout<<"The Largest Number in Array Is "<<array[i]<<endl;
	
	

	
	return 0;
}
