/*A program that uses three dimensional arrays to output 18 numbers*/
#include<iostream>
using namespace std; 
int main(){
int i, j, k;//declaration a
//initializing values in each matrix
int a[2][3][3]={
    {{1,2,3},{4,5,6},{7,8,9}},
{{10,11,12},{13,14,15},{16,17,18}}
};
for(i=0;i<2;i++){//conditions for the two matrices 
    for(j=0;j<3;j++){//conditions for rows
        for(k=0;k<3;k++){//conditions for columns 
            cout<<a[i][j][k]<<",";//outputs the numbers 
            cout<<endl; 
        }
        cout<<endl; 
    }
    cout<<endl; 
}
    return 0;
}
