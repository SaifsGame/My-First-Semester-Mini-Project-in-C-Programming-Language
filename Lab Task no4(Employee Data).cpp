#include<iostream>
#include<iomanip>
#include<cmath>
#include<conio.h>
using namespace std;
// Space for Functions



struct Employe
{
  char name[30];
  char ID[30];
  double Salary;
  char Gender;	
};


const int arrsize=5;  // <-------- Employe emp Array Size.

int main()
{
 
 Employe emp[arrsize];
 cout<<"=======================================\n";
 cout<<"--------Database Program---------------\n";
  cout<<"=======================================\n";
  cout<<"\n";
  
 for(int i=0;i<arrsize;i++)
{
  cin.ignore(30,'\n');
  cout<<"Enter Name of Employee No:"<<i+1<<endl;
  gets(emp[i].name);
  
  cout<<"Enter ID of Employee No:"<<i+1<<endl;
  gets(emp[i].ID);
  
  
  cout<<"Enter Salary of Employee No:"<<i+1<<endl;
  cin>>emp[i].Salary;
  
    cout<<"Enter Gender [M/F] of Employee No:"<<i+1<<endl;
  cin>>emp[i].Gender;
  
  cout<<endl;
  cout<<"=========================================\n"; 		
}


// Display of DATABASE

 cout<<"\n----------Display of Data---------\n";
 cout<<endl;
 cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
 cout<<"Name\t"<<"ID\t"<<"Salary\t"<<"Gender\t"<<endl;
 cout<<"------------------------------------------\n";
 for(int i=0;i<arrsize;i++)
 {
 	
 	cout<<emp[i].name<<"\t"<<emp[i].ID<<"\t"<<emp[i].Salary<<"\t"<<emp[i].Gender<<"\t"<<endl;
    cout<<endl;
 }
                  
 
 //For Highest MAlE SALARY
 int max=INT_MIN;
 int count;
 for (int i=0;i<arrsize;i++) 
 {
 	if(emp[i].Gender=='M' || emp[i].Gender=='m')
 	{
 	if(emp[i].Salary > max)
 	{
 		max=emp[i].Salary;
	    count=i;
	 }
 }
 	
 }
 
 // FOR LOWEST FEMALE SALARY
 int min=INT_MAX;
 int count2;
  for (int i=0;i<arrsize;i++) 
 {
 	if(emp[i].Gender=='F' || emp[i].Gender=='f')
 	{
 	if(emp[i].Salary < min)
 	   {
 		min=emp[i].Salary;
	    count2=i;
	   }
   }
 	
 } 
 cout<<"\n----------- HIGHEST SALARY OF FEMALE EMPLOYEE ---------------\n";
 cout<<"\tName\t"<<"ID\t"<<"Salary\t"<<"Gender\t"<<endl;
cout<<"Employee No:"<<count+1<<"\t"<<emp[count].name<<"\t"<<emp[count].ID<<"\t"<<emp[count].Salary<<"\t"<<emp[count].Gender<<endl;


cout<<"\n------------------------------------------\n";


cout<<"\n------------ LOWeST SALARY OF FEMALE EMPLOYEE ----------------\n";
 cout<<"\tName\t"<<"ID\t"<<"Salary\t"<<"Gender\t"<<endl;
cout<<"Employee No:"<<count+1<<"\t"<<emp[count2].name<<"\t"<<emp[count2].ID<<"\t"<<emp[count2].Salary<<"\t"<<emp[count2].Gender<<endl;


return 0;
}

