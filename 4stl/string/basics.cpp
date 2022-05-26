#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define o(x)            cout<<x<<endl;
void ans(){
    string s="ishaan";
    if(!s.empty()){o("not empty!!")}
    o(s.size())
    o(s.length())
    s.append(" mar");
    s+="wah";
    s.erase(7,6);
    o(s)
    string s1="apple";
    string s2="mango";
    int k=s1.compare(s2);//gives positive if string is lexographicaally bigger, else negative
    s+=s1;s+=s2;
    int i=s.find("apple");
    o(i)
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
