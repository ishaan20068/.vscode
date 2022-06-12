/*count the number of inversions i.e. pairs such that a[i]>a[j] and i<j*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)      for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;

int inc(int* a,int low,int high){
    if(low>=high){return 0;}
    int mid=low+(high-low)/2;
    int i1=inc(a,low,mid);
    int i2=inc(a,mid+1,high);
    int c=0;
    int temp[high-low +1];
    int i=low,j=mid+1,k=0;
    while(i<mid+1 && j<high+1){
        if(a[i]>a[j]){c+=mid-i+1;temp[k]=a[j];k++;j++;}
        else if(a[i]<a[j]){temp[k]=a[i];k++;i++;}
        else if(a[i]==a[j]){temp[k]=a[i];k++;i++;temp[k]=a[j];j++;k++;}
    }
    while(i<mid+1){temp[k]=a[i];i++;k++;}
    while(j<high+1){temp[k]=a[j];j++;k++;}
    fro(i,low,high+1){a[i]=temp[i-low];}
    return c+i1+i2;
}
void ans(){
    int n;
    cin>>n;
    int a[n];
    fr(i,n){in a[i];}
    int c=0;
    int x=inc(a,0,n-1);
    o(x)
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
