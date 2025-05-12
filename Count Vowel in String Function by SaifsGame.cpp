#include<iostream>
using namespace std;

int vowelcount(string name)
{
int count=0; 
for(int i =0; i< name.length(); i++)
{
char ch=name[i];
if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
{
count++;
}
}
 cout <<"There are "<< count <<" Vowels in this String:"<<name<< endl;
 //return count;

}
int main()
{
    string Name;
    cout << "Enter a Name for String:>>";
    cin >> Name;
    cout << "Name is " <<Name<< endl;
    vowelcount(Name);
    return 0;
}