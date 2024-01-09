#include<iostream>
using namespace std;
int p=20;//global variable
int main(){
   int p=30; ///local 
   int q=p;
   cout<<"Q is:"<<q<<endl;
   cout<<"p"<<p<<endl;
   cout<<"::p"<<::p<<endl;
}