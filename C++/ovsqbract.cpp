#include<iostream>
using namespace std;
class bracket{
    public:int array[3];
    public:
    bracket(int i,int j,int k){
        array[0]=i;
        array[1]=j;
        array[2]=k;
    }
    int operator[](int i){
        return array[i];
    }
};
int main(){
    bracket b(5,7,20);
   cout<<b.array[2]<<endl;
}