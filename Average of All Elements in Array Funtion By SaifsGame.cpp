#include<iostream>
using namespace std;

int avgfunc(int list[], int size)
{
 list[size]={0};
 int  sum=0; int avg=0;
 for(int i=0; i<size;i++)
 {
 sum+=list[i];
}
avg=sum/ size;
cout << "The Average of all Elements is:" <<avg<< endl;
}
int main()
{
const int Size=7;
int arrlist[Size]={9,10,2,8,4,6,3};
for( int i=0; i< Size;i++)
{
cout<<arrlist[i]<<",\t";
}
cout << "" << endl;
avgfunc(arrlist,Size);


    return 0;
}