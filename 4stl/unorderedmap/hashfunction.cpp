#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define o(x)            cout<<x<<endl;
#define mp              make_pair
#define ff              first
#define ss              second
class student{
    public:
    string name;
    int rollno;
    student(string s,int r){
        this->name=s;
        this->rollno=r;
    }
    bool operator==(const student &s) const {
        return rollno==s.rollno;
    }
};
class hashfn{
    public:
    size_t operator()(const student &s) const{
        return s.rollno+10;
    }
};

void ans(){
    unordered_map<student,int, hashfn > m;
    student s1=student("ishaan",1);
    student s2=student("ishaan2",2);
    m.insert(mp(s1,10));
    m.insert(mp(s2,20));
    for(auto i:m){
        o(i.ff.name<<" "<<i.ss)
    }
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
