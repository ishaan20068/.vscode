/*number of binary strings with no consecutive 1s*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;

int f(int n){if(n<3){return n+1;}else{return f(n-1)+f(n-2);}}
void ans(){
    int n;
    cin>>n;
    int x=f(n);o(x)
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
