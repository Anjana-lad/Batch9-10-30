//factorial 
#include<iostream>
using namespace std;
int main(){
    int num,fact=1,i;
    cout<<"Enter a number:";
    cin>>num;
  for(i=1;i<=num;i++){
    fact=fact*i;
  }
  cout<<"Factorial is:"<<fact<<endl;
}