//array within class.
#include<iostream>
using namespace std;
class student {
    public:
    int rollno;
    char name[10];
    float marks[4];
    public:
    int getdata(){
        cout<<"Enter name and  rollno:";
        cin>>rollno;
        cin>>name;
        cout<<"Enter marks";
        for(int i=0;i<4;i++){
            cout<<"Marks:";
            cin>>marks[i];
        }
    }
    int display(){
        cout<<"Students Details:"<<endl;
        cout<<"Rollno is:"<<rollno<<endl;
        cout<<"Name is:"<<name<<endl;
        for(int i=0;i<4;i++){
        cout<<"Marks are: "<<marks[i]<<endl;
    }
    } 
};
int main(){
    student s;
    s.getdata();
    s.display();
}