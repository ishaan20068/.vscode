#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define ld              long double
#define o(x)            cout<<x<<endl;
int power(int a,int b) {if(b==0){return 1;}int res=power(a, b / 2);if (b % 2){return res*res*a;}else{return res*res;}}
ld f(double sum,int val,int k){if(val ==k){return sum+(1.0/power(2,k));}else{return f(sum+(1.0/power(2,val)),val+1,k);}}
void ans(){
    int n;
    cin>>n;
    o(f(0,0,n));
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}
