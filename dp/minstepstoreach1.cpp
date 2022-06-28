//you can subtract 1, divide by 2(if possible), divide by 3(if
//possible), find minimum operations to reach 1.
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define o(x)            cout<<x<<endl;
void minsteps(int n){
    int a[n+1];
    memset(a,0,sizeof(a));
    fro(i,2,n+1){
        if(i%3==0 && i%2==0){
            a[i]=1+min(min(a[(int)i/3],a[(int)i/2]),a[i-1]);
        }
        else if(i%3==0){
            a[i]=1+min(a[(int)i/3],a[i-1]);
        }
        else if(i%2==0){
            a[i]=1+min(a[(int )i/2],a[i-1]);
        }
        else{a[i]=a[i-1]+1;}
    }
    o(a[n])
}
void ans(){
    int n;
    cin>>n;
    minsteps(n);
}
int32_t main(){
    fast
    int t;cin>>t;
    //int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
