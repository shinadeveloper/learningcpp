#include <iostream>
#include <math.h>
#include <bits.h>


using namespace std;
int main()
{
    int n;
    cin>>n;
   int array[n];
   for(int i=0;i<n;i++){
    cin>>array[i];
   } 
   int  maxelement=array[0];
   for (int i=0;i<n;i++)
   {
    if (maxelement<array[i+1])
    {
        maxelement=array[i+1];
    }
    }
   cout<<maxelement<<endl;
}
