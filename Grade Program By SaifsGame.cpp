// Determine  the Grade Program  By SaifsGame
#include <iostream>
using namespace std;
int main() {
int marks;
char grade;
cout << "Enter Your Marks" << endl;
cin>>marks;
if (marks>=90 && marks<100) 
{
grade='A';
cout<<grade; 
}
else if (marks>=80 && marks<=89)
{
grade='B';
 cout<<grade;
}
else if (marks>=70 && marks<=79)
 {
 grade='C';
 cout<<grade;
}
else if (marks>=60 && marks<=69)
{
 grade='D';
cout<<grade;
}
else if (marks < 60 )
{
 grade='F';
cout<<grade;
}
else 
{ 
cout << "Please Enter Valid Marks!" << endl;
}
return 0;
}
        
    