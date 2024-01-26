// Polymorphism : means "MANY FORMS" .poly means many and morphism means forms.
//function overloading.
#include<iostream>
using namespace std;
int add(int a,int b){
    cout<<"sum is:"<<a+b<<endl;
}
int add(int a,int b,int c){
    cout<<"Addition is:"<<a+b+c<<endl;
}
double add(double a,double b){
    cout<<"Add is:"<<a+b<<endl;
}
int main(){
    add(5,10);
    add(5.3,4.5);
    add(7,8);
}