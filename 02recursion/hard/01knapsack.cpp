/*you are given some articles and their profits on selling with weights. 
you can carry a maximum of c kgs and you need to maximize the profit*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define in              cin>>
#define o(x)            cout<<x<<endl;
int maxprofit(int * weights,int*profits,int n,int index,int c,int profit){
    if(index==n){return profit;}
    int wt1=c-weights[index];int p1=profit+profits[index];
    int c2=maxprofit(weights,profits,n,index+1,c,profit);
    if(wt1>=0){int c1=maxprofit(weights,profits,n,index+1,wt1,p1);int x=(c1>c2)?c1:c2;return x;}
    return c2;
}
void ans(){
    int n;cin>>n;int c;in c;int profits[n];int weights[n];int profit=0;
    o("enter weights")fr(i,n){in weights[i];}
    o("enter profits")fr(i,n){in profits[i];}
    int x=maxprofit(weights,profits,n,0,c,profit);o(x)
}
int32_t main(){
    fast
    int t=1;for(int i=0;i<t;i++){ans();}return 0;}
