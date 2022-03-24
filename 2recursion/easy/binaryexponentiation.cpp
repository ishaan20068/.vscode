#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define in              cin>>
#define o(x)            cout<<x<<endl;
int binexp(int a,int n){
    if(a==0||a==1){return a;}
    if(n==0){return 1;}
    int ans=binexp(a,n/2)*binexp(a,n/2);
    if(n&1){return a*ans;}
    else{return ans;}
}
void ans(){
    int n;
    cin>>n;
    int a;in a;
    int x=binexp(a,n);
    o(x)
}
int32_t main(){
    fast
    int t=1;for(int i=0;i<t;i++){ans();}return 0;}
