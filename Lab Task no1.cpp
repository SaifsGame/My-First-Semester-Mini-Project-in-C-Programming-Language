#include<iostream>
using namespace std;

void calc(float,float,float&,float&,float&,float&); // Prototype
void calc(float num1, float num2, float& sum, float& pro, float& subt, float& div)
{
	sum= num1+ num2;
	pro= num1* num2;
    subt=num1 - num2;
	div=num1 / num2;
}

int main()
{
	float n1, n2,add,product,sub,divide;
	cout<<"Enter Number: ";
	cin>>n1;
	cout<<"Great,Now Enter Second Number: ";
	cin>>n2;
	calc(n1,n2,add,product,sub,divide);
	cout<<endl;
	cout<<"The Sum of  "<<n1<<" And "<<n2<<" is "<<add<<endl;
	cout<<endl;	
	cout<<"The Product of "<<n1<<" And "<<n2<<" is "<<product<<endl;
	cout<<endl;
	cout<<"The Subtraction of "<<n1<<" And "<<n2<<" is "<<sub<<endl;
	cout<<endl;
	cout<<"The Division of "<<n1<<" And "<<n2<<" is "<<divide<<endl;
	
	return 0;
}
