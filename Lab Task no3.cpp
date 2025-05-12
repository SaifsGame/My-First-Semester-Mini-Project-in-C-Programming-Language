#include<iostream>
using namespace std;

void search(int,int,int,int,bool); //Prototype
void search(int list[], int size, int num, int& ind, bool& found)
{
	
	for(int i=0; i<size && found==false;i++)
	{
	   if(list[i] == num)
	 {
		found=true;
		ind=i;
	 }
    }
			
}

int main()
{
	int index;
	bool f=false;
	int arrsize=6;
	int arrlist[arrsize]={8,7,5,9,6,10};
	cout<<"Displaying the Array"<<endl;
	for(int i=0;i<arrsize;i++)
	{
     cout<<arrlist[i]<<",\t";
	}
	cout<<endl;
	int number;
	cout<<"\nEnter Number You Want to Search in the Array => ";
	cin>>number;
	
	search(arrlist,arrsize,number,index,f);
	if(f == true)
	{
		cout<<"The Number:"<<number<<" Found at the Index:"<<index;
	} 
	else{
		cout<<"Number is Not Found!";
	}
	
	return 0;
}
