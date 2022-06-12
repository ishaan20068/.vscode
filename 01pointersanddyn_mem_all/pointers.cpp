#include<iostream>
using namespace std;
int main(){
    int i=0;
    cout<<&i<<endl;//& gives the address of any variable
    int*p=&i;
    cout<<*p<<endl;//* used infront of a pointer deferences the value written at the location pointed by pointer
    return 0;}