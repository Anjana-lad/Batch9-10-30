//friend function.
#include<iostream>
using namespace std;
class Sanket;
class Dipak{
  private:
    int money=10;
    friend void vishal(Dipak,Sanket);
};
class Sanket{
    private:
    int money=20;
    friend void vishal(Dipak,Sanket); 
};
void vishal(Dipak r1,Sanket r2){ // friend function 
    cout<<"Sum is"<<r1.money+r2.money<<endl;
}
int main(){
    Dipak d1;
    Sanket s1;
    vishal(d1,s1);
}