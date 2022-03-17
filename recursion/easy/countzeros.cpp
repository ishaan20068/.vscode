#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
int f(int n){
    if(n<10){if(n<10 && n==0){return 1;}else{return 0;};}
    else{return f(n%10)+f(n/10);
    }
}
void ans(){
    int n;
    cin>>n;
    o(f(n));
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}
