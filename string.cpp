#include<bits/stdc++.h>
using namespace std;
//first occurence of a character
int index1(string x,char k,int i){
    if(i==x.size()){return -1;}
    if(x[i]==k){return i;}
    else{return index1(x,k,i+1);}
}
int indexneg1(string x,char k,int i){
    if(i==-1){return -1;}
    if(x[i]==k){return i;}
    else{return indexneg1(x,k,i-1);}
}
int count(string x,char k){
    int c=0;
    for(int i=0;i<x.size();i++){
        if(x[i]==k){c++;}
    }
    return c;
}

int main(){
    string x="ishaan";
    cout<<indexneg1(x,'a',x.size()-1) ;
    return 0;
}