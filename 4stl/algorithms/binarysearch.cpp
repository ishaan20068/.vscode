//find uses O(n) searching to finfan element, so we can 
//use binary search for sorted arrays that works in O(logn)time 
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
#define all(x)          x.begin(), x.end()
typedef vector<int>                     vll;
void ans(){
    vll v={1,2,3,4,5,6,7,8,9};
    bool present=binary_search(all(v),6);
    o(present)
    present=binary_search(all(v),10);
    o(present)
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
