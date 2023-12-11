#include <bits/stdc++.h>
using namespace std;

void insertionsort(vector <int> &v){
    int n=v.size();
    
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=0 && v[j-1]>v[j]){
            j--;
            swap(v[j+1],v[j]);

        }
        
        
    }
}

int main(){
    int n;
    cin>>n;
    vector <int>array1(n);
    for(int i=0;i<n;i++){
        cin>>array1[i];
    }

    insertionsort(array1);

    for(int i=0;i<n;i++){
        cout<<array1[i];
    }
}