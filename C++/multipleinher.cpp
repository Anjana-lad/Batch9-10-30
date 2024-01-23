//mutiple inheritance.
// a  b
//  c
#include<iostream>
using namespace std;
class BaseA{
    protected:
      int a;
    public:
      int getdata(int n){
        a=n;
      }
};
class BaseB{
    protected:
      int b;
    public:
    int getnum(int m){
        b=m;
    }  
};
class ChildC:public BaseA,public BaseB{
    public:
    int res;
    public:
    int display(){
        res=a+b;
        cout<<"the result is:"<<res;
    }
};
int main(){
    ChildC obj;
    obj.getdata(20);
    obj.getnum(30);
    obj.display();
}
