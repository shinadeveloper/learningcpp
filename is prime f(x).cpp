#include <iostream>
#include <math.h>
#include <vector>
#include <bits.h>
using namespace std;
// dry run
// 1 10
//
void print_prime_nos(int x,int y){
         
    for (int i=x;i<=y;i++){
        bool isodd=true;
        for(int iterator=2;iterator<i;iterator++){
            if (i%iterator==0){
               isodd=false;
               break;
            }
        }
        if(isodd==true){
            cout<<i<<" ";
        }
        }

}

int main()
{
int a,b;
cin>>a>>b;
print_prime_nos(a,b);
}
