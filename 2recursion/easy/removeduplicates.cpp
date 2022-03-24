/*remove duplicate characters from a string, for example: aaabbcccccaa becomes abca*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
void f(string s,int index,string made){
    if(index==s.size()-1){made+=s[index];o(made) return ;}
    else if(s[index]==s[index+1]){f(s,index+1,made);return ;}
    else{string made1=made+s[index];f(s,index+1,made1);}
}
void ans(){
    string n;
    cin>>n;
    f(n,0,"");
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
