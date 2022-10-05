/*This is a program that finds the sum of numbers between two points that the user chooses*/
#include <iostream>
using namespace std;
int main()
{
int A;
int B;
int i;
int sum=0;
do
{
sum+=i;
cout<<sum<<endl;
//Ask user to enter starting and stoping points
cout<<"Enter starting point A"<<endl;
cin>>A;
cout<<"Enter stoping point B"<<endl;
cin>>B;
cout<<i<<" ";
++i;
}
while(i<=B&&i>=A);
return 0;
}