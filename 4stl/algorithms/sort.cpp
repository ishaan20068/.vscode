//sorting using stl sort method for containers
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define in              cin>>
#define o(x)            cout<<x<<endl;
#define all(x)          x.begin(), x.end()
#define sortall(x)      sort(all(x))

typedef vector<int>                     vll;

template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

bool cm(int a,int b){
    return b<a;
}
void ans(){
    vll v={5,6,6,6,7,8,9,1,2,3,4};
    sortall(v);
    o(v)
    sort(all(v),cm);
    o(v)
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}