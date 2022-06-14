#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;
#define pb              push_back
#define all(x)          x.begin(), x.end()
typedef vector<int>                     vll;
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
void ans(){
    int n;
    cin>>n;
    vll a={};
    fr(i,n){int k;in k;a.pb(k);}
    bool flag=false;
    fro(i,n-1,0){
        if(a[i]>a[i-1]){flag=true;reverse(a.begin()+i,a.end());
        int t=upper_bound(a.begin()+i,a.end(),a[i-1])-a.begin();
        swap(a[t],a[i-1]);
        o(a)
        break;}
    }
    if(flag==false){
        reverse(all(a));
        o(a)
    }
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
