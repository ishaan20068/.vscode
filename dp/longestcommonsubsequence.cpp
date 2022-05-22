//given two strings find their longest common subsequence
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define o(x)            cout<<x<<endl;
void ans(){
    string a,b;
    cin>>a>>b;
    int dp[a.length()+1][b.length()+1];
    memset(dp,0,sizeof(dp));
    fro(i,1,a.length()+1){
        fro(j,1,b.length()+1){
            if(a[i-1]==b[j-1]){dp[i][j]=1+dp[i-1][j-1];}
            else{dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}}}
    o(dp[a.length()][b.length()])
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
