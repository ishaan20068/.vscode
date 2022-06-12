#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fro(i,k,n)      for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define o(x)            cout<<x<<endl;
#define mod             1000000007
int modadd(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int modmul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int modsub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

void ans(){
    int n;
    cin>>n;
    int a[n];
    a[0]=1;
    a[1]=1;
    fro(i,2,n){
        a[i]=modadd(modmul(a[i-1],a[i-1],mod),modmul(2,modmul(a[i-1],a[i-2],mod),mod),mod);
    }
    o(a[n-1])
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
