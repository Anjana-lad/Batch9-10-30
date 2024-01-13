//parameterized construstor.
#include<iostream>
using namespace std;
class cubefun{
     public:
     int side;
     public:
     cubefun(int side1){  //parameterized constructor
        side=side1;
     }
     int result(){
        int res=side*side*side;
        cout<<"The cube is:"<<res<<endl;
     }
};
int main(){ 
     cubefun cf1(5);
     cf1.result();
     cubefun cf2(6);
     cf2.result();
}