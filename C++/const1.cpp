//default constructor
#include<iostream>
using namespace std;
class points{
    public:
     int singing,dance;//datamember
    public:
    points(){   //default constructor
        singing=0;
        dance=5;
    }
   int result(){   //member functions
        cout<<"Singing:"<<singing<<endl;
        cout<<"Dance:"<<dance<<endl;
    }
};
int main(){
    points p;  //object
    p.result();
}