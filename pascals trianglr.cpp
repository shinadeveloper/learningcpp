#include <iostream>
#include <math.h>
#include <vector>
#include <bits.h>
using namespace std;

vector<vector<int>> pascaltriangle(int n){ 
             vector<vector<int>> asli(n);
             for (int rows=0;rows<n;rows++){
                asli[rows].resize(rows+1);
                   for(int cols=0;cols<asli[rows].size();cols++){
                        if(cols==0 || cols==rows){
                        asli[rows][cols]=1;
                    }
                    
                    else
                    {
                        asli[rows][cols]=asli[rows-1][cols]+asli[rows-1][cols-1];
                    }
                   }        
             }
             return asli;
}

int main()
{
int n;cin>>n;
vector<vector<int>> ans;
ans=pascaltriangle(n);
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j];
        
    }
    cout<<"\n";
}
}

// this code is ready to be used
