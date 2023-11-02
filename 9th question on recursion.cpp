#include <bits/stdc++.h>
using namespace std;
//frog jump problem

int frogjump(int *h,int a,int i){
    if(i==a-1) return 0;
    if(i==a-2) return frogjump(h,a,i+1)+abs(h[i+1]-h[i]);
    //base cases are completed
    int abc=min(frogjump(h,a,i+1)+abs(h[i+1]-h[i]),frogjump(h,a,i+2)+abs(h[i+2]-h[i]));
    return abc;

}

int main(){
    int ad=6;
    int x[ad]={10,20,30,10,20,78};
    
    int f=frogjump(x,ad,0);
    cout<<f;
}
//checked ok 