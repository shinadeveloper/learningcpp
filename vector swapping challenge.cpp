#include <iostream>
#include <math.h>
#include <bits.h>
#include <vector>
using namespace std;

void sortby(vector<int> &v)
{
int lft=0;
int rgt=0;

while(lft<rgt)
{
    if ((lft%2)!=0 && (rgt%2)==0)
    { swap(v[lft],v[rgt]);
      lft++;
      rgt--;
        }
    else if(lft==rgt){
//hehe the code is incomplete
    }
}
}
int main()
{
vector<int> v;
int n;cin>>n;
int ele;
while(n>0)
{
    cin>>ele;
    v.push_back(ele);

}

}
