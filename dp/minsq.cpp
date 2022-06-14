//minimum number of squares required to represent a number
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define o(x)            cout<<x<<endl;

void minsq(int n){
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;dp[1]=1;dp[2]=2;dp[3]=3;
    fro(i,4,n+1){
        if(sqrt(i)==floor(sqrt(i))){
            dp[i]=1;
        }
        else{
            dp[i]=INT32_MAX;
            int j=1;
            while(j*j<i){
                dp[i]=min(1+dp[i-j*j],dp[i]);
                j++;
            }
        }
    }
    o(dp[n])
}
void ans(){
    int n;
    cin>>n;
    minsq(n);
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
