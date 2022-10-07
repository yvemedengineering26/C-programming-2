//This is a proram for converting degrees fahrenheit to degrees Celsius 
#include <iostream>
using namespace std; 
float celsius(int fahrenheit);//this is the function prototype
int main(){
int fahrenheit; 
float Celsius; 
cout<<"Enter fahrenheit"<<endl; 
cin>>fahrenheit; 
Celsius=celsius(fahrenheit);//function calling
cout<<"converted to celsius is\n"<<Celsius<<endl;
  return 0;
}
//this is the function definition
float celsius(int fahrenheit){
float celsius;
celsius=(fahrenheit-32)*5/9;
return celsius; 
  }
