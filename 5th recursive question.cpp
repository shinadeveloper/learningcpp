#include <bits/stdc++.h>
using namespace std;
void func(int n,int k,int idx){
    
    if(idx>k){
        return;
    }
    cout<<n*idx<<" ";
    func(n,k,idx+1);
    

}

int main(){
    int n,k;
    cin>>n>>k;
    func(n,k,1);
}