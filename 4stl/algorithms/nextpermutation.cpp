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
    vll v={10,20,50,40,30};
    next_permutation(all(v));
    o(v)
    vector<string> v1={"a","b","c","d"};
    next_permutation(all(v1));
    o(v1)
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
