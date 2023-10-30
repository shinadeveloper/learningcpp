#include <bits/stdc++.h>
using namespace std;
void calc(int n,int idx){
    if(idx==n){
        cout<<n;
    }
    if(idx<n){
        cout<<idx<<" ";
        calc(n,idx+1);
    }

}
int main(){
    int n;
    cin>>n;
    calc(n,1);
}
