/*A program to find the sum of numbers between two points entered by the user*/
#include <iostream>
using namespace std;
int main()
{
int i,A,B,sum=0;
//Ask user to enter starting and stoping points
cout<<"Enter starting point A"<<endl;
cin>>A;
cout<<"Enter stoping point B"<<endl;
cin>>B;
for(i=A;i<=B;++i)
{
cout<<i<<" ";
sum+=i;
}
cout<<sum<<endl;
return 0;
}