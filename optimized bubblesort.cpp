#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &v){
    int n=v.size();
    int temp=n;
    for (int i=0;i<n;i++){
        bool flag=false;
        for (int j=0;j<temp;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=true;
            }
        }
        temp--;
        if(flag==false){
            break;
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

    bubblesort(array1);

    for(int i=0;i<n;i++){
        cout<<array1[i];
    }
}