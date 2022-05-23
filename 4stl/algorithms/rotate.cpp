//rotate a given array from between
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
typedef vector<int>                     vll;
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
void ans(){
    vll v={1,2,3,4,5};
    rotate(v.begin(),v.begin()+2,v.end());//rotates from index 2
    o(v)//answer is 3 4 5 1 2
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
