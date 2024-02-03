//reading the data from file;
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int rno,fee;
    char name[20];
    ifstream fin("G:\\batch9-10\\student1.txt");
    fin>>rno>>name>>fee;
    fin.close();
    cout<<"Rollno:"<<rno<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Fees:"<<fee<<endl;
}