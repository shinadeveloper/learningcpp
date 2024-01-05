#include <bits/stdc++.h>
using namespace std;

void radixsort(vector <int> &vect){
    //this code is incomplete hehe ;)
}
//recursive function
int main(){
    int n;
    cin>>n;
    vector <int> unsorted(n);
    for (int i=0;i<n;i++){
        cin>>unsorted[i];
    }
    radixsort(unsorted);
    for (int i=0;i<n;i++){
        cout<<unsorted[i]<<" ";
    }
}
//the radix sort i algorithm which applies count sort on every bit of the numbers