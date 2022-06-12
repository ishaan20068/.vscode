/*we need to print all possible subsets of a given array x. for example:
all subsets of {1,2,3} are {},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3}*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define in              cin>>
void powerset(int* a,int index,int n,int *subset,int size){
    if(index==n){
        fr(i,size){cout<<subset[i]<<" ";}
        cout<<endl;
        return;}
    powerset(a,index+1,n,subset,size);
    subset[size]=a[index];
    powerset(a,index+1,n,subset,size+1);
}
void ans(){
    int n;cin>>n;int* a=new int[n];fr(i,n){in a[i];}
    int *subset=new int[n];powerset(a,0,n,subset,0);
    delete [] a;delete [] subset;}
int32_t main(){
    fast
    int t=1;for(int i=0;i<t;i++){ans();}return 0;}