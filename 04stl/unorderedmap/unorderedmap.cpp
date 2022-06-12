#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define o(x)            cout<<x<<endl;
#define mp              make_pair

template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }

void ans(){
    unordered_map<string,int> m;//stores data as a self balancing bst
    m.insert(mp("str1",20));
    m["str2"]=30;
    for(auto i:m){
        o(i)
    }
    auto it=m.find("str1");
    if(it!=m.end()){o(m["str1"])}else{o("absent")}
    int i=m.count("str2");
    o(i)
    m.erase("str2");
    i=m.count("str2");
    o(i)
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
