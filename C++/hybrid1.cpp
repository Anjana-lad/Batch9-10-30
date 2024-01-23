//hybrid inheritance.//diamond problem
//   P 
// Q   R
//   S
#include<iostream>
using namespace std;
class BaseP{
   public: 
     int p;
  };
class BaseQ: virtual public BaseP{
  public:
  int q;
};
class BaseR: virtual public BaseP{
    public:
    int r;
};
class childS:public BaseQ,public BaseR{
    public:
    int res;
};
int main(){
    childS s1;
    s1.p=50;
    s1.q=20;
    s1.r=30;
    s1.res=s1.p+s1.q+s1.r;
    cout<<"The result is: "<<s1.res<<endl;
}