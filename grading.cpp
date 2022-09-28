//program to grade average marks
#include <iostream>
using namespace std;
int main() {
int math,eng,science,french,CRE,avg;
  cout<<"Enter marks"<<endl;
  cin>>math>>eng>>science>>french>>CRE;
  avg=(math+eng+science+french+CRE)/5;
  if (avg>=70&&avg<=100){
cout<<"Average grade  A"<<endl;
    }
else if(avg>=60&&avg<=69){
  cout<<"Average grade B"<<endl;
}
  else if(avg>=50&&avg<=59){
    cout<<"Average grade C"<<endl;
  }
  else if(avg>=40&&avg<=49){
    cout<<"Average grade D"<<endl;
  }
  else{
    cout<<"Fail"<<endl;
  }
    return 0;
}