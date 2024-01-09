#include<iostream>
using namespace std;
int swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swaping the value of x and y:"<<x<<"\t"<<y<<endl;
}
int main(){
   int x,y;
   cout<<"Enter value:";
   cin>>x>>y;
   cout<<"Before calling funcion:"<<"\n"<<"x:"<<x<<"y:"<<y<<endl;;
   swap(x,y);
   cout<<"Again value of x and y is:"<<"\n"<<"x:"<<x<<"y:"<<y<<endl;
}