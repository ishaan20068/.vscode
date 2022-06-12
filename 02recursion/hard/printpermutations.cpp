/*print all permutations of a string*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define o(x)            cout<<x<<endl;

void f(string s,int index,string done){
    if(index==s.size()){o(done) return;}
    fro(i,index,s.size()){
        swap(s[index],s[i]);
        string done1=done+s[index];
        f(s,index+1,done1);
    }
}
void ans(){
    string n;
    cin>>n;
    f(n,0,"");
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
