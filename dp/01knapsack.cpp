//given n number of items and their costs and weights determine
//the maximum amount of cost the person can steal with maximum capacity W
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;
void ans(){
    int n;
    cin>>n;
    int weight[n];int cost[n];
    fr(i,n){in weight[i];}
    fr(j,n){in cost[j];}
    int maxw;
    in maxw;
    int dp[n+1][maxw+1];
    memset(dp,0,sizeof(dp));
    fro(i,1,n+1){
        fro(j,1,maxw+1){
            if(weight[i-1]<=j){
                dp[i][j]=max(cost[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    o(dp[n][maxw])
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
