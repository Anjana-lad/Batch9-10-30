//destructor  it is same name as class name but precesed with ~ sign
#include<iostream>
using namespace std;
class addfun{
 public:
  int x,y,z;
  public:
  addfun(){   //constructor
    cout<<"Enter value of x and y:";
    cin>>x>>y;
    z=x+y;
    cout<<"The result is: "<<z<<endl;
  }
  ~addfun(){    //destructor 
     cout<<"Calling Destructor.......";
  }
};
int main(){
    addfun af;
    cout<<"Calling contructor....."<<endl;
}