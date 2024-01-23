#include<iostream>
using namespace std;
class P{  //base class
    public:
    int x,y,z;//data member
};
class Q:public P{
    public:
    int getx(){
        cout<<"Enter the value of x:";
        cin>>x;
    }
};
class R:public P{
    public:
    int gety(){
        cout<<"Enter the value of y:";
        cin>>y;
    }
};
class S:public P{
    public:
    int getz(){
        cout<<"Enter the value of z:";
        cin>>z;
    }
};
int main(){
    Q q;
    q.getx();
    R re;
    re.gety();
    S s;
    s.getz();
    // int res=x+y+z;
    // cout<<res;
}