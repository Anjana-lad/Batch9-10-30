//constructor overloading .
#include<iostream>
using namespace std;
class rectangle{
   private:
   int width,height;
   public:
   rectangle();//default
   rectangle(int,int); //parameter
   int area(){   //member function
    return (width*height);
   }
};
rectangle::rectangle(int w,int h){
    width=w;
    height=h;
}
rectangle::rectangle(){
   cout<<"Enter width and height:";
   cin>>width>>height;
   cout<<"width:"<<width<<"\n"<<"height:"<<height<<endl;
}
int main(){
    rectangle rect1;
    rectangle rect2(4,5);
    cout<<"The area of default constructor is:"<<rect1.area()<<endl;
   cout<<"The area of parameterized constructor is:"<<rect2.area()<<endl;
}