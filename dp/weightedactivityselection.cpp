//given a set of activities with their start and end times, find the maximum number of 
//activities a person can perform given that he can do atmost one activity at a time.
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;
#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define all(x)          x.begin(), x.end()
#define clr(x)          memset(x, 0, sizeof(x))

typedef pair< int,int >                 pll;
typedef vector<int>                     vll;

bool cmp1(pair<pll,int> a,pair<pll,int> b){
    return b.ff.ss>a.ff.ss;
}
void ans(){
    int n;
    cin>>n;
    int dp[n+1];
    clr(dp);
    vector<pair<pair<int,int>,int> > tasks;
    fr(i,n){
        int s,e,w;
        in s>>e>>w;
        tasks.pb(mp(mp(s,e),w));
    }
    sort(all(tasks),cmp1);
    vll sec={};
    for(auto i:tasks){
        sec.pb(i.ff.ss);
    }
    dp[1]=tasks[0].ss;
    fro(i,1,n){
        auto k=lower_bound(all(sec),tasks[i].ff.ff)-sec.begin();
        if(sec[k]>tasks[i].ff.ff){k=k-1;}
        if(k>=0){dp[i+1]=max(dp[i],tasks[i].ss + dp[k+1]);}
        else{dp[i+1]=dp[i];}
    }
    o(dp[n-1]);
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
