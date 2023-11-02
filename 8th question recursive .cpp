#include <iostream>
using namespace std;

int binarysoln(int n){
    if (n==0){return 0;}

    return ((n%2) + 10*(binarysoln(n/2)));

}


int main(){
int n;
cin>>n;
cout<<binarysoln(n);

}