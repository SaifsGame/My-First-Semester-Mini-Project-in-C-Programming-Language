#include<iostream>
using namespace std;

void sort( int, int); // Prototype 
void sort( int list[], int size)
{
	int temp;
	list[size];
	for(int i=0;i<size;i++)
	{
	for (int j=i+1;j<size;j++)
	{
	if( list[i] > list[j])
	{
		temp=list[i];
		list[i]=list[j];
		list[j]=temp;
	}
    }
    }
		
}

int main()
{
	int sizearr=5;
	int arrsort[sizearr];
	for(int i=0; i<sizearr; i++)
	{
		cout<<"Enter Value:"<<i+1<<"for Index:"<<i<<"=>";
		cin>>arrsort[i];
      
	} 
	cout<<"The Original Array or Unsorted Array"<<endl;
	for(int i=0; i<sizearr; i++)
	{
		 cout<<arrsort[i]<<",\t";
		
	}
	sort(arrsort,sizearr);
	cout<<endl;
	cout<<"Array After Sorting to Ascending Order"<<endl;
	for(int i=0;i<sizearr;i++){

	cout<<arrsort[i]<<",\t";
}
	return 0;
}
