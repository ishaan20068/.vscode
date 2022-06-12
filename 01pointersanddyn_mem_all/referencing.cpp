//reference variables store the variable along with its memory location
//suppose int i=10; int& j=i;
//this would actually assign the memory location of i to memory location of j. 
//so *j=*i always as they point to same memory location
#include<iostream>
using namespace std;
void f(int &i){// here we take a reference variable, so instead of creating a copy of the
    i++;    // original variable we are using the same variable that is present in main code
}
//we should not return the pointer or reference to a local variable inside a function
//because as soon as the function gets executed the local variables themselves are destroyed
//so we will have a memory that will have no value
// so if the return type of a function contains * or &, we must see that we are not returning
//the pointer or reference to a local variable in a function
int main(){
    int i=10;
    int & j =i;
    i++;
    cout<<j<<endl;
    f(i);
    cout<<j<<endl;
    return 0;}