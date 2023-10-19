#include <iostream>
#include <math.h>
#include <vector>
#include <bits.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &s){
vector<vector<int>> ans;
int j=0;
ans.push_back(s[0]);
for (int i=1;i<s.size();i++){
    if (ans[j][1]>=s[i][0]){
        ans[j][1]=max(ans[j][1],s[i][1]);
    }
    else{
        ans.push_back(s[i]);
        j++;
    }
    
}
return ans;
}
int main()
{
//ok so first we will see whether the arrays are overlapping or not
//first we eill take input
vector<vector<int>> s={{1,4},{2,3},{5,8},{6,9}};
vector<vector<int>> ans=merge(s);
for(int i=0;i<ans.size();i++)
 {
 cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
 }

        
}
