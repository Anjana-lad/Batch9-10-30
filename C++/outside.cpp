#include<iostream>
using namespace std;
class shape{
    public:
    int length,width,radius;//data member;
    public:
    int circle(int radius);//memberfun
    int rectangle(int length,int width); //member fun
};
int shape::circle(int radius){//
    int area=3.14 * radius*radius;
     cout<<"The area of circle is:"<<area<<endl;
}
int shape::rectangle(int length,int width){
    int area1=(length*width);
     cout<<"The area of rectangle is:"<<area1<<endl;
}
int main(){
    shape s1; //classname object;
     s1.circle(12);
    s1.rectangle(4,5);
}
