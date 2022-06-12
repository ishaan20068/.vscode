#include<iostream>
using namespace std;
class student{
    private:
    int age;
    int roll;
    string name;
    public:
    student(){}//default constructor
    student(string n,int a){//parameterized constructor
        static int num=0;
        this->age=a;
        this->name=n;
        this->roll=++num;
    }
    ~student(){
        cout<<"destructor"<<endl;
    }
    void print(){// function to print student object details
        cout<<"name: "<<this->name<<endl;
        cout<<"age: "<<this->age<<endl;
        cout<<"roll number: "<<this->roll<<endl;
    }
    //getters and setters
    int getage(){return this->age;}
    string getname(){return this->name;}
    int getroll(){return this->roll;}
    void setage(int a){this->age=a;}
    void setname(string n){this->name=n;}
    void setroll(int r){this->roll=r;}
    
};
int main(){
    student s1;
    student *s2=new student("manas",19);
    s1=student("ishaan",19);
    s1.print();
    s2->print();
    student s3("kartik",20);//parameterized constructor is called
    student s4(s1);//this is called the copy constructor
    s4=*s2;//copy assignment operator
    s3.print();
    s4.print();
    delete s2;
    return 0;
}