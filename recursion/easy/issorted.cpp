/*check if an array is sorted*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
#define mk(a,n,type)    type *a=new type[n]
bool f(int* a,int sorted,int n){if(sorted==n){return true;}else{if(a[sorted+1]<a[sorted]){return false;}else{return f(a,sorted+1,n);}}}
void ans(){
    int n;
    cin>>n;
    mk(a,n,int);
    for (int i=0;i<n;i++){cin>>a[i];}
    string k=f(a,0,n)?"true":"false";
    o(k)
    delete[] a;
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1
    for(int i=0;i<t;i++){ans();}
    return 0;
}
