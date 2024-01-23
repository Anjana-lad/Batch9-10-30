//mutiple inheritance.
// a  b
//  c
#include<iostream>
using namespace std;
class BaseA{
  public:
  void show(){
    cout<<"I am class A."<<endl;
  }
};
class BaseB{
   public:
   void show(){
    cout<<"I am class B"<<endl;
   }
};
class ChildC:public BaseA,public BaseB{
    public:
    void show(){
           BaseA::show();
          cout<<"i am child class."<<endl;
    }    
};
int main(){
    ChildC obj;
    obj.show();

}
