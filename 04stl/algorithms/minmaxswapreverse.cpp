//min,max,swap,abs,reverse functions
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
#define all(x)          x.begin(), x.end()
typedef vector<int>                     vll;
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
void ans(){
    o(min(2,3))
    o(max(2,3))
    int a=2;
    int b=3;
    o(a<<b)
    swap(a,b);
    o(a<<b)
    o(abs(-2))
    vll v={1,2,3,4,5};
    reverse(all(v));
    o(v)
    int min=*min_element(all(v));
    o(min)
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
