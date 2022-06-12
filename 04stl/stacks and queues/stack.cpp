#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr(i,n)         for(int i=0;i<n;i++)
#define o(x)            cout<<x<<endl;

void ans(){
    stack<int> s;
    fr(i,10){s.push(i+1);}
    o(s.top())
    s.pop();
    o(s.top())
    s.push(10);
    o(s.top());
    o(s.empty());
    s.pop();
    s.pop();
    o(s.empty())
    o(s.size())
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
