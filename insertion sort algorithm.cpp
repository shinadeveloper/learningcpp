#include <bits/stdc++.h>
using namespace std;
void sorted(vector<int> &array){
    int n;
    n=array.size();
    for(int i=0;i<n;i++){
        int minidx=i;
        for (int j=i+1;j<n;j++){
            if(array[j]<array[minidx]){
                minidx=j;
            }
        }
        if (minidx!=i){
            swap(array[i],array[minidx]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> array12;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        array12.push_back(num);
    }
    sorted(array12);
    for(int k=0;k<n;k++){
        cout<<array12[k]<<" ";
    }
}