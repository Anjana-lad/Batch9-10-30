//arrays in c++
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter values:";
        cin>>arr[i];
    }
     for(int i=0;i<5;i++){
        cout<<"values:"<<arr[i]<<endl;
    }
}