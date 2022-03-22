/* check if a string is a subsequence of another*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define in              cin>>
#define o(x)            cout<<x<<endl;
bool f(string x,string y,int i,int j){
    if(j==y.size()){return true;}
    if(i==x.size()){return false;}
    if(x[i]==y[j]){j++;}
    return f(x,y,i+1,j);
}
void ans(){
    string n,m;
    in n;
    in m;
    string k=f(n,m,0,0)?"true":"false";
    o(k);
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}
