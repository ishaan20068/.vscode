#include<iostream>
using namespace std;
int main(){
    int i=0;
    cout<<&i<<endl;
    int*p=&i;
    cout<<*p<<endl;
    return 0;
}