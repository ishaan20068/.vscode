#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//using namespace chrono;
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define ld              long double
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)      for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define py              cout<<"YES"<<endl;
#define pn              cout<<"NO"<<endl;
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << "," << #y << "=" << y << endl
#define ull             unsigned long long
#define in              cin>>
#define o(x)            cout<<x<<endl;
#define pi              3.1415926535897932
#define mod             1000000007
#define inf             1e18
#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define all(x)          x.begin(), x.end()
#define allr(x)          x.end(), x.begin()
#define clr(x)          memset(x, 0, sizeof(x))
#define sortall(x)      sort(all(x))
#define tr(it, a)       for(auto it = a.begin(); it != a.end(); it++)
#define mk(a,n,type)    type *a=new type[n];
#define ps(x,y)         fixed<<setprecision(y)<<x

typedef pair< int,int >                 pll;
typedef vector<int>                     vll;
typedef vector<pll>                     vpll;


void ans(){
    int n;
    cin>>n;
    list<pll> a[n];
    int e;
    in e;
    fr(i,e){
        o("edge "<<(i+1))
        o("choose your starting vertex(1 to "<<n<<"): ")
        int s,l,w;
        in s;
        o("choose your destination vertex: ")
        in l;
        o("choose weight of edge"<<(i+1)<<": ")
        in w;
        a[s-1].pb(mp(l,w));
        a[l-1].pb(mp(s,w));
    }
    fr(i,n){
        cout<<i+1<<"-->";
        for(auto j=a[i].begin();j!=a[i].end();j++){
            cout<<" ("<<(*j).ff<<","<<(*j).ss<<") -->";
        }
        cout<<" NULL"<<endl;
    }
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
