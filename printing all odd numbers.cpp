#include <iostream>
#include <math.h>
#include <vector>
#include <bits.h>
using namespace std;

void printodd(int x,int y){
     for(int i=x;i<=y;i++){
        if (i%2!=0){
          cout<<i<<" ";
        }
     }
}


int main()
{
      int n,y;
      cin>>n>>y;
      printodd(n,y);
}
