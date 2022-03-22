/* find the index of first occurence of a number in an array*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define in              cin>>
#define o(x)            cout<<x<<endl;
#define mk(a,n,type)    type *a=new type[n];
int f(int*a,int i,int n,int element){
    if(i>n){return -1;}
    if(a[i]==element){return i;}
    else{return f(a,i+1,n,element);}
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
    o(f(a,0,n,k))
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}
