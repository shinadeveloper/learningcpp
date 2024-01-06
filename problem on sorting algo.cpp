  //caution this code isnt correct for out of bound cases correct code would be to use 3 while loops having specified condition
} 

#include <bits/stdc++.h>
using namespace std;
  //caution !!!!!! this code isnt correct for out of bound cases correct code would be to use 3 while loops having specified condition
} 
vector<int> sorting(vector <int> &vect1, vector <int> &vect2){
    int n1=vect1.size();
    int n2=vect2.size();
    vector<int> newvector(n1+n2);
    int k1=0;
    int k2=0;
    for(int i=0;i<=n1+n2;i++){
        if(vect1[k1]<=vect2[k2]){
            newvector[i]=vect1[k1];
            k1++;
        }
        else{
            newvector[i]=vect2[k2];
            k2++;
        }
    }
    return newvector;
    //caution this code isnt correct for out of bound cases correct code would be to use 3 while loops having specified condition
} 

int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector <int> gar1(n1);
    for(int i=0;i<n1;i++){
        cin>>gar1[i];
    }
    vector <int> gar2(n2);
    for(int i=0;i<n2;i++){
        cin>>gar2[i];
    }
    vector<int>newarray=sorting(gar1,gar2);
    for(int i=0;i<n1+n2;i++){
        cout<<newarray[i]<<" ";
    }
}
  //caution this code isnt correct for out of bound cases correct code would be to use 3 while loops having specified condition
} 