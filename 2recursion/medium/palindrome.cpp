/*CHECK IF A STRING IS PALINDROME OR NOT*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define in              cin>>
#define o(x)            cout<<x<<endl;

bool f(string x,int i,int j){
    if(i==j){return true;}
    else if(j==i+1){return (x[i]==x[j]);}
    else{return ((x[i]==x[j]) && (f(x,i+1,j-1)));}}
void ans(){
    string x;in x;
    string k=(f(x,0,x.length()-1))?"true":"false";
    o(k);
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}