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
class Mama{
public:
Mama(){
    cout<<"This is Mama."<<endl;
}
};
class Child:public parent,public Mama{
    public:
    Child(){
        cout<<"This is child class.."<<endl;
    }
};
int main(){
    Child kid;
}