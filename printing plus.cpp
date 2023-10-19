#include <iostream>
#include <math.h>
#include <vector>
#include <bits.h>
using namespace std;

int main()
{ 
    int n;
    cin>>n;
     int x=(n-1)/2;
    for (int line=0;line<x;line++){
         for(int space=0;space<x;space++){
            cout<<"  ";
         }
         cout<<"*";
         cout<<"\n";

    }
    for(int inner=0;inner<n;inner++){
        cout<<"* ";

    }
    cout<<'\n';
    for (int line=0;line<x;line++){
         for(int space=0;space<x;space++){
            cout<<"  ";
         }
         cout<<"*";
         cout<<'\n';
}

}
