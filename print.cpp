#include<iostream>
using namespace std;
void print(int* a,int n){for (int i = 0; i < n ; i++){cout<<a[i]<<endl;}}
int count(int* a,int n,int ele){int c=0;for(int i=0;i<n;i++){if(a[i]==ele){c+=1;}}return c;}
int index(int* a,int n,int ele){for(int i=0;i<n;i++){if(a[i]==ele){return i;}}return -1;}
int sum(int* a,int n){int s=0;for(int i=0;i<n;i++){s+=a[i];}return s;}
//this program has some interesting ways of iterating over arrays or any collection based data structure
int main(){
    float a[5]={1,2.3f,3,4,5};
    for(int x:a){
        cout<<x<<endl;
    }
    //to avoid the type we can use the keyword auto
    for(auto x:a){
        cout<<x<<endl;}
    string x="new string";
    cout<<x;
    return 0;
}