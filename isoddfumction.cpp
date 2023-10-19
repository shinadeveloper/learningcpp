#include <iostream>
#include <math.h>
#include <vector>
#include <bits.h>
using namespace std;

bool isodd(int x){
      if (x%2==0){
        return false;
      }
      else{
       return true;
      }
}

int main()
{
 int n;
 cin>>n;
 if (isodd(n)==true){
  cout<<"yes the function is odd";

 }
 else{
    cout<<"no";
 }
}
