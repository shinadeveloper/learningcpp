#include <bits/stdc++.h>
using namespace std;

void countsort(vector<int> &vect){
    int n=vect.size();

    int maxele;    
    for(int i=0;i<n;i++){
        maxele=max(maxele,vect[i]);
    }
    //now we will create an array of frequency till maxele;
     vector<int>freq(maxele + 1 , 0);
     for(int i=0;i<n;i++){
        freq[vect[i]]++;
     }
     //now we will calculate cumulative frquency function
     
     for(int i=1;i<=maxele;i++){
        freq[i]=freq[i]+freq[i-1];
    }
    vector<int>temp(n);
     for(int i=n-1;i>=0;i--){
        temp[--freq[vect[i]]]=vect[i];
    }
     for(int i=0;i<n;i++){
        vect[i]=temp[i];
    }

}

int main(){
    int n;
    cin>>n;
    vector <int> givenarray(n);
    for(int i=0;i<n;i++){
        cin>>givenarray[i];
    }
    countsort(givenarray);
    for(int i=0;i<n;i++){
        cout<<givenarray[i];
    }
}