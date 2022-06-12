#include<iostream>
using namespace std;
class frac{
    private:
    int num;
    int den;
    public:
    frac(int n,int d){num=n;den=d;}
    void print(){cout<<this->num<<"/"<<this->den<<endl;}
    void simplify(){
        int x=min(this->num,this->den);
        int gcd=1;
        for (int i=2;i<=x;i++){
            if(this->num%i==0 && this->den%i==0){
                gcd=i;
            }
        }
        this->num=this->num/gcd;
        this->den=this->den/gcd;
    }
    frac operator +(frac const &f){
        frac f3(this->num*f.den+this->den*f.num,this->den*f.den);
        f3.simplify();
        return f3;
    }
    frac operator *(frac const &f){
        frac ff(this->num*f.num , this->den*f.den);
        ff.simplify();
        return ff;
    }
    bool operator ==(frac const &f){
        if(this->num==f.num && this->den==f.den){
            return true;
        }
        return false;
    }
    frac& operator ++(){
        this->num=this->num+this->den;
        this->simplify();
        return *this;
    }
    frac operator ++(int){
        frac f=(*this);
        this->num=this->num+this->den;
        return f;
    }
};
int main(){
    frac f1(1,2);frac f2(1,3);
    frac f3=f1+f2;
    f3.print();
    frac f4=f1*f2;
    f4.print();
    cout<<(f3==f4)<<endl;
    ++f4;
    f4.print();
    ++(++f4);
    f4.print();
    f4=f1++;
    f1.print();
    f4.print();
    return 0;
}