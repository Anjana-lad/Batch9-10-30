//class template:
#include<iostream>
using namespace std;
template<class T>
class show{
    private:
     T a,b;
    public:
    show(T p,T q){
        a=p;
        b=q;
    }
    void display(){
        cout<<"A is:"<<a<<endl<<"B is"<<b<<endl;
    }
};
int main(){
  show <int> obj(10,20);
  obj.display();  
  show <double> obj1(10.2,63.6);
  obj1.display();
  show <char> obj2('A','B');
  obj2.display();
}