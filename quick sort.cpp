#include <bits/stdc++.h>
using namespace std;
int partition(vector <int> &vect,int first,int last){
    int i=first-1;
    for ( int j=first;j<last;j++){
        if (vect[last]>vect[j]){
            i++;
            swap(vect[j],vect[i]);
        }
    }
    swap(vect[i+1],vect[last]);
    return i+1;
}
void sortalgo(vector <int> &vect,int first,int last){
    //basecase
    if (first>=last)
    {return;}
    //otherwise
    int piv=partition(vect,first,last);
    sortalgo(vect,first,piv-1);
    sortalgo(vect,piv+1,last);
}
// so in this algo we rtake  2 recursive functions 
int main(){
    int n;
    cin>>n;
    vector <int> unsorted(n);
    for (int i=0;i<n;i++){
        
        cin>>unsorted[i];
    }
    sortalgo(unsorted,0,n-1);
    for (int i=0;i<n;i++){
        cout<<unsorted[i]<<" ";
    }
}