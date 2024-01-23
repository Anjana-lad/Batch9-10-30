//single inheritence.
#include<iostream>
using namespace std;
class Human{
     public:
     Human(){
        cout<<"I am a human"<<endl;
     }
};
class Male:public Human{  //derived class.
       
};
int main(){
    Male m;
}
    