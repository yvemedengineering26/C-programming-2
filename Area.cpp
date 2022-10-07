// This is a program to find the area of a circle
#include <iostream>//tells the compiler to include input and output headerfiles
#include<cmath>//includes header file for pi constant
using namespace std;
//function prototype
float circle(int radius);
//This is the main function the body of the code
int main() {
int radius;
float Area;
cout<<"Enter radius"<<endl;//prompts user to enter a value
cin>>radius;
Area=circle(radius);//function calling
cout<<"Area of circle is\n"<<Area<<endl;
return 0;
}
//This is the function definition
float circle(int radius){
float area;
area=M_PI*radius*radius;
return area;
}