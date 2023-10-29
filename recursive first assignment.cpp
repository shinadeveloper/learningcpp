#include <bits/stdc++.h>
using namespace std;

void func(int n,int m,bool flag){
    cout<<m<<" ";

    if(n==m && flag==false)
            {return;}
    if(flag){
    if(m-5>0){
        func(n,m-5,true);
    }
    if(m-5<0){
        func(n,m-5,false);
    }
    }
    else{
        func(n,m+5,false);
    }

  
}

int main(){
    int n;
    cin>>n;
    func(n,n,true);
    
    return 0;
}
//there are two things i understood from this code that is 
//
//   1.a variable should change in a recursive function
//   2. a return value should be given to the base function and if printing has to be done it should be at the top of the code without checking any flags or anything
