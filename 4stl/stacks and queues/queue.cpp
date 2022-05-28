#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr(i,n)         for(int i=0;i<n;i++)
#define o(x)            cout<<x<<endl;

void ans(){
    queue<int> q;
    fr(i,10){q.push(i);}
    while(!q.empty()){o(q.front()) q.pop();}
    o(q.size())
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
