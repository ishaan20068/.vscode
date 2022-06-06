#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define o(x)            cout<<x<<endl;
#define mp              make_pair
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }

void ans(){
    multimap<char,string> m;
    m.insert(mp('a',"apple"));
    m.insert(mp('a',"airplane"));
    m.insert(mp('b',"batman"));
    m.insert(mp('b',"boat"));
    m.insert(mp('c',"cat"));
    m.insert(mp('c',"cattle"));
    auto i1=m.lower_bound('a');
    auto i2=m.upper_bound('b');
    for(auto i=i1;i!=i2;i++){o(*i)}
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
