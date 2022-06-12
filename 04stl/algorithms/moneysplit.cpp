// given a set of denominations, break down a given amount using least 
//number of entities
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
#define pb              push_back
#define all(x)          x.begin(), x.end()
typedef vector<int>                     vll;
vll den={1,2,5,10,20,50,100,200,500,2000};
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
void ans(){
    int n;
    cin>>n;
    vll values={};
    while(n>0){
        if(binary_search(all(den),n)){values.pb(n);n=0;}
        else{
            vll::iterator k=lower_bound(all(den),n);
            int x=den[k-den.begin()-1];
            values.pb(x);
            n-=x;
        }
    }
    o(values)
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
