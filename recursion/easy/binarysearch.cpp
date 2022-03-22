#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define in              cin>>
#define o(x)            cout<<x<<endl;
#define mk(a,n,type)    type *a=new type[n];

int binser(int ele,int* a,int low,int high){
    int mid=low+(high+low)/2;
    if(a[mid]==ele){return mid;}
    else if(a[mid]>ele){return binser(ele,a,low,mid);}
    else{return binser(ele,a,mid+1,high);}
}
void ans(){
    int n;cin>>n;
    mk(a,n,int)
    fr(i,n){in a[i];}int k;in k;o(binser(k,a,0,n-1))
}
int32_t main(){
    fast
    ans();return 0;
}
