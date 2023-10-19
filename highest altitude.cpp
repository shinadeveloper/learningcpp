#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"please enter the numbers of elements you want to enter"<<endl;
    int n;
    cin>>n;
    cout<<"put that many elements"<<endl;
 vector <int> vect(n,0);
 int ele;
 for (int i=0;i<n;i++){
    cin>>ele;
    vect.push_back(ele);
 }
 for (int i=1;i<n;i++){
 vect[i]+=vect[i-1];
 }
int ans=0;
for(int i=0;i<n;i++)
{
ans=max(ans,vect[i]);
}
cout <<ans<<endl<<endl;
 cout<<*max_element(vect.begin(),vect.end());
}
