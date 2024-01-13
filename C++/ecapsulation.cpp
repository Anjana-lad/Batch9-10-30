#include<iostream>
using namespace std;
class student{
    private:
    int age;
    public:
      int getage(int student_age){
        age=student_age;
      }
      int setage(){
        cout<<"Age:"<<age<<endl;
      }
};
int main(){
    student st;
    int a;
    cout<<"Enter age:";
    cin>>a;
    st.getage(a);
    st.setage();
}