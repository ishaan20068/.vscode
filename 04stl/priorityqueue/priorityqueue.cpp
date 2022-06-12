#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define o(x)            cout<<x<<endl;
typedef priority_queue<int>             pqllmax;
typedef priority_queue<int,vector<int>,greater<int>>             pqllmin;

void ans(){
    int n;
    cin>>n;
    pqllmax pq1;
    pqllmin pq2;
    fr(i,n){
        int temp;
        cin>>temp;
        pq1.push(temp);
        pq2.push(temp);
    }
    while(!pq1.empty()){
        o(pq1.top());
        pq1.pop();
    }
    while(!pq2.empty()){
        o(pq2.top());
        pq2.pop();
    }
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
