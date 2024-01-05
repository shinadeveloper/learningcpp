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
    if (first>=last){
        return;
    }
    //otherwise
    int piv=partition(vect,first,last);
    sortalgo(vect,first,piv-1);
    sortalgo(vect,piv+1,last);
}
// so in this algo we take 2 recursive functions
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
// swapping by two recursive functions
// sortalgo just takes a function and calls two more recursive calls 
// partition function is the main function which takes on computation 
//partition function is an int functin because it returns the index place where the input element's sorted position is actually there
