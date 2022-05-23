//to get the index of the elements using binary search we can 
//use two functions upper_bound and lower_bound
//lower_bound: first element that is greater than or equal to the key
//upper_bound: first element that is strictly greater than the key
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
#define all(x)          x.begin(), x.end()
typedef vector<int>                     vll;
void ans(){
    vll v={1,2,3,4,5,6,6,6,7,8,9};
    auto it1=lower_bound(all(v),5);
    auto it2=upper_bound(all(v),6);
    o(it1-v.begin())
    o(it2-v.begin())
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
