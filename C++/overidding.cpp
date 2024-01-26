//function overriding.//run-time polymorphism
#include<iostream>
using namespace std;
class A{
  public:
  virtual void show(){    //method 3
    cout<<"I am Class A"<<endl;
  }
};
class B: public A{
    public:
    void show(){
      //  A::show();    //method 1
        cout<<"I am class B"<<endl;
    }
};
int main(){
    B b;
    A *ptr;    //method 2
    ptr=&b;
    ptr->show();
    //b.show();
}