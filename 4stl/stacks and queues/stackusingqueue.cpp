#include<bits/stdc++.h>
using namespace std;
template<typename T>
class stack1{
    private:
    queue<T> q1;
    queue<T> q2;
    public:
    void push(T a){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(a);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    T pop(){
        T top=q1.front();
        q1.pop();
        return top;
    }
    T top(){
        return q1.front();
    }

};
template<typename T>
class stack2{
    private:
    queue<T> q1;
    queue<T> q2;
    public:
    void push(T a){
        q1.push(a);
    }
    T pop(){
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        T top=q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return top;
    }
    T top(){
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        T top= q1.front();
        q2.push(q1.front());
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return top;
    }

};
int main(){
    stack1<int> s1;
    stack2<int> s2;
    for(int i=0;i<10;i++){s1.push(i);s2.push(i);}
    cout<<s1.top()<<endl;
    cout<<s2.top()<<endl;
    s1.pop();s1.pop();
    s2.pop();s2.pop();
    cout<<s1.top()<<endl;
    cout<<s2.top()<<endl;
    return 0;
}