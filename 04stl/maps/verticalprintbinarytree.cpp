#include<bits/stdc++.h>
using namespace std;
#define fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define o(x)            cout<<x<<endl;
#define pb              push_back
#define ss              second
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
class node{
    public: 
    int value;
    node *left;
    node  *right;
    node(int x){
        this->value=x;
        this->left=this->right=NULL;
    }
};

void printv(node* root,int d,map<int,vector<int>> &m){
    if(root==NULL) return;
    m[d].pb(root->value);
    printv(root->left,d-1,m);
    printv(root->right,d+1,m);
}
void ans(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->left->right->right=new node(8);
    root->right->right->right=new node(9);
    map<int,vector<int>> m;
    printv(root,0,m);
    for(auto i:m){
        o(i.first<<"->"<<i.ss)
    }
}
int32_t main(){
    fast
    int t=1;
    for(int i=0;i<t;i++){ans();}
    return 0;
}
