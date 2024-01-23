#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"This is Class A base class"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"This is class B base class"<<endl;
    }
};
class C:public A,public B{
    public:
    C(){
        cout<<"This is derived class"<<endl;
    }
};
int main(){
    C c1; //object
}