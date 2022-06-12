//find function can be used to find the index of a particular element 
// in a container
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
#define all(x)          x.begin(), x.end()
typedef vector<int>                     vll;
void ans(){
    int a[6]={3,4,5,6,7,8};
    vll v={2,3,4,5,8,7,6};
    vll::iterator it=find(all(v),6);
    o(*it)
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
