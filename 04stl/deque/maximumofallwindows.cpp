//find the maximum of all k length subarrays of an array
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)      for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<",";
void ans(){
    int n;
    cin>>n;
    int a[n];
    int max;
    fr(i,n){cin>>a[i];}
    int k;
    in k;
    deque<int> d(k);
    fr(i,k){
        while(!d.empty() && a[i]>a[d.back()]){d.pop_back();}
        d.push_back(i);
    }
    fro(i,k,n){
        o(a[d.front()])
        while(!d.empty() && d.front()<=i-k){d.pop_front();}
        while(!d.empty() && a[i]>a[d.back()]){d.pop_back();}
        d.push_back(i);
    }
    o(a[d.front()])
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
