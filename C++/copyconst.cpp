//copy constructor. //syntax:- classname (const classname &object name)
#include<iostream>
using namespace std;
class value{
   public:
   int a,b;
   public:
   value(int a1,int b1){  //parameterised constructor
   a=a1;
   b=b1;
   }
   value(const value &v2){  //copy constructor.
      a=v2.a;
      b=v2.b;
   }
   int display(){    //memeber function
    cout<<"The of a :"<<a<<endl;
    cout<<"the value of b:"<<b<<endl;
   }
};
int main(){
     value v1(12,51);
      value v2=v1;
      v2.display();
  }