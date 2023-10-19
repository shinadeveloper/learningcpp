#include <iostream>
#include <math.h>
#include <vector>
#include <bits.h>
using namespace std;

int main()
{
int n;
cin>>n;
// 1 2 3 4 5 

string array[9]={"A","B","C","D","E","F","G","H","I"};
for(int i=0;i<n;i++){
    for(int j=n-i-1;j>0;j--){
        cout<<" ";
    }
    int x=2*i+1;
    for (int k=0;k<x;k++){
        cout<<array[k];
    }
    cout<<endl;
}
for(int a=0;a<n-1;a++){
    for(int d=0;d<a;d++){
        cout<<" ";
    }
    int x=2*n-1;
    for (int q=x;q>0;q--){
        cout<<array[q];
    }
    cout<<endl;
}


}
