#include <bits/stdc++.h>
using namespace std;

void sortalgo(vector<int> &array){
    int n=5;
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if (array[i]!=array[i+1] ){
                swap(array[j+1],array[j]);
            }
        }
    }

}

int main(){

    vector<int> array1={0,5,3,0,32};

    sortalgo(array1);

    for(int i=0;i<5;i++){
        cout<<array1[i]<<" ";
    }
}