/*print index of all occurences of a number in an array*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define in              cin>>
#define o(x)            cout<<x<<" ";
#define mk(a,n,type)    type *a=new type[n];
void f(int *a,int i,int n, int k){
    if(i==n){
        return ;
    }
    if(a[i]==k){o(i);}
    f(a,i+1,n,k);
}
void ans(){
    int n;
    cin>>n;
    int k;
    in k;
    mk(a,n,int)
    fr(i,n){
        in a[i];
    }
    f(a,0,n,k);
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}
