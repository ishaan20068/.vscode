//longest increasing subsequence in an array of integers
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)      for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;
typedef vector<int>                     vll;
void ans(){
    int n;
    cin>>n;
    vll dp(n,0);
    int a[n];
    dp[0]=1;
    fr(i,n){
        in a[i];
    }
    fro(i,1,n){
        fr(j,i){
            if(a[i]>a[j]){dp[i]=max(dp[i],1+dp[j]);}
            else{dp[i]= max(dp[i],(int)1);}
        }
    }
    o(*max_element(dp.begin(),dp.end()))
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
