//A program that finds the product of three integers using classes
#include <iostream>
using namespace std;
int main(){
class addition{
    public://encapsulating data members in public access specifier
    //declaring data members 
    int a=22;
    int b=30;
    int c=50;
    int prod;
    int product(){//data member function
    return (a*b*c);
    }
};
int main(){
    Addition Sum;//creating objects
    int i, j, k, prod;//declaring local variables
    //accessing data members in the class
    i=Sum.a=22;
    j=Sum.b=30;
    k=Sum.c=50;
    prod=Sum.product();
    cout<<"product is:"<<prod<<endl;// outputs the product
}
    return 0;
}
