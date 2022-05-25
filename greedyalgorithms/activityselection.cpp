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

typedef pair< int,int >                 pll;
typedef vector<int>                     vll;
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

bool cmp(pll a,pll b){
    return a.ss<b.ss;
}
void ans(){
    int n;
    cin>>n;
    vector<pll> time;
    fr(i,n){
        int k,j;
        in k;in j;
        time.pb(mp(k,j));
    }
    sort(all(time),cmp);
    int chosen=0;
    int count=1;
    vll choice;
    fro(i,1,n){
        if(time[i].first>time[chosen].ss){chosen=i;count++;choice.pb(i+1);}
    }
    o(count)
    o("the following tasks can be done:")
    o(choice)
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
