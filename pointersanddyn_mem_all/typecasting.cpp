//here we see type casting and how things are stored in memory
//c++ follows little endian representation where in the least significant bit is stored first
//so the number abcd(32 bit = 4 byte integer) will be stored as dcba
//typecasting of variables can be implicit or explicit
// for example char is itself converted to int 
// but to convert float to int, we need to put (int) before the float value
#include<iostream>
using namespace std;
int main(){
    int i=65;
    char c=i;
    cout <<c<<endl;// char implicitly converted to int 
    int *p=&i;
    char * pc=(char*)p;//explicit convertion from int* to char*
    //now since the first byte has least significant byte, so p has address to 65
    // p+1,p+2,p+3 all have address to 0 value
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;
    return 0;
}