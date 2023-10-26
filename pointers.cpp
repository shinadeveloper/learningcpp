#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,m,o;
cin>>n>>m>>o;
int *ptr=&n;
int *ptr2=&m;
int *ptr3=&o;
int largest,smallest;
int *ptr4=&largest;
int *ptr5=&smallest;
cout<<(*ptr)*(*ptr2);
if(n<m){
    if(n<o){
        *ptr5=n;
        *ptr4=m;
    }
    else if(o<n){
        //karo poora with in built functions max and min
    }

}


}
