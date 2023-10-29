#include <bits/stdc++.h>
using namespace std;

int sumof(int n){
    int ans=0;
    if (n==1){
        return n;
    }
    ans=n+sumof(n-1);
    return ans;
}
int main(){
    cout<<sumof(6);
}