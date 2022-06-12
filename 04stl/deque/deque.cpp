#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define o(x)            cout<<x<<endl;
#define pb              push_back

void ans(){
    deque<int> d;
    d={1,2,3,4,5,6,7};
    d.pb(8);
    d.push_front(0);
    for(auto i:d){cout<<i<<" ";}
    o(" ")
    d.pop_back();
    d.pop_front();
    for(auto i:d){cout<<i<<" ";}
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
