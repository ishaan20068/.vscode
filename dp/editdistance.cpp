//minimum number of insert, remove and replace operations required to make 
//two strings same
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define o(x)            cout<<x<<endl;
void ans(){
    string a,b;
    cin>>a>>b;
    int dp[a.size()+1][b.size()+1];
    memset(dp,0,sizeof(dp));
    fr(i,b.size()+1){
        dp[0][i]=i;
    }
    fr(j,a.size()+1){
        dp[j][0]=j;
    }
    fro(i,1,a.size()+1){
        fro(j,1,b.size()+1){
            if(a[i-1]==b[j-1]){dp[i][j]=dp[i-1][j-1];}
            else{dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;}
        }
    }
    o(dp[a.size()][b.size()])
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
