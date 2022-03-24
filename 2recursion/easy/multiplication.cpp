#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define in              cin>>
#define o(x)            cout<<x<<endl;
int f(int m,int n){if(n==1){return m;}else{return m+f(m,n-1);}}
void ans(){
   int n,m;
    in n;
    in m;
    o(f(m,n))
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}