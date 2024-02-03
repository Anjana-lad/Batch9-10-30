//aggregation : it is a process in which one class defines another class as and entity reference. It is another way to reuse the class .It is a form association that represent HAS-A relationship.
#include<iostream>
using namespace std;
class Address{
public:
    string city,state;
    Address(string ct,string st){
        this->city=ct;
        this->state=st;
    }
};
class Employee{
    private:
    Address* add;   ///  Has-a relationship
    public:
    int eid;
    string name;
    public:
    Employee(int id,string name,Address* add1){
        this->eid=id;
        this->name=name;
        this->add=add1;
    }
    int display(){
        cout<<"Employee Details:"<<endl;
        cout<<"Employee Id:"<<eid<<endl<<"Name:"<<name<<endl<<"Address :"<<add->city<<"\t"<<add->state<<endl;
    }
};
int main(){
    Address a1("Surat","Gujarat");
    Employee e(102,"Dipak",&a1);
    e.display();
}  