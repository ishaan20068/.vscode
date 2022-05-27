#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr(i,n)         for(int i=0;i<n;i++)
#define o(x)            cout<<x<<endl;

void ans(){
    list<int> l;
    l={1,2,3,4,5};
    l.push_back(6);
    for(auto s:l){o(s)}
    o("\n")
    l.push_front(0);
    for(auto s:l){o(s)}
    o("\n")
    l.pop_back();
    l.pop_front();
    for(auto s:l){o(s)}
    o("\n")
    l.reverse();
    for(auto s:l){o(s)}
    o("\n")
    l.sort();
    for(auto s:l){o(s)}
    o("\n")
    l.remove(2);
    for(auto s:l){o(s)}
    o("\n")
    auto it=l.begin();
    it++;it++;
    l.erase(it);
    for(auto s:l){o(s)}
    o("\n")
    auto i=l.begin();
    l.insert(i,7);
    for(auto s:l){o(s)}
    o("\n")
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
