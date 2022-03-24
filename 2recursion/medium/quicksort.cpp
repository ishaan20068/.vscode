#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<" ";
int partition(int*a,int low,int high){
    int count=0;
    fro(i,low,high+1){if(a[low]>a[i]){count++;}}
    swap(a[low],a[low+count]);
    int i=low,j=high;
    while(i<j){if(a[i]>a[low+count] && a[j]<a[low+count]){swap(a[i],a[j]);i++;j--;}
    else if(a[i]>a[low+count] && a[j]>=a[low+count]){j--;}
    else if(a[i]<a[low+count] && a[j]<a[low+count]){i++;}
    else{i++;j--;}}return low+count;}
void quicksort(int * a,int low,int high){
    if(low>=high){return;}
    int x=partition(a,low,high);
    quicksort(a,low,x-1);quicksort(a,x+1,high);}
void ans(){
    int n;cin>>n;
    int a[n];fr(i,n){in a[i];}quicksort(a,0,n-1);fr(i,n){o(a[i])}}
int32_t main(){fast int t=1;for(int i=0;i<t;i++){ans();}return 0;}