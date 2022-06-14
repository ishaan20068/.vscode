#include<bits/stdc++.h>
using namespace std;

vector<bool> seive(int n){
    vector<bool> v(true,n+1);
    v[0]=false;v[1]=false;
    for(int i=2;i*i<=n;i++){
        if(v[i]==false){continue;}
        else{
            for(int j=i*i;j<=n;){
                v[j]=false;
                j+=i;
            }
        }
    }
    return v;
}
int main(){
    int n;cin>>n;
    vector<bool> v=seive(n);
    for(int i=0;i<=n;i++){
        if(v[i]==true){
            cout<<i<<endl;
        }
    }
    
    return 0;
}