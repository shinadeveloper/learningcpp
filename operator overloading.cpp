#include<bits/stdc++.h>
using namespace std;

class Complex{
public:
    int real;
    int img;

    Complex(int x,int y){
    real=x;
    img=y;
    }
    
    Complex operator*(Complex &c){
        Complex ans(0,0);
        ans.real=real*c.real;
        ans.img=img*c.img;
        return ans;
    }

};

class Complex1{
public:
    int real;
    int img;

    Complex1(int x,int y){
    real=x;
    img=y;
    }
    
    Complex1 operator*(Complex1 &c){
        Complex1 ans(0,0);
        ans.real=real*c.real;
        ans.img=img*c.img;
        return ans;
    }

};

int main(){
    Complex c1(1,2);
    Complex c2(2,3);

    Complex c3= c1*c2;
    cout<<c3.real<<"+i"<<c3.img; 
}