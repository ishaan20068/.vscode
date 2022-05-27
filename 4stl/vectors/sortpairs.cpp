//sort pairs by their distance from origin
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define in              cin>>
#define o(x)            cout<<x<<endl;
#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define all(x)          x.begin(), x.end()
typedef pair< int,int >                 pll;
typedef vector<pll>                     vpll;
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }


bool cmp(pll a,pll b){
    return (a.ff*a.ff + a.ss*a.ss)<(b.ff*b.ff + b.ss*b.ss);
}
void ans(){
    int n;
    cin>>n;
    vpll v;
    fr(i,n){
        int x,y;
        in x>>y;
        v.pb(mp(x,y));
    }
    sort(all(v),cmp);
    o(v)
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
