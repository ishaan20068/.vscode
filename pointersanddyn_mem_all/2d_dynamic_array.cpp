#include<bits/stdc++.h>
using namespace std;
void spiral(int ** a,int left, int right, int up, int down){
    if(up==down){for(int i=left;i<=right;i++){cout<<a[up][i]<<" ";}return ;}else if(left==right){for(int i=up;i<=down;i++){cout<<a[i][left]<<" ";}return;}else{for(int i=left;i<=right;i++){cout<<a[up][i]<<" ";}up++;for(int i=up;i<=down;i++){cout<<a[i][right]<<" ";}right--;for(int i=right;i>=left;i--){cout<<a[down][i]<<" ";}down--;for(int i=down;i>=up;i--){cout<<a[i][left]<<" ";}left++;return spiral(a,left,right,up,down);}}
template<typename T>
void printmat(T a,int n,int m){for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<*(*(a+i)+j)<<" ";}cout<<endl;}}

int main(){
    int ** p=new int*[4];
    for (int i = 0; i < 4; i++){
        p[i]=new int[3];
    }
    int a[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int count=1;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            p[i][j]=count;
            count++;
        }
    }
    // for (int i = 0; i < 4; i++){
    //     for (int j = 0; j < 3; j++){
    //         cout<<p[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //spiral(p,0,2,0,3);
    printmat(a,3,3);
    return 0;
}