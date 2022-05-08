#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define o(x)            cout<<x<<endl;

void ans(){
    int n;
    cin>>n;
    int a[n];
    memset(a,0,sizeof(a));a[0]=1;a[1]=1;
    fro(i,2,n){
        a[i]=a[i-1]+a[i-2];
    }
    o(a[n-1]);
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
