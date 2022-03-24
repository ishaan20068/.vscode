#include<iostream>
using namespace std;
int main(){
    int *p=new int;//dynamically allocated memory
    delete p;//can't delete itself so it is essential to delete it manually else it will occupy whole memory
    int* p1=new int[50];
    for(int i=0;i<50;i++){
        p1[i]=i;
    }
    for(int i=0;i<50;i++){
        cout<<p1[i]<<endl;
    }
    delete [] p1;
    for(int i=0;i<50;i++){
        cout<<p1[i]<<endl;
    }
    return 0;}