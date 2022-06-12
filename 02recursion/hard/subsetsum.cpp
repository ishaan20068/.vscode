/*return all the subsets that sum to k of an array*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define in              cin>>
#define o(x)            cout<<x<<" ";

void f(int* a,int n,int index,int *subset,int size,int k){
    if(k==0){fr(i,size){o(subset[i])}cout<<endl;return;}
    else if(index==n || k<0){return ;}
    f(a,n,index+1,subset,size,k);
    subset[size]=a[index];
    k=k-a[index];
    f(a,n,index+1,subset,size+1,k);
}
void ans(){
    int n;
    cin>>n;
    int a[n];
    fr(i,n){in a[i];}
    int k;in k;
    int subset[n];
    f(a,n,0,subset,0,k);
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
