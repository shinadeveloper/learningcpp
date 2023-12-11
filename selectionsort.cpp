#include <bits/stdc++.h>
using namespace std;
void selectionsort(vector<int> &v){
    int n=v.size();
    for (int i=0;i<n-1;i++){
        int mintemp=i;
        for (int j=i+1;j<n;j++){
            if(v[mintemp]>v[j]){
                mintemp=j;
            }
        }
        if(mintemp!=i){
            swap(v[i],v[mintemp]);
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
    selectionsort(array1);
    for(int i=0;i<n;i++){
        cout<<array1[i];
    }
}