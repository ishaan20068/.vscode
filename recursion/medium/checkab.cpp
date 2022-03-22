/* CHECK IF A STRING IS MADE USING THE FOLLOWING RULES
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a' */
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define py              cout<<"YES"<<endl;
#define pn              cout<<"NO"<<endl;
#define o(x)            cout<<x<<endl;
void func(string str,char prev,int i){
    if(i==str.size()){
        py return;
    }
    else if(str[i]=='a'){
        return func(str,'a',i+1);
    }
    else{
        if(prev !='a'){ pn return ;}
        if(i==str.size()-1){pn return ;}
        if(str[i+1]!='b'){ pn return ;}
        return func(str,'b',i+2);
    }
}
void ans(){
    string n;
    cin>>n;
    func(n,'a',0);
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}