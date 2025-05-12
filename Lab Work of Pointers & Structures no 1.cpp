#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<conio.h>
#include<cstring>
using namespace std;

struct student
{
	char name[40];
	char dept[40];
	char rollno[30];
	int  marks;
	char grade[30];
	char result[20];
	
};

int main()
{
	string name;
name="Saif";
cout<<name;
	

student std1,*std2;
std2=&std1;


//Inputing the Data 
cout<<"\n Enter Student Name: ";
gets(std1.name);
cout<<"\n Enter Student Department: ";
gets(std1.dept);
cout<<"\n Enter Roll Number: ";
cin>>std1.rollno;
cout<<"\n Enter Student Marks:";
cin>>std1.marks;

// Using IF and Else for Final Result.

if(std1.marks<=100)
{
	if(std1.marks>=90)
	{
		strcpy(std1.grade,"A1-Grade");
	} 
	else if(std1.marks>=80)
	{
	    strcpy(std1.grade,"A-Grade");
	}
	else if(std1.marks>=70)
	{
		strcpy(std1.grade,"B-Grade");
	}
	else if(std1.marks>=60)
	{
		strcpy(std1.grade,"C-Grade");
	}
	else if(std1.marks>=50)
	{
		strcpy(std1.grade,"D-Grade");
	}
	else if(std1.marks<=50)
	{
		strcpy(std1.grade,"FAIL");
	}
	
	
} else {
	
	cout<<"Please Enter Valid Marks, Enter it Again. \n";
	cout<<"\n Enter Student Marks:";
    cin>>std1.marks; 
}

if(std1.marks>=50)
{
	strcpy(std1.result,"PASS.");
}
else {
	strcpy(std1.result,"FAIL.");
}
 

//Displaying the Data

cout<<"\n---------------------------\n";
cout<<" Student Name: "<<std2->name;
cout<<"\n---------------------------\n";
cout<<" Student Department: "<<std2->dept;
cout<<"\n---------------------------";
cout<<"\n Roll Number: "<<std2->rollno;
cout<<"\n---------------------------";
cout<<"\n Student Marks: "<<std2->marks;
cout<<"\n---------------------------\n";
cout<<"		FINAl RESULT		";
cout<<"\n---------------------------\n";
cout<<"\n Student Grades: "<<std2->grade;
cout<<"\n---------------------------\n";
cout<<"\n Student Result: "<<std2->result;
cout<<"\n---------------------------\n";


// Using ATOI Funtion 

int myroll;
myroll =atoi(std1.rollno);
cout<<"\nValue of ATOI: \n"<<myroll;

//-------------------------------



return 0;
}

