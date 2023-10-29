#include <bits/stdc++.h>
using namespace std;

int sumof(int n){
    int ans=0;
    if (n==1){
        return n;
    }
    ans=n+sumof(n-1);
    return ans;}

int sum(int n,int m){
    int ans;
    
    if (m>1){
     ans =  sum(sum(n,m-1),1);
    }
    else{
       return sumof(n);
    }
    return ans;

}

int main(){
    int n,m;
    cin>>n>>m;
   cout<< sum(n,m);
}