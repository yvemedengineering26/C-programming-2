//A program to calculate net bonus for an employee
#include<iostream>
using namespace std;
int main(){
int num1,num2,num3;
cout<<"Enter three numbers"<<endl;
cin>>num1>>num2>>num3;
if(num1>num2&&num1>num3){
    cout<<"num1 is the largest"<<endl;
}
else if(num2>num1&&num2>num3){
    cout<<"num2 is the largest"<<endl;
}
else{
cout<<"num3 is the largest"<<endl;
}
return 0;
}