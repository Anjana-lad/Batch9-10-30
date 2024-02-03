//template:template are special type in c++.
#include<iostream>
using namespace std;
template<typename T>  //template
T max_fun(T x,T y){
    return (x > y)? x : y;
}
int main(){
   cout<<max_fun <int>(30,80)<<endl;
   cout<<max_fun <double>(4.5,8.6)<<endl;
   cout<<max_fun <char>('h','u')<<endl;    
}