#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int             long long
#define fr(i,n)         for(int i=0;i<n;i++)
#define fro(i,k,n)       for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define in              cin>>
#define o(x)            cout<<x<<endl;
class book{
    private:
    string name;
    double cost;
    public:
    book(){}
    book(string n, double c){this->name=n;this->cost=c;}
    string getname(){return this->name;}
    double getcost(){return this->cost;}
};
class bookcmp{
    public:
    bookcmp(){}
    int operator()(book b1,book b2){
        if(b1.getname()==b2.getname()){return 1;}
        else{return 0;}
    }
};

template<class c,typename t, class i>
i search(i start,i end,t item,c cmp){
    while(start!=end){if(cmp(*start,item)){return start;}start++;}
    return end;
}
void ans(){
    list<book> l;
    l.push_back(book("c++",100));
    l.push_back(book("java",100));
    l.push_back(book("c",100));
    l.push_back(book("ruby",100));
    l.push_back(book("python",100));
    l.push_back(book("pascal",100));
    bookcmp b;
    book b1=book("c++",200);
    list<book>::iterator k=search(l.begin(),l.end(),b1,b);
    o((*k).getname())
}
int32_t main(){
    fast
    //int t;cin>>t;
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
