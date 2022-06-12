/*for a given n print all the valid bracket sequences. for example (n=2)=>()()/(()) */
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;

void f(int n,int open,int close,string made){
    if(open==n && close==n){o(made) return;}
    if(open<n){string made1=made+"(";f(n,open+1,close,made1);}
    if(close<open){string made1=made+")";f(n,open,close+1,made1);}
}
void ans(){
    int n;
    cin>>n;
    f(n,0,0,"");
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
