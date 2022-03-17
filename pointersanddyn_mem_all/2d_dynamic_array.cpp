#include<bits/stdc++.h>
using namespace std;
template<typename T>
void printmat(T a,int n,int m){for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<*(*(a+i)+j)<<" ";}cout<<endl;}}
int main(){
    int ** p=new int*[6];
    for (int i = 0; i < 6; i++){
        p[i]=new int[4];
    }
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2}};
    int count=1;
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 4; j++){
            p[i][j]=count;
            count++;
        }
    }
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 4; j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    //using dynamically allocated 2d arrays we can also create 2d arrays with different size
    // for example : a={{1},{2,3},{4,5,6}}
    printmat(a,3,4);
    //to delete the dynamically allocated 2d array
    //first delete all the subarrays and then delete the pointer array
    // for this case it will look as follows:
    for(int i=0;i<4;i++){
        delete [] p[i];
    }
    delete [] p;
    return 0;
}