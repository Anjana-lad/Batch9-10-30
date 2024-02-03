//number not divide by zero.
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter number x:";
    cin>>x;
    cout<<"Enter number y:";
    cin>>y;
    cout<<"Enter number z:";
    cin>>z;
    try{
        if((x-y)!=0){
            int r=z/(x-y);
            cout<<"The result is:"<<r<<endl;
        }
        else{
            throw(x-y);
        }
    }
    catch(int r){
        cout<<"Infinite Result of x-y:"<<r<<endl;
    }
}