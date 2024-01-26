//operator overload.
//syntax: classname operatorsymbol(classname const &object name) 
#include<iostream>
using namespace std;
class overload{
   private:
    int real,img;
    public:
    overload(int r=0,int i=0){
        real=r;
        img=i;
    }
    overload operator+(overload const &obj){
        overload res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    void display(){
        cout<<real<<"+ j"<<img<<endl;
    }
};
int main(){
      overload ov(10,5);
      overload ov1(12,10);
      overload res=ov+ov1;
      res.display();
}