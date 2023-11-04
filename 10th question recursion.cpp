#include <bits/stdc++.h>
using namespace std;

void xout(int *arr,int n,int idx,int sum,vector<int> &result){
    if (idx==n){
        result.push_back(sum);
        return;
    }

    xout(arr,n,idx+1,sum+arr[idx],result);
    xout(arr,n,idx+1,sum,result);
}

int main(){
    int hello[5]={1,2,3,4,5};
    vector<int> result;
    xout(hello,5,0,0,result);
    for (int i=0;i<(pow(2,5));i++){
        cout<<result[i]<<" ";
    }
}