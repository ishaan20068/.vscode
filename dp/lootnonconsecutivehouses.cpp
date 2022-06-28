//given an array of money in n houses, find the max amount the theif
//can steal given that he cannot steal from two consecutive houses
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;
void ans(){
    int n;
    cin>>n;
    int m[n+1];
    fro(i,1,n+1){in m[i];}
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[1]=m[1];
    fro(i,2,n+1){
        dp[i]=max(m[i]+dp[i-2],dp[i-1]);
    }
    o(dp[n])
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
