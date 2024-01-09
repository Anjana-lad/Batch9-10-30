#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float percent=58.9657753;
    cout<<setprecision(4)<<"percentage"<<percent<<endl;
    cout<<fixed;
    cout<<setprecision(5)<<"percentage:"<<percent<<endl;
    int num=99;
    cout<<setfill('x')<<setw(5);
    cout<<num<<endl;
}