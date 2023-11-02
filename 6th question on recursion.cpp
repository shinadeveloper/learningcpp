#include <bits/stdc++.h>
using namespace std;

int multiply(int n,int q){
    if(q<=0) return 0;
    int number;
    number= n + multiply(n,q-1);
    return number;
    
}

int main(){
    int n,q;
    cin>>n>>q;
    int x=multiply(n,q);
    cout<<x;
}