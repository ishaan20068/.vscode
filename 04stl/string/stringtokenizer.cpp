#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define o(x)            cout<<x<<endl;
void ans(){
    char s[100]="ishaan is a good boy";
    char* ptr=strtok(s," ");
    o(ptr)
    while(ptr!=NULL){
        ptr=strtok(NULL," ");
        o(ptr);
    }
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
