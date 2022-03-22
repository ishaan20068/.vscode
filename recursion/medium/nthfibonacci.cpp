/*find the nth fibonacci number, here i have used optimised approach*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
#define mk(a,n,type)    type *a=new type[n];
int f(int n,int val,int *a){
    if(n==val){return a[n];}
    else if(n==1 || n==0){return 1;}
    else{
        a[val+1]=a[val]+a[val-1];
        return f(n,val+1,a);
    }
}
void ans(){
    int n;
    cin>>n;
    mk(a,1000,int);
    a[0]=1;a[1]=1;
    o(f(n,1,a));
    delete [] a;
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
