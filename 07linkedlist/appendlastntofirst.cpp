#include<iostream>
using namespace std;
template<class t>
class node{
    public:
    t data;
    node*next;
    node* tail;
    node(t d){this->data=d;this->next=NULL;this->tail=this;}
    //inserts a node with value x at the end of the list in O(n) time
    void insert(t x){this->tail->next=new node<t>(x);this->tail=this->tail->next;node<t>* temp=this;while(temp->next!=NULL){temp->tail=this->tail;temp=temp->next;}temp->tail=this->tail;}
    //prints the whole linked list in O(n) time
    void print(){if(this->next==NULL){cout<<this->data<<endl;return;}cout<<this->data<<"->";this->next->print();}
    //returns the length of the linked list in O(n) time 
    int len(){if(this->next==NULL){return 1;}return 1+this->next->len();}
    //gets the value at position i in O(i) time
    t get(int i){node<t>* temp=this;for(int j=0;j<i-1;j++){temp=temp->next;}return (*temp->next).data;}
    //searches for an element, if found returns its index else returns -1 in O(n) time
    int has(t x){node<t>* temp=this;int count=0;while(temp->next!=NULL){if(temp->data==x){return count;}count++;temp=temp->next;}if(temp->data==x) return count;return -1;}
    //inserts a node with given data at the beginning of list and 
    //returns the new starting node in O(1) time
    node push(t data){node* temp=new node(data);temp->next=this;temp->tail=this->tail;return *temp;}
    //inserts a node with given data at positon i(not 0) in O(i) time
    void insert(int i,t data){if(i>this->len()){return;}if(i==this->len()){this->tail->next=new node(data);this->tail=this->tail->next;node<t>* temp=this;while(temp->next!=NULL){temp->tail=this->tail;temp=temp->next;}temp->tail=this->tail;return;}node<t>* temp=this;for(int j=0;j<i-1;j++){temp=temp->next;}node<t>* temp2=new node(data);temp2->next=temp->next;temp2->tail=this->tail;temp->next=temp2;}
    //deletes the node at ith position where i is not 0 in O(i) time
    void del(int i){if(i>=this->len()){return;}if(i==0){return;}node<t>* temp=this;for(int j=0;j<i-1;j++){temp=temp->next;}temp->next=temp->next->next;}
    //removes the first element in linked list in O(1) time
    node* pop(){node<t>* x=this->next;this->next=NULL;return x;}
};
node<int>* input(){int v;cin>>v;if(v==-1){return NULL;}node<int>* head=new node<int>(v);node<int>* temp=head;while(v!=-1){cin>>v;if(v==-1){break;}node<int>* x=new node<int>(v); head->next=x;head= head->next;}node<int>* t=temp;while(temp->next!=NULL){temp->tail=head;temp=temp->next;}temp->tail=head;return t;}

void ans(){
    node<int>* l=input();
    int n;cin>>n;
    int length=l->len();
    length-=n;
    node<int>*temp1=l;
    for(int i=0;i<length-1;i++){
        l=l->next;
    }
    node<int>* temp2=l->next;
    l->next=NULL;
    l->tail->next=temp1;
    node<int>* t=temp2;
    while(temp2->next!=NULL){
        temp2->tail=l;
        temp2=temp2->next;
    }
    temp2->tail=l;
    t->print();
}
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){ans();}
    return 0;
}