//A program to calculate net bonus for an employee
#include<iostream>
using namespace std;
int main(){
int salary,yrs,bonus;
cout<<"Enter salary"<<endl;
cin>>salary>>endl;
cout<<"Enter years"<<endl;
cin>>yrs>>endl;
if(yrs>10){
    bonus=(10*salary)/100;
}
else if(yrs>=6&&yrs<=10){
    bonus=(8*salary)/100;
}
else if(yrs>0&&<6){
    bonus=(5*salary)/100;
else{
    cout<<"Error"<<endl;
}
return 0;
}
