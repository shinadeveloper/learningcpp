#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   n=5; 
   int a[5]={1,2,3,4,5};
   int *ptr=a+n-1;
   while(1){
    cout<<*ptr<<" ";
   
   if(ptr==a){
   break;
   }
   ptr--;
   }
}
 