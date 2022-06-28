#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)      for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;
#define all(x)          x.begin(), x.end()
typedef vector<int>                     vll;

void ans(){
    string x;in x;
    vll dp(x.size(),0);
    dp[0]=1;
    fro(i,1,x.size()){
        fr(j,i){
            if(x[i]>x[j]){
            dp[i]=max(dp[i],1+dp[j]);}
            else{dp[i]=max((int)1,dp[i]);}
        }
    }
    o(*max_element(all(dp)))
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
