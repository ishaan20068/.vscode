#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define in              cin>>
#define o(x)            cout<<x<<endl;
typedef priority_queue<int,vector<int>,greater<int>>      pqllmax;
//here we use min heap instead of a max heap because in min heap
//whenever we get a larger element than the minimum element we start
//popping and then inserting that larger element, this way we only have k
// elementsin the heap, so the time for insertion and deletion is never more 
// than log(k), whereas if we had inserted all elements in the heap
// then the time complexity would have been log(n) for inserting and deleting
void ans(){
    int n;
    int t;
    in n;
    int k;
    in k;
    pqllmax p;
    fr(i,n){
        in t;
        if(p.size()==k){
            if(p.top()<=t){
                p.pop();p.push(t);
            }
        }
        else{
            p.push(t);
        }
    }
    fr(i,k){o(p.top())p.pop();}
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
