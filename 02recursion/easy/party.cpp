/*n friends want to go to a party, they can go alone or in pairs
find the number of possible ways they can go*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;

int f(int n){if(n<3){return n;}else{return f(n-1)+(n-1)*f(n-2);}}
void ans(){
    int n;cin>>n;
    int x=f(n);o(x)}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}