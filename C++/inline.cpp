//inline function: syntax:inline datatype functionname(parameterlist){return };
#include<iostream>
using namespace std;
inline int cube(int side){return (side*side*side);}
int main(){
    int a;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"the cube of given number is:"<<cube(a)<<endl;
    
}