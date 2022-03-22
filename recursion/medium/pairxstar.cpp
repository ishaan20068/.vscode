/* if two simultaneous characters are same then separate them by 
adding * in between. for example aaa becomes a*a*a and abb becomes ab*b */
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
string f(string x,int i){
    if(i==x.size()){
        return "";
    }
    else{
        if(x[i]==x[i+1]){string t="*";t.insert(0,1,x[i]);return t+f(x,i+1);}
        else{return x[i]+f(x,i+1);}
    }
}
void ans(){
    string n;
    cin>>n;
    o(f(n,0));
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}