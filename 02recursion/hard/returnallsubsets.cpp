/*here instead of printing the subsets, we need to return them*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;
static int filled=0;
void f(int* a,int index,int n,int* subset,int size,int** x,int *sizes){
    if(index==n){
        fr(i,size){x[filled][i]=subset[i];}sizes[filled]=size;
        filled++;
        return;
    }
    f(a,index+1,n,subset,size,x,sizes);
    subset[size]=a[index];
    f(a,index+1,n,subset,size+1,x,sizes);
}
void ans(){ 
    int n;
    in n;
    int k=(int)pow(2,n);
    int** x=new int*[k];
    int sizes[k];
    fr(i,k){x[i]=new int[n];}
    int subset[n];
    int size=0;
    int a[n];
    fr(i,n){in a[i];}
    f(a,0,n,subset,size,x,sizes);
    fr(i,k){
        fr(j,sizes[i]){cout<<x[i][j]<<" ";}
        cout<<endl;
    }
    fr(i,(int)pow(2,n)){delete [] x[i];}
    delete[] x;
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
