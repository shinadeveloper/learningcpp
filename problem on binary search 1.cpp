#include <bits/stdc++.h>
using namespace std;

void binarysearch(vector <int> nu,int target){
    int n=nu.size();
    int lo , hi;
    int index=-1;
    lo=0;
    hi=n-1;
    int mid;
    int temp;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if (nu[mid]=target){
            temp=mid;
            break;
        }
        if(nu[mid]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    if (
}

int main(){

}