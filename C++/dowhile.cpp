//plaindrome
#include<iostream>
using namespace std;
int main(){
    int num,rev=0,rem;
   cout<<"Enter a number:";
  cin>>num;
    int n=num;
  do{
    rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;
  }while(n>0);
  cout<<"reverse num is"<<rev<<endl;
  if(num==rev){
    cout<<"Number is plaindrome.";
  }
  else{
    cout<<"Not a plaindrome.";
  }
}