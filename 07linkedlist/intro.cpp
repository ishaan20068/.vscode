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
template<typename t>
node<t>* input(){int v;cin>>v;if(v==-1){return NULL;}node<t> head(v);node<t> temp=head;while(v!=-1){cin>>v;if(v==-1){break;}node x(v);head.next=x;head=head.next;}}
int main(){
    node<int> n1(1);
    node<int> n2(2);
    node<int> n3(3);
    node<int> n4(4);
    node<int> n5(5);
    node<int> n6(6);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    n5.next=&n6;
    n1.print();
    node<int> m1(10);
    m1.insert(20);
    m1.insert(30);
    m1.insert(40);
    m1.insert(50);
    m1.print();
    int x=m1.len();
    cout<<x<<endl;
    cout<< m1.get(2)<<endl;
    cout<<m1.has(40)<<endl;
    cout<<m1.has(60)<<endl;
    m1.insert(1,15);
    m1.print();
    m1.insert(6,60);
    m1.insert(10,100);
    m1.print();
    node<int> m2=m1.push(0);
    m2.print();
    m2.del(2);
    m2.print();
    node<int> * m3=m2.pop();
    m3->print();
    m2.print();
    return 0;
}