#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
void f(int n,string a,string b, string c){
    if(n==1){o(" move disc "<<1<<" from pillar "<<a<<" to pillar "<<c)}
    else{
        f(n-1,a,c,b);
        o("move disc "<<n<<" from pillar "<<a<<" to pillar "<<c)
        f(n-1,b,a,c);
    }
}
void ans(){
    int n;
    cin>>n;
    f(n,"A","B","C");
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}
