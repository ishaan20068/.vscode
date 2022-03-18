#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
string f(string x,int i){
    if(i==x.length() ){return " ";}
    else{
        if(x[i]=='p' && x[i+1]=='i'){
            return "3.14"+f(x,i+2);}
        else{
            string t=f(x,i+1);
            return x[i]+t;}}}
void ans(){
    string n;
    cin>>n;
    o(f(n,0))}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}
