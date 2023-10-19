#include <iostream>
#include <math.h>
#include <vector>
#include <bits.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
   vector<int> v(n+1,0);
for(int i=1;i<=n;i++)
{
    cin>>v[i];
}
for (int i=1;i<=n;i++)
{
    v[i]+=v[i-1] ;
}
    int l,r;
    cin>>l>>r;
    int ans;
    ans = v[l]-v[r-1];
    cout<<ans<<endl;
   
    return 0;

}