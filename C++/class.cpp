// class synatx:
// class classname{
//     data members;
//     member function();
// };
// classname objectname
#include<iostream>
using namespace std;
class person{
    private:
    int p_id;
    string name;
    public:
    int getdata(int pno){
        p_id=pno;
    }
    int data( string nm){
        name=nm;
    }
    void display(){
        cout<<"The id and name of the person is:"<<p_id<<"name :"<<name<<endl;
    }
};
int main(){
    person p1; //object
    person p2;
    p1.getdata(123);
    p1.data("John");
    p1.display();
    p2.getdata(143);
    p2.data("Riya");
    p2.display();
}