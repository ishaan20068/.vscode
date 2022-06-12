/*given a wall of size 4n, find possible number of ways to tile it using 
4x1 and 1x4 tiles*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;

int f(int n){
    if(n<4){return 1;}
    else{return f(n-1)+f(n-4);}
}
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
