#include<iostream>
using namespace std;
class grandparent{
    public:
    grandparent(){
        cout<<"This is grandparent."<<endl;
    }
};
class parent:public grandparent{
    public:
    parent(){
        cout<<"This is parent.."<<endl;
    }
};
class Child:public parent{
    public:
    Child(){
        cout<<"This is child class.."<<endl;
    }
};
int main(){
    Child kid;
}