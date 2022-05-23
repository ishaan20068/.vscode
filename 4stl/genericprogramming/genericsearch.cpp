//search an element in a generic array
#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr(i,n)         for(int i=0;i<n;i++)
#define in              cin>>
#define o(x)            cout<<x<<endl;
template<typename T>
int gensearch(T a[],T item, int len)//without iterators
{fr(i,len){if(a[i]==item){return i;}}return -1;}
template<class itr,class T>
itr genser2(itr start,itr end,T item)//with iterators
{while(start!=end){if(*start==item){return start;}start++;}return end;}
void ans(){
    string a[4]={"ishaan","is","learning","c++"};
    string x="c++";
    int k=gensearch(a,x,4);
    string* k1=genser2(a+0,a+4,x);
    o(k)//prints the index of c++
    o(*k1)//prints c++
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
