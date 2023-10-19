#include <iostream>
#include <math.h>
#include <vector>
#include <bits.h>
using namespace std;

void vectorprocedure(vector<vector<int>>1 newthing){
    int n = newthing.size();
    int m = newthing[0].size();
    
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(newthing[i][j]==0){
                ans.push_back({i,j});
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        int x=ans[i].first;
        int y=ans[i].second;
        int row =0;
        int col=0;
        while(row<n){
            newthing[row][y]=0;
            row++;    
        }
        while(col<m){
            newthing[x][col]=0;
            col++;
        }
    }
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<m;cols++){
            cout<<newthing[rows][cols];
        }
        cout<<"\n";
    }
}

int main()
{
    int n,m;cin>>n>>m;
    vector<vector<int>> newthing(n,vector<int>(m));
    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<m;cols++){
            cin>>newthing[rows][cols];
        }
    }
    vectorprocedure(newthing);

    for(int rows=0;rows<n;rows++){
        for(int cols=0;cols<m;cols++){
            cout<<newthing[rows][cols];
        }
         cout<<"\n";
    }

}
//code is complete and checked by ai  :)