//given the cost of visiting each cell of a matrix, find the minimum 
//cost path from 0,0 to the opposite corner
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;

void ans(){
    int n,m;
    cin>>n>>m;
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    int a[n+1][m+1];
    memset(a,0,sizeof(a));
    fro(i,1,n+1){fro(j,1,m+1){in a[i][j];}}
    fro(i,1,n+1){
        fro(j,1,m+1){
            if(i>1 && j>1){
                dp[i][j]=a[i][j]+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
            }
            else if(i>1){
                dp[i][j]=a[i][j]+dp[i-1][j];
            }
            else if(j>1){
                dp[i][j]=a[i][j]+dp[i][j-1];
            }
            else{
                dp[i][j]=a[i][j];
            }
        }
    }
    o(dp[n][m])
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
