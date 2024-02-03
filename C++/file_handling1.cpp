//File handling program to create a new text file and write the data to it.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int rno,fee;
    char name[20];
   //ofstream fout("G:\\batch9-10\\test1.txt");
    cout<<"Enter rollno";
    cin>>rno;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter fees:";
    cin>>fee;
    ofstream fout("G:\\batch9-10\\student1.txt"); //write the data to file;
    fout<<"name:"<<name<<endl;
    fout<<"Rollno:"<<rno<<endl;
    fout<<"fees:"<<fee<<endl;
    fout.close();
    cout<<"Data entered successfully.."<<endl;

    ifstream fin("G:\\batch9-10\\student1.txt");//read the data from file;
    fin>>rno>>name>>fee;
    fin.close();
    cout<<endl<<rno<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"fees:"<<fee<<endl;    
 }