#include <bits/stdc++.h>
using namespace std;
bool isprime(int n,int idx){
    if (idx>=sqrt(n)) return true;
    if (n<=2) return (n==2)?true:false;
    if (n%idx==0) return false;
    return isprime(n,idx+1);
}
int main(){
int n;
cin>>n;
cout<<isprime(n,2);
}