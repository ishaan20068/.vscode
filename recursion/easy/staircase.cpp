/*a child can climb either 1 or 2 or 3 stairs at a time
find the number of ways he can reach the top of n stair staircase*/
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define o(x)            cout<<x<<endl;
int num(int n){
    if(n==1){return 1;}
    if(n==2){return 2;}
    if(n==3){return 4;}
    else{return num(n-1)+num(n-2)+num(n-3);}}
void ans(){
    int n;
    cin>>n;
    o(num(n))}
int32_t main(){
    fast
    int t=1;for(int i=0;i<t;i++){ans();}return 0;}