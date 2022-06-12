#include<iostream>
using namespace std;
class student{
    public://default access modifier is private
    int age;
    int roll;
    string name;
};
int main(){
    student s1;//static memory allocation
    student *s2=new student;//dynamic memory allocation
    s1.name="ishaan";
    s1.age=19;
    s1.roll=1;
    s2->name="manas";
    s2->age=20;
    s2->roll=2;
    (*s2).age=19;
    return 0;
}