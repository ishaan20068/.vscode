//sort an array of strings
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr(i,n)         for(int i=0;i<n;i++)
#define o(x)            cout<<x<<endl;

bool cmp(string a,string b){
    if(a.size()==b.size()){return a<b;}
    return a.length()<b.length();
}
void ans(){
    int n;
    cin>>n;
    string a[n];
    cin.get();
    fr(i,n){getline(cin,a[i]);}
    sort(a,a+n);
    fr(i,n){o(a[i])}
    sort(a,a+n,cmp);
    fr(i,n){o(a[i])}

}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
