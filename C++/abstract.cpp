#include<iostream>
using namespace std;
class abstract_ab{
  private:
  int a,b;
  public:
  int getdata(int a1,int b1){
    a=a1;
    b=b1;
  }
  int display(){
     cout<<"a:"<<a<<endl;
     cout<<"b:"<<b<<endl;
  }
};
int main(){
    abstract_ab obj;
    obj.getdata(15,20);
    obj.display();
}